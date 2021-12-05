//
// Created by Shandy Mephesto on 9/12/21.
//

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template<typename T>
void iter(T* pArray, size_t size, void (*f)(T const&item))
{
    for(size_t i = 0; i < size; ++i)
        f(pArray[i]);
}

#endif