
#include <iostream>

class Animal
{
public:
    virtual void Voice()
    {
        std::cout << "Animal";
    }
    virtual ~Animal()
    {
        std::cout << "Animal destruction ";
    } 

};
class Dog:public Animal
{
public:
    void Voice() override
    {
        std::cout << "Woof ";
    }
    ~Dog()
    {
        std::cout << "Dog destruction ";
    }
  
};  
class Cat :public Animal
{
    void Voice() override
    {
        std::cout << "Meow ";
    }
    ~Cat()
    {
         std::cout << "Cat destruction ";
    }
};
class Cow :public Animal
{
    void Voice() override
    {
        std::cout << "Muuu ";
    }
    ~Cow()
    {
        std::cout << "Cow destruction ";
    }
};


int main()
{
    const int size = 3;
    Animal* array[size];
    Dog* p = new Dog;
    array[0] = p;
    
    Cat* c = new Cat;
    array[1] = c;
    
    Cow* b = new Cow;
    array[2] = b;
    
    for (int i = 0; i < size; i++)
    {
        array[i]->Voice();
        delete array[i];
    }


}


