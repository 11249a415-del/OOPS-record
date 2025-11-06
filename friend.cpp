#include<iostream>

#include<conio.h>

class sample

{

int a, b;

public:

void setvalue()

{

std::cout<<"Enter value of a ";

std::cin>>a;

std::cout<<"Enter value of b ";

std::cin>>b;

}
friend float mean(sample);

float mean(sample s)

{

return float(s.a+s.b)/2.0;

}

};

int main()

{



sample x;

x.setvalue();

std::cout<<"Mean value is: "<<mean(x);

getch();

}