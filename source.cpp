#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
#include <fstream>

using namespace std;
#define HP_LVL0 100
#define MP_LVL0 0

#define HP_LVL1 200
#define MP_LVL1 20

#define HP_LVL2 300
#define MP_LVL2 100

#define HP_LVL3 300
#define MP_LVL3 300

#define HP_LVL4 300
#define MP_LVL4 1000

#define HP_LVL5 400
#define MP_LVL5 1000

#define HP_LVL6 450
#define MP_LVL6 1000

#define HP_LVL7 1000
#define MP_LVL7 1000
#define HP_LVL8 3000
#define MP_LVL8 10000

#define MAGIC_TYPE_STRING "magical"
#define PHYSICAL_TYPE_STRING "physical"

#define CLR_SCREEN system("cls");

#define SLEEP_FOR_2000MS Sleep(1)
#define SLEEP_FOR_1000MS Sleep(1)
#define PRESS_ANY_KEY system("pause")
class LivingObject
{
private:
    int hp, xp, mp, money, lvl, fear_lvl, seduced_lvl, ap;
    string name;

public:
    int getHp()
    {
        return hp;
    }
    void setHp(int hpp)
    {
        hp = hpp;
    }
    int getAp()
    {
        return ap;
    }
    void setAp(int app)
    {
        ap = app;
    }
    int getMoney()
    {
        return ap;
    }
    void setMoney(int moneyy)
    {
        money = moneyy;
    }
    int getExp()
    {
        return xp;
    }
    void setExp(int xpp)
    {
        xp = xpp;
    }
    int getMp() // fffffffffffffffffffffffffffffffffffffffffffffffiffifififii
    {
        return mp;
    }
    void setMp(int mpp)
    {
        mp = mpp;
    }
    int getLvl()
    {
        return lvl;
    }

    void setLvl(int lvll)
    {
        lvl = lvll;
    }
    string getName()
    {
        return name;
    }
    void setName(string namee)
    {
        name = namee;
    }

    LivingObject()
    {
        xp = 0;
        hp = 0;
        mp = 0;
        lvl = 0;
        fear_lvl = 0;
        seduced_lvl = 0;
        name = "";
    }
};
class Skill
{
private:
    string name;
    string type;
    int physical_damage,
        magical_damage,
        terror_effect,
        seduction_effect;

public:
    Skill(string nname,
          string ttype,
          int physical_damagee,
          int magical_damagee,
          int terror_effecte,
          int seduction_effecte)
    {
        name = nname;
        type = ttype;
        physical_damage = physical_damagee;
        magical_damage = magical_damagee;
        terror_effect = terror_effecte;
        seduction_effect = seduction_effecte;
    }
    Skill()
    {
    }
    string getName()
    {
        return name;
    }
    string gettype()
    {
        return name;
    }
    int getphysical_damage()
    {
        return physical_damage;
    }
    int getmagical_damage()
    {
        return magical_damage;
    }
    int getterror_effect()
    {
        return terror_effect;
    }
    int getseduction_effect()
    {
        return seduction_effect;
    }
};

class Player : public LivingObject
{
private:
    int current_level;
    int skillCnt;
    Skill Skills[100];

public:
    Player()
    {
        skillCnt = 0;
    }
    void addSkill(Skill Skilll)
    {
        Skills[skillCnt++] = Skilll;
    }
    Skill getSkill(int numberOfSkill)
    {

        return Skills[numberOfSkill];
    }
    int getSkillCount()
    {
        return skillCnt;
    }
    void setSkillCount(int skillCntt)
    {
        skillCnt = skillCntt;
    }
};
class Enemy : public LivingObject
{
private:
    int current_level;
    int skillCnt;
    Skill Skills[10];

public:
    Enemy()
    {
        skillCnt = 0;
    }
    void addSkill(Skill Skilll)
    {
        Skills[skillCnt++] = Skilll;
    }
    Skill getSkill(int numberOfSkill)
    {

        return Skills[numberOfSkill];
    }
    int getSkillCount()
    {

        return skillCnt;
    }
};
// class Oger
// class Dragon
// class Slime
// Angry Dog
int random_num(int max);
int print();
int level1(Player *);
int level2(Player *);
int level3(Player *);
int level4(Player *);
void helpPrint();
int str_to_int(const string &str);
int printPlayerStats(Player *);

int printPlayerStats(Player *, Enemy *);
int battle(Player *me, Enemy *them);
void fancyPrint(string s);
void printPlayerSkills(Player *me);

int quickSave(Player *);
int quickLoad(Player *);
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
    Skill kick("Kick", PHYSICAL_TYPE_STRING, 50, 0, 0, 0);
    // Skill fireBall("Fire Ball", MAGIC_TYPE_STRING, 100, 300, 20, 0);
    // Skill swordSlach("Sword Slash", PHYSICAL_TYPE_STRING, 400, 10, 60, 0);
    // Skill hellFire("Hell Fire", MAGIC_TYPE_STRING, 50, 3000, 200, 0);
    // Skill TerrorRain("Terror rain", MAGIC_TYPE_STRING, 0, 0, 3000, 0);
    // // dogo skills
    // Skill bite("Bite", PHYSICAL_TYPE_STRING, 35, 0, 0, 0);
    // Skill howl("Howl", PHYSICAL_TYPE_STRING, 0, 0, 100, 0);

    me.addSkill(kick);
    me.setHp(200);
    me.setExp(0);

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
        cout << "enter if you want to continue 1 or 0 for exit\t";
        if (me.getHp() < HP_LVL0)
        {
            me.setHp(HP_LVL0);
        }

        cin >> gameEndedFlag;
    }
    fancyPrint("bye bye :)");
    return 0;
} //#########################################################################################################################################################################################

int str_to_int(const string &str)
{
    stringstream ss(str);
    int num;
    ss >> num;
    return num;
}
int level1(Player *me)
{

    // dogo skills
    Skill bite("Bite", PHYSICAL_TYPE_STRING, 35, 0, 0, 0);
    Skill howl("Howl", PHYSICAL_TYPE_STRING, 0, 0, 100, 0);
    int flag = 0;
    string playerInput;

    cout << endl
         << " this is a tutorial " << endl;
    SLEEP_FOR_1000MS;

    printPlayerStats(me);
    SLEEP_FOR_1000MS;

    Enemy them;
    them.setName("angry doggo");
    them.addSkill(bite);
    them.addSkill(howl);
    them.setHp(150);
    them.setExp(100);
    SLEEP_FOR_1000MS;
    printPlayerStats(me, &them);

    cout << "stats are going to be displayed like this" << endl;
    SLEEP_FOR_1000MS;
    cout << "you will need to input what action you want to do ...mostly in numbers" << endl;
    SLEEP_FOR_1000MS;
    cout << "you are either in story part or you are in a battle part " << endl;
    SLEEP_FOR_1000MS;
    cout << "try to make best decisions" << endl;
    SLEEP_FOR_1000MS;
    PRESS_ANY_KEY;

    cout << "for start ..." << endl;
    SLEEP_FOR_1000MS;
    if (me->getName() != "")
    {
        flag = 1;
    }
    while (!flag)
    {
        int cn = 0;
        cout << "what is your name..." << endl;
        SLEEP_FOR_1000MS;
        cin >> playerInput;
        me->setName(playerInput);
        cout << "you have entered: " << playerInput << endl;
        cout << "are you sure you want to be named like that 0 -> no 1 -> yes " << endl;
        cin >> playerInput;

        if (str_to_int(playerInput) == 1 || (cn == 10))
        {
            cout << "nice to meet you " << me->getName() << endl;
            flag = 1;
        }
        cn++;
    }

    SLEEP_FOR_1000MS;
    printPlayerStats(me);
    SLEEP_FOR_1000MS;
    printPlayerStats(me, &them);

    battle(me, &them);
}

int level2(Player *me)
{
    int battleflag = 0;
    // dogo skills
    Skill bite("Bite", PHYSICAL_TYPE_STRING, 50, 0, 0, 0);
    Skill howl("Howl", PHYSICAL_TYPE_STRING, 0, 0, 100, 0);
    int flag = 0;
    string playerInput;

    cout << "this is level 2" << endl;
    SLEEP_FOR_1000MS;

    printPlayerStats(me);
    SLEEP_FOR_1000MS;

    Enemy them;
    them.setName("Deamon doggo");
    them.addSkill(bite);
    them.addSkill(howl);
    them.setHp(150);
    them.setExp(100);
    SLEEP_FOR_1000MS;
    printPlayerStats(me, &them);

    cout << "stats are going to be displayed like this" << endl;
    SLEEP_FOR_1000MS;
    cout << "you will need to input what action you want to do ...mostly in numbers" << endl;
    SLEEP_FOR_1000MS;
    cout << "you are either in story part or you are in a battle part " << endl;
    SLEEP_FOR_1000MS;
    cout << "try to make best decisions" << endl;
    SLEEP_FOR_1000MS;
    PRESS_ANY_KEY;

    cout << "you enter the dungion there is a demonic dog nearby" << endl;
    SLEEP_FOR_1000MS;
    cout << "you have no choice but to fight" << endl;

    SLEEP_FOR_1000MS;

    SLEEP_FOR_1000MS;
    printPlayerStats(me, &them);
    fancyPrint("let the battle begin");
    SLEEP_FOR_1000MS;

    if (battle(me, &them) == 0)
    {
        return 0;
    }
    cout << "you stroll around but there is a pack of demonic dogs nearby" << endl;
    SLEEP_FOR_1000MS;
    for (int i = 0; i < 4; i++)
    {
        them.addSkill(bite);
        them.addSkill(howl);
        them.setHp(150);
        them.setExp(100);
        if (battle(me, &them) == 0)
        {
            return 0;
        }
    }
    cout << "you need to get out as soon as possible" << endl;
    SLEEP_FOR_1000MS;
    cout << "hurry.... " << endl;
    SLEEP_FOR_1000MS;
    cout << "get out of here.... " << endl;

    SLEEP_FOR_1000MS;

    them.setName("Hell Hound");
    them.addSkill(bite);
    them.addSkill(howl);
    them.setHp(1200);
    them.setExp(100);
    cout << "you are in front of boss monster.... " << endl;
    SLEEP_FOR_1000MS;

    if (battle(me, &them) == 0)
    {
        return 0;
    }
    cout << "you are out.... " << endl;
    SLEEP_FOR_1000MS;
    cout << "you are safe now.... " << endl;
    SLEEP_FOR_1000MS;
    cout << "and stronger.... " << endl;
    SLEEP_FOR_1000MS;
}
int level3(Player *me)
{
    int battleflag = 0;
    // dogo skills
    Skill dragonBreath("dragonBreath", PHYSICAL_TYPE_STRING, 1000, 0, 200, 0);

    int flag = 0;
    string playerInput;

    cout << "this is level 3" << endl;
    SLEEP_FOR_1000MS;

    printPlayerStats(me);
    SLEEP_FOR_1000MS;

    Enemy them;
    them.setName("Fire Dragon ILIRS");
    them.addSkill(dragonBreath);
    fancyPrint("HUMANS ARE NOT WELCOME IN MY DOMAIN!!!");
    fancyPrint("go away or die");
    fancyPrint("i see you are foolish human so die");
    them.setHp(8000);
    them.setExp(9000);
    SLEEP_FOR_1000MS;
    printPlayerStats(me, &them);

    if (battle(me, &them) == 0)
    {
        fancyPrint("what have you expected little worm!!!");
        return 0;
    }
}
int level4(Player *me)
{
    int battleflag = 0;
    // dogo skills
    Skill dragonBreath("dragonBreath", PHYSICAL_TYPE_STRING, 750, 0, 200, 0);

    int flag = 0;
    string playerInput;

    cout << "this is level 4" << endl;
    SLEEP_FOR_1000MS;

    printPlayerStats(me);
    SLEEP_FOR_1000MS;

    Enemy them;

    SLEEP_FOR_1000MS;
    printPlayerStats(me, &them);
    cout << "you travel far away from ILRIS's den but his followers are hunting you down" << endl;
    SLEEP_FOR_1000MS;
    cout << "attempting to flee is futile " << endl;
    SLEEP_FOR_1000MS;
    cout << "you must stand your grounde " << endl;
    SLEEP_FOR_1000MS;
    for (int i = 0; i < 10; i++)
    {
        them.setName("Fire Dragon ILIRS follower");
        them.addSkill(dragonBreath);
        them.setHp(2000);
        them.setExp(4000);
        if (battle(me, &them) == 0)
        {
            return 0;
        }
    }
    return 1;
}
void helpPrint()
{
    CLR_SCREEN;
    cout << "++++++++++++++++++++help+++++++++++++++++++++++++++++++" << endl;
    cout << "+++                                                 +++" << endl;
    cout << "+++ use numbers to give input                       +++" << endl;
    cout << "+++ by solving stages you get experience            +++" << endl;
    cout << "+++ experience is gained from killing               +++" << endl;
    cout << "+++  enemy/monsters                                 +++" << endl;
    cout << "+++ currently there is no save/load                 +++" << endl;
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
    cout << "*********************" << endl;
    cout << "za level 1 birajte 1 " << endl;
    cout << "za level 2 birajte 2 " << endl;
    cout << "za level 3 birajte 3 " << endl;
    cout << "za level 4 birajte 4 " << endl;
    cout << "---------------------" << endl;
    // cout << "za level 4 birajte 4 " << endl;
    // cout << "za level 5 birajte 5 " << endl;
    // cout << "za level 6 birajte 6 " << endl;
    // cout << "za level 7 birajte 7 " << endl;
    // cout << "za level 8 birajte 8 " << endl;
    cout << "za HELP birajte 101 " << endl;
    cout << "za Q. SAVE birajte 102 " << endl;
    cout << "za Q. LOAD birajte 103 " << endl;
    cout << "*********************" << endl;
    cout << "ako je neka rijec ili 0 biti ce zavrsena igra " << endl;
}
int printPlayerStats(Player *me)
{
    int stage = 1;
    int mp = me->getMp();
    int hp = me->getHp();
    int lvl = me->getLvl();
    int exp = me->getExp();

    cout << endl;
    if (me->getName() != "")
    {
        cout << "........me: " << me->getName() << ".........." << endl;
    }
    else
    {
        cout << ".......stats......" << endl;
    }

    cout << " stage: " << stage << endl;
    cout << " mp  " << me->getMp() << endl;
    cout << " hp  " << me->getHp() << endl;
    cout << " lvl " << me->getLvl() << endl;
    cout << " exp " << me->getExp() << endl;
    cout << " skill count: " << me->getSkillCount() << endl;
    printPlayerSkills(me);
    cout << ".................." << endl;
}
int printPlayerStats(Player *me, Enemy *them)
{
    int stage = 1;

    CLR_SCREEN;

    cout << "........me: " << me->getName() << ".........." << endl;
    cout << " stage: " << stage << endl;
    cout << " mp  " << me->getMp() << endl;
    cout << " hp  " << me->getHp() << endl;
    cout << " lvl " << me->getLvl() << endl;
    cout << " exp " << me->getExp() << endl;
    cout << " skill count: " << me->getSkillCount() << endl;
    printPlayerSkills(me);
    cout << "..................." << endl;
    cout << endl
         << "........enemy: " << them->getName() << ".........." << endl;
    cout << " mp  " << them->getMp() << endl;
    cout << " hp  " << them->getHp() << endl;
    cout << " lvl " << them->getLvl() << endl;
    cout << " exp " << them->getExp() << endl;
    cout << "..................." << endl;
}
void printPlayerSkills(Player *me)
{
    Skill mySkills[20];
    cout << endl
         << "....skill list...." << endl;
    for (int i = 0; i < me->getSkillCount(); i++)
    {
        cout << i + 1 << " " << me->getSkill(i).getName() << endl;
    }
}
int battle(Player *me, Enemy *them)

{
    string playerInput;
    int c, temp;
    while (me->getHp() >= 0 && them->getHp() >= 0)
    {
        SLEEP_FOR_1000MS;
        printPlayerStats(me, them);
        cout << "enter skill you want to use" << endl;
        cin >> c;
        cout << "you have entered: " << c;
        Skill mySkills[100], themSkills[100];

        for (int i = 0; i < me->getSkillCount(); i++)
        {
            mySkills[i] = me->getSkill(i);
        }

        for (int i = 0; i < them->getSkillCount(); i++)
        {
            themSkills[i] = them->getSkill(i);
        }

        switch (c)
        {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
            cout << endl
                 << mySkills[c - 1].getphysical_damage();
            cout << endl
                 << mySkills[c - 1].getName();

            SLEEP_FOR_1000MS;

            them->setHp(them->getHp() - mySkills[c - 1].getphysical_damage());

            break;
        case 0:
            cout << "you have entered 0 game is shuting down ";
            return 0;
        }
        if (them->getHp() > 0)
        {

            SLEEP_FOR_1000MS;
            printPlayerStats(me, them);
            temp = random_num(1);
            cout << "temp " << temp << endl;
            cout << endl
                 << themSkills[temp].getphysical_damage();
            cout << endl
                 << themSkills[temp].getName();
            me->setHp(me->getHp() - themSkills[temp].getphysical_damage());
            SLEEP_FOR_1000MS;
            printPlayerStats(me, them);
        }
    }
    if (me->getHp() >= 0)
    {
        fancyPrint("you won this battle");
        me->setExp(me->getExp() + 100);
        Skill fireBall("Fire Ball", MAGIC_TYPE_STRING, 100, 300, 20, 0);
        Skill swordSlach("Sword Slash", PHYSICAL_TYPE_STRING, 400, 10, 60, 0);
        Skill hellFire("Hell Fire", MAGIC_TYPE_STRING, 900, 0, 200, 0);
        Skill TerrorRain("Terror rain", MAGIC_TYPE_STRING, 1000, 0, 3000, 0);
        Skill hellDomain("Hell domain", MAGIC_TYPE_STRING, 3000, 0, 3000, 0);
        Skill DomainOfTheDemonGod("Domain Of The Demon God", MAGIC_TYPE_STRING, 10000, 0, 3000, 0);
        Skill fireGod("fireGod", MAGIC_TYPE_STRING, 33000, 0, 3000, 0);
        // dogo skills
        // Skill bite("Bite", PHYSICAL_TYPE_STRING, 35, 0, 0, 0);
        // Skill howl("Howl", PHYSICAL_TYPE_STRING, 0, 0, 100, 0);
        me->setExp(me->getExp() + 100 + (them->getExp() / 5));

        int xp_temp_buffer = me->getExp();
        if (xp_temp_buffer > 100 && me->getLvl() < 1 && me->getSkill((me->getSkillCount())).getName() != "Sword Slash")
        {
            me->setLvl(1);
            me->setHp(HP_LVL1);
            me->addSkill(swordSlach);
        }
        if (xp_temp_buffer > 201 && me->getLvl() < 2 && me->getSkill((me->getSkillCount())).getName() != "Fire Ball")
        {
            me->setLvl(2);
            me->setHp(HP_LVL2);
            me->addSkill(fireBall);
        }
        if (xp_temp_buffer > 301 && me->getLvl() < 3)
        {
            me->setLvl(3);
            me->setHp(HP_LVL3);
        }
        if (xp_temp_buffer > 401 && me->getLvl() < 4 && me->getSkill((me->getSkillCount())).getName() != "Hell Fire")
        {
            me->setLvl(4);
            me->setHp(HP_LVL4);
            me->addSkill(hellFire);
        }
        if (xp_temp_buffer > 601 && me->getLvl() < 5 && me->getSkill((me->getSkillCount())).getName() != "Terror rain")
        {
            me->setLvl(5);
            me->setHp(HP_LVL5);
        }
        if (xp_temp_buffer > 801 && me->getLvl() < 6 && me->getSkill((me->getSkillCount())).getName() != "Terror rain")
        {

            me->setLvl(6);
            me->setHp(HP_LVL6);
            me->addSkill(TerrorRain);
        }
        if (xp_temp_buffer > 1101 && me->getLvl() < 7 && me->getSkill((me->getSkillCount())).getName() != "Hell domain")
        {
            me->setLvl(7);
            me->setHp(HP_LVL7);
            me->setName("Demon Lord: " + me->getName());
            me->addSkill(hellDomain);
        }
        if (xp_temp_buffer > 3000 && me->getLvl() < 8)
        {
            me->setLvl(8);
            me->setHp(HP_LVL8);
            me->setMp(MP_LVL8);
        }
        if (xp_temp_buffer > 8000 && me->getLvl() < 9 && me->getSkill((me->getSkillCount())).getName() != "Domain Of The Demon God")
        {
            me->setLvl(9);
            me->setHp(HP_LVL8 + 1000);
            me->addSkill(DomainOfTheDemonGod);
        }
        if (xp_temp_buffer > 10000 && me->getLvl() < 10 && me->getSkill((me->getSkillCount())).getName() != "fireGod")
        {
            me->setLvl(10);
            me->setHp(HP_LVL8 + 10000);
            me->addSkill(fireGod);
        }

        return 1;
    }
    else
    {

        fancyPrint("you died");
        return 0;
    }
}
void fancyPrint(string s)
{
    int l = 20;

    CLR_SCREEN

    for (int i = 0; i < l; i++)
    {
        cout << "*";
    }
    cout << endl;

    cout << s << endl;
    for (int i = 0; i < l; i++)
    {
        cout << "*";
    }
    cout << endl;
    SLEEP_FOR_1000MS;
    PRESS_ANY_KEY;
}
int random_num(int max)
{
    srand(time(0));
    return rand() % max;
}

int quickSave(Player *me)
{
    cout << "quickSave" << endl;
    fstream writeFile;
    writeFile.open(".Save.txt", ios::out);

    writeFile << me->getName() << endl;
    writeFile << me->getHp() << endl;
    writeFile << me->getMp() << endl;
    writeFile << me->getLvl() << endl;
    writeFile << me->getExp() << endl;
    writeFile << me->getSkillCount() << endl;

    writeFile.close();
}
int quickLoad(Player *me)
{

    Skill fireBall("Fire Ball", MAGIC_TYPE_STRING, 100, 300, 20, 0);
    Skill swordSlach("Sword Slash", PHYSICAL_TYPE_STRING, 400, 10, 60, 0);
    Skill hellFire("Hell Fire", MAGIC_TYPE_STRING, 900, 0, 200, 0);
    Skill TerrorRain("Terror rain", MAGIC_TYPE_STRING, 1000, 0, 3000, 0);
    Skill hellDomain("Hell domain", MAGIC_TYPE_STRING, 3000, 0, 3000, 0);
    Skill DomainOfTheDemonGod("Domain Of The Demon God", MAGIC_TYPE_STRING, 10000, 0, 3000, 0);
    Skill fireGod("fireGod", MAGIC_TYPE_STRING, 33000, 0, 3000, 0);

    cout << "quickLoad" << endl;

    string text;

    fstream readFile;

    readFile.open(".Save.txt", ios::in);
    if (readFile)
    {
        cout << "file exists" << endl;
    }
    else
    {
        cout << "no such file " << endl;
        return 0;
    }
    getline(readFile, text);
    me->setName(text);
    getline(readFile, text);
    me->setHp(str_to_int(text));
    getline(readFile, text);
    me->setMp(str_to_int(text));
    getline(readFile, text);
    me->setLvl(str_to_int(text));
    getline(readFile, text);
    me->setExp(str_to_int(text));
    getline(readFile, text);
    me->setSkillCount(str_to_int(text));

    readFile.close();
    // wchar_t *fileLPCWSTR = L".Save.txt"; // To avoid incompatibility
    //                                      // in GetFileAttributes()
    // int attr = GetFileAttributes(fileLPCWSTR);
    // if ((attr & FILE_ATTRIBUTE_HIDDEN) == 0)
    // {
    //     SetFileAttributes(fileLPCWSTR, attr | FILE_ATTRIBUTE_HIDDEN);
    // }
    switch (me->getLvl())
    {
    case 10:

        me->addSkill(swordSlach);
        me->addSkill(fireBall);

        me->addSkill(hellFire);
        me->addSkill(TerrorRain);
        me->addSkill(hellDomain);
        me->addSkill(DomainOfTheDemonGod);
        me->addSkill(fireGod);

        break;
    case 9:

        me->addSkill(swordSlach);
        me->addSkill(fireBall);

        me->addSkill(hellFire);
        me->addSkill(TerrorRain);
        me->addSkill(hellDomain);
        me->addSkill(DomainOfTheDemonGod);

        break;
    case 8:
        me->addSkill(swordSlach);
        me->addSkill(fireBall);

        me->addSkill(hellFire);
        me->addSkill(TerrorRain);
        me->addSkill(hellDomain);

        break;
    case 7:
        me->addSkill(swordSlach);
        me->addSkill(fireBall);

        me->addSkill(hellFire);
        me->addSkill(TerrorRain);
        me->addSkill(hellDomain);
        break;
    case 6:
        me->addSkill(swordSlach);
        me->addSkill(fireBall);

        me->addSkill(hellFire);
        me->addSkill(TerrorRain);
        break;
    case 5:
        me->addSkill(swordSlach);
        me->addSkill(fireBall);

        me->addSkill(hellFire);
        break;
    case 4:
        me->addSkill(swordSlach);
        me->addSkill(fireBall);

        me->addSkill(hellFire);
        break;
    case 3:
        me->addSkill(fireBall);
        me->addSkill(swordSlach);
        break;
    case 2:
        me->addSkill(fireBall);
        me->addSkill(swordSlach);
        break;
    case 1:
        me->addSkill(swordSlach);
        break;
    default:
        break;
    }
    return 1;
}