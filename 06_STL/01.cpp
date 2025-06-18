#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int> v1;
    // v1.push_back(10);
    // v1.push_back(20);
    // v1.push_back(30);
    // v1.push_back(40);
    // v1.push_back(50);
    // for(int i=0; i<v1.size(); i++)
    // {
    //     cout<<v1[i]<<endl;
    // }
    // for(int i : v1)
    // {
    //     cout<<i<<endl;
    // }

    int n;
    vector<int> v2;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v2.push_back(a);
    }
    for(int i=v2.size()-1; i>=0; i--)
    {
        cout<<v2[i]<<endl;
    }
}