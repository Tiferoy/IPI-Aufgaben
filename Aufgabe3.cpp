#include "fcpp.hh"

bool ungerade (int exponent)   //prüfe ob Eingabe ungerade und gib true oder false zurück
{
if (exponent%2!=0){
    return (true);}
   
else {
    return (false);
    }    
}

int multsignal(int x, int y){    //hier werden zwei werte multipliziert und bei jedem Funktionsaufruf wird "Multiplikationen: ..." geprintet
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
    std::cout << " Gib eine Basis an: " ;
    std::cin >> basis;
    std::cout << "Gib einen Exponenten an: ";
    std::cin >> exponent;
    std::cout << exponentation(basis, exponent) << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Irgendawas stimmt hier noch nicht ganz. Eigentlich sollten da nur halb so viele Multiplikationen stehen. Andererseits dieht man, das das Programm im Prinzip das Richtige rechnet. Ich sehe den Fehler nicht." << std::endl;
}
