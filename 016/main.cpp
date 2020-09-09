#include <iostream>
using namespace std;

class IndiaBix
{
    int x;
    public:
    IndiaBix(short ss)
    {
        cout<< "Short" << endl;
    }
    IndiaBix(int xx)
    {
        cout<< "Int" << endl;
    }
    IndiaBix(char ch)
    {
        cout<< "Char" << endl;
    }
    ~IndiaBix()
    {
        cout<< "Final";
    }
};
int main()
{
    IndiaBix *ptr = new IndiaBix('B'); //Here we are not creating an object rather we are creating a pointer,hence destructor won't be called
    //IndiaBix ob('B');   //Here the destructr would be called
    return 0;
}
