#include "header.h"
using namespace std;
#include "defines.h"

#include "./classes/classLivingObject.cpp"
#include "./classes/classSkill.cpp"
#include "./classes/classPlayer.cpp"
#include "./classes/classEnemy.cpp"
#include "functionDeclarations.cpp"

int main() //###################################################################################################################################################################
{
    int lvlCleared = 0;
    int gameEndedFlag = 1;
    string playerInput;

    Player me;

    //    Skill(string nname,
    //           string ttype,
    //           int physical_damage,
    //           int magical_damage,
    //           int terror_effect,
    //           int seduction_effect)
    //     {

    // Skill fireBall("Fire Ball", MAGIC_TYPE_STRING, 100, 300, 20, 0);
    // Skill swordSlach("Sword Slash", PHYSICAL_TYPE_STRING, 400, 10, 60, 0);
    // Skill hellFire("Hell Fire", MAGIC_TYPE_STRING, 50, 3000, 200, 0);
    // Skill TerrorRain("Terror rain", MAGIC_TYPE_STRING, 0, 0, 3000, 0);
    // // dogo skills
    // Skill bite("Bite", PHYSICAL_TYPE_STRING, 35, 0, 0, 0);
    // Skill howl("Howl", PHYSICAL_TYPE_STRING, 0, 0, 100, 0);

    bestowSkillAcordingToLevel(&me);
    me.setHp(200);
    me.setExp(0);
    me.setMoney(me.getMoney() + 100);
    cout << "welcome sir" << endl;

    while (gameEndedFlag)
    {
        print();
        printPlayerStats(&me);

        cin >> playerInput;
        cout << "you have entered: " << str_to_int(playerInput);
        switch (str_to_int(playerInput))
        {
        case 1:
            lvlCleared = level1(&me);
            break;
        case 2:
            lvlCleared = level2(&me);
            break;
        case 3:
            lvlCleared = level3(&me);
            break;
        case 4:
            lvlCleared = level4(&me);
            break;
        case 100:
            town(&me);
            break;
        case 101:
            helpPrint();
            break;
        case 102:
            quickSave(&me);
            break;
        case 103:
            quickLoad(&me);
            break;
        case 0:
            return 0;
        }
        if (lvlCleared)
        {
            fancyPrint("lvl cleared");
        }
        else if (!lvlCleared)
        {
            cout << "lvl failed" << endl;
        }
        cout << "enter if you want to continue 1 or 0 for exit from game\t";
        if (me.getHp() < HP_LVL0)
        {
            me.setHp(HP_LVL0);
        }

        cin >> gameEndedFlag;
    }
    fancyPrint("bye bye :)");
    return 0;
} //#########################################################################################################################################################################################

#include "levels.cpp"
#include "printFunctions.cpp"
#include "battleFunction.cpp"
#include "SaveLoadFun.cpp"
#include "bestowSkillAcordingToLevel.cpp"
#include "./townStores/armorStore.cpp"
#include "./townStores/healthStore.cpp"
#include "helperFunctions.cpp"
