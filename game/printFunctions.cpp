#pragma once
void helpPrint()
{
    CLR_SCREEN;
    cout << "++++++++++++++++++++help+++++++++++++++++++++++++++++++" << endl;
    cout << "+++                                                 +++" << endl;
    cout << "+++ use numbers to give input                       +++" << endl;
    // cout << "+++ by solving stages you get experience            +++" << endl;
    cout << "+++ experience is gained from killing               +++" << endl;
    cout << "+++  enemy/monsters                                 +++" << endl;

    cout << "+++                                                 +++" << endl;
    cout << "+++ dragon is the hardest boss after you beat him   +++" << endl;
    cout << "+++ you are victorious in this game                 +++" << endl;
    cout << "+++                                                 +++" << endl;
    cout << "+++ if you hit wrong skill number it will be as if  +++" << endl;
    cout << "+++ you missed                                      +++" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "+++   developed by AT   email:atodor00@fesb.hr      +++" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl
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
    cout << YEL << "**************************************************************************************************************************" << endl;
    cout << "*      ><       ><<<<<<<    ><<<<<    ><<    ><<<<     ><<<     ><<                                                      *" << endl;
    cout << "*     >< <<     ><<    ><<  ><<   ><< ><<  ><<    ><<  >< ><<   ><<                                                      *" << endl;
    cout << "*    ><  ><<    ><<    ><<  ><<    ><<><<><<        ><<><< ><<  ><<                                                      *" << endl;
    cout << "*   ><<   ><<   >< ><<      ><<    ><<><<><<        ><<><<  ><< ><<                                                      *" << endl;
    cout << "*  ><<<<<< ><<  ><<  ><<    ><<    ><<><<><<        ><<><<   >< ><<                                                      *" << endl;
    cout << "* ><<       ><< ><<    ><<  ><<   ><< ><<  ><<     ><< ><<    >< <<                                                      *" << endl;
    cout << "*><<         ><<><<      ><<><<<<<    ><<    ><<<<     ><<      ><<                                                      *" << endl;
    cout << "*       ><       ><<<<<    ><<         ><<      ><       ><<<     ><<><<<<<    ><<     ><<><<<<<<<    ><<<<<<<<  ><< <<  *" << endl;
    cout << "*      >< <<     ><<   ><<  ><<       ><<      >< <<     >< ><<   ><<><<   ><< ><<     ><<><<    ><<  ><<      ><<    ><<*" << endl;
    cout << "*     ><  ><<    ><<    ><<  ><<     ><<      ><  ><<    ><< ><<  ><<><<    ><<><<     ><<><<    ><<  ><<       ><<      *" << endl;
    cout << "*    ><<   ><<   ><<    ><<   ><<   ><<      ><<   ><<   ><<  ><< ><<><<    ><<><<     ><<>< ><<      ><<<<<<     ><<    *" << endl;
    cout << "*   ><<<<<< ><<  ><<    ><<    ><< ><<      ><<<<<< ><<  ><<   >< ><<><<    ><<><<     ><<><<  ><<    ><<            ><< *" << endl;
    cout << "*  ><<       ><< ><<   ><<      ><<<<      ><<       ><< ><<    >< <<><<   ><< ><<     ><<><<    ><<  ><<      ><<    ><<*" << endl;
    cout << "* ><<         ><<><<<<<          ><<      ><<         ><<><<      ><<><<<<<      ><<<<<   ><<      ><<><<<<<<<<  ><< <<  *" << endl;
    cout << "**************************************************************************************************************************" << NC << endl;
    SLEEP_FOR_2000MS;
    SLEEP_FOR_2000MS;
}
void deathPrint()
{
    CLR_SCREEN
    cout << "****************#*****************" << endl;
    cout << "**************#####***************" << endl;
    cout << "****************#*****************" << endl;
    cout << "****************#*****************" << endl;
    cout << "*      _         _ ) o  _   _ ) *" << endl;
    cout << "* (_( (_) (_(   (_(  ( )_) (_(  *" << endl;
    cout << "*   _)                (_        *" << endl;
    cout << "*********************************" << endl;
    SLEEP_FOR_2000MS;
}