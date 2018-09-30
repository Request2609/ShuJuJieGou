#include<stdio.h>
#include<stdlib.h>
typedef struct node{

	int zhishu ;
	int xishu ;
	struct node * next ;
}nodelist ,*linklist;
void init_list(linklist *h);
void input_data(linklist h);
int main(){
	
	linklist h ;
	init_list(&h);
}

void init_list(linklist *h){

	(*h) = (linklist)malloc(sizeof(listnode));
	init_list(&h);
	input_data(h);
}
void init_list(linklist* h){

	*h = NULL ;
	(*h) = (linklist)malloc(sizeof(listnode));
	(*h)->next = NULL ;
}

void input_data(linklist h){
	
	linklist * p ,q ;
	p = h ;
	int num ;
	scanf("%d",&num);
}
