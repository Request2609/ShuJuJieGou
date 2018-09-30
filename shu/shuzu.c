#include<stdio.h>
#include<stdlib.h>
#define N 100
int main(){

	int i ;
	int a[N] ;
	printf("往数组中输数据(-1结束输入)：\n");
	for(i = 1 ;i< N ;i++){
		scanf("%d",&a[i]);	
		if(a[i] == -1)break ;
	}
	int no ;
	int t = i;
	printf("请输入要找的元素：");
	scanf("%d",&no);
	while(i){
		i -- ;
		if(a[i] == no){
			printf("\n找到该元素了\n");
			printf("该元素是第%d个元素!\n",i);
			break;
		}
	}
	if( i == 0){
		printf("\n没有找到指定元素!\n");
	}
	//find max1&&max2 
	int max1 ,max2 ,j;
	if(t == 2){
		printf("数组中有效元素只有一个！\n");
		return 0 ;
	}
	j = 2 ;
	if(a[2]< a[1]){
		max1 =  a[1];
		max2 =  a[2];
	}
	else{
		max1 = a[2];
		max2 = a[1] ;
	}
	int tmp ;
	while(1){
		j++ ;
		if(j == t)break ;
		if(a[j] > max2){
			max2 = a[j];
			if(max2 > max1){
				tmp = max2 ;
				max2 = max1 ;
				max1 = tmp ;
			}
		}
	}
	printf("\nmax1：%d\n",max1 );
	printf("\nmax2 ：%d\n",max2);

}
