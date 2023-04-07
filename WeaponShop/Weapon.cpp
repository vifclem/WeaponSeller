#include "Weapon.h"
#include <iostream>
#include <string>





Weapon::Weapon(std::string Name, std::string Description, WeaponTypes WeaponType, int Weight, int BuyingCost, int Damages, int Durability) {
	mName = Name;
	mDescription = Description;
	mWeaponType = WeaponType;
	mWeight = Weight;
	mDamages = Damages;
	mBuyingCost = BuyingCost;
	mDurability = Durability;

	}

Weapon::Weapon(){

	mName = "Default";
	mDescription = "Default";
	mWeaponType = Default;
	mWeight = 1;
    mBuyingCost = 1;
	mDurability = 1;
}

 


Weapon::~Weapon() {

}

int Weapon::GetWeapon() {
	return mWeaponType;
}







