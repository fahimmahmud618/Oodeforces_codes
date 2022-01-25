#include<stdio.h>
#include<string.h>


int main(){
    int n,data[100000],p=0,t=0,i;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&data[i]);
        if(data[i]>0)
            p=p+data[i];
        else
        {
            if((p==0)&&(data[i]==-1))
                t++;
            else if((p>0)&&(data[i]==-1))
                p=p+data[i];
        }

    }
    printf("%d",t);
}
