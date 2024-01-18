#ifndef CHARACTER_H
#define CHARACTER_H
#include "BasicDefs.h"
#pragma once

class Character
{
public:
	Character(int Str_in, int Dex_in, int Con_in, int Int_in, int Wis_in, int Cha_in, std::string CharName_in, std::string ClassName_in) :HP(0),
		Str(Str_in), Dex(Dex_in), Con(Con_in), Int(Int_in), Wis(Wis_in), Cha(Cha_in), CharName(CharName_in), ClassName(ClassName_in),
		AC(10), THAC0M(20), THAC0R(20), SavePPDM(0), SaveRSW(0), SavePetPoly(0), SaveBreath(0), SaveSpell(0), ExceptionalStrength(0),
		ToHitAdj(10), DmgAdj(10), Carry(0), MaxPress(0), OpenDoor(0), BBLG(0),
		InitiativeAdj(0), MissileAdj(0), ACAdj(0),
		HPAdj(10), SystemShock(0), Resurrection(0), PoisonSaveAdj(10),
		NumberOfLanguages(-1), MaxSpellLevel(-1), ChanceToLearn(-1), MaxSpellPerLevel(-1),
		MagicDefAdj(10), BonusSpells(false), SpellFail(-1),
		MaxHench(-1), LeadBase(-10), Reaction(-10),
		HitDie(0), Level(1) {};
public:
	int Str;
	int Dex;
	int Con;
	int Int;
	int Wis;
	int Cha;
	std::string CharName;
	std::string ClassName;
	int Level;
	// To Hit Armor Class 0 (Melee/Ranged)
	int THAC0M;
	int THAC0R;
	//Saving Throws
	int SavePPDM; //Paralyze, Poison, Death Magic
	int SaveRSW; //Rod, Staff, Wand
	int SavePetPoly; //Petrification and Polymorph
	int SaveBreath;
	int SaveSpell;
	int ExceptionalStrength;
	int HP;
	int AC;
	int HitDie;
	//Strength Characteristics
	int ToHitAdj;
	int DmgAdj;
	int Carry;
	int MaxPress;
	int OpenDoor;
	int BBLG;
	//Dexterity Characteristics
	int InitiativeAdj;
	int MissileAdj;
	int ACAdj;
	//Constitution Characteristics
	int HPAdj;
	int SystemShock;
	int Resurrection;
	int PoisonSaveAdj;
	//Intelligence Characteristics
	int NumberOfLanguages;
	int MaxSpellLevel;
	int ChanceToLearn;
	int MaxSpellPerLevel;
	//Wisdom Characteristics
	int MagicDefAdj;
	bool BonusSpells;
	int SpellFail;
	//Charisma Characteristics
	int MaxHench;
	int LeadBase;
	int Reaction;
	virtual void SetSaves() = 0;
	virtual void StrAdjustment(int Str_in) = 0;
	virtual void ConAdjustment(int Con_in) = 0;
	virtual void IntAdjustment(int Int_in) = 0;
	virtual void WisAdjustment(int Wis_in) = 0;
	virtual void LevelUp() = 0;
	Attributes Foo_Attrib;


	void DexAdjustment(int Dex_in);;

	void ChaAdjustment(int Cha_in);
};
#endif