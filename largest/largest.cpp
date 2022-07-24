#include<iostream>
using namespace std;

int main()
{
    //max from three given numbers
    int a,b,c;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter a number: ";
    cin>>b;
    cout<<"Enter a number: ";
    cin>>c;

    if(a>b&&b>c)
    {
        cout<<a<<" is the maximum number";
    }
    else if(a<b&&b>c)
    {
        cout<<b<<" is the maximum number";
    }
    else
    {
        cout<<c<<" is the maximum number";
    }
    return 0;
}