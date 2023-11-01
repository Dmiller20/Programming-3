#include <iostream>
#include <string>


void reverse(std::string x)
{
    if (x.size() == 0)

        return;
        std::string r = x.substr(1);
        reverse(r);
        std::cout << x[0];
}

unsigned int factorial(int n)
{ 
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}


int main()
{
   
    std::string word;
    std::cin >> word;
    std::cout << word << " reversed is: ";
    reverse(word);
    std::cout << std::endl;
    std::cout << "=================" << std::endl;

    int num = 5;
    std::cout << factorial(num) << std::endl;
   
    return 0;
}

