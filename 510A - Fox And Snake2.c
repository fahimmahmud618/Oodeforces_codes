#include<stdio.h>
#include<string.h>

printdot(int x){
    int i;
    for(i=0;i<x-1;i++)
        printf(".");
}

printhash(int x){
    int i;
    for(i=0;i<x;i++)
        printf("#");
}

int main(){
    int a,b,i,j,t=0;

    scanf("%d%d",&a,&b);

    for(i=1;i<=a;i++){
            //printf("%d",i%4);
        if((i%4==1)||(i%4==3))
        {
            printhash(b);
            printf("\n");
        }

        else if(i%4==2)
        {
            printdot(b);
            printf("#\n");
        }

        else if(i%4==0)
        {
            printf("#");
            printdot(b);
            printf("\n");
        }

    }

}
