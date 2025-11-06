#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double l1=1.0, l2=1.0;
    double q1_deg=45,q2_deg=30;
    double q1=q1_deg*M_PI/180.0;
    double q2=q2_deg*M_PI/180.0;
    double x=l1*cos(q1)+l2*cos(q1+q2);
    double y=l1*sin(q1)+l2*sin(q1+q2);
    cout<<"end effector position :\n";
    cout<<"x="<<x<<"\n";
    cout<<"y="<<y<<"\n";
    return 0;
}