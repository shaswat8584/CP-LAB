#include<stdio.h>
void main(){
    int x=7, y=10;
    int *prt1, *prt2;
    prt1=&x;
    prt2=&y;
    printf("%u\n",prt1);
    printf("%u\n",prt2);
    printf("_____________\n");
    printf("%d\n",*prt1);
    printf("%d\n",*prt2);
    printf("_____________\n");
    printf("",x);
    printf("",&x);

}
