
#include <iostream>
#include "Weapon.h"
#include "Merchant.h"
#include"Character.h"


string firstName;
string lastName;
string catchPhrase;

Character player = Character(firstName, lastName, catchPhrase, 1000, 100, Sword, Race::Human, Work::Warrior);
Character enemy;
Weapon weapon;



//Weapon bow = Weapon("Arc", "arme a longue distance", Bow, 10, 20, 20);
//Weapon Dagger = Weapon("Dagger", "arme de poing", Bow, 10, 20, 20);
//Weapon Staff = Weapon("Staff", "arme efficace", Bow, 10, 20, 20);
//Weapon Sword = Weapon("Sword", "arme courte distance", Bow, 10, 20, 20);


void Choice();


void BuyWeapon() {
    cout << "Actuelement tu a " <<player.PlayerMoney()<< " pieces." <<" Toutes les armes sont a 20 pieces ! Que veut tu acheter ? " << endl;
    cout << "1 : Un arc" << endl;
    cout << "2 : Une dague" << endl;
    cout << "3 : Un staff" << endl;
    cout << "4 : Une epee" << endl;
    cout << "5 : Revenir au menu" << endl;
    int Banswer;

    do {
        cin >> Banswer;

        if (Banswer == 1) {
            player = Character(firstName, lastName, catchPhrase, 1000, 100, Bow, Race::Human, Work::Warrior);
            player.BuyWeapon();
            cout << "Bravo ! Tu as acheter un arc !" << endl;
        }
        else if (Banswer == 2) {
            player = Character(firstName, lastName, catchPhrase, 1000 - 20, 100, Dagger, Race::Human, Work::Warrior);
            player.BuyWeapon();
            cout << "Bravo ! Tu as acheter une Dague !" << endl;
        }
        else if (Banswer == 3) {
            player = Character(firstName, lastName, catchPhrase, 1000 - 20, 100, Staff, Race::Human, Work::Warrior);
            player.BuyWeapon();
            cout << "Bravo ! Tu as acheter un staff !" << endl;
        }
        else if (Banswer == 4) {
            player = Character(firstName, lastName, catchPhrase, 1000 - 20, 100 , Sword, Race::Human, Work::Warrior);
            player.BuyWeapon();
            cout << "Bravo ! Tu vient de remplacer ton encienne epee par une nouvelle !" << endl;
        }
        else if (Banswer == 5) {
            Choice();
        }
    } while (Banswer != 1 && Banswer != 2 && Banswer != 3 && Banswer != 4 && Banswer != 5);
}

void SellWeapon() {
    cout << "Quel arme veut tu vendre :" << endl;
    cout << "Tu a actuelement "<<player.PlayerMoney() << " pieces" << endl;
    cout << "1 : Un arc" << endl;
    cout << "2 : Une dague" << endl;
    cout << "3 : Un staff" << endl;
    cout << "4 : Une epee" << endl;
    int Banswer;

    do {
        cin >> Banswer;

        if (Banswer == 1) {
            player = Character(firstName, lastName, catchPhrase, 1000, 100, Default, Race::Human, Work::Warrior);
            player.SellWeapon();
            cout<< "Bravo ! Tu a vendu ton arc, tu a gagné 20 piece" << endl;
            cout << "Tu as maintenant" << player.PlayerMoney() << " pieces ! " << endl;
        }
        else if (Banswer == 2) {
            player = Character(firstName, lastName, catchPhrase, 1000, 100, Default, Race::Human, Work::Warrior);
            player.SellWeapon();
            cout << "Bravo ! Tu a vendu t'a dague, tu a gagné 20 piece" << endl;
            cout << "Tu as maintenant" << player.PlayerMoney() << " pieces ! " << endl;
        }
        else if (Banswer == 3) {
            player = Character(firstName, lastName, catchPhrase, 1000, 100, Default, Race::Human, Work::Warrior);
            player.SellWeapon();
            cout << "Bravo ! Tu a vendu ton staff, tu a gagné 20 piece" << endl;
            cout << "Tu as maintenant" << player.PlayerMoney() << " pieces ! " << endl;
        }
        else if (Banswer == 4) {
            player = Character(firstName, lastName, catchPhrase, 1000, 100, Default, Race::Human, Work::Warrior);
            player.SellWeapon();
            cout << "Bravo ! Tu a vendu ton epee, tu a gagné 20 piece" << endl;
            cout << "Tu as maintenant" << player.PlayerMoney() << " pieces ! " << endl;
        }
    } while (Banswer != 1 && Banswer != 2 && Banswer != 3 && Banswer != 4);
}

void ShowInventory() {
    cout << "Te voici dans ton inventaire " << player.GetName() << ", Mais ATTENTION..." << endl;
    cout << "Tes armes sont affiché sous forme de chiffre." << endl;
    cout << "(1) = arc,  (2) = Dague,  (3) = Staff,  (4) = sword" << endl;
    cout << "Voici ton inventaire : " << endl;
    cout << "tu as " << player.GetWeaponType() << endl;
    Choice();
    
}

void Fight() {
    Character enemy = Character("Rog", "Gor", "Je te vois je te tue", 0, 40, Sword, Race::Orc, Work::Warrior);
    cout << "BOUM ! BOUM ! BOUM !" << endl;
    cout << "Voici ton ennemie ! " << endl;
    cout << " Salut " << player.GetName() << " ! Je suis " << enemy.GetName() << ", J'ai " << enemy.GetLifePoints() <<" HP" << "et comme je dis toujours ..." << endl;
    cout << "Je te vois je te tue !!!" << endl;
    cout << "Attaque ton enemis avec ton arme ! Pour rappel tu a 100 HP et l'ennemie en a 40" << endl;
    cout << "Pour rappel ton arme fait 20 points de degats et le monstre aussi ! " << endl;
    cout << "(1) Frappe ton enemy en premier " << endl;
    cout << "(2) Laisse le te frapper en premier " << endl;
    int Fanswer;
    
    do {
        cin >> Fanswer;
        if (Fanswer == 1) {
            int Qanswer;
            enemy.OneHit();
            cout << "Bravo ! Tu a enlever 20 HP au monstre ! Il ne lui reste plus que " << enemy.GetHP() << " HP" << endl;
            cout << "Veut tu le finir en canalisent ta force ?" << endl;
            cout << "(1) : oui" << endl;
            cout << "(2) : non" << endl;
            cin >> Qanswer;
            if (Qanswer == 1) {
                enemy.OneHit();
                cout << "Bravo tu vient de lui infliger le coup fatale !! Tu a GAGNEEEEEEE !!!" << endl;
            }
            else if (Qanswer == 2) {
                int Manswer;
                player.OneHit();
                cout << "Le monstre vient de te mettre 20 points de degats ! Il te reste" << player.GetHP() << " HP" << endl;
                cin >> Manswer;
                cout << " (1) Frappe le en retour ! " << endl;
                if (Manswer == 1) {
                    enemy.OneHit();
                    cout << "Bravo tu vient de lui infliger le coup fatale !! Tu a GAGNEEEEEEE !!!" << endl;
                }
                
            }
           
        }
        else if (Fanswer == 2) {
            int Janswer;
            player.OneHit();
            cout << "Le monstre vient de te mettre 20 points de degats ! Il te reste" << player.GetHP()<< " HP" << endl;
            cout << " (1) Riposte !! " << endl;
            cin >> Janswer;
            if (Janswer == 1) {
                int kanswer;
                enemy.OneHit();
                cout << "Bravo tu vient de lui infliger 20 POINT DE DEGATS ! Il lui reste " << enemy.GetHP() << " HP" << endl;
                cin >> kanswer;
                cout << " (1) Fini le !!!" << endl;
                if (kanswer == 1) {
                    enemy.OneHit();
                    cout << "Bravo tu vient de lui infliger le coup fatale !! Tu a GAGNEEEEEEE !!!" << endl;
                }
                
            }
        }
    } while (Fanswer != 1 && Fanswer != 2 );
    
}


void TalkToMerchant() {
    cout << "Hola amigo je suis Syra le marchant, mon magazin ce s'appelle le PALACE. Je vent et achetes des armes ! Je suis sur que tu peut trouver ton bonheur ici !" << endl;
    cout << "Comme je dis souvent... Tant que tu as l'argent nous amis ! Hahahah" << endl;
    cout << "1 : Veut tu acheter une arme ? " << endl;
    cout << "2 : Veut tu vendre une arme ? " << endl;
    int Tanswer = 0;
    do {
        cin >> Tanswer;
        if (Tanswer == 1) {
            BuyWeapon();
        }
        else if (Tanswer == 2) {
            SellWeapon();
        }
    } while (Tanswer != 1 && Tanswer != 2);
    Choice();
}



void Choice() {
    cout << "Salut " << player.GetName() << " ! Tu est dans le menu" << endl;
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

