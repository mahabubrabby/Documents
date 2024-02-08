#include<stdio.h>
int main(){

     int x,y,*p1 = &x,*p2 = &y;


     printf("%d enter the 1st num ");
     scanf("%d\n",*p1);
     printf("%d enter the 2nd num ");
     scanf("%d\n",*p2);

     if(*p1 > *p2){
        printf("max num",x);
     }else{

       printf("min num",y);
     }

  return 0;
}

