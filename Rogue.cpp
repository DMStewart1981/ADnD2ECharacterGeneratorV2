#include "Rogue.h"

void Rogue::SetSaves() {

	if ((Level >= 1) && (Level <= 4)) {
		SavePPDM = 13;
		SaveRSW = 14;
		SavePetPoly = 12;
		SaveBreath = 16;
		SaveSpell = 15;
	}

	else if ((Level >= 5) && (Level <= 8)) {
		SavePPDM = 12;
		SaveRSW = 12;
		SavePetPoly = 11;
		SaveBreath = 15;
		SaveSpell = 13;
	}

	else if ((Level >= 9) && (Level <= 12)) {
		SavePPDM = 11;
		SaveRSW = 10;
		SavePetPoly = 10;
		SaveBreath = 14;
		SaveSpell = 11;
	}

	else if ((Level >= 13) && (Level <= 16)) {
		SavePPDM = 10;
		SaveRSW = 8;
		SavePetPoly = 9;
		SaveBreath = 13;
		SaveSpell = 19;
	}

	else if ((Level >= 17) && (Level <= 20)) {
		SavePPDM = 9;
		SaveRSW = 6;
		SavePetPoly = 8;
		SaveBreath = 12;
		SaveSpell = 7;
	}

	else if (Level > 20) {
		SavePPDM = 8;
		SaveRSW = 4;
		SavePetPoly = 7;
		SaveBreath = 11;
		SaveSpell = 5;
	}

}

void Rogue::StrAdjustment(int Str_in) {

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

	else if (Str_in == 18) {
		ToHitAdj = 1;
		DmgAdj = 2;
		Carry = 110;
		MaxPress = 255;
		OpenDoor = 11;
		BBLG = 16;
	}

}

void Rogue::ConAdjustment(int Con_in) {

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
		HPAdj = 2;
		SystemShock = 97;
		Resurrection = 98;
		PoisonSaveAdj = 0;
	}

	else if (Con_in == 18) {
		HPAdj = 2;
		SystemShock = 99;
		Resurrection = 100;
		PoisonSaveAdj = 0;
	}

}

void Rogue::IntAdjustment(int Int_in) {

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

void Rogue::WisAdjustment(int Wis_in) {

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

void Rogue::LevelUp() {
	Level += 1;
	if (Level <= 10) {
		HP += DiceRoll(1, 6);
		HP += HPAdj;
	}

	else if (Level > 10) {
		HP += 2;
	}

	if ((Level == 1) || (Level == 2)) {
		THAC0M = 20;
		THAC0R = 20;
	}

	else if ((Level == 3) || (Level == 4)) {
		THAC0M = 19;
		THAC0R = 19;
	}

	else if ((Level == 5) || (Level == 6)) {
		THAC0M = 18;
		THAC0R = 18;
	}

	else if ((Level == 7) || (Level == 8)) {
		THAC0M = 17;
		THAC0R = 17;
	}

	else if ((Level == 9) || (Level == 10)) {
		THAC0M = 16;
		THAC0R = 16;
	}

	else if ((Level == 11) || (Level == 12)) {
		THAC0M = 15;
		THAC0R = 15;
	}

	else if ((Level == 13) || (Level == 14)) {
		THAC0M = 14;
		THAC0R = 14;
	}

	else if ((Level == 15) || (Level == 16)) {
		THAC0M = 13;
		THAC0R = 13;
	}

	else if ((Level == 17) || (Level == 18)) {
		THAC0M = 12;
		THAC0R = 12;
	}

	else if ((Level == 19) || (Level == 20)) {
		THAC0M = 11;
		THAC0R = 11;
	}

	THAC0M -= ToHitAdj;
	THAC0R -= MissileAdj;
}
