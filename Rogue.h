#ifndef ROGUE_H
#define ROGUE_H
#include "Character.h"
#pragma once

class Rogue : public Character {
public:
	Rogue(int Str_in, int Dex_in, int Con_in, int Int_in, int Wis_in, int Cha_in, std::string CharName_in, std::string ClassName_in) :
		Character(Str_in, Dex_in, Con_in, Int_in, Wis_in, Cha_in, CharName_in, ClassName_in) {

		HitDie = 6;

		StrAdjustment(Str);

		DexAdjustment(Dex);

		ConAdjustment(Con);

		IntAdjustment(Int);

		WisAdjustment(Wis);

		ChaAdjustment(Cha);

		HP = 6 + HPAdj;

	};

	void SetSaves();

	void StrAdjustment(int Str_in);

	void ConAdjustment(int Con_in);

	void IntAdjustment(int Int_in);;

	void WisAdjustment(int Wis_in);

	void LevelUp();

};

#endif