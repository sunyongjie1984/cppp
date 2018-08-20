#include <iostream>
#include <string>
#include "Account.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
    Account a1("bem", 42);
    cout << a1.balance() << endl;
    a1.calculate();
    cout << a1.balance() << endl;

#ifdef __WIN32
    system("pause");
#elif defined __WIN64
    system("pause");
#elif defined __linux || defined __APPLE__
    getchar( );
#endif
    return 0;
}
