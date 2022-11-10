

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "turkish");


    /*
    int x, y;
    cout << "s1:";
    cin >> x;
    cout << "s2:";
    cin >> y;

    
    if (x > y)
        cout << "büyük sayı" << x << endl;
    else // s1<=s2 gerçekleşirse 
        cout << "büyük sayı" << y << endl;
        
        */


    /*klavyeden girilen iki sayının toplamını ekrana yazdıralım
    int s1, s2;
    cout << "İki sayı gir lavuk:" ;
    cin >> s1 >> s2;
    cout << "şaaaaak" << s1 + s2 << endl;
   */


    /*

    if (x > y)
        cout << "büyük sayı" << x << endl;
    else if (y > x)
        cout << "büyyük sayı" << y << endl;
    else
        cout << "eşit\n" ;
     */



    // En büyük sayıyı bulma
    int x, y, z;
    cout << "3 sayı girin :";
    cin >> x >> y >> z;
    if (x >= y && x >= z)
        cout << "enbüyük" << x << endl;
    else if (y >= z)
        cout << "enbüyük" << y << endl;
    else
        cout << "enbüyük" << z << endl;
     




    /*

    int yas;
    cout << "Yaş";
    cin >> yas;
    if (yas < 0)
        cout << "hatalı ulan\n";
    else if (yas <= 3)
        cout << "bebiş\n";
    else if (yas <= 14)
        cout << "sucuk\n";
    else if (yas <= 25)
        cout << "genç\n";
    else
        cout << "ihtiyar\n";
        
     */





    
}

