#include<stdio.h>
#include<string.h>
int main(){
    int n, num[2000],i,j,min,max,cnt=0,minpos;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);

    }
    min=num[0];
    max=num[0];

    for(i=1;i<n;i++){
        if(num[i]>max)
        {
            max=num[i];
            cnt++;
        }
        if(num[i]<min)
        {
            min=num[i];
            cnt++;
        }
    }
    if(minpos>0)cnt++;

    printf("%d",cnt);
}
