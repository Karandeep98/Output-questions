#include <iostream>
using namespace std;

class A{
public:
    void display(){
    cout<<"Class A:";
    }
};
class B: public A{
public:
    void display(){
        A::display();
    cout<<"class B:";
    }
};
int main()
{
    B ob;
    ob.display();
    return 0;
}
