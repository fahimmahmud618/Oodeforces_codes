#include <iostream>
#include<string>
using namespace std;

bool check_if_not_zero(char x)
{
    int y = x -'0';
    if((y>0)&&(y<10))
        return true;
    else
        return false;
}

string retprint(char x, int position,int len)
{
    string a;
    a.push_back(x);
    for(int i=0;i<(len-position-1);i++)
    a.push_back('0');
    
    return a;
    
}
int main()
{
    int number, numbers[10011];
    cin>>number;
    int i,l,j,count;
    string temp_string,temp_string2;
    
    for(i=0;i<number;i++)
    cin>>numbers[i];
    
    for(i=0;i<number;i++)
    {   count = 0;
        temp_string = to_string(numbers[i]);
        l = temp_string.length();
        temp_string2.clear();
        for(j=0;j<l;j++)
        {
            if(check_if_not_zero(temp_string[j]))
            {
                count++;
                temp_string2 = temp_string2 + retprint(temp_string[j],j,l)+" ";
                //cout<<retprint(temp_string[j],j,l)<<" ";
            }
        }
        cout<<count<<endl<<temp_string2<<endl;
        
        //cout<<endl;
    }
}
