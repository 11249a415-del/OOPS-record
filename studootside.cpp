#include<iostream>
using namespace std;
class book {
    private:
    string title;
    string author;
    int pages;
    public:
    void setdetails(string t, string a, int p);
    void printdetails();
};
 void book::setdetails(string t, string a, int p){
    title = t;
    author = a;
    pages = p;

 }
 void book::printdetails(){
    cout << "book title:" << title << endl;
    cout << "author:" << author << endl;
    cout << "pages:" << pages << endl;

 }

 int main(){
    book mybook;
    mybook.setdetails("the leader", "tagore", 399);
    mybook.printdetails();
    return 0;
 }




