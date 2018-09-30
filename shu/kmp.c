#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 100
typedef struct str{
    
    char str[N] ;
    int len ;
}str_t;

int main(){
    
    str_t *str1;
    str_t *str2 ;
    str1 = str2 = (str_t *)malloc(sizeof(str_t));
    printf("请输入长串：");
    scanf("%s",str1->str);
    getchar();
    printf("请输入子串：");
    scanf("%s",str2->str);
    getchar();
    
}
