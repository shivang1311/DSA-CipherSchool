#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int age;
    int id;

    int getAge()
    {
        return age;
    }
    void getName()
    {
        cout<<name<<endl;
    }
};
int main()
{
    student s1;
    s1.name = "Shivang";
    cout<<s1.name<<endl;
    student s2;
    s2.name = "Aditya";
    s2.age = 20;
    s2.id = 234;
    s2.getName();
    cout<<s2.getAge()<<endl;
    cout<<s2.id<<endl;
    return 0;
}