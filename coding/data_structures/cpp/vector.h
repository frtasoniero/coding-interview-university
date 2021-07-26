#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <stdlib.h>
#include <String>

template <typename T>
class Vector
{
    private:
    int total_capacity;
    int elems_size;
    T *elems;

    //TODO: resize(new_capacity) private function
        // when you reach capacity, resize to double the size
        // when popping an item, if size is 1/4 of capacity, resize to half

    public:
    /**
     * @brief Construct a new Vector object
     * 
     */
    Vector(void);
    /**
     * @brief Construct a new Vector object
     * 
     * @param c The total capacity of the vector
     */
    Vector(int c);
    /**
     * @brief Construct a new Vector object
     * 
     * @param arr An array of template type
     * @param s The size of the array
     */
    Vector(T arr[], int s);
    /**
     * @brief Destroy the Vector object.
     * 
     */
    ~Vector() { delete[] elems; }

    /**
     * @brief Return the number of items in the vector.
     * 
     * @return int 
     */
    int size() { return elems_size; }

    /**
     * @brief Return the total capacity of the vector.
     * 
     * @return int 
     */
    int capacity() { return total_capacity; }

    /**
     * @brief Display true if the vector is empty, and diplay false if not.
     * 
     */
    void is_empty();

    //TODO: at(index) - returns item at given index, blows up if index out of bounds
    //TODO: push(item)
    //TODO: insert(index, item) - inserts item at index, shifts that index's value and trailing elements to the right
    //TODO: prepend(item) - can use insert above at index 0
    //TODO: pop() - remove from end, return value
    //TODO: delete(index) - delete item at index, shifting all trailing elements left
    //TODO: remove(item) - looks for value and removes index holding it (even if in multiple places)
    //TODO: find(item) - looks for value and returns first index with that value, -1 if not found
};

#endif