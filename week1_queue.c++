#include <iostream>
#include <queue>

//THIS IS A PRACTICE FUNCTION WITH QUEUE
//Queue = FIFO(First in First out)

int main()
{
   std::queue<int> bigQueue ({-1, 12, 4, 0});

   bigQueue.push(5);
   bigQueue.push(6);
   bigQueue.push(7);

   std::cout << "Front: " << bigQueue.front() << std::endl;

   std::cout << "Back: " << bigQueue.back() << std::endl;

   bigQueue.pop();
   std::cout << "Front: " << bigQueue.front() << std::endl;
   std::cout << "Size: " << bigQueue.size() << std::endl;
    return 0;
}
