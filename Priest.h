#ifndef PRIEST_H
#define PRIEST_H
#include "Character.h"
#pragma once

class Priest : public Character { 
public:
	Priest(int Str_in, int Dex_in, int Con_in, int Int_in, int Wis_in, int Cha_in, std::string CharName_in, std::string ClassName_in) :
		Character(Str_in, Dex_in, Con_in, Int_in, Wis_in, Cha_in, CharName_in, ClassName_in) {

		HitDie = 8;

		StrAdjustment(Str);

		DexAdjustment(Dex);

		ConAdjustment(Con);

		IntAdjustment(Int);

		WisAdjustment(Wis);

		ChaAdjustment(Cha);

		HP = 8 + HPAdj;

	};

	void SetSaves();;

	void WisAdjustment(int Wis_in);;

	void StrAdjustment(int Str_in);

	void ConAdjustment(int Con_in);

	void IntAdjustment(int Int_in);;

	void LevelUp();;
};


#endif