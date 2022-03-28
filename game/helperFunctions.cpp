#pragma once
int random_num(int max)
{
    srand(time(0));
    return rand() % max;
}

int str_to_int(const string &str)
{
    stringstream ss(str);
    int num;
    ss >> num;
    return num;
}