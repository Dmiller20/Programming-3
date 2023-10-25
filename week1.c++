//THIS IS A PRACTICE FUNCTION WITH STD::LIST

#include <iostream>
#include <list>
#include <cstring>
#include <cassert>

void printList(const std::list<int>& list)
{
    std::cout << "yo mama  :  " << std::endl;
    for(const auto& e: list)
    {
        std::cout << e << " , ";
    }
    std::cout << " " << std::endl;
}

int main( )
{

    std::list<int> bigList;

    bigList.push_back(1);
    bigList.push_back(2);
    bigList.push_back(3);
    bigList.push_back(4);

    printList(bigList);

    // what value we would like to insert at the beginning of the list
    bigList.insert(begin(bigList), 0);

    //what value we would like to insert at the end of the list
    bigList.insert(end(bigList), 69);

    printList(bigList);

    //what if we want to insert at the middle?
    
    auto itConst = cbegin(bigList); //itConst = iterator constant

    //the size of the list is now 6, meaning if we divided it by 2,
    // the next value we insert will be positioned at indice 4!
    itConst = std::next(itConst, bigList.size()/2);
    bigList.insert(itConst, 420);
    
    printList(bigList);

    return 0;
