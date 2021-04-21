
#include <iostream>

class Animal
{
public:
    void Voice()
    {
        std::cout << "Animal";
    }
};
class Dog:public Animal
{
public:
    void Voice()
    {
        std::cout << "Woof";
    }
};
class Cat :public Animal
{
    void Voice()
    {
        std::cout << "Meow";
    }
};
class Cow :public Animal
{
    void Voice()
    {
        std::cout << "Muuu";
    }
};

int main()
{
    Dog* p = new Dog;
    p->Voice();
}


