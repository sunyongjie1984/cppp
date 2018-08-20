#include <iostream>
#include <string>
#include "Account.h"
#if defined __linux || defined __APPLE__
#include "stdio.h"
#endif

using std::cout;
using std::endl;
using std::string;

int main()
{
    Account a1( "bem", 42 );
    cout << a1.balance( ) << endl;
    a1.calculate();
    cout << a1.balance( ) << endl;

#if defined __WIN32 || defined __WIN64
    system( "pause" );
#elif defined __linux || defined __APPLE__
    getchar( );
#endif
    return 0;
}
