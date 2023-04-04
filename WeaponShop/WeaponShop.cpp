
#include <iostream>
#include "Weapon.h"
#include "Merchant.h"
#include"Character.h"


string firstName;
string lastName;
string catchPhrase;




void BuyWeapon() {
    cout << "Tu a le chois entre :" << endl;
    cout << "1 : Un arc" << endl;
    cout << "2 : Une dague" << endl;
    cout << "3 : Un staff" << endl;
    cout << "4 : Une épée" << endl;
    int Banswer;

    do {
        cin >> Banswer;

        if (Banswer == 1) {

        }
        else if (Banswer == 2) {

        }
        else if (Banswer == 3) {

        }
        else if (Banswer == 4) {

        }
    } while (Banswer != 1 && Banswer != 2 && Banswer != 3 && Banswer != 4);
}

void SellWeapon() {
    cout << "Quel arme veut tu vendre :" << endl;
    cout << "1 : Un arc" << endl;
    cout << "2 : Une dague" << endl;
    cout << "3 : Un staff" << endl;
    cout << "4 : Une épée" << endl;
    int Banswer;

    do {
        cin >> Banswer;

        if (Banswer == 1) {

        }
        else if (Banswer == 2) {

        }
        else if (Banswer == 3) {

        }
        else if (Banswer == 4) {

        }
    } while (Banswer != 1 && Banswer != 2 && Banswer != 3 && Banswer != 4);
}

void ShowInventory() {

}

void Fight() {


}

void TalkToMerchant() {
    cout << "Bonjour je suis Syra le marchant, je vent et achetes des armes ! Je suis sur que tu peut trouver ton bonheur ici !" << endl;
    cout << "1 : Veut tu voir ton inventaire ?" << endl;
    cout << "2 : Veut tu acheter une arme ? " << endl;
    cout << "3 : Veut tu vendre une arme ? " << endl;
    int Tanswer = 0;
    do {
        cin >> Tanswer;
        if (Tanswer == 1) {
            ShowInventory();
        }
        else if (Tanswer == 2) {
            BuyWeapon();
            
        }
        else if (Tanswer == 3) {
            SellWeapon();
        }
    } while (Tanswer != 1 && Tanswer != 2 && Tanswer != 3);
    

}



void Choice() {
    cout << "1 : Parler au marchant " << endl;
    cout << "2 : Voir ton historique " << endl;
    cout << "3 : Se battre ! " << endl;

    int answer;
    do {
        cin >> answer;
        if (answer == 1) {

            TalkToMerchant();
        }
        else if (answer == 2) {

            //methode ShowHistorique
        }
        else if (answer == 3) {
            //Fight();
        }



    } while (answer != 1 && answer != 2 && answer != 3);
}


void Intro() {

   cout << "Bonjour voyageur, ce jeux est un WeaponSeller RPG ! "<< endl;
   cout << "Durant votre aventure vous allez devoir choisir votre Prénom, votre Nom, votre phrase d'accroche, votre Race et votre metier"<< endl;
   cout << "Vous aurais de l'argent que vous pouvez dépenser en achetant des armes. Vous pouvez egalement vendre ces armes ! " << endl;
   cout << "Quand le marchant vous posera des questions vous devrez répondre par des chiffre " << endl;
   cout << "C'EST PARTI !! Quel est ton nom ? " << endl;
   
   getline(cin, firstName);
   cout << "Bonjour " + firstName + " ! " << endl;
   cout << " Quel est ton nom de famille" + firstName + " ?" << endl;
   
   getline(cin, lastName);
   cout << " Maintenant, choisi ta phrase d'accroche " << endl;
   
   getline(cin, catchPhrase);
   cout << "Ta phrase d'accroche est donc : " + catchPhrase + " !" << endl;
   
   //race

   //metier
   cout << "Maintenant que je te connais un peu mieux dis moi ce que tu veut faire : " << endl;
   Choice();
   
}






int main()
{
    Intro();
    
}

void Update() {

}

