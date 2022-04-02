
int healthStore(Player *me)
{
    int x;

    cout << RED << me->getHp() << endl;
    cout << "wait for a while (minute) and get healthier a lot" << endl;
    cout << "Cost is 250 [Tr]" << endl;

    if (me->getMoney() < 250)
    {
        cout << "Cost is 250 [Tr]" << endl;
        cout << "you have " << me->getMoney() << endl;
        cout << "sorry" << endl;
        cout << NC;
        return 0;
    }

    cout << "0 for no" << endl;
    cout << "1 for yes or anything else" << endl;
    cin >> x;
    if (x == 0)
    {
        cout << "byebye mister healthy" << endl;
        cout << NC;
        return 0;
    }
    cout << "waiting begins" << endl;

    Sleep(60000 / 4);
    cout << "first quarter passed" << endl;
    Sleep(60000 / 4);
    cout << "half passed (30s)" << endl;
    Sleep(60000 / 4);
    cout << "third quarter passed" << endl;
    Sleep(60000 / 4);

    cout << "nice" << endl;
    int temp = 0;
    if ((me->getHp() < 10000) || (me->getLvl() > 6 && me->getHp() < 100000))
    {
        me->setHp(me->getHp() * 4 + 150);

        me->setMoney(me->getMoney() - 250);
    }
    else
    {
        cout << "you dont need any health" << endl;
    }
    cout << NC;
}
