#include<stdio.h>
#include<string.h>

printbody(int x){
    int i;
    for(i=0;i<x;i++)
        printf("#");
        printf("\n");

}
printtail1(int x){
    int i;
    for(i=0;i<x-1;i++)
        printf(".");
    printf("#\n");
}

printtail2(int x){
    int i;
    printf("#");
    for(i=0;i<x-1;i++)
        printf(".");
    printf("\n");
}

int main(){
    int a,b,i,j,t=0;

    scanf("%d%d",&a,&b);

    for(i=1;i<=a;i++){
        if(i%2!=0)
            printbody(b);
        else{
                t++;
            if(t%2!=0)
                printtail1(b);
            else
                printtail2(b);
        }
    }

}
