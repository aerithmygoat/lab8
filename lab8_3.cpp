
/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    int age , bounty , height ;
    cout << "Enter your age: ";
    cin >> age;
    if ( age <= 25 ){
        cout << "Enter your height: ";
        cin >> height ;
        if( height < 180 ){
            if (height < 100){
                cout << "Your character = Chopper";
            }else{
                cout << "Your character = Usopp";
            }
        }else{
            cout << "Enter your bounty: ";
            cin >> bounty;
            if(bounty >= 1111000000){
                cout << "Your character = Zoro";
            }else{
                cout << "Your character = Sanji";
            }
        }
    }else{
        if(age > 60){
            cout << "Your character = Brook";
        }else{
            cout << "Enter your bounty: ";
            cin >> bounty;
            if(bounty > 500000000)
                cout << "Your character = Jinbe";
            else
                cout << "Your character = Franky";
        }
    }
    return 0;
}