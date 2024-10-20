#include <iostream>
using namespace std ;
int main ( )
{
    float dollar ;
    float eur = ( 1 / 0.85) ;
    float yen = ( 1 / 109.57) ;
    float bp = ( 1 / 0.73) ;
    cout << " enter the Dollars for Conversion: \n " ;
    cin >> dollar ;
    cout << " Euro : " << eur * dollar << endl ;
    cout << " Japanese Yen : " << yen * dollar << endl ;
    cout << " British Pounds : " << bp * dollar << endl ;
    return 0 ;
}