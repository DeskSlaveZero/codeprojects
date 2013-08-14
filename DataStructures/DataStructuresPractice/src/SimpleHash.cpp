#include "..\include\SimpleHash.h"
#include <iostream>
#include <string.h>


template <typename T>
unsigned int SimpleHash<T>::djb2(const char* key)
{
    unsigned int hash = 5381;

    for(unsigned int i = 0; i < strlen(key); i++)
        hash = ((hash << 5) + hash) + (unsigned int)key[i];

        return hash % m_size;

}

template<typename T>
T SimpleHash<T>::get(const char* key)
{
    unsigned int index = djb2(key);
    std::cout << "get " << index << std::endl;
    return data[index];
}

template <typename T>
void SimpleHash<T>::set(const char* key, const T& value)
{
    unsigned int index = djb2(key);
    std::cout << "set " << index << ": " << value << std::endl;
    data[index] = value;

}

template <typename T>
SimpleHash<T>::SimpleHash(unsigned int size): m_size(size)
{
    //ctor
    data = new T[m_size];
}




template <typename T>
SimpleHash<T>::~SimpleHash()
{
    //dtor
    delete[] data;
}


//Accecptable class types
template class SimpleHash<float>;
