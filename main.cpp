//Funkcja int czyOk1(char haslo[]) sprawdza, czy has³o podane jako argument, jest prawid³owe.
//Zwraca w wyniku:  1 – tak prawid³owe, 0 – nie
//PRAWID£OWE HAS£O SPE£NIA REGU£Y:
//liczba znaków 8
//prawid³owe has³o sk³ada siê wy³¹cznie z cyfr.
//W haœle nie mog¹ wyst¹piæ obok siebie takie same znaki.
//„01238771” Ÿle bo 77

#include <iostream>
#include <cstring>
using namespace std;
int czyOk1(char []);
int main()
{
    char haslo[15];
    cout<<"podaj haslo: ";
    cin.getline(haslo,15);
    if (czyOk1(haslo))
        cout<<"Poprawne\n";
    else
        cout<<"Niepoprawne\n";
    return 0;
}
int czyOk1(char haslo[])
{
    int i=0,ileZnakow;
    ileZnakow=strlen(haslo);
    if (ileZnakow!=8)//sprawdza, czy poprawna liczba znaków
        return 0;
    for (int i=0;i<ileZnakow;++i)//sprawdza, czy wsystkie znaki w Hasle to cyfry
        if (!isdigit(haslo[i]))
            return 0;
    for (int i=0;i<(ileZnakow-1);++i)//sprawdza, czy obok siebie sa takie same znaki
        if (haslo[i]==haslo[i+1])
            return 0;
    return 1;
}
