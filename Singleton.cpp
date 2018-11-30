#include <iostream>
using namespace std;

class Singleton{
   private:
       int data;
       static Singleton *inst;
       Singleton() { data = 0; }
       ~Singleton() { }
   public:
       void setdata(int val){
           data = val;
       }
       int getdata(){
           return data;
       }
       static Singleton* createInst(){
           if( inst == NULL){
               inst = new Singleton;
           }
           return inst;
       }
       static void destroy(){
            delete inst; 
            inst = NULL;
       }

};
Singleton *Singleton::inst = NULL;
int main(){
    return 0;
}
