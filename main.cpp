#include <iostream>
#include "lib.h"

using namespace std;

int main(){
  int a = 0;
    cin >> a;
    if(numero_primo(a,a)){
        cout << "numero primo";
    }else{
        cout << "numero non primo";
    }
  return 0;
}
