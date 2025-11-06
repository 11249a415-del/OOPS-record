#include<iostream>
using namespace std;
class employee{
    private:
    int id;
    string name;
    string department;
    float salary;
    public:
    void getdetails(){
        cout<<"enter employee id:";
        cin>>id;
        cin.ignore();
        cout<<"enter name:";
        getline(cin,name);
        cout<<"enter department:";
        getline(cin,department);
        cout<<"enter salary:";
        cin>> salary;}
        void showdetails(){
            cout<<"\n---emplyee details---"<<endl;
            cout<<"id:"<<id<<endl;
            cout<<"name:"<<name<<endl;
            cout<<"department:"<<department<<endl;
            cout<<"salary:"<<salary<<endl;}
        
        };
        int main(){
            int n;
            cout<<"enter number oyf employees:";
            cin>>n;
            employee emp[n];
            for (int i=0;i<n;i++){
                cout<<"\n enter details for employee"<<i+1<<":"<<endl;
                emp [i]. getdetails();
            }
            for(int i=0;i<n;i++){
                cout<<"\n details of employee"<<i+1<<":"<<endl;
                emp[i].showdetails();
            }
            return 0;
            }
        
                
            

        

        


    
