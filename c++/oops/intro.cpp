#include <bits/stdc++.h>
using namespace std;

class Animal {
    //state or properties
    private://by default private
    int weight;
    public:
    int age;
    string name;

    //constructor
    Animal() {
        this->weight = 0;
        this->age = 0;
        this->name = "";
        cout<<"constructor called"<<endl;
    }

    //parameterised constructor
    Animal(int age) {
        this->age = age;
        cout<<"parametrised constructor 1 called"<<endl;
    }

    Animal(int age,int weight) {
        this->age = age;
        this->weight = weight;
        cout<<"parametrised constructor 2 called"<<endl;
    }

    //copy constructor
    
    Animal(Animal &obj) {
        this->age = obj.age;
        this->weight = obj.weight;
        this->name = obj.name;
        cout<<"copy constructor called"<<endl;
    }

    //destructor
    ~Animal() {
        cout<<"destructor called"<<endl;
    } 

    //behaviour
    void eat() {
        cout<<"eating";
    }
    void sleep() {
        cout<<"sleeping";
    }
    int getWeight() {
        return weight;
    }
    void setWeight(int weight) {
        this->weight = weight;
    }
    void print() {
        cout<<this->age<<" "<<this->weight<<" "<<this->name;
    }
};

int main(void) {
    //Object Creation

    //Static
    // Animal ramesh;
    // ramesh.age = 10;
    // ramesh.setWeight(10);
    // cout<<"Age of ramesh: "<<ramesh.age<<endl;
    // cout<<"weight of ramesh: "<<ramesh.getWeight()<<endl;
    // ramesh.eat();
    // cout<<endl;

    // //Dynamic
    // Animal* suresh = new Animal(10);
    // //suresh->age = 10;
    // suresh->setWeight(100);
    // cout<<"Age of suresh: "<<suresh->age<<endl;
    // cout<<"weight of suresh: "<<suresh->getWeight()<<endl;
    // suresh->eat();
    // cout<<endl;

    // Animal* mukesh = new Animal(12,19);
    // cout<<"Age of mukesh: "<<mukesh->getWeight()<<endl;

    // //object copy
    // Animal q = ramesh;

    // Animal* l = mukesh;//instead of copy of the object copy of the pointer is created


    Animal a;
    a.age = 10;
    a.setWeight(12);
    a.name = "babbar";

    Animal b=a;

    a.print();
    cout<<endl;
    b.print();
    cout<<endl;

    a.name[0] = 'a';

    a.print();
    cout<<endl;
    b.print();
    cout<<endl;

    Animal* t = new Animal();
    delete t;//manually needs to be done for heap while for static they are done automatically

    return 0;
}