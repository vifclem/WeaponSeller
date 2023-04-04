
#include <iostream>
#include "Weapon.h"
#include "Merchant.h"
#include"Character.h"






void Intro() {

   cout << "Bonjour voyageur, ce jeux est un WeaponSeller RPG ! "<< endl;
   cout << "Durant votre aventure vous allez devoir choisir votre Prénom, votre Nom, votre phrase d'accroche, votre Race et votre metier"<< endl;
   cout << "Vous aurais de l'argent que vous pouvez dépenser en achetant des armes. Vous pouvez egalement vendre ces armes ! " << endl;
   cout << "Quand le marchant vous posera des questions vous devrez répondre par des chiffre " << endl;
   cout << "C'EST PARTI !! Quel est ton nom ? " << endl;
   string firstName;
   getline(cin, firstName);
   cout << "Bonjour " + firstName + " ! " << endl;
   cout << " Quel est ton nom de famille" + firstName + " ?" << endl;
   string lastName;
   getline(cin, lastName);
   cout << " Maintenant, choisi ta phrase d'accroche " << endl;
   string catchPhrase;
   getline(cin, catchPhrase);
   cout << "Ta phrase d'accroche est donc : " + catchPhrase + " !" << endl;
   
   //race

   //metier
   cout << "Maintenant que je te connais un peu mieux dis moi ce que tu veut faire : " << endl;

   



}


void Choice() {
    cout << "1 : Parler au marchant " << endl;
    cout << "2 : Voir ton historique " << endl;
    cout << "3 : Se battre ! " << endl;

    int answer;
    do {
        cin >> answer;
        if (answer == 1) {

            // TalkToMerchant();
        }
        else if(answer == 2) {

            //methode ShowHistorique
        }
        else if (answer == 3) {
           //Fight();
        }



    } while (answer != 1 && answer != 2 && answer != 3);
   


}




void Fight() {


}

void TalkToMerchant() {

    //Se presenter au marchant
    //marchant demande si tu veut acheter, vendre un arme


}

void BuyWeapon() {
    cout << "Tu a le chois entre :" << endl;
    cout << "1 : Un arc" << endl;
    cout << "2 : Une dague" << endl;
    cout << "3 : Un staff" << endl;
    cout << "4 : Une épée" << endl;
    int Wanswer;

    do {
        cin >> Wanswer;

        if (Wanswer == 1) {

        }
        else if (Wanswer == 2) {

        }
        else if (Wanswer == 3) {

        }
        else if (Wanswer == 4) {

        }
    } while (Wanswer != 1 && Wanswer != 2 && Wanswer != 3 && Wanswer != 4);
    

}

void SellWeapon() {

}





int main()
{
    Intro();
    Choice();



}

void Update() {

}

