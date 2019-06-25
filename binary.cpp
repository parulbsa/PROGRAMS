#include<iostream>

using namespace std;

void binary(int);

int main()
{
	int n;
	cout<<"enter the number to display the binary equivalent:\n";
	cin>>n;
	cout<<"binary equivalent:\n";
	binary(n);
	return 0;

}
void binary(int a)
{	
	int q,r;
	int binary_digits[32]={0};
	int i=0;
	while(a>0)
	{
		q=a/2;
		r=a%2;
		binary_digits[i]=r;
		a=q;
		i++;
	}
	for(int j=32;j>=0;j--)
	{
		cout<<binary_digits[j]<<" ";
	}
}
