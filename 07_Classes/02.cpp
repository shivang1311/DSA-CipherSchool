#include<iostream>
using namespace std;
class box
{
    public:
    int length;
    int width;
    int height;
    int CalculateArea()
    {
        return length*width;
    }
    int CalculateVolume()
    {
        return length*width*height;
    }
};
int main()
{
    box b1;
    box b2;
    b1.length = 56;
    b1.width = 78;
    b1.height = 98;
    b2.length = 46;
    b2.width = 88;
    b2.height = 18;
    cout<<"Area of box 1: "<<b1.CalculateArea()<<endl;
    cout<<"Volume of box 1: "<<b1.CalculateVolume()<<endl;
    cout<<"Area of box 2: "<<b2.CalculateArea()<<endl;
    cout<<"Volume of box 2: "<<b2.CalculateVolume()<<endl;
    return 0;
}