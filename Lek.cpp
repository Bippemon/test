#include <iostream>

class Smart_ptr
{
    //pointer
    int* ptr;

    public:

    //constructor
    Smart_ptr(int value)
    {
        ptr = new int(value);
    }

    //destructor
    ~Smart_ptr()
    {
        delete ptr;
    }

    int getValue()
    {
        return *ptr;
    }
};


int main()
{
    Smart_ptr p1(10);
    std::cout << p1.getValue();

    return 0;
}