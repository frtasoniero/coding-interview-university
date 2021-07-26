#include "vector.h"
#include <iostream>
#include <stdlib.h>
#include <String>

template <typename T>
Vector<T>::Vector(void)
{
    total_capacity = 10;
    elems_size = 0;
    elems = new T[10];
}

template <typename T>
Vector<T>::Vector(int c)
{
    total_capacity = c;
    elems_size = 0;
    elems = new T[total_capacity];
}

template <typename T>
Vector<T>::Vector(T arr[], int s) 
{
    total_capacity = s <= 10 ? 10 : s * 2;
    elems_size = s;
    elems = new T[total_capacity];
    for (int i=0; i < elems_size; i++) elems[i] = arr[i];
}

template <typename T>
void Vector<T>::is_empty() 
{
    std::string result = elems_size ? "false" : "true";
    std::cout << result << std::endl;     
}

template class Vector<int>; 
template class Vector<float>;
template class Vector<char>;