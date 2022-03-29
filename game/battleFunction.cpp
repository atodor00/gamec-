#pragma once
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

            them->setHp((them->getHp() - mySkills[c - 1].getphysical_damage()) + them->getAp() % mySkills[c - 1].getphysical_damage());

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
            // me->setHp(me->getHp() - themSkills[temp].getphysical_damage());
            me->setHp((me->getHp() - themSkills[c - 1].getphysical_damage()) + me->getAp() % themSkills[c - 1].getphysical_damage());
            SLEEP_FOR_1000MS;
            printPlayerStats(me, them);
        }
    }
    if (me->getHp() >= 0)
    {
        fancyPrint("you won this battle");
        me->setExp(me->getExp() + 100);
        me->setMoney(me->getMoney() + them->getMoney() + 20);

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
