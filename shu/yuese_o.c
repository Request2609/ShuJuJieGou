#include<stdio.h>
#include<stdlib.h>
typedef struct round{
	
	int data ;//成员持有的密码数据
	int id ;
	int flag ;//标志是否已经出队
	struct round* next ;
}round_t;

void input_data(round_t * h , int n) ;
void add_in(round_t * pro , round_t *q);
void free_node(round_t * h,int n);
void print_outqueue(round_t *h ,int  number , int n);

int main(){

	int n , number ;
	round_t * h ;
	h =  (round_t *)malloc(sizeof(round_t)) ;
	printf("\n------------------------------------\n");
	printf("input number of members:");
	scanf("%d" , &n);
	printf("\n");
	printf("input start number:");
	scanf("%d",&number);

	input_data(h , n);
	print(h);
	print_outqueue(h , number ,n);
	free_node( h , n);
}
//根据输入初始密码出队
void print_outqueue(round_t * h , int number , int n){
	
	int i = 1 ;
	round_t *temp ;
	temp = h ;
	printf("\nthe member out queue is here");
	printf("\n------------------------------------\n");
	while(1){
		
		if(temp->flag == 0){
			temp = temp->next ;
			continue ;
			}

		if(i == number){
		
			printf("the No.%d member out,password：%d\n",temp->id , temp->data);
			number = temp->data ;
			i = 0 ;
			temp->flag = 0 ;
			n -- ;
			if(n == 0)
				break ;
		}

		i ++ ;

		temp = temp->next ;
	}
}
//将新节点加入到链表中
void add_in(round_t * pro , round_t * newnode){
	
	newnode->next = pro->next;
	pro->next= newnode ;

}
//销毁创建的链表
void free_node(round_t * h, int n ){

	int i = 0 ;

	round_t * temp, * q;
	
	temp = h ;
	q  = temp->next ;
	while(1){
		i++ ;
		if(i == n)break ;
		free(temp) ;
		temp = q ;
		q = temp->next ;
	}
}
//往节点中录入数据
void input_data(round_t * h , int  n){

	int i = 0 ;
	round_t *p, *q ;
	p = h ;	
	h->id = i ; 
	printf("\n------------------------------------\n");
	printf("input No.%d member's password:",h->id);
	scanf("%d",&(h->data));
	h->flag = 1 ;
	h->next = p ;
	while(1){
		
		i++ ;
		if(i == n)break ;
		q=(round_t *)malloc(sizeof(round_t));
		q->id  = i ;
		q->flag = 1 ;
		printf("input No.%d member's password:",q->id);
		scanf("%d",&(q->data));
		add_in(p ,q );
		p = p->next;
	}

}

//打印所有数据
void print(round_t * h){
	
	round_t *temp ;
	temp = h ;
	int i = 0 ;

	printf("all members is here\n");
	printf("---------------------------------------\n");
	while(1){
		
		printf("the No.%d member password:",temp->id);
		printf("%d\n",temp->data);
		temp = temp->next ;
		i++ ;
		if(temp == h){
			break ;
		}

	}
}
