#include <iostream>

using namespace std;

int main(){
    int edad = 0;
    cout << "edad: ";
    cin >> edad;
    if (edad >=18) {
        if (edad<=40){
        cout << "puedes votar";
        } else {
        cout << "no puedes votar";
        }
    } else {
        cout << "no puedes votar";
    }    

}