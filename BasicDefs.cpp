#include "BasicDefs.h"

int DiceRoll(int min, int max) {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(min, max);
	return dis(gen);
}

int Attributes::SingleStat() {
	int roll1 = DiceRoll(2, 6);
	int roll2 = DiceRoll(2, 6);
	int roll3 = DiceRoll(2, 6);
	int roll4 = DiceRoll(2, 6);
	int StatVector[4];
	StatVector[0] = roll1;
	StatVector[1] = roll2;
	StatVector[2] = roll3;
	StatVector[3] = roll4;

	//Bubble Sort algorithm to order from greatest to least

	int i;
	int j;
	int k;
	for (i = 0; i < 4; i++)
	{
		for (j = i + 1; j < 4; j++)
		{
			if (StatVector[j] > StatVector[i])
			{
				k = StatVector[i];
				StatVector[i] = StatVector[j];
				StatVector[j] = k;
			}
		}
	}
	return StatVector[0] + StatVector[1] + StatVector[2];
}

void Attributes::RollAttributes() {
	Str = SingleStat();
	Dex = SingleStat();
	Con = SingleStat();
	Int = SingleStat();
	Wis = SingleStat();
	Cha = SingleStat();
}

void Attributes::CheckFighter() {
	if (Str >= 9) {
		IsFighterAvailable = true;
	}
	else
	{
		IsFighterAvailable = false;
	}
}

void Attributes::CheckPaladin() {
	if ((Str >= 12) && (Con >= 9) && (Wis >= 13) && (Cha >= 17)) {
		IsPaladinAvailable = true;
	}
	else {
		IsPaladinAvailable = false;
	}
}

void Attributes::CheckRanger() {
	if ((Str >= 13) && (Dex >= 13) && (Con >= 14) && (Wis >= 14)) {
		IsRangerAvailable = true;
	}
	else {
		IsRangerAvailable = false;
	}
}

void Attributes::CheckMage() {
	if (Int >= 9) {
		IsMageAvailable = true;
	}
	else {
		IsMageAvailable = false;
	}
}

void Attributes::CheckCleric() {
	if (Wis >= 9) {
		IsClericAvailable = true;
	}
	else {
		IsClericAvailable = false;
	}
}

void Attributes::CheckDruid() {
	if ((Wis >= 12) && (Cha >= 15)) {
		IsDruidAvailable = true;
	}
	else {
		IsDruidAvailable = false;
	}
}

void Attributes::CheckThief() {
	if (Dex >= 9) {
		IsThiefAvailable = true;
	}
	else IsThiefAvailable = false;
}

void Attributes::CheckBard() {
	if ((Dex >= 12) && (Int >= 13) && (Cha >= 15)) {
		IsBardAvailable = true;
	}
	else IsBardAvailable = false;
}
