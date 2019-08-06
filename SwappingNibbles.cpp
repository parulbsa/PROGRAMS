#include<iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Enter the value of integer to swap the nibbles: ";
    cin>>x;
    cout<<"After shifting the nibbles the integer becomes: ";
    int k=((x<<4) & (15<<4)) | (x>>4);
    cout<<k<<endl;
    return 0;
}
