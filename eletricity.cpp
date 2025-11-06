#include<iostream>
using namespace std;
class electricitybill
{
    int consumerno, prevreading, currreading;
    string name, type;
    float amount;
    public:
    void getdata(){
        cout<<"consumer no:";cin>>consumerno;
        cout<<"tzname:";cin.ignore();getline(cin,name);
        cout<<"previous reading:";cin>>prevreading;
        cout<<"current reading:";cin>>currreading;
        cout<<"connection type (domestic/commercial):";cin>>type;
    }
    void calculate(){
        int units= currreading - prevreading;
        amount =0;
        if (type == "domestic")
        {
            if(units<=100) amount=units*1;
            else if(units<=200) amount=100*1+(units-100)*2.5;
            else if(units<=500) amount=100*1+100*2.5+(units-200)*4;
            else amount = 100*2+100*2.5+300*4+(units-500)*6;
            
        }
        else{
            if(units<=100) amount =units*2;
            else if( units<=200)amount=100*2+(units-100)*4.5;
            else if( units<=500)amount=100*2+100*4.5+(units-200)*6;
            else amount =100*2+100*4.5+300*6+(units-500)*7;

        }
    }
    void display()
    {
        cout<<"\n---elecricitybill---\n";
        cout<<"consumer no:"<< consumerno<< "\n";
        cout<<"tzname:"<<name<<"\n";
        cout<<"wctype:"<<type<<"\n";
        cout<<"units used:"<<currreading-prevreading<<"\n";
        cout<<"amount:rs."<<amount<<"\n";
    }

    };
    int main()
    {
        electricitybill eb;
        eb.getdata();
        eb.calculate();
        eb.display();
        return 0;

    }


    
