#include<stdio.h>
#include<string.h>
 
int main(){
    char a[200],b[200],c[200];
    int la,lb,lc,i,j,num[26],flag=0;
 
    gets(a);
    la=strlen(a);
 
    gets(b);
    lb=strlen(b);
 
    gets(c);
    lc=strlen(c);
 
    for(i=0;i<26;i++)
        num[i]=0;
 
    for(i=0;i<la;i++)
    {
        num[((int)a[i]-65)]++;
    }
 
 
    for(i=0;i<lb;i++)
    {
        num[((int)b[i]-65)]++;
    }
 
    for(i=0;i<lc;i++)
    {
        num[((int)c[i]-65)]--;
    }
 
    for(i=0;i<26;i++)
        if(num[i]!=0)
        {
            flag=1;
            break;
        }
 
    if(flag==0)
        printf("YES");
    else
        printf("NO");
}
