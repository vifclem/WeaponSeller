
#include <iostream>
#include "Weapon.h"
#include "Merchant.h"
#include"Character.h"


string firstName;
string lastName;
string catchPhrase;

Character player;

//Weapon bow = Weapon("Arc", "arme a longue distance", Bow, 10, 20, 20);
//Weapon Dagger = Weapon("Dagger", "arme de poing", Bow, 10, 20, 20);
//Weapon Staff = Weapon("Staff", "arme efficace", Bow, 10, 20, 20);
//Weapon Sword = Weapon("Sword", "arme courte distance", Bow, 10, 20, 20);




void BuyWeapon() {
    cout << "Actuelement tu a " <<player.PlayerMoney()<< " pieces." <<" Que veut tu acheter ?" << endl;
    cout << "1 : Un arc" << endl;
    cout << "2 : Une dague" << endl;
    cout << "3 : Un staff" << endl;
    cout << "4 : Une epee" << endl;
    int Banswer;

    do {
        cin >> Banswer;

        if (Banswer == 1) {
            player = Character(firstName, lastName, catchPhrase, 1000, 100, Bow, Race::Human, Work::Warrior);
        }
        else if (Banswer == 2) {
            player = Character(firstName, lastName, catchPhrase, 1000, 100, Dagger, Race::Human, Work::Warrior);
        }
        else if (Banswer == 3) {
            player = Character(firstName, lastName, catchPhrase, 1000, 100, Staff, Race::Human, Work::Warrior);
        }
        else if (Banswer == 4) {
            player = Character(firstName, lastName, catchPhrase, 1000, 100, Sword, Race::Human, Work::Warrior);
        }
    } while (Banswer != 1 && Banswer != 2 && Banswer != 3 && Banswer != 4);
}

void SellWeapon() {
    cout << "Quel arme veut tu vendre :" << endl;
    cout << "Tu a actuelement une epee " << endl;
    cout << "1 : Un arc" << endl;
    cout << "2 : Une dague" << endl;
    cout << "3 : Un staff" << endl;
    cout << "4 : Une epee" << endl;
    int Banswer;

    do {
        cin >> Banswer;

        if (Banswer == 1) {
            cout<< "Bravo ! Tu a vendu ton arc, tu a gagné 20 piece" << endl;
        }
        else if (Banswer == 2) {
            cout << "Bravo ! Tu a vendu t'a dague, tu a gagné 20 piece" << endl;
        }
        else if (Banswer == 3) {
            cout << "Bravo ! Tu a vendu ton staff, tu a gagné 20 piece" << endl;
        }
        else if (Banswer == 4) {
            cout << "Bravo ! Tu a vendu ton epee, tu a gagné 20 piece" << endl;
        }
    } while (Banswer != 1 && Banswer != 2 && Banswer != 3 && Banswer != 4);
}

void ShowInventory() {



}

void Fight() {

    cout << "BOUM ! BOUM ! BOUM !" << endl;
    cout << "Voici ton ennemie ! " << endl;
    //Random de 5 ennemie different 
}

void TalkToMerchant() {
    cout << "Hola amigo je suis Syra le marchant, mon magazin ce s'appelle le PALACE. Je vent et achetes des armes ! Je suis sur que tu peut trouver ton bonheur ici !" << endl;
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

            ShowInventory();
        }
        else if (answer == 3) {
            Fight();
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
   player = Character(firstName, lastName, catchPhrase, 1000, 100, Sword, Race::Human, Work::Warrior);
   Choice();
   
}






int main()
{
    Intro();
    
}

void Update() {

}

