#include<iostream>

using namespace std;

void showbits(int);

int main()
{
   int number;
   cout<<"Enter the number to print bits\n";
   cin>>number;
   cout<<"\n";
   showbits(number);
   return 0;
}
//function to showbits of an integer
void showbits(int n)
{
    int i,k,mask;
    for(i=15;i>=0;i--)
    {
        mask=1<<i;
        k=n & mask;
        k==0?cout<<"0":cout<<"1";
    }
}

