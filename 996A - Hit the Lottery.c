#include<stdio.h>
#define NOTE_NUM 5

int main(){
    long long int amount;
    int i,j,note[NOTE_NUM],count=0;
    note[0]=100;
    note[1]=20;
    note[2]=10;
    note[3]=5;
    note[4]=1;

    scanf("%lld",&amount);



    for(i=0;i<NOTE_NUM;i++){
        if(amount>=note[i])
        {
            //printf("%d note used\n",note[i]);
            count = count + (amount/note[i]);
            amount = amount%note[i];
        }
        if(amount<=0)
            break;
    }
   // printf("loop finished");
    printf("%d",count);
}
