
#include <iostream>
#include "Weapon.h"
#include "Merchant.h"
#include"Character.h"






void Intro() {

   cout << "Bonjour voyageur, ce jeux est un WeaponSeller RPG ! "<< endl;
   cout << "Durant votre aventure vous allez devoir choisir votre Prénom, votre Nom, votre phrase d'accroche, votre Race et votre metier"<< endl;
   cout << "Vous aurais de l'argent que vous pouvez dépenser en achetant des armes. Vous pouvez également vendre ces armes ! " << endl;
   cout << "Quand le marchant vous posera des questions vous devrez répondre par des chiffre " << endl;
   cout << "C'EST PARTI !! Quel est ton nom ? " << endl;
   string firstName;
   getline(cin, firstName);
   cout << "Bonjour " + firstName + " ! " << endl;
   cout << " Quel est ton nom de famille" + firstName + " ?" << endl;
   string lastName;
   getline(cin, lastName);
   cout << " Maintenant, choisi ta phrase d'accroche " << endl;
   string phraseAccroche;
   getline(cin, phraseAccroche);




   








}



int main()
{
    Intro();



}

void Update() {

}

