#include<iostream>
using namespace std;


class View
{
    private:
    double length;
    double height;
    public:
      View(int len,int h)
      {
    length=len;
    height=h;
      }
      View(View &obj)
      {
    length=obj.length;
    height=obj.height;
      }
      double Area()
      {
        return length*height;
      }
};

int main()
{
    
    View v(4,5);
    View v1(2,5);
    View v2=v1;
cout<<v.Area()<<endl;
cout<<v1.Area()<<endl;
cout<<v2.Area()<<endl;
    return 0;
}