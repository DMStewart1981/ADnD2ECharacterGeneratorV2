// ADnD2ECharacterGeneratorV2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include "BasicDefs.h"
#include "Character.h"
#include "Warrior.h"
#include "Mage.h"
#include "Priest.h"
#include "Rogue.h"



int main()
{

    Attributes Generator;

    std::cout << "Enter Character Name: " << std::endl;

    std::cin >> Generator.CharName;

    do {
        Generator.RollAttributes();
        std::cout << "STR = " << Generator.Str << std::endl;
        std::cout << "DEX = " << Generator.Dex << std::endl;
        std::cout << "CON = " << Generator.Con << std::endl;
        std::cout << "INT = " << Generator.Int << std::endl;
        std::cout << "WIS = " << Generator.Wis << std::endl;
        std::cout << "CHA = " << Generator.Cha << std::endl;
    } while ((Generator.Str < 9) && (Generator.Dex < 9) && (Generator.Int < 9) && (Generator.Wis < 9));

    Generator.CheckFighter();
    Generator.CheckPaladin();
    Generator.CheckRanger();
    Generator.CheckMage();
    Generator.CheckCleric();
    Generator.CheckDruid();
    Generator.CheckThief();
    Generator.CheckBard();

    do {

        std::cout << "Available Classes:" << std::endl;

        if (Generator.IsFighterAvailable) {
            std::cout << "Fighter" << std::endl;
        }

        if (Generator.IsPaladinAvailable) {
            std::cout << "Paladin" << std::endl;
        }

        if (Generator.IsRangerAvailable) {
            std::cout << "Ranger" << std::endl;
        }

        if (Generator.IsMageAvailable) {
            std::cout << "Mage" << std::endl;
        }

        if (Generator.IsClericAvailable) {
            std::cout << "Cleric" << std::endl;
        }

        if (Generator.IsDruidAvailable) {
            std::cout << "Druid" << std::endl;
        }

        if (Generator.IsThiefAvailable) {
            std::cout << "Thief" << std::endl;
        }

        if (Generator.IsBardAvailable) {
            std::cout << "Bard" << std::endl;
        }

        std::cout << "Choose from available Classes" << std::endl;


            std::cin >> Generator.Input;

        if (Generator.IsFighterAvailable && Generator.Input == "Fighter") {
            Generator.IsInputValid = true;
        }

        else if (Generator.IsRangerAvailable && Generator.Input == "Ranger") {
            Generator.IsInputValid = true;
        }

        else if (Generator.IsPaladinAvailable && Generator.Input == "Paladin") {
            Generator.IsInputValid = true;
        }

        else if (Generator.IsMageAvailable && Generator.Input == "Mage") {
            Generator.IsInputValid = true;
        }

        else if (Generator.IsClericAvailable && Generator.Input == "Cleric") {
            Generator.IsInputValid = true;
        }

        else if (Generator.IsDruidAvailable && Generator.Input == "Druid") {
            Generator.IsInputValid = true;
        }

        else if (Generator.IsThiefAvailable && Generator.Input == "Thief") {
            Generator.IsInputValid = true;
        }

        else if (Generator.IsBardAvailable && Generator.Input == "Bard") {
            Generator.IsInputValid = true;
        }

    } while (Generator.IsInputValid == false);

    Character *pc = nullptr;

    if ((Generator.Input == "Fighter") || (Generator.Input == "Paladin") || (Generator.Input == "Ranger")) {
        pc = new Warrior(Generator.Str, Generator.Dex, Generator.Con, Generator.Int, Generator.Wis, Generator.Cha, Generator.CharName, Generator.Input);
    }

    else if (Generator.Input == "Mage") {
        pc = new Mage(Generator.Str, Generator.Dex, Generator.Con, Generator.Int, Generator.Wis, Generator.Cha, Generator.CharName, Generator.Input);
    }

    else if ((Generator.Input == "Cleric") || (Generator.Input == "Druid")) {
        pc = new Priest(Generator.Str, Generator.Dex, Generator.Con, Generator.Int, Generator.Wis, Generator.Cha, Generator.CharName, Generator.Input);
    }

    else if ((Generator.Input == "Thief") || (Generator.Input == "Bard")) {
        pc = new Rogue(Generator.Str, Generator.Dex, Generator.Con, Generator.Int, Generator.Wis, Generator.Cha, Generator.CharName, Generator.Input);
    }

    int m = 0;
    int l = 0;

    std::cout << "Enter Level:" << std::endl;
    std::cin >> l;
    if (pc != nullptr) {
        for (m = 1; m < l; m++) {
            pc->LevelUp();
        }
    }

    std::ofstream output;
    output.open(pc->CharName + ".txt");
    output << "Name: " << pc->CharName << " Class: " << pc->ClassName << " Level: " << pc->Level << "\n";
    output << "STR " << pc->Str << "/" << pc->ExceptionalStrength << " Damage Adjustment " << pc->DmgAdj << " Carry " << pc->Carry << " Max Press " << pc->MaxPress << " Open Doors " << pc->OpenDoor << " Bend Bars/Lift Gates " << pc->BBLG << "\n";
    output << "DEX " << pc->Dex << " Initiative " << pc->InitiativeAdj << "\n";
    output << "CON " << pc->Con << " HP Adjustment " << pc->HPAdj << " System Shock % " << pc->SystemShock << " Resurrection Survival % " << pc->Resurrection << "\n";
    output << "INT " << pc->Int << " Languages " << pc->NumberOfLanguages << " Max Spell Level " << pc->MaxSpellLevel << " Chance To Learn (Arcane) " << pc->ChanceToLearn << " Max Spells per Level (Arcane) " << pc->MaxSpellPerLevel << "\n";
    output << "WIS " << pc->Wis << " Magic Defense Adjustment " << pc->MagicDefAdj << " Bonus Spells? " << pc->BonusSpells << " Spell Failure % (Divine) " << pc->SpellFail << "\n";
    output << "CHA " << pc->Cha << " Max Henchmen " << pc->MaxHench << " Leadership " << pc->LeadBase << " Reaction Adjustment " << pc->Reaction << "\n";
    output << "THAC0 - Melee " << pc->THAC0M << " THAC0 - Ranged " << pc->THAC0R << "\n";
    output << "Base AC " << pc->AC << " HP " << pc->HP << "\n";
    output << "Save vs PPDM " << pc->SavePPDM << " Save vs Rod/Staff/Wand " << pc->SaveRSW << " Save vs Petrification/Polymorph " << pc->SavePetPoly << " Save vs Breath Weapon " << pc->SaveBreath << " Save vs. Spell " << pc->SaveSpell << "\n";
    output.close();

    return 0;
};

