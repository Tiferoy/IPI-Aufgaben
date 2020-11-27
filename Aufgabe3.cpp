#include "fcpp.hh"
#include <cmath>

bool ungerade (int exponent)   //prüfe ob Eingabe ungerade und gib true oder false zurück
{
if (exponent%2!=0){
    return (true);}
   
else {
    return (false);
    }    
}

int multsignal(int x, int y){
    std::cout << "Multiplikation: " << x << " * " << y << std::endl;
    return x * y;
}



int exponentation(int basis, int exponent){
    return cond (exponent <= 0, cond(exponent < 0, 0, 1), 
            cond( ungerade(exponent) == false, multsignal(exponentation(basis, exponent/2) , exponentation(basis, exponent/2)), 
            multsignal(basis , exponentation(basis, exponent - 1))));   //bääähh
}

int main(){
    int basis;
    int exponent;
    std::cin >> basis;
    std::cin >> exponent;
    std::cout << exponentation(basis, exponent) << std::endl;
}