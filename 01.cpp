#include<iostream>
using namespace std;
int main()
{
    int shiv = 5;
    int *ptr = &shiv;
    cout<<&shiv<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;
}