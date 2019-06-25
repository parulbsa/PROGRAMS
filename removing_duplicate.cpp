#include<iostream>

using namespace std;

void removing_duplicate(int a[],int n);

int main()
{
	int vector[20],n;
	cout<<"Enter the number of elements in vector : ";
	cin>>n;
	cout<<"Enter the elements of vector:\n";
	for(int i=0;i<n;++i)
		cin>>vector[i];
	removing_duplicate(vector,n);
	return 0;

}
//function to remove duplicates from the vector
void removing_duplicate(int a[],int n)
{
	int i,j,k;
	int flag=0;
	for(i=0;i<n-1;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(a[i]==a[j])
			{
				n=n-1;
				for(k=j;k<n;++k)
					a[k]=a[k+1];
				j=j-1;
				flag=1;
			}
		}
	}
	if(flag==0)
		cout<<"vector is without duplicates\n";
	else
	{
		cout<<"vector after removing duplicates:\n";
		for(i=0;i<n;++i)
			cout<<a[i]<<"\t";
	}
	cout<<"\n";
}
