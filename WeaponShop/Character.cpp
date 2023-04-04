#include "Character.h"
#include "Character.h"
#include "Weapon.h"
#include <iostream>


Character::Character(std::string FirstName, std::string LastName, std::string CatchPhrase, int Money, int LifePoints, WeaponTypes WeaponType, Race Race, Work Work) {

	mFirstName = FirstName;
	mLastName = LastName;
	mCatchPhrase = CatchPhrase;
	mMoney = Money;
	mLifePoints = LifePoints;
	mWeaponType = WeaponType;
	mRace = Race;
	mWork = Work;

}

Character::Character() {
	
}



