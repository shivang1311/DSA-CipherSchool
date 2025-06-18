#include<iostream>
using namespace std;
int main()
{
    int shiv = 5;
    int *ptr = &shiv;
    cout<<&shiv<<endl; // address of shiv variable
    cout<<ptr<<endl;
    cout<<*ptr<<endl; // derefrencing
    cout<<&ptr<<endl;

    int **ptr2=&ptr;
    cout<<ptr2;
}0