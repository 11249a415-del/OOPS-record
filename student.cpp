#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int rollno;
    float marks;
    public:
    student(string n, int r,float m)
    {
        name =n;
        rollno =r;
        marks =m;

    }
    void displayinfo()
    {
        cout<< "student name:"<<name<<endl;
        cout<< " rollno:"<< rollno << endl;
        cout<< "marks:"<< marks << endl;
    }
};
int main()
 {
    student student1("joy",30, 85);
    student1.displayinfo();
    return 0;
}


    









    






