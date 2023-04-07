#pragma once
#include <string>
#include "Weapon.h"
using namespace std;

enum Race
{
	Human,
	Goblelin,
	Elf,
	Orc,
	Dwarf
};

enum Work {
	Archer,
	Warrior,
	Priest,
	Paladin
};

class Character
{
	

private:
	std::string mFirstName;
	std::string mLastName;
	std::string mCatchPhrase;
	int mMoney;
	int mLifePoints;
	WeaponTypes mWeaponType;
	Race mRace;
	Work mWork;

public:

	Character(std::string FirstName, std::string LastName, std::string CatchPhrase, int Money, int LifePoints, WeaponTypes WeaponType, Race Race, Work Work);
	Character();
	
	~Character();



	int PlayerMoney();
	string GetName();
	int GetWeaponType();
	int GetLifePoints();
	int BuyWeapon();
	int SellWeapon();
	int GetHP();
	int OneHit();
	

};

