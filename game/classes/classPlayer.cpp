#pragma once

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
    void removeSkills()
    {
        skillCnt = 0;
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
