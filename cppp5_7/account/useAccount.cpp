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

    system("pause");
    return 0;
}
