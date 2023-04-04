#pragma once
#include <string>
#include "Weapon.h"
using namespace std;



class Merchant
{

private:

	std::string mFirstName;
	std::string mShopName;
	std::string mDescription;
	std::string mCatchPhrase;
	Weapon mWeapon[4];
	int mMoney;
		
		

		

public:

	Merchant(std::string FirstName, std::string ShopName, std::string Description, std::string CatchPhrase, Weapon Weapon[4],int Money);
	Merchant();
	~Merchant();
    
};

