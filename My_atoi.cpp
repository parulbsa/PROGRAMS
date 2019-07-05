//my atoi()
#include <iostream>
#include<stdio.h>

using namespace std;

int my_atoi(char *);

int main()
{
    int ans;
    char ch[20];
    cout<<"Enter the string: ";
    gets(ch);
    ans=my_atoi(ch);
    cout<<"converted integer: "<<ans;
    return 0;
}

int my_atoi(char *s)
{
    int sign,res=0,i=0;
    if(s[i]== '-')
    {
        sign=-1;
        i++;
    }
    for(;s[i]!='\0';i++)
        res=res*10 + s[i] - 48;
    return sign*res;
}
