#pragma once
#include <string>

enum WeaponTypes
{
	Default,
	Bow,
	Dagger,
	Staff,
	Sword

};

class Weapon
{

	

private:
	std::string mName;
	std::string mDescription;
	WeaponTypes mWeaponType;
	int mWeight;
	int mDamages;
	int mBuyingCost;
	int mDurability;


public:
	
	Weapon(std::string Name, std::string Description, WeaponTypes WeaponType, int Weight, int BuyingCost, int Durability);
	Weapon();
	~Weapon();


	void Update();
	int GetWeapon();







};

