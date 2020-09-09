#include <iostream>
using namespace std;

class Birds {};
class Peacock : protected Birds {};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
