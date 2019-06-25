#include<iostream>

using namespace std;

void decimal_to_oct(int);
void decimal_to_bin(int);
void decimal_to_hex(int);

int main()
{
	int n,a;
	char ch='y';
	while(ch=='y')
	{	cout<<"Enter the number:  ";
		cin>>n;
		cout<<"\nSelect the correct option \n";
		cout<<"1. Decimal to binary\n";
		cout<<"2. Decimal to octal\n";
		cout<<"3. Decimal to hexadecimal\n";
		cin>>a;
		switch(a)
		{
			case 1:decimal_to_bin(n);break;
			case 2:decimal_to_oct(n);break;
			case 3:decimal_to_hex(n);break;
			default: cout<<"error";
		}
		cout<<"\nDo you want to continue(y/n): ";
		cin>>ch;
		cout<<"\n";
	}
	return 0;

}
//decimal to binary conversion
void decimal_to_bin(int a)
{	
	int q,r;
	int bin_digits[32]={0};
	int i=0;
	while(a>0)
	{
		q=a/2;
		r=a%2;
		bin_digits[i]=r;
		a=q;
		i++;
	}
	cout<<"\nBinary equivalent: ";
	for(int j=i-1;j>=0;j--)
		cout<<bin_digits[j];
	cout<<"\n";

}
//decimal to octal conversion
void decimal_to_oct(int a)
{
	int q,r;
	int oct_digits[32]={0};
	int i=0;
	while(a>0)
	{
		q=a/8;
		r=a%8;
		oct_digits[i]=r;
		a=q;
		i++;
	}
	cout<<"\nOctal equivalent: ";
	for(int j=i-1;j>=0;j--)
		cout<<oct_digits[j];
	cout<<"\n";
	
}
//decimal to hexadecimal conversion
void decimal_to_hex(int a)
{
	int q,r;
	int hex_digits[32]={0};
	int i=0;
	while(a>0)
	{
		q=a/16;
		r=a%16;
		hex_digits[i]=r;
		a=q;
		i++;
	}
	cout<<"\nHexadecimal equivalent: ";
	for(int j=i-1;j>=0;j--)
	{
		if(hex_digits[j]>9)
		{
			switch(hex_digits[j])
			{
				case 10:cout<<"A";break;
				case 11:cout<<"B";break;
				case 12:cout<<"C";break;
				case 13:cout<<"D";break;
				case 14:cout<<"E";break;
				case 15:cout<<"F";break;
				default: cout<<"error";
			}	
		}
		else
			cout<<hex_digits[j];
	}
	cout<<"\n";


}
