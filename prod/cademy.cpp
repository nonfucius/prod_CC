#include <iostream>

using namespace std;

int main(){
    int youYear;
    cout << "Year: ";
    cin >> youYear;


    if(youYear >= 1000 && youYear <= 9999){
        cout << "this is a four digit number.\n";
    }else{
        cout << "this is NOT a four digit number.\n";
    }
    if(youYear % 4){
        cout << "Leep year.\n";

    }else{
        cout << "Not leep year.\n";
    }
    
}