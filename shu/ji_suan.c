#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 100

typedef struct node{

	char tip ;
	struct node * next ;

}datanode , *datalist ;

typedef struct tip{
	
	char tip ;
	struct tip * next ;

}tipnode , *tiplist ;
void init_data(datalist * h);
void init_tiplist(&tiplist);
void fen_xi(char * buf , tiplist tip_l ,datalist data_l);

int main(){

	tiplist tip ;
	datalist data ;
	init_tiplist(&tip);
	init_datalist(&data);
	char buf[N];
	scanf("%s",buf);
	strcat(buf , '#');
	fen_xi(buf , tip ,data);
	
		
}

//分析表达式
void fen_xi(char * buf , tiplist tip_l ,datalist data_l){
	
	
}

//初始化两个链表
void init_tiplist(tiplist * h){

	h = NULL ;
	*h = (tiplist)malloc(sizeof(tipnode));
	(*h) ->next = NULL ;
	return ;
}

void init_data(datalist * h){
	
	*h = NULL ;
	*h = (datalist)malloc(sizeof(datanode));
	(*h) ->next = NULL ;
	return ;

}
