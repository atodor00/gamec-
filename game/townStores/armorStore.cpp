
int armorStore(Player *me)
{

    string playerInput;
    int armorStoreEndedFlag = 1;
    cout << "welcome to the armor store what do you wish to have" << endl;
    cout << "you need to pay money to buy things here" << endl;

    while (armorStoreEndedFlag)
    {
        cout << "for ->30 000 Tr for 1000 armor  -> use [1] number" << endl;
        cout << "for ->10 000 Tr for 500 armor   -> use [2] number" << endl;
        cout << "for ->1000 Tr for 100 armor    -> use [3] number" << endl;
        cout << "for ->10 0 Tr for 10 armor      -> use [4] number" << endl;
        cout << "enter if you want to continue 0 for exit\t";
        cin >> playerInput;
        cout << endl
             << "you have entered: " << str_to_int(playerInput) << endl;
        switch (str_to_int(playerInput))
        {
        case 1:
            if (me->getMoney() >= 30000)
            {

                me->setMoney(me->getMoney() - 30000);
                me->setAp(1000);
            }
            else
            {
                cout << "you don't got enough money" << endl;
            }
            break;
        case 2:
            if (me->getMoney() >= 10000)
            {

                me->setMoney(me->getMoney() - 10000);
                me->setAp(500);
            }
            else
            {
                cout << "you don't got enough money" << endl;
            }

            break;
        case 3:
            if (me->getMoney() >= 1000)
            {

                me->setMoney(me->getMoney() - 1000);
                me->setAp(100);
            }
            else
            {
                cout << "you don't got enough money" << endl;
            }

            break;

        case 4:
            if (me->getMoney() >= 100)
            {

                me->setMoney(me->getMoney() - 100);
                me->setAp(10);
            }
            else
            {
                cout << "you don't got enough money" << endl;
            }

            break;
        case 0:
        default:
            armorStoreEndedFlag = 0;
            return 0;
        }

        cout << endl;
    }
}
