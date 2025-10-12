#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    std::cout << "----- Basic Test -----" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j;
    delete i;
    
    std::cout << "\n----- Array Test -----" << std::endl;
    const int arraySize = 4;
    Animal* animals[arraySize];
    
    for (int i = 0; i < arraySize; i++)
    {
        if (i < arraySize / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    
    for (int i = 0; i < arraySize; i++)
        delete animals[i];
    
    std::cout << "\n----- Deep Copy Test -----" << std::endl;
    Dog original;
    Dog copy = original;
    
    return 0;
}