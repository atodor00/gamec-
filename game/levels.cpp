#pragma once
int level1(Player *me)
{

    CLR_SCREEN
    // dogo skills
    Skill bite("Bite", PHYSICAL_TYPE_STRING, 35, 0, 0, 0);
    Skill howl("Howl", PHYSICAL_TYPE_STRING, 0, 0, 100, 0);
    int flag = 0;
    string playerInput;

    cout << endl
         << GRN << " this is a tutorial " << NC << endl;
    SLEEP_FOR_1000MS;
    cout << endl
         << " this is you and your stats and skills " << endl;
    SLEEP_FOR_1000MS;
    printPlayerStats(me);
    SLEEP_FOR_1000MS;
    PRESS_ANY_KEY;
    CLR_SCREEN
    Enemy them;
    them.setName("angry doggo");
    them.addSkill(bite);
    them.addSkill(howl);
    them.setHp(150);
    them.setExp(100);
    them.setMoney(200);
    SLEEP_FOR_1000MS;
    printPlayerStats(me, &them);
    SLEEP_FOR_2000MS;
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
    CLR_SCREEN
    cout << "this is level 2" << endl;
    SLEEP_FOR_1000MS;

    SLEEP_FOR_1000MS;

    Enemy them;
    them.setName("Deamon doggo");
    them.addSkill(bite);
    them.addSkill(howl);
    them.setHp(150);
    them.setExp(100);
    SLEEP_FOR_1000MS;
    printPlayerStats(me, &them);

    SLEEP_FOR_1000MS;
    cout << "try to make best decisions" << endl;
    SLEEP_FOR_1000MS;

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
    PRESS_ANY_KEY;
    SLEEP_FOR_1000MS;
    for (int i = 0; i < 4; i++)
    {
        them.addSkill(bite);
        them.addSkill(howl);
        them.setHp(150);
        them.setExp(200);
        them.setMoney(150);
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
    them.setExp(1000);
    them.setMoney(1200);
    cout << "you are in front of boss monster.... " << endl;
    SLEEP_FOR_1000MS;
    PRESS_ANY_KEY;
    cout << RED;
    if (battle(me, &them) == 0)
    {
        return 0;
    }
    cout << NC;
    cout << "you are out.... " << endl;
    SLEEP_FOR_1000MS;
    cout << "you are safe now.... " << endl;
    SLEEP_FOR_1000MS;
    cout << "and stronger.... " << endl;
    SLEEP_FOR_1000MS;
}
int level3(Player *me)
{
    CLR_SCREEN
    cout << RED;
    int battleflag = 0;
    // dogo skills
    Skill dragonBreath("dragonBreath", PHYSICAL_TYPE_STRING, 1000, 0, 200, 0);
    Skill dragonClaw("dragonClaw", PHYSICAL_TYPE_STRING, 100, 0, 200, 0);
    Skill howlOfTheDragon("howlOfTheDragon", PHYSICAL_TYPE_STRING, 700, 0, 200, 0);

    int flag = 0;
    string playerInput;

    cout << "this is level 3" << endl;
    SLEEP_FOR_1000MS;

    printPlayerStats(me);
    SLEEP_FOR_2000MS;
    cout << "you are walking around beautiful mountains.... " << endl;
    SLEEP_FOR_2000MS;
    cout << "you feel free from wordly problems.... " << endl;
    SLEEP_FOR_2000MS;
    cout << "but sudenly... " << endl;
    CLR_SCREEN
    SLEEP_FOR_2000MS;
    cout << "but sudenly earth shakes...  " << endl;
    SLEEP_FOR_2000MS;
    cout << "is it a vulcano " << endl;
    SLEEP_FOR_1000MS;
    CLR_SCREEN
    cout << "....no" << endl;
    SLEEP_FOR_1000MS;
    cout << "....this is a growl of a monster ...of a dragon" << endl;
    SLEEP_FOR_2000MS;
    CLR_SCREEN
    cout << "..." << endl;
    SLEEP_FOR_1000MS;
    CLR_SCREEN
    Enemy them;
    them.setName("Fire Dragon ILIRS");

    them.addSkill(dragonClaw);
    them.addSkill(howlOfTheDragon);
    them.addSkill(dragonBreath);
    fancyPrint("HUMANS ARE NOT WELCOME IN MY DOMAIN!!!");
    fancyPrint("go away or die");
    fancyPrint("i see you are foolish human so die");
    them.setHp(8000);
    them.setExp(9000);
    them.setMoney(5000);
    SLEEP_FOR_1000MS;
    printPlayerStats(me, &them);

    if (battle(me, &them) == 0)
    {
        fancyPrint("what have you expected little worm!!!");
        cout << NC;
        return 0;
    }
    cout << NC;
}
int level4(Player *me)
{
    CLR_SCREEN
    cout << RED;
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
    PRESS_ANY_KEY;
    cout << "you travel far away from ILRIS's den but his followers are hunting you down" << endl;
    SLEEP_FOR_2000MS;
    cout << "attempting to flee is useless and impossible " << endl;
    SLEEP_FOR_2000MS;
    cout << "you must stand your ground " << endl;
    SLEEP_FOR_1000MS;
    cout << "be brave " << endl;
    SLEEP_FOR_2000MS;
    for (int i = 0; i < 10; i++)
    {
        them.setName("Fire Dragon ILIRS follower");
        them.addSkill(dragonBreath);
        them.setHp(3000);
        them.setExp(4000);
        them.setMoney(1000);
        if (battle(me, &them) == 0)
        {
            cout << NC;
            return 0;
        }
    }
    cout << NC;
    return 1;
}
int level5(Player *me)
{
    CLR_SCREEN
    cout << GRN;
    int battleflag = 0;
    // dogo skills
    Skill goblinHighMagic("goblinHighMagic", PHYSICAL_TYPE_STRING, 7500, 0, 200, 0);
    Skill goblinMagic("goblinMagic", PHYSICAL_TYPE_STRING, 550, 0, 200, 0);
    int flag = 0;
    string playerInput;

    cout << "this is level 5" << endl;

    Enemy them;

    PRESS_ANY_KEY;
    cout << "you travel far into the forest" << endl;
    SLEEP_FOR_2000MS;
    cout << "you stumble upon the cave" << endl;
    SLEEP_FOR_2000MS;
    cout << "...hmm there are skulls around" << endl;
    SLEEP_FOR_1000MS;
    CLR_SCREEN
    cout << "you notice the green skin and ugly faces" << endl;
    SLEEP_FOR_2000MS;
    CLR_SCREEN
    cout << "those are goblins..." << endl;
    SLEEP_FOR_2000MS;
    CLR_SCREEN
    cout << "those are goblins..." << endl;
    SLEEP_FOR_1000MS;
    CLR_SCREEN
    cout << "they attack..." << endl;
    SLEEP_FOR_1000MS;
    for (int i = 0; i < 7; i++)
    {
        them.setName("Goblin");
        them.addSkill(goblinMagic);
        them.setHp(250);
        them.setExp(400);
        them.setMoney(12 * i);
        if (battle(me, &them) == 0)
        {
            cout << NC;
            return 0;
        }
    }
    SLEEP_FOR_2000MS;
    cout << "if you want true victory fight against Goblin High Priests" << endl;
    SLEEP_FOR_2000MS;
    cout << "do you wish to... 1 or 0" << endl;

    cin >> playerInput;

    if (str_to_int(playerInput))
    {
        fancyPrint("BRAVE WARRIOR");

        for (int i = 0; i < 2; i++)
        {
            them.setName("Goblin High Priest");
            them.addSkill(goblinHighMagic);
            them.setHp(11000);
            them.setExp(4000);
            them.setMoney(117000);
            if (battle(me, &them) == 0)
            {
                cout << NC;
                return 0;
            }
        }
    }
    cout << NC;
    return 1;
}
int level6(Player *me)
{
    CLR_SCREEN
    cout << CYN;
    int battleflag = 0;
    // dogo skills
    Skill acidAttack("acidAttack", PHYSICAL_TYPE_STRING, 300, 0, 200, 0);
    Skill slimeEat("slimeEat", PHYSICAL_TYPE_STRING, 1250, 0, 0, 0);
    Skill predator("predator", PHYSICAL_TYPE_STRING, 1500, 0, 0, 0);

    int flag = 0;
    string playerInput;

    cout << "this is level 6" << endl;

    Enemy them;

    PRESS_ANY_KEY;
    cout << "you travel to the north" << endl;
    SLEEP_FOR_2000MS;
    cout << "you stumble upon the grand river" << endl;
    SLEEP_FOR_2000MS;
    cout << "there are birds singing in the area" << endl;
    SLEEP_FOR_1000MS;
    CLR_SCREEN
    cout << "you notice the a tree that is dissolved partly" << endl;
    SLEEP_FOR_2000MS;
    CLR_SCREEN
    cout << "those are slimes..." << endl;
    SLEEP_FOR_2000MS;
    CLR_SCREEN
    cout << "they eat their enemy whole..." << endl;
    SLEEP_FOR_1000MS;
    CLR_SCREEN
    cout << "they attack..." << endl;
    SLEEP_FOR_1000MS;
    for (int i = 0; i < 3; i++)
    {
        them.setName("Slime");
        them.addSkill(acidAttack);
        them.setHp(250);
        them.setExp(400);
        them.setMoney(12 * i);
        if (battle(me, &them) == 0)
        {
            cout << NC;
            return 0;
        }
    }
    CLR_SCREEN
    cout << "those are gold slimes?" << endl;
    SLEEP_FOR_2000MS;
    CLR_SCREEN
    cout << "i didnt know they come in diffrent colors..." << endl;
    SLEEP_FOR_2000MS;
    for (int i = 0; i < 2; i++)
    {
        them.setName("Gold Slime");
        them.addSkill(acidAttack);

        them.setHp(5000);
        them.setExp(400);
        them.setMoney(5000);
        cout << YEL;
        if (battle(me, &them) == 0)
        {
            cout << NC;
            return 0;
        }
        fancyPrint("your aromor [ap stat] has incresed...");
        me->setAp(me->getAp() * 3 + 120);
    }
    CLR_SCREEN
    cout << "those are red slimes?" << endl;
    SLEEP_FOR_1000MS;
    cout << "are they even more dangerous?" << endl;
    SLEEP_FOR_1000MS;
    CLR_SCREEN
    cout << "if you want true victory fight against red Slimes as well?" << endl;
    SLEEP_FOR_2000MS;
    cout << "do you wish to... 1 or 0" << endl;

    cin >> playerInput;

    if (str_to_int(playerInput))
    {
        cout << RED;
        for (int i = 0; i < 2; i++)
        {
            them.setName("Red Slime");
            them.addSkill(predator);
            them.setHp(30000);
            them.setExp(400);
            them.setMoney(100);
            if (battle(me, &them) == 0)
            {
                cout << NC;
                return 0;
            }
            fancyPrint("your aromor [ap stat] has incresed...");
            me->setAp(me->getAp() * 3 + 120);
        }
    }
    cout << NC;
    return 1;
}

int town(Player *me)
{
    CLR_SCREEN
    int townTripEndedFlag = 1;
    int flag = 0;
    string playerInput;

    SLEEP_FOR_1000MS;

    cout << "welcome to the town" << endl;
    SLEEP_FOR_1000MS;
    cout << "you are in " << GRN << "GORGON TOWN" << NC << endl;
    SLEEP_FOR_2000MS;
    cout << "see if you want to go anywhere" << endl;
    cout << "for example..... " << endl;
    SLEEP_FOR_1000MS;
    townPrintOfPaths();

    while (townTripEndedFlag)
    {
        townPrintOfPaths();
        cout << endl
             << endl;
        printPlayerStats(me);
        cin >> playerInput;
        cout << "you have entered: " << str_to_int(playerInput);
        switch (str_to_int(playerInput))
        {
        case 1:
            armorStore(me);
            break;
        case 2:
            healthStore(me);
            break;
        case 0:
            return 0;
        }
        cout << "enter if you want to continue 1 or 0 for exit the town\t";
        cin >> townTripEndedFlag;
        cout << endl;
        CLR_SCREEN
        SLEEP_FOR_2000MS;
    }
}