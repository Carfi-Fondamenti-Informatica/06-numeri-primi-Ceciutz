#include "lib.h"

bool numero_primo(int a, int b){
    a--;
    if(a > 1){
        if(b%a == 0){
            return false;
        }else {
            numero_primo(a, b);
        }
    }else{
        return true;
    }
}
