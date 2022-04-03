#pragma once
void helpPrint()
{
    CLR_SCREEN;
    cout << "\t+++++++++++++++++++++++++++help++++++++++++++++++++++++++++++" << endl;
    cout << "\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "\t++++ hello welcome to the game if you are here that means +++" << endl;
    cout << "\t++++ something went wrong the way you need to play this  ++++" << endl;
    cout
        << "\t+++++ game is like so:                                  +++++" << endl;
    cout << "\t+++++                                                   +++++" << endl;
    cout << "\t+++++   use numbers for choices                         +++++" << endl;
    cout << "\t+++++   you activate a skill depending on a number      +++++" << endl;
    cout << "\t+++++   try not to enter anything weird as game isn't   +++++" << endl;
    cout << "\t+++++   robust                                          +++++" << endl;
    cout << "\t+++++                                                   +++++" << endl;
    cout << "\t+++++   try to have fun                                 +++++" << endl;
    cout << "\t+++++                                                   +++++" << endl;
    cout << "\t+++++   I recommend using town option for healing and   +++++" << endl;
    cout << "\t+++++   I getting armor as it can help you a lot...     +++++" << endl;
    cout << "\t+++++                                                   +++++" << endl;
    cout << "\t+++++   some levels are difficult so you need to level up++++" << endl;
    cout << "\t+++++   as much as you can before                       +++++" << endl;
    cout << "\t+++++                                                   +++++" << endl;
    cout << "\t+++++   the game has some bug where it just turns of    +++++" << endl;
    cout << "\t+++++   try save as much as possible                    +++++" << endl;
    cout << "\t+++++                                                   +++++" << endl;
    cout << "\t+++++   currently there is one save                     +++++" << endl;
    cout << "\t+++++                                                   +++++" << endl;
    cout << "\t+++++   you can copy paste saves from temp.save file    +++++" << endl;
    cout << "\t+++++   somewhere safe and when you want to load        +++++" << endl;
    cout << "\t+++++   paste to temp.save file like that you can have  +++++" << endl;
    cout << "\t+++++   multiple saves                                  +++++" << endl;
    cout << "\t+++++                                                   +++++" << endl;
    cout << "\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl
         << endl;

    cout << "\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "\t++++++   developed by AT   email:atodor00@fesb.hr      ++++++" << endl;
    cout << "\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl
         << endl
         << endl
         << endl;
    SLEEP_FOR_1000MS;
}
int print() // svi leveli su moguci ali sa malim stats-ima nisu riješivi
{
    CLR_SCREEN;
    cout << BCYN << "*********************" << endl;
    cout << "za level 1 birajte 1 " << endl;
    cout << YEL << "tutorial             " << BCYN << endl;
    cout << "*********************" << endl;
    cout << "za level 2 birajte 2 " << endl;
    cout << BLU << "angry doggo pack            " << BCYN << endl;
    cout << "*********************" << endl;
    cout << "za level 3 birajte 3 " << endl;
    cout << RED << "IRLIS'S terittory    " << BCYN << endl;
    cout << "*********************" << endl;
    cout << "za level 4 birajte 4 " << endl;
    cout << RED << "IRLIS'S follower hunt    " << BCYN << endl;
    cout << "*********************" << endl;
    cout << "za level 5 birajte 5 " << endl;
    cout << GRN << "goblin cave          " << BCYN << endl;
    cout << "*********************" << endl;
    cout << "za level 6 birajte 6 " << endl;
    cout << "slime forrest        " << endl;
    cout << "---------------------" << NC << endl;

    cout << "za TOWN birajte 100 " << endl;
    cout << "za HELP birajte 101 " << endl;
    cout << YEL << "za Q. SAVE birajte 102 " << endl;
    cout << GRN << "za Q. LOAD birajte 103 " << NC << endl;
    cout << "*********************" << endl;
    cout << "ako je neka rijec ili 0 biti ce zavrsena igra " << endl;
}
int printPlayerStats(Player *me)
{
    int stage = 1;

    cout << endl;
    if (me->getName() != "")
    {
        if (me->getLvl() == 0)
        {

            cout << "......you-> " << me->getName() << ".........." << endl;
        }
        else
        {
            cout << "..........: " << me->getName() << ".........." << endl;
        }
    }
    else
    {
        cout << ".......stats......" << endl;
    }

    cout << " stage: " << stage << endl;
    cout << " mp  " << me->getMp() << endl;
    cout << " hp  " << me->getHp() << endl;
    cout << " ap  " << me->getAp() << endl;
    cout << " lvl " << me->getLvl() << endl;
    cout << " exp " << me->getExp() << endl;
    cout << " money " << me->getMoney() << " Tr [Trojs]" << endl;
    cout << " skill count: " << me->getSkillCount() << endl;
    printPlayerSkills(me);
    cout << ".................." << endl;
}
int printPlayerStats(Player *me, Enemy *them)
{

    CLR_SCREEN;
    printPlayerStats(me);

    cout << endl
         << "........enemy: " << them->getName() << ".........." << endl;
    cout << " mp  " << them->getMp() << endl;
    cout << " ap  " << them->getAp() << endl;
    cout << " hp  " << them->getHp() << endl;
    cout << " lvl " << them->getLvl() << endl;
    cout << " exp " << them->getExp() << endl;
    cout << " money " << them->getMoney() << " Tr [Trojs]" << endl;
    cout << "..................." << endl;
    return 1;
}
void printPlayerSkills(Player *me)
{
    Skill mySkills[20];
    cout << endl
         << "....skill list...." << endl;
    for (int i = 0; i < me->getSkillCount(); i++)
    {
        cout << i + 1 << " " << me->getSkill(i).getName() << " dmg: " << me->getSkill(i).getphysical_damage() << endl;
    }
}

void townPrintOfPaths()
{
    CLR_SCREEN;
    cout << "*********************" << endl;
    cout << BLU << "1 for Armor Shop     " << NC << endl;
    cout << RED << "2 for Health Shop " << NC << endl;
    cout << "*********************" << endl;
    cout << "ako je neka rijec ili 0 biti ce zavrsen posjet gradu" << endl;
}

void fancyPrint(string s)
{
    int l = s.length();

    CLR_SCREEN
    cout << endl
         << "  ";
    for (int i = 0; i < l + 3; i++)
    {
        cout << "*";
    }
    cout << endl
         << "  ";

    cout << "*" << s << " *" << endl
         << "  ";
    for (int i = 0; i < l + 3; i++)
    {
        cout << "*";
    }
    cout << endl
         << endl;
    SLEEP_FOR_1000MS;
    PRESS_ANY_KEY;
}

void fancyPrintNoPress(string s)
{
    int l = s.length();

    CLR_SCREEN
    cout << endl
         << "  ";
    for (int i = 0; i < l + 3; i++)
    {
        cout << "*";
    }
    cout << endl
         << "  ";

    cout << "*" << s << " *" << endl
         << "  ";
    for (int i = 0; i < l + 3; i++)
    {
        cout << "*";
    }
    cout << endl
         << endl;
    SLEEP_FOR_2000MS;
}

void titlePrint()
{
    CLR_SCREEN

    cout << YEL << "\n\n\t\t**************************************************************************************************************************" << endl;
    cout << "\t\t*      ><       ><<<<<<<    ><<<<<    ><<    ><<<<     ><<<     ><<                                                      *" << endl;
    cout << "\t\t*     >< <<     ><<    ><<  ><<   ><< ><<  ><<    ><<  >< ><<   ><<                                                      *" << endl;
    cout << "\t\t*    ><  ><<    ><<    ><<  ><<    ><<><<><<        ><<><< ><<  ><<                                                      *" << endl;
    cout << "\t\t*   ><<   ><<   >< ><<      ><<    ><<><<><<        ><<><<  ><< ><<                                                      *" << endl;
    cout << "\t\t*  ><<<<<< ><<  ><<  ><<    ><<    ><<><<><<        ><<><<   >< ><<                                                      *" << endl;
    cout << "\t\t* ><<       ><< ><<    ><<  ><<   ><< ><<  ><<     ><< ><<    >< <<                                                      *" << endl;
    cout << "\t\t*><<         ><<><<      ><<><<<<<    ><<    ><<<<     ><<      ><<                                                      *" << endl;
    cout << "\t\t*       ><       ><<<<<    ><<         ><<      ><       ><<<     ><<><<<<<    ><<     ><<><<<<<<<    ><<<<<<<<  ><< <<  *" << endl;
    cout << "\t\t*      >< <<     ><<   ><<  ><<       ><<      >< <<     >< ><<   ><<><<   ><< ><<     ><<><<    ><<  ><<      ><<    ><<*" << endl;
    cout << "\t\t*     ><  ><<    ><<    ><<  ><<     ><<      ><  ><<    ><< ><<  ><<><<    ><<><<     ><<><<    ><<  ><<       ><<      *" << endl;
    cout << "\t\t*    ><<   ><<   ><<    ><<   ><<   ><<      ><<   ><<   ><<  ><< ><<><<    ><<><<     ><<>< ><<      ><<<<<<     ><<    *" << endl;
    cout << "\t\t*   ><<<<<< ><<  ><<    ><<    ><< ><<      ><<<<<< ><<  ><<   >< ><<><<    ><<><<     ><<><<  ><<    ><<            ><< *" << endl;
    cout << "\t\t*  ><<       ><< ><<   ><<      ><<<<      ><<       ><< ><<    >< <<><<   ><< ><<     ><<><<    ><<  ><<      ><<    ><<*" << endl;
    cout << "\t\t* ><<         ><<><<<<<          ><<      ><<         ><<><<      ><<><<<<<      ><<<<<   ><<      ><<><<<<<<<<  ><< <<  *" << endl;
    cout << "\t\t**************************************************************************************************************************" << NC << endl;
    SLEEP_FOR_2000MS;
    SLEEP_FOR_2000MS;
}
void deathPrint()
{

    for (int i = 2; i < 12; i++)
    {
        if (i % 2)
        {
            CLR_SCREEN
            cout << "\n\n\t\t****************#*****************" << endl;
            cout << "\t\t**************#####***************" << endl;
            cout << "\t\t****************#*****************" << endl;
            cout << "\t\t****************#*****************" << endl;
            cout << "\t\t*      _         _ ) o  _   _ ) *" << endl;
            cout << "\t\t* (_( (_) (_(   (_(  ( )_) (_(  *" << endl;
            cout << "\t\t*   _)                (_        *" << endl;
            cout << "\t\t*********************************" << endl
                 << endl;
            SLEEP_FOR_400MS;
        }
        else
        {
            CLR_SCREEN
            SLEEP_FOR_100MS;
        }
    }
    SLEEP_FOR_2000MS;
}