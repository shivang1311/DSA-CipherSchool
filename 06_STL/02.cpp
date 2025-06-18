#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int, string> m1;
    m1[001] = "Person 1";
    m1[99]  = "Person 2";
    m1[002] = "Person 3";
    cout<<m1[99]<<endl;
    cout<<m1.size();
}