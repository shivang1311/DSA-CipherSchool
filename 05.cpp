#include<iostream>
using namespace std;
void multi(int &a, int &b, int &prod)
{
    prod = a*b;
}
int main()
{
    int a = 5;
    int b = 7;
    int product;
    multi(a,b,product);
    cout<<product;
}