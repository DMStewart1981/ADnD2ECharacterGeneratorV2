#ifndef MAGE_H
#define MAGE_H
#include "Character.h"
#pragma once

class Mage : public Character {
public:
	Mage(int Str_in, int Dex_in, int Con_in, int Int_in, int Wis_in, int Cha_in, std::string CharName_in, std::string CharClass_in):
		Character(Str_in, Dex_in, Con_in, Int_in, Wis_in, Cha_in, CharName_in, "Mage") {
		HitDie = 4;

		StrAdjustment(Str);

		DexAdjustment(Dex);

		ConAdjustment(Con);

		IntAdjustment(Int);

		WisAdjustment(Wis);

		ChaAdjustment(Cha);

		HP = 4 + HPAdj;
	}

	void SetSaves();

	void StrAdjustment(int Str_in);

	void ConAdjustment(int Con_in);

	void IntAdjustment(int Int_in);

	void WisAdjustment(int Wis_in);

	void LevelUp();

};




#endif