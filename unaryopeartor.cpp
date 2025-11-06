#include<iostream>
using namespace std;
class number{
    int value;
    public:
    number(int v=0)   {value=v;}
    number operator - (){
        return number(-value);
    }
    number operator ++()
    {
        ++ value;
        return*this;
    }
    number operator ++(int){
        number temp=*this;
        value ++;
        return temp;
    }
    void display(){
        cout<<"value:"<<value<<endl;
    }
};
int main(){
    number n1(5);
    cout<<"original:";
    n1.display();
    number n2=-n1;
    cout<<"after unary minus:";
    n2.display();
    ++n1;
    cout<<"after prefix ++:";
    n1.display();
    n1++;
    cout<<"after postfix ++:";
    n1.display();
    return 0;
}

