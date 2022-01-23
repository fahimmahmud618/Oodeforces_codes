#include<stdio.h>
#include<string.h>
int main(){
    int n,k,i,j=0;

    scanf("%d%d",&n,&k);
    k=240-k;

    for(i=5;(k-i)>=0;i=i+5)
    {
        k=k-i;

        j++;
        //printf("%d %d %d\n",j,i,k);

    }
    if(j>n)
        j=n;
    printf("%d",j);
}
