#pragma once
int random_num(int max);
int print();
int level1(Player *);
int level2(Player *);
int level3(Player *);
int level4(Player *);
int level5(Player *);
int town(Player *);
int armorStore(Player *me);
int healthStore(Player *me);

void helpPrint();
int str_to_int(const string &str);
int notPositiveAllowed(int);
int printPlayerStats(Player *);

int printPlayerStats(Player *, Enemy *);
int battle(Player *me, Enemy *them);
void fancyPrint(string s);
void fancyPrintNoPress(string s);
void printPlayerSkills(Player *me);
void townPrintOfPaths();
void titlePrint();
void deathPrint();

void bestowSkillAcordingToLevel(Player *me);
int quickSave(Player *);
int quickLoad(Player *);