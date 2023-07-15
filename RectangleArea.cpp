#include<iostream>
using namespace std;

class Rectangle
{
public:
int height;
int width;
void display()
{
    cin>>height;
    cin>>width;
    cout<<height<<endl;
    cout<<width<<endl;
}
};

class RectangleArea:public Rectangle
{
public:
int Area;
void calArea()
{
    Area=height*width;
    cout<<"AREA OF REACTANGLE IS "<<Area<<endl;
}
};

int main()
{
    RectangleArea R;
    R.display();
    R.calArea();

return 0;
}