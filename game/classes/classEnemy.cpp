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
        // Skill emptySkill("empty", PHYSICAL_TYPE_STRING, 0, 0, 0, 0);
        // for (int i = 0; i < 100; i++)
        // {
        //     Skills[i] = emptySkill;
        // }
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
