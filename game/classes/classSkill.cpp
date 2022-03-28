#pragma once
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
