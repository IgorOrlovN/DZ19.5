
#include <iostream>

class Animal
{
public:
    virtual void Voice()
    {
        std::cout << "Animal";
    }
};
class Dog:public Animal
{
public:
    void Voice() override
    {
        std::cout << "Woof ";
    }
};
class Cat :public Animal
{
    void Voice() override
    {
        std::cout << "Meow ";
    }
};
class Cow :public Animal
{
    void Voice() override
    {
        std::cout << "Muuu";
    }
};

int main()
{
    const int size = 3;
    Animal* array[size];
    Dog* p = new Dog;
    array[0] = p;
    delete p;
    Cat* c = new Cat;
    array[1] = c;
    delete c;
    Cow* b = new Cow;
    array[2] = b;
    delete b;
    for (int i = 0; i < size; i++)
    {
        array[i]->Voice();
    }


}


