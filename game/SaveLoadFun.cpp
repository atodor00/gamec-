#pragma once
int quickSave(Player *me)
{
    cout << "quickSave" << endl;
    fstream writeFile;
    writeFile.open(".Save.txt", ios::out);

    writeFile << me->getName() << endl;
    writeFile << me->getHp() << endl;

    writeFile << me->getMoney() << endl;
    writeFile << me->getAp() << endl;

    writeFile << me->getMp() << endl;
    writeFile << me->getLvl() << endl;
    writeFile << me->getExp() << endl;
    writeFile << me->getSkillCount() << endl;

    writeFile.close();

    encdec enc(".Save.txt", 123423);
    char c;

    cout << "encrypting..... \n";

    cin.ignore();
    enc.encrypt();
    if (remove(".Save.txt") != 0)
        perror("Error deleting file");
    else
        puts("File successfully deleted");
}

int quickLoad(Player *me)
{

    cout << "quickLoad" << endl;

    encdec dec("temp.save.f", 123423);

    cout << "decrypting..... \n";

    cin.ignore();

    dec.decrypt();

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
    me->setMoney(str_to_int(text));
    getline(readFile, text);
    me->setAp(str_to_int(text));

    getline(readFile, text);
    me->setMp(str_to_int(text));
    getline(readFile, text);
    me->setLvl(str_to_int(text));
    getline(readFile, text);
    me->setExp(str_to_int(text));
    getline(readFile, text);
    me->setSkillCount(str_to_int(text));
    me->removeSkills();
    bestowSkillAcordingToLevel(me);

    readFile.close();
    if (remove(".Save.txt") != 0)
        perror("Error deleting file");
    else
        puts("File successfully deleted");
    return 1;
}
