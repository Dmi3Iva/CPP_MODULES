//
// Created by Shandy Mephesto on 9/12/21.
//

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <exception>
#include <ctime>
#include <iostream>


template<class T>
class Array
{
public:
    Array(): _pArray(NULL), _n(0) {}

    ~Array()
    {
        delete _pArray;
    }

    Array(unsigned int n): _pArray(new T[n]), _n(n) {
    	for(unsigned int i = 0; i < n; ++i)
    		_pArray[i] = 0;
    }

    Array(const Array &arr) {
        *this = arr;
    }

    Array &operator=(const Array &arr)
    {
        _n = arr.size();
        _pArray = new T[_n];
        for(unsigned int i = 0; i < _n; ++i)
            _pArray[i] = arr[i];
        return *this;
    }

    unsigned int size() const
    {
        return _n;
    }

    T& operator [](long i) const {
        if (i < 0 || i > _n - 1 || _n == 0)
            throw std::out_of_range("out of range");
        return _pArray[i];
    }

private:
    T *_pArray;
    unsigned int _n;
};

#endif
