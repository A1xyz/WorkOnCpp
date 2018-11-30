#include <iostream>
using namespace std;

class Singleton{
   private:
       int data;
       static Singleton *inst;
       Singleton() { data = 0; }
       ~Singleton() { }
   public:

};
Singleton *Singleton::inst = NULL;
int main(){
    return 0;
}
