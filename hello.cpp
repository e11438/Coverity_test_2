// Your First C++ Program

#include <iostream>
#include "Box.h"

static void createMemoryLeak (int in)
{
    Box * test = NULL;
    if(in == 1)
        test = new Box();
}


static Box * returnInvalidBoxPointer(int flag)
{
    Box * result = NULL;
    if(flag)
    {
        Box b;
        b.length = 10;
        result = &b;
    }
    return result;
}

int main() {
    std::cout << "Hello World!" << std::endl;
    Box * b1 = new Box();
    std::cout << "b1->length " << b1->length << std::endl;

    if(b1)  std::cout << "still exist !" << std::endl;
    createMemoryLeak(0);

    Box * newB = returnInvalidBoxPointer(1);
    if(newB)    std::cout << "newB->length " << newB->length << std::endl;

    return 0;
}
