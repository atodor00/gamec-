#pragma once
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
    them.setMoney(200);
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

    cout << "this is level 3" << endl;
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

int town(Player *me)
{
    CLR_SCREEN
    int townTripEndedFlag = 1;
    int flag = 0;
    string playerInput;

    SLEEP_FOR_1000MS;

    cout << "welcome to the town" << endl;
    SLEEP_FOR_1000MS;
    cout << "you are in GORGON TOWN" << endl;
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
    }
}
int healthStore(Player *me)
{
    cout << me->getHp() << endl;
    cout << "wait for a while (minute) and get healthier a lot" << endl;
    Sleep(60000 / 2);
    cout << "half passed" << endl;
    Sleep(60000 / 2);
    cout << "nice" << endl;
    int temp = 0;
    if (me->getHp() < 10000)
    {
        me->setHp(me->getHp() * 3 + 100);
    }
    else
    {
        cout << "you dont need extra health" << endl;
    }
}

int armorStore(Player *me)
{

    string playerInput;
    int armorStoreEndedFlag = 1;
    cout << "welcome to the armor store what do you wish to have" << endl;
    cout << "you need to pay money to buy things here" << endl;

    while (armorStoreEndedFlag)
    {
        cout << "for ->30 000 Tr for 1000 armor  -> use [1] number" << endl;
        cout << "for ->10 000 Tr for 500 armor   -> use [2] number" << endl;
        cout << "for ->1000 Tr for 100 armor    -> use [3] number" << endl;
        cout << "for ->10 0 Tr for 10 armor      -> use [4] number" << endl;
        cout << "enter if you want to continue 0 for exit\t";
        cin >> playerInput;
        cout << endl
             << "you have entered: " << str_to_int(playerInput) << endl;
        switch (str_to_int(playerInput))
        {
        case 1:
            if (me->getMoney() >= 30000)
            {

                me->setMoney(me->getMoney() - 30000);
                me->setAp(1000);
            }
            else
            {
                cout << "you don't got enough money" << endl;
            }
            break;
        case 2:
            if (me->getMoney() >= 10000)
            {

                me->setMoney(me->getMoney() - 10000);
                me->setAp(500);
            }
            else
            {
                cout << "you don't got enough money" << endl;
            }

            break;
        case 3:
            if (me->getMoney() >= 1000)
            {

                me->setMoney(me->getMoney() - 1000);
                me->setAp(100);
            }
            else
            {
                cout << "you don't got enough money" << endl;
            }

            break;

        case 4:
            if (me->getMoney() >= 100)
            {

                me->setMoney(me->getMoney() - 100);
                me->setAp(10);
            }
            else
            {
                cout << "you don't got enough money" << endl;
            }

            break;
        case 0:
        default:
            armorStoreEndedFlag = 0;
            return 0;
        }

        cout << endl;
    }
}
