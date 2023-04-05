#include "Weapon.h"
#include <iostream>




Weapon::Weapon(std::string Name, std::string Description, WeaponTypes WeaponType, int Weight, int BuyingCost, int Durability) {
	mName = Name;
	mDescription = Description;
	mWeaponType = WeaponType;
	mWeight = Weight;
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






