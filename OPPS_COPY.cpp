#include<iostream>
using namespace std;

class Box
{
    private:
     int l,b,h;

    public:
    Box()
    {
        l=0;
        b=0;
        h=0;
    }
     Box(int length,int breadth,int height)
     {length=l;
     breadth=b;
     height=h;
     }

     Box(Box &obj)
     {
        l=obj.l;
        b=obj.b;
        h=obj.h;
     }

     int getLength()
     {
        return l;
     }
     int getBreadth()
     {
       return b; 
     }
     int getheight()
     {
        return h;
     }
   long long CalculateVolume()
   {
    
   } 
}

int main()
{

    return 0;
}