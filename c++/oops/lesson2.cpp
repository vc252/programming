#include <bits/stdc++.h>
using namespace std;

class Animal {
    private:
    int age;
    protected:
    int friends;
    public:
    int weight;

};

class reptile{
    public: 
    int length;
    int weight;
};
//age is not accessible to all these classes
class Lion:public Animal,public reptile {
    //will have Animal friends and weight
    //also reptile length and weight which we can access
    //by scope resolution operator;
};
class Cat:protected Animal {
    //now here weight and friends become protected
    //and can't be accessed outside this class but 
    //can be in an inherited class
};

class man:private Animal {
    //now here weight and friends become private
    //they cannot be accessed outside this class
};

class cheetah:private Cat{
    //weight and friends now became private
};

class lalu:public cheetah{
    //cannot access any of the members here
};

int main(void) {
    Lion obj;
    obj.Animal::weight = 12;
    obj.reptile::weight = 10;

    return 0;
}