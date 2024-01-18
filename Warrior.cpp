#include "Warrior.h"

void Warrior::SetSaves() {

	if ((Level >= 1) && (Level <= 2)) {
		SavePPDM = 14;
		SaveRSW = 16;
		SavePetPoly = 15;
		SaveBreath = 17;
		SaveSpell = 17;
	}

	else if ((Level >= 3) && (Level <= 4)) {
		SavePPDM = 13;
		SaveRSW = 15;
		SavePetPoly = 14;
		SaveBreath = 16;
		SaveSpell = 16;
	}

	else if ((Level >= 5) && (Level <= 6)) {
		SavePPDM = 11;
		SaveRSW = 13;
		SavePetPoly = 12;
		SaveBreath = 13;
		SaveSpell = 14;
	}

	else if ((Level >= 7) && (Level <= 8)) {
		SavePPDM = 10;
		SaveRSW = 12;
		SavePetPoly = 11;
		SaveBreath = 12;
		SaveSpell = 13;
	}

	else if ((Level >= 9) && (Level <= 10)) {
		SavePPDM = 8;
		SaveRSW = 10;
		SavePetPoly = 9;
		SaveBreath = 9;
		SaveSpell = 11;
	}

	else if ((Level >= 11) && (Level <= 12)) {
		SavePPDM = 7;
		SaveRSW = 9;
		SavePetPoly = 8;
		SaveBreath = 8;
		SaveSpell = 10;
	}

	else if ((Level >= 13) && (Level <= 14)) {
		SavePPDM = 5;
		SaveRSW = 7;
		SavePetPoly = 6;
		SaveBreath = 5;
		SaveSpell = 8;
	}

	else if ((Level >= 15) && (Level <= 16)) {
		SavePPDM = 4;
		SaveRSW = 6;
		SavePetPoly = 5;
		SaveBreath = 4;
		SaveSpell = 7;
	}

	else if (Level >= 17) {
		SavePPDM = 3;
		SaveRSW = 5;
		SavePetPoly = 4;
		SaveBreath = 4;
		SaveSpell = 6;
	}

	if (ClassName == "Paladin") {
		SavePPDM -= 2;
		SaveRSW -= 2;
		SavePetPoly -= 2;
		SaveBreath -= 2;
		SaveSpell -= 2;
	}
}

void Warrior::StrAdjustment(int Str_in) {

	if (Str_in == 1) {
		ToHitAdj = -5;
		DmgAdj = -4;
		Carry = 1;
		MaxPress = 3;
		OpenDoor = 1;
		BBLG = 0;
	}

	else if (Str_in == 2) {
		ToHitAdj = -3;
		DmgAdj = -2;
		Carry = 1;
		MaxPress = 5;
		OpenDoor = 1;
		BBLG = 0;
	}

	else if (Str_in == 3) {
		ToHitAdj = -3;
		DmgAdj = -2;
		Carry = 5;
		MaxPress = 10;
		OpenDoor = 2;
		BBLG = 0;
	}

	else if ((Str_in == 4) || (Str_in == 5)) {
		ToHitAdj = -2;
		DmgAdj = -1;
		Carry = 10;
		MaxPress = 25;
		OpenDoor = 3;
		BBLG = 0;
	}

	else if ((Str_in == 6) || (Str_in == 7)) {
		ToHitAdj = -1;
		DmgAdj = 0;
		Carry = 20;
		MaxPress = 55;
		OpenDoor = 4;
		BBLG = 0;
	}

	else if ((Str_in == 8) || (Str_in == 9)) {
		ToHitAdj = 0;
		DmgAdj = 0;
		Carry = 35;
		MaxPress = 90;
		OpenDoor = 5;
		BBLG = 1;
	}

	else if ((Str_in == 10) || (Str_in == 11)) {
		ToHitAdj = 0;
		DmgAdj = 0;
		Carry = 40;
		MaxPress = 115;
		OpenDoor = 6;
		BBLG = 2;
	}

	else if ((Str_in == 12) || (Str_in == 13)) {
		ToHitAdj = 0;
		DmgAdj = 0;
		Carry = 45;
		MaxPress = 140;
		OpenDoor = 7;
		BBLG = 4;
	}

	else if ((Str_in == 14) || (Str_in == 15)) {
		ToHitAdj = 0;
		DmgAdj = 0;
		Carry = 55;
		MaxPress = 170;
		OpenDoor = 8;
		BBLG = 7;
	}

	else if (Str_in == 16) {
		ToHitAdj = 0;
		DmgAdj = 1;
		Carry = 70;
		MaxPress = 195;
		OpenDoor = 9;
		BBLG = 10;
	}

	else if (Str_in == 17) {
		ToHitAdj = 1;
		DmgAdj = 1;
		Carry = 85;
		MaxPress = 220;
		OpenDoor = 10;
		BBLG = 13;
	}

	else if ((Str_in == 18) && (ExceptionalStrength >= 1) && (ExceptionalStrength <= 50)) {
		ToHitAdj = 1;
		DmgAdj = 3;
		Carry = 135;
		MaxPress = 280;
		OpenDoor = 12;
		BBLG = 20;
	}

	else if ((Str_in == 18) && (ExceptionalStrength >= 51) && (ExceptionalStrength <= 75)) {
		ToHitAdj = 2;
		DmgAdj = 3;
		Carry = 160;
		MaxPress = 305;
		OpenDoor = 13;
		BBLG = 25;
	}

	else if ((Str_in == 18) && (ExceptionalStrength >= 76) && (ExceptionalStrength <= 90)) {
		ToHitAdj = 2;
		DmgAdj = 4;
		Carry = 185;
		MaxPress = 330;
		OpenDoor = 14;
		BBLG = 30;
	}

	else if ((Str_in == 18) && (ExceptionalStrength >= 91) && (ExceptionalStrength <= 99)) {
		ToHitAdj = 2;
		DmgAdj = 5;
		Carry = 235;
		MaxPress = 380;
		OpenDoor = 15;
		BBLG = 35;
	}

	else if ((Str_in == 18) && (ExceptionalStrength == 100)) {
		ToHitAdj = 3;
		DmgAdj = 6;
		Carry = 335;
		MaxPress = 480;
		OpenDoor = 16;
		BBLG = 40;
	}

}

void Warrior::ConAdjustment(int Con_in) {

	if (Con_in == 1) {
		HPAdj = -3;
		SystemShock = 25;
		Resurrection = 30;
		PoisonSaveAdj = -2;
	}

	else if (Con_in == 2) {
		HPAdj = -2;
		SystemShock = 30;
		Resurrection = 35;
		PoisonSaveAdj = -1;
	}

	else if (Con_in == 3) {
		HPAdj = -2;
		SystemShock = 35;
		Resurrection = 40;
		PoisonSaveAdj = 0;
	}

	else if (Con_in == 4) {
		HPAdj = -1;
		SystemShock = 40;
		Resurrection = 45;
		PoisonSaveAdj = 0;
	}

	else if (Con_in == 5) {
		HPAdj = -1;
		SystemShock = 45;
		Resurrection = 50;
		PoisonSaveAdj = 0;
	}

	else if (Con_in == 6) {
		HPAdj = -1;
		SystemShock = 50;
		Resurrection = 55;
		PoisonSaveAdj = 0;
	}

	else if (Con_in == 7) {
		HPAdj = 0;
		SystemShock = 55;
		Resurrection = 60;
		PoisonSaveAdj = 0;
	}

	else if (Con_in == 8) {
		HPAdj = 0;
		SystemShock = 60;
		Resurrection = 65;
		PoisonSaveAdj = 0;
	}

	else if (Con_in == 9) {
		HPAdj = 0;
		SystemShock = 65;
		Resurrection = 70;
		PoisonSaveAdj = 0;
	}

	else if (Con_in == 10) {
		HPAdj = 0;
		SystemShock = 70;
		Resurrection = 75;
		PoisonSaveAdj = 0;
	}

	else if (Con_in == 11) {
		HPAdj = 0;
		SystemShock = 75;
		Resurrection = 80;
		PoisonSaveAdj = 0;
	}

	else if (Con_in == 12) {
		HPAdj = 0;
		SystemShock = 80;
		Resurrection = 85;
		PoisonSaveAdj = 0;
	}

	else if (Con_in == 13) {
		HPAdj = 0;
		SystemShock = 85;
		Resurrection = 90;
		PoisonSaveAdj = 0;
	}

	else if (Con_in == 14) {
		HPAdj = 0;
		SystemShock = 88;
		Resurrection = 92;
		PoisonSaveAdj = 0;
	}

	else if (Con_in == 15) {
		HPAdj = 1;
		SystemShock = 90;
		Resurrection = 94;
		PoisonSaveAdj = 0;
	}

	else if (Con_in == 16) {
		HPAdj = 2;
		SystemShock = 95;
		Resurrection = 96;
		PoisonSaveAdj = 0;
	}

	else if (Con_in == 17) {
		HPAdj = 3;
		SystemShock = 97;
		Resurrection = 98;
		PoisonSaveAdj = 0;
	}

	else if (Con_in == 18) {
		HPAdj = 4;
		SystemShock = 99;
		Resurrection = 100;
		PoisonSaveAdj = 0;
	}

}

void Warrior::IntAdjustment(int Int_in) {

	if (Int_in == 1) {
		NumberOfLanguages = 0;
	}

	else if ((Int_in >= 2) && (Int_in <= 8)) {
		NumberOfLanguages = 1;
	}

	else if ((Int_in >= 9) && (Int_in <= 11)) {
		NumberOfLanguages = 2;
	}

	else if ((Int_in >= 12) && (Int_in <= 13)) {
		NumberOfLanguages = 3;
	}

	else if ((Int_in >= 14) && (Int_in <= 15)) {
		NumberOfLanguages = 4;
	}

	else if (Int_in == 16) {
		NumberOfLanguages = 5;
	}

	else if (Int_in == 17) {
		NumberOfLanguages = 6;
	}

	else if (Int_in == 18) {
		NumberOfLanguages = 7;
	}
}

void Warrior::WisAdjustment(int Wis_in) {

	if (Wis_in == 1) {
		MagicDefAdj = -6;
	}

	else if (Wis_in == 2) {
		MagicDefAdj = -4;
	}

	else if (Wis_in == 3) {
		MagicDefAdj = -3;
	}

	else if (Wis_in == 4) {
		MagicDefAdj = -2;
	}

	else if ((Wis_in >= 5) && (Wis_in <= 7)) {
		MagicDefAdj = -1;
	}

	else if ((Wis_in >= 8) && (Wis_in <= 14)) {
		MagicDefAdj = 0;
	}

	else if (Wis_in == 15) {
		MagicDefAdj = 1;
	}

	else if (Wis_in == 16) {
		MagicDefAdj = 2;
	}

	else if (Wis_in == 17) {
		MagicDefAdj = 3;
	}

	else if (Wis_in == 18) {
		MagicDefAdj = 4;
	}
}

void Warrior::LevelUp() {
	Level += 1;
	THAC0M -= 1;
	THAC0R -= 1;
	SetSaves();
	if (Level <= 10) {
		HP += DiceRoll(1, 10);
		HP += HPAdj;
	}

	else if (Level >= 11) {
		HP += 3;
	}

}
