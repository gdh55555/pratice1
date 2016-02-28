#include <iostream>

using namespace std;

void Throw() {throw 1;}
void NoBlockThrow() {Throw();}
void BlockThrow() noexcept {Throw();}

int main(){
        try{
            Throw();
        }
        catch(...){
            cout << "Found throw." << endl;
        }

        try{
            NoBlockThrow();
        }
        catch(...){
            cout << "Throw is not Blocked." << endl; 
        }

        try{
            BlockThrow();
        }
        catch(...){
            cout << "Found throw 1." << endl;
        }
}