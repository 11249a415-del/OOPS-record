#include<iostream>
using namespace std;
class student
{
    public:
    int rollno;
    string name;
    float marks;
    void getdata(){
        cout<<"enter rollno:";
        cin>>rollno;
        cout<<"enter name:";
        cin>>name;
        cout<<"enter marks:";
        cin>>marks;
    }
    void showdata()
    {
        cout<<"\n rollno:"<<rollno;
        cout<<"\n name:"<<name;
        cout<<"\n marks:"<<marks<<endl;
    }
};
int main()
{
    int n;
    cout<<"enter number of students:";
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
        cout<<"\n enter details for student"<<i+1<<":\n";
        s[i].getdata();

    }
    cout<<"\n--- student details ---\n";
    for (int i=0; i<n ;i++)
    {
        cout<<"\nstudent"<<i+1<<":\n";
        s[i].showdata();
    }
    return 0;
    }
    

    

    