#include<iostream>
using namespace std;
int main()
{
int count=0;
int N;
cout<<"Enter the size of number"<<endl;
cin>>N;
int i;
int a[i];
cout<<"Enter the number "<<endl;
for(int i=0;i<N;i++)
{
cin>>a[i];
}
cout<<"THE ARRRAY IS "<<endl;
for(int i=0;i<N;i++)
{
cout<<a[i]<<endl;
}
for(int i=0;i<N;i++)
{
    if(a[i]<0)
    {
        i-=1;
        count++;
    }
}
cout<<count<<endl;

    return 0;
}