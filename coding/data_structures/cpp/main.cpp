#include "vector.h"
#include <iostream>
#include <stdlib.h>

int main () {

    //TODO: Implements and test vector class
    
    int arr[14] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

    Vector<int> v1;

    std::cout << "Vector1 size: " << v1.size() << std::endl;
    std::cout << "Vector1 capacity: " << v1.capacity() << std::endl;

    Vector<int> v2(5);

    std::cout << "Vector2 size: " << v2.size() << std::endl;
    std::cout << "Vector2 capacity: " << v2.capacity() << std::endl;

    Vector<int> v3(arr, 14);

    std::cout << "Vector3 size: " << v3.size() << std::endl;
    std::cout << "Vector3 capacity: " << v3.capacity() << std::endl;

    std::cout << "Vector1 is empty? ";
    v1.is_empty();
    std::cout << "Vector2 is empty? ";
    v2.is_empty();
    std::cout << "Vector3 is empty? ";
    v3.is_empty();

    return 0;
}