#pragma once
int random_num(int max)
{
    srand(time(0));
    return rand() % max;
}
int randi(int lo, int hi)
{
    int n = hi - lo + 1;
    int i = rand() % n;
    if (i < 0)
        i = -i;
    return lo + i;
}
int str_to_int(const string &str)
{
    stringstream ss(str);
    int num;
    ss >> num;
    return num;
}
