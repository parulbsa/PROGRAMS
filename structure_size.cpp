#include <iostream>

using namespace std;

struct Student
{
    int roll_no;
    int age;

};
int main()
{
    Student *s1=0;
    int a=int(++s1);
    cout<<a;
    return 0;
}
