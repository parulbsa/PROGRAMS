#include<iostream>

using namespace std;

void check(int);

int main()
{
   int num;
   cout<<"Enter the integer to check for duplicate digits: ";
   cin>>num;
   check(num);
   return 0;
}
void check(int n)
{
    int r,a[10]={0};
    int flag=1;
    while(n>0)
    {
        r=n%10;
        if(a[r]==1)
        {
            cout<<"Duplicate found: "<<r<<endl;
            flag=0;
        }
        else
            a[r]=1;
        n=n/10;
    }
       if(flag==1)
        cout<<"No duplicate found";
}
