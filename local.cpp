#include<iostream>
void examplefunction()
{
     class localclass
    {
        public:
        void display()
        {
            std::cout<<"hello from local class!"<<std::endl;
        }
    };
     localclass obj;
    obj.display();
}
int main()
{
    examplefunction();
    return 0;
}

        
    
    
