#ifndef SIMPLEHASH_H
#define SIMPLEHASH_H

template <class T>
class SimpleHash
{
    public:

    SimpleHash(unsigned int size): m_size(size)
    {
        //ctor
        data = new T[m_size];
    }

    T get(const char* key)
    {
        unsigned int index = djb2(key);
        std::cout << "get " << index << std::endl;
        return data[index];
    }


    void set(const char* key, const T& value)
    {
        unsigned int index = djb2(key);
        std::cout << "set " << index << ": " << value << std::endl;
        data[index] = value;

    }


    ~SimpleHash()
    {
        //dtor
        delete[] data;
    }

    private:
    //data
    T* data;
    unsigned int m_size;

    unsigned int djb2(const char* key)
    {
        unsigned int hash = 5381;

        for(unsigned int i = 0; i < strlen(key); i++)
            hash = ((hash << 5) + hash) + (unsigned int)key[i];

        return hash % m_size;

    }



};





#endif // SIMPLEHASH_H
