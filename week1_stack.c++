#include <iostream>
#include <stack>

// THIS IS A PRACTICE FUNCTION WITH STD::STACK
void printStack(std::stack<int> copy)
{

    // While container (bigStack) is NOT empty, print out the top of the stack until it is empty!
     while(!copy.empty())
    {
        std::cout << "==============" << std::endl;
        int result = copy.top();
        copy.pop();
        std::cout << "BigStack: " << result << std::endl;
    }

}


int main()
{   
    //because it's a constructer, if you want to initilize an array, be sure to encase the array with a parentheses
    std::stack<int> bigStack ({-2, -1, 0, 10});

    bigStack.push(1);
    bigStack.push(2);
    bigStack.push(3);
    bigStack.push(4);

    //printing out which element is at the top of the stack
    std::cout << "Top: " << bigStack.top() << std::endl;

    // popping (removing) an element out of the stack
    bigStack.pop();
    std::cout << "Top: " << bigStack.top() << std::endl;

   printStack(bigStack);


    return 0;
}
