bool boolean1(int a)
{
    return a >= 0;
}

bool boolean2(int a)
{
    return a % 2 != 0;
}
bool boolean3(int a)
{
    return a % 2 == 0;
}
bool boolean4(int a, int b)
{
    return (a > 2) && (b <= 3);
}

bool boolean5(int a, int b)
{
    return (a >= 0) || (b < -2);
}
bool boolean6(int a, int b, int c)
{
    return (a < b < c);
}
