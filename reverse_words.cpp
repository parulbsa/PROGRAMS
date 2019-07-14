#include <iostream>
#include<stdio.h>

using namespace std;

void reverse(char*);

int main()
{
    char ch[500];
    cout<<"Enter the sentence:\n";
    gets(ch);
    cout<<"\nReversed sentence:\n";
    reverse(ch);
    return 0;
}
void reverse(char *s)
{
    int a[100],i=0,k=0;
    //copying 0 to first element of array
    a[k]=0;++k;
    // now copying the index of spaces
    while(s[i]!='\0')
    {
        if(s[i]==' ')
        {
            a[k]=i;
            ++k;
        }
        i++;
    }
    //copying the position of null character
    a[k]=i;
    int q=k;
    //printing the reverse using indexes of spaces
    for(int p=0;p<q;p++)
    {
        int j;
        for( j=a[k-1]+1;j<=a[k];j++)
            cout<<s[j];
        k--;
    }
    //now printing the first word
    while(s[k]!=' ')
    {
        cout<<s[k];
        k++;
    }

}
