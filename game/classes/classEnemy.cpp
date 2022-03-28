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
