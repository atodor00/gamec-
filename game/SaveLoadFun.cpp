#pragma once
int quickSave(Player *me)
{
    cout << "quickSave" << endl;
    fstream writeFile;
    writeFile.open(".Save.txt", ios::out);

    writeFile << me->getName() << endl;
    writeFile << me->getHp() << endl;
    writeFile << me->getMp() << endl;
    writeFile << me->getLvl() << endl;
    writeFile << me->getExp() << endl;
    writeFile << me->getSkillCount() << endl;

    writeFile.close();
}
int quickLoad(Player *me)
{

    cout << "quickLoad" << endl;

    string text;

    fstream readFile;

    readFile.open(".Save.txt", ios::in);
    if (readFile)
    {
        cout << "file exists" << endl;
    }
    else
    {
        cout << "no such file " << endl;
        return 0;
    }
    getline(readFile, text);
    me->setName(text);
    getline(readFile, text);
    me->setHp(str_to_int(text));
    getline(readFile, text);
    me->setMp(str_to_int(text));
    getline(readFile, text);
    me->setLvl(str_to_int(text));
    getline(readFile, text);
    me->setExp(str_to_int(text));
    getline(readFile, text);
    me->setSkillCount(str_to_int(text));
    bestowSkillAcordingToLevel(me);
    readFile.close();

    return 1;
}
