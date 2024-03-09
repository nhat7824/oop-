#include <iostream>

template <class T,class U,class K>
U add(T a, U b) 
{
    return a + b;
}

int main() {
    int intSum = add(5, 10);
    std::cout << "Sum of 5 and 10 is: " << intSum << std::endl;

    double doubleSum = add(3.14, 2.718);
    std::cout << "Sum of 3.14 and 2.718 is: " << doubleSum << std::endl;

    return 0;
}

