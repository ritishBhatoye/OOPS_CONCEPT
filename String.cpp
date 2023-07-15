#include<iostream>
#include <algorithm>
using namespace std;
int main()
{   string a="abcd";
    string b="ef";
    string c=a+b;
    
    int lena=a.size();
    int lenb=b.size();
    cout<<lena<<" "<<lenb<<endl;
    cout<<c<<endl;
    char ac0=a[0];
    char ac1=a[1];
    char ac2=a[2];
    char ac3=a[3];

   char bc0=b[0];
   char bc1=b[1];
   cout<<bc0<<ac1<<ac2<<ac3<<endl;
   cout<< ac0<<bc1<<endl;

    return 0;
}