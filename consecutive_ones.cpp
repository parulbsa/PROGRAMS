#include <iostream>

using namespace std;

void consecutive_ones(int);

int main()
{
    int n;
    cin>>n;
    consecutive_ones(n);
    return 0;
}
void consecutive_ones(int n)
{
    int i,mask,k,flag=1;
    int prev_max=0,new_max=0;
    for(i=15;i>=0;i--)
    {
        mask=1<<i;
        k=n & mask;
        if(k!=0)
            new_max+=1;
        else
                    flag=0;
        if(flag==0)
        {
            prev_max=(prev_max<=new_max?new_max:prev_max);
            new_max=0;
            flag=1;
        }



    }
    cout<<prev_max;
}
