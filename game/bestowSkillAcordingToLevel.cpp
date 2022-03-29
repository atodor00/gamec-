
void bestowSkillAcordingToLevel(Player *me)
{
    Skill kick("Kick", PHYSICAL_TYPE_STRING, 50, 0, 0, 0);
    Skill fireBall("Fire Ball", MAGIC_TYPE_STRING, 100, 300, 20, 0);
    Skill swordSlach("Sword Slash", PHYSICAL_TYPE_STRING, 400, 10, 60, 0);
    Skill hellFire("Hell Fire", MAGIC_TYPE_STRING, 900, 0, 200, 0);
    Skill TerrorRain("Terror rain", MAGIC_TYPE_STRING, 1000, 0, 3000, 0);
    Skill hellDomain("Hell domain", MAGIC_TYPE_STRING, 3000, 0, 3000, 0);
    Skill DomainOfTheDemonGod("Domain Of The Demon God", MAGIC_TYPE_STRING, 10000, 0, 3000, 0);
    Skill fireGod("fireGod", MAGIC_TYPE_STRING, 33000, 0, 3000, 0);
    switch (me->getLvl())
    {
    case 10:
        me->addSkill(kick);
        me->addSkill(swordSlach);
        me->addSkill(fireBall);
        me->addSkill(hellFire);
        me->addSkill(TerrorRain);
        me->addSkill(hellDomain);
        me->addSkill(DomainOfTheDemonGod);
        me->addSkill(fireGod);

        break;
    case 9:
        me->addSkill(kick);
        me->addSkill(swordSlach);
        me->addSkill(fireBall);
        me->addSkill(hellFire);
        me->addSkill(TerrorRain);
        me->addSkill(hellDomain);
        me->addSkill(DomainOfTheDemonGod);

        break;
    case 8:
        me->addSkill(kick);
        me->addSkill(swordSlach);
        me->addSkill(fireBall);

        me->addSkill(hellFire);
        me->addSkill(TerrorRain);
        me->addSkill(hellDomain);

        break;
    case 7:
        me->addSkill(kick);
        me->addSkill(swordSlach);
        me->addSkill(fireBall);

        me->addSkill(hellFire);
        me->addSkill(TerrorRain);
        me->addSkill(hellDomain);
        break;
    case 6:
        me->addSkill(kick);
        me->addSkill(swordSlach);
        me->addSkill(fireBall);

        me->addSkill(hellFire);
        me->addSkill(TerrorRain);
        break;
    case 5:
        me->addSkill(kick);
        me->addSkill(swordSlach);
        me->addSkill(fireBall);

        me->addSkill(hellFire);
        break;
    case 4:
        me->addSkill(kick);
        me->addSkill(swordSlach);
        me->addSkill(fireBall);

        me->addSkill(hellFire);
        break;
    case 3:
        me->addSkill(kick);
        me->addSkill(fireBall);
        me->addSkill(swordSlach);
        break;
    case 2:
        me->addSkill(kick);
        me->addSkill(fireBall);
        me->addSkill(swordSlach);
        break;
    case 1:
        me->addSkill(kick);
        me->addSkill(swordSlach);
        break;
    case 0:
        me->addSkill(kick);
        break;

    default:
        break;
    }
}