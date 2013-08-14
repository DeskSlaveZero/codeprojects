#include <iostream>
#include <string.h>
#include "include/SimpleHash.h"
#include "include/ArrayList.h"
using namespace std;


void SimpleHashImp()
{
    SimpleHash<float> hash(50);
    hash.set("Hello", 12.5);
    hash.set("World", 22.5);

    std::cout << hash.get("Hello") << std::endl;
    std::cout << hash.get("World") << std::endl;
}


void ArrayListImp()
{
    ArrayList< SimpleHash<float> >* aList;
    SimpleHash<float> hash(50);
    SimpleHash<float> hash2(20);

    hash.set("Hello", 12.5);
    hash2.set("World", 22.5);

    aList->Add(hash);
    aList->Add(hash2);

    SimpleHash<float> * testHash;
    testHash = aList->data[0];
    std::cout << "hashes added to array list" << std::endl;
    std::cout << "First hash value : " << testHash.get("Hello") << std::endl;
    //std::cout << "Second hash value : " << aList[1] << std::endl;


}

int main()
{
    SimpleHashImp();
    ArrayListImp();

    return 0;
}
