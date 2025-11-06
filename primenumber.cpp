#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    if(n<=1)
    cout<<"number is not prime:"<<endl;
else
cout<<"number is prime:"<<endl;
for(int i=2; i<=n/2;++i)
{
    if(n% i==0)
    {
        cout<<n<<"is not a primenumber:"<<endl;
        return 0;
    }
    }
}
