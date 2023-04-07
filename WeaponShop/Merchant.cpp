#include "Merchant.h"
#include "Weapon.h"


Merchant::Merchant(std::string FirstName, std::string ShopName, std::string Description, std::string CatchPhrase, Weapon Weapon[4], int Money) {

	mFirstName = FirstName;
	mShopName = ShopName;
	mDescription = Description;
	mCatchPhrase = CatchPhrase;
	Weapon = Weapon;
	mMoney = Money;




}
Merchant::Merchant() {

	mFirstName = "FirstName";
	mShopName = "ShopName";
	mDescription = "Description";
	mCatchPhrase = "CatchPhrase";
	mMoney = 0;

}


Merchant::~Merchant() {

}

