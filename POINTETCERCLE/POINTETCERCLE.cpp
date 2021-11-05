
#include <iostream>
#include"Cercle.h"
#include"Point.h"
using namespace std;


int main()
{
    Point a1(0, 3);
    Point a2;
    cout << "le point a1:\n";
    a1.afficher();
    cout << endl;
    cout << "le point a2:\n";
    a2.afficher();
    cout << endl;
    cout << endl;
    cout << "Test d'egalite du point a1 et a2:" << endl;
    cout << endl;
  
    if (a1.egalitePoint(a2)) {
        cout << "Les deux points sont egaux" << endl;
    }
    else {
        cout << "Les deux points ne sont pas egaux" << endl;
    }
  
    cout << endl;
    cout << "Les infos du cercle c:\n";
    Cercle c1(a2, 6);
    Cercle c2(a1, 4);
    c1.Affiche();
    
    Point a3(0, 6);
    cout << endl;
    
    cout << "Test d'appartenance:";
    cout << endl;
   if( c1.appartenance(a3)) { cout << "Le point de coordonnees "; a3.afficher(); cout << " appartient au cercle" << endl; }
   else { cout << "Le point de coordonnees "; a3.afficher(); cout << " n appartient pas au cercle" << endl; }
   cout << endl;
   cout << endl;
   cout << "Calcul de surface :\n";
   cout << "Surface du cercle =" << c1.surface() << endl;
   cout << endl;
   cout << endl;
   cout << "Calcul du perimetre :\n";
   cout << "Perimetre du cercle =" << c1.perimetre() << endl;
   cout << endl;
   cout << endl;
   cout << "Test egalite du cercle c1 et c2 :\n";
   if (c1.egal(c2))cout << "egaux\n";
   else cout << "non egaux\n";
   
}
