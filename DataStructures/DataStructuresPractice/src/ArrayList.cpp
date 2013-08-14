#include "..\include\ArrayList.h"
#include <vector>

template <typename T>
ArrayList<T>::ArrayList()
{
    //ctor
    data = new T;
}


template <typename T>
void ArrayList<T>::Add(T item)
{
    data.push_back(item);
}

template <typename T>
void ArrayList<T>::Remove(T item)
{
    data.pop_back(item);

}

template <typename T>
ArrayList<T>::~ArrayList()
{
    //dtor
    delete[] data;
}
