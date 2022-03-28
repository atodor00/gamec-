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
