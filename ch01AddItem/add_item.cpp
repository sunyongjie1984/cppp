
#include <iostream>     // for standard library
#include "Sales_item.h" // for user defined classes

int main()
{
    Sales_item item1;
    Sales_item item2;

    std::cout << item1.GetUnitsSold() << std::endl;

    std::cin >> item1 >> item2;              // read a pair of transactions
    std::cout << item1 + item2 << std::endl; // print their sum

    return 0;
}
