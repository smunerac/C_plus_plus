#include <iostream>

using namespace std;

int main(){
    int option = 0;
    cout << "Introduce una opcion ";
    cin >> option;
    switch(option){
        case 1:
        cout << "opcion 1";
        break; 
        case 2:
        cout << "opcion 2"; 
        break;
        case 3:
        cout << "opcion 3"; 
        break;
        default:
        cout << "opcion no valida"; 
    }

}