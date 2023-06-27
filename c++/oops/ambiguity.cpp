#include <bits/stdc++.h>
using namespace std;
  
class ClassA 
{
  public:
    int a;

    void operator+(ClassA& obj) {
        int val1 = this->a;
        int val2 = obj.a;
        cout<<val1-val2<<endl;
    }
};
  
class ClassB : virtual public ClassA
{
    public:
    int b;
};
  
class ClassC : virtual public ClassA
{
  public:
    int c;
};
  
class ClassD : public ClassB, public ClassC
{
  public:
    int d;
};
  
int main()
{
    ClassD obj;
  
    obj.a = 10;       // Statement 3
    obj.a = 100;      // Statement 4 overides 3
  
    obj.b = 20;
    obj.c = 30;
    obj.d = 40;
  
    ClassA obj1,obj2;
    obj1.a = 10;
    obj2.a = 4;
    //should give difference between values
    obj1+obj2;
}