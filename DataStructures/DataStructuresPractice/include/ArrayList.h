#ifndef ARRAYLIST_H
#define ARRAYLIST_H
#include <vector>
#include <string>

template <class T>
class ArrayList
{
    public:
        ArrayList() //constructor
        {

        }

        //data store
        std::vector<T>* data;

        virtual ~ArrayList()
        {
            //dtor
            delete[] data;
        } //destructor

        void Add(T item)
        {
            data->push_back(item);
        }

        void Remove(T item)
        {
            data->pop_back(item);

        }
    protected:

    private:


};

#endif // ARRAYLIST_H
