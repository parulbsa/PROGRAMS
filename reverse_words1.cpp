#include<iostream>
#include<string.h>

using namespace std;

void reverse(char*);
int main()
{
    char ch[100];
    cout<<"Enter the string: ";
    gets(ch);
    cout<<"\nReversed string: ";
    reverse(ch);
    return 0;

}
void reverse(char *s)
{
     int len=strlen(s);
     int start_index,end_index,i;
     end_index=len-1;
     for(i=len-1;i>=0;i--)
     {
         if(s[i]==' ' || i==0)
         {
             if(i==0)
                start_index=0;
             else
                start_index=i+1;
             for(int j=start_index;j<=end_index;j++)
                cout<<s[j];
            end_index=i-1;
            cout<<" ";
         }

     }
}

