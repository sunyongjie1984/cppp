#include <iostream>
#include "Sales_data.h"

using std::cerr;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    Sales_data data1, data2;
    if (read(cin, data1) && read(cin, data2)) // read the transactions
    {
        if (data1.isbn() == data2.isbn())     // check isbns
        {
            data1.combine(data2);             // add the transactions
            print(cout, data1);               // print the results
            cout << endl;                     // followed by a newline 
        }
    }
    else
    {
        cerr << "Input failed!" << endl;
    }
    getchar();
    return 0;
}
