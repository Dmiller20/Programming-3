#include <iostream>
#include <stack>

// THIS IS A PRACTICE FUNCTION WITH STD::STACK


int main()
{
    std::stack<int> bigStack;

    bigStack.push(1);
    bigStack.push(2);
    bigStack.push(3);
    bigStack.push(4);

    //printing out which element is at the top of the stack
    std::cout << "Top: " << bigStack.top() << std::endl;

    // popping (removing) an element out of the stack
    bigStack.pop();
    std::cout << "Top: " << bigStack.top() << std::endl;


    return 0;
}

