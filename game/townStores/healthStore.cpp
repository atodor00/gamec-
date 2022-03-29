
int healthStore(Player *me)
{
    cout << me->getHp() << endl;
    cout << "wait for a while (minute) and get healthier a lot" << endl;
    Sleep(60000 / 4);
    cout << "first quarter passed" << endl;
    Sleep(60000 / 4);
    cout << "half passed (30s)" << endl;
    Sleep(60000 / 4);
    cout << "third quarter passed" << endl;
    Sleep(60000 / 4);

    cout << "nice" << endl;
    int temp = 0;
    if (me->getHp() < 10000)
    {
        me->setHp(me->getHp() * 4 + 150);
    }
    else
    {
        cout << "you dont need extra health" << endl;
    }
}
