#include "Character.h"

void Character::DexAdjustment(int Dex_in) {
	if (Dex_in == 1) {
		InitiativeAdj = 6;
		MissileAdj = -6;
		ACAdj = 5;
	}

	else if (Dex_in == 2) {
		InitiativeAdj = 4;
		MissileAdj = -4;
		ACAdj = 5;
	}

	else if (Dex_in == 3) {
		InitiativeAdj = 3;
		MissileAdj = -3;
		ACAdj = 4;
	}

	else if (Dex_in == 4) {
		InitiativeAdj = 2;
		MissileAdj = -2;
		ACAdj = 3;
	}

	else if (Dex_in == 5) {
		InitiativeAdj = 1;
		MissileAdj = -1;
		ACAdj = 2;
	}

	else if (Dex_in == 6) {
		InitiativeAdj = 0;
		MissileAdj = 0;
		ACAdj = 1;
	}

	else if (Dex_in == 15) {
		InitiativeAdj = 0;
		MissileAdj = 0;
		ACAdj = -1;
	}

	else if (Dex_in == 16) {
		InitiativeAdj = -1;
		MissileAdj = 1;
		ACAdj = -2;
	}

	else if (Dex_in == 17) {
		InitiativeAdj = -2;
		MissileAdj = 2;
		ACAdj = -3;
	}

	else if (Dex_in == 18) {
		InitiativeAdj = -2;
		MissileAdj = 2;
		ACAdj = -4;
	}
}

void Character::ChaAdjustment(int Cha_in) {

	if (Cha_in == 1) {
		MaxHench = 0;
		LeadBase = -8;
		Reaction = -7;
	}

	else if (Cha_in == 2) {
		MaxHench = 1;
		LeadBase = -7;
		Reaction = -6;
	}

	else if (Cha_in == 3) {
		MaxHench = 1;
		LeadBase = -6;
		Reaction = -5;
	}

	else if (Cha_in == 4) {
		MaxHench = 1;
		LeadBase = -5;
		Reaction = -4;
	}

	else if (Cha_in == 5) {
		MaxHench = 2;
		LeadBase = -4;
		Reaction = -3;
	}

	else if (Cha_in == 6) {
		MaxHench = 2;
		LeadBase = -3;
		Reaction = -2;
	}

	else if (Cha_in == 7) {
		MaxHench = 3;
		LeadBase = -2;
		Reaction = -1;
	}

	else if (Cha_in == 8) {
		MaxHench = 3;
		LeadBase = -1;
		Reaction = 0;
	}

	else if ((Cha_in >= 9) && (Cha_in <= 11)) {
		MaxHench = 4;
		LeadBase = 0;
		Reaction = 0;
	}

	else if (Cha_in == 12) {
		MaxHench = 5;
		LeadBase = 0;
		Reaction = 1;
	}

	else if (Cha_in == 13) {
		MaxHench = 5;
		LeadBase = 0;
		Reaction = 1;
	}

	else if (Cha_in == 14) {
		MaxHench = 6;
		LeadBase = 1;
		Reaction = 2;
	}

	else if (Cha_in == 15) {
		MaxHench = 7;
		LeadBase = 3;
		Reaction = 3;
	}

	else if (Cha_in == 16) {
		MaxHench = 8;
		LeadBase = 4;
		Reaction = 5;
	}

	else if (Cha_in == 17) {
		MaxHench = 10;
		LeadBase = 6;
		Reaction = 6;
	}

	else if (Cha_in == 18) {
		MaxHench = 15;
		LeadBase = 8;
		Reaction = 7;
	}

}
