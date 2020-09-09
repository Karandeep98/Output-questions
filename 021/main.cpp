#include <iostream>
using namespace std;

class Number
{
    int Num;
    public:
    Number(int x = 0)
    {
        Num = x;
    }
    void Display(void)
    {
        cout<< Num;
    }
    void Modify();
};
void Number::Modify()
{
    int Dec;
    Dec = Num % 13;
    Num = Num / 13;

         if(Num  > 0 ) Modify()   ;
         if(Dec == 10) cout<< "A" ;
    else if(Dec == 11) cout<< "B" ;
    else if(Dec == 12) cout<< "C" ;
    else if(Dec == 13) cout<< "D" ;
    else               cout<< Dec ;
}
int main()
{
    Number objNum(130);
    objNum.Modify();
    return 0;
}
