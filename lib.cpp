//
// Created by Cecilia Utzeri on 02/12/2022
//


bool numero_primo(int x,int y){
  x--;
  if(x>1){
    if(y%x==0) {
      return false;
    }else{
      numero_primo(x,y);
    }
  }else {
    return true;
  }
}
