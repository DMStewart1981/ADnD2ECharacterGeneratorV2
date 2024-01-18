#ifndef BASICDEFS_H
#define BASICDEFS_H
#pragma once
#include <random>

int DiceRoll(int min, int max);

class Attributes {

public:
    Attributes() : Str(0), Dex(0), Con(0), Int(0), Wis(0), Cha(0), CharName(),
        IsFighterAvailable(false), IsPaladinAvailable(false), IsRangerAvailable(false), IsMageAvailable(false),
        IsClericAvailable(false), IsDruidAvailable(false), IsThiefAvailable(false), IsBardAvailable(false),
        Input(), IsInputValid(false) {};
        // Defining basic functions and global variables to be used throughout the generator

public:
    int Str;
    int Dex;
    int Con;
    int Int;
    int Wis;
    int Cha;
    std::string CharName = "";
    bool IsFighterAvailable;
    bool IsPaladinAvailable;
    bool IsRangerAvailable;
    bool IsMageAvailable;
    bool IsClericAvailable;
    bool IsDruidAvailable;
    bool IsThiefAvailable;
    bool IsBardAvailable;
    std::string Input;
    bool IsInputValid;

    int SingleStat();

    void RollAttributes();;

    void CheckFighter();;
    void CheckPaladin();;
    void CheckRanger();;
    void CheckMage();;
    void CheckCleric();;
    void CheckDruid();;
    void CheckThief();;
    void CheckBard();;

};

#endif