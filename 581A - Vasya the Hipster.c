#include<stdio.h>
#include<string.h>


int main(){
    int a,b,c,d;

    scanf("%d%d",&a,&b);

    if(a<b)
    {
        printf("%d",a);
        b=b-a;
        printf(" %d",b/2);
    }

    else if(b<a)
    {
        printf("%d",b);
        a=a-b;
        printf(" %d",a/2);
    }
    else
    {
        printf("%d",b);
        printf(" 0");
    }
}
