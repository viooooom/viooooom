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
bool boolean7(int a, int b, int c)
{
    return (a <= b <= c);
}
bool boolean8(int a, int b)
{
    return (a % 2 != 0) && (b % 2 != 0);
}
bool boolean9(int a, int b)
{
    return (a % 2 != 0) || (b % 2 != 0);
}
bool boolean10(int a, int b)
{
    return ((a % 2 != 0) && (b % 2 == 0)) || ((a % 2 == 0) && (b % 2 != 0));
}
bool boolean11(int a, int b)
{
    return ((a % 2 == 0) && (b % 2 == 0)) || ((a % 2 != 0) && (b % 2 != 0));
}
bool boolean12(int a, int b, int c)
{
    return (a >= 0) && (b >= 0) && (c >= 0);
}
bool boolean13(int a, int b, int c)
{
    return (a >= 0) || (b >= 0) || (c >= 0);
}
bool boolean14(int a, int b, int c)
{
    return ((a >= 0) || (b >= 0) || (c >= 0)) == 1;
}
bool boolean15(int a, int b, int c)
{
    return (a > 0 && b > 0 && c <= 0) || (a > 0 && b <= 0 && c > 0) || (a <= 0 && b > 0 && c > 0);
}
bool boolean16(int a)
{
    return a % 2 == 0 && a >= 10 && a <= 99;
}
bool boolean17(int a)
{
    return a % 2 != 0 && a >= 100 && a <= 999;
}
bool boolean18(int a, int b, int c)
{
    return (a == b) || (a == c) || (b == c);
}
bool boolean19(int a, int b, int c)
{
    return (a == -b) || (a == -c) || (b == -c);
}
bool boolean20(int n)
{
    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n % 10;
    return (a != b) && (a != c) && (b != c);
}
bool boolean21(int n)
{
    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n % 10;
    return (a < b) && (b < c);
}
bool boolean22(int n)
{
    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n % 10;
    return ((a < b) && (b < c)) || ((a > b) && (b > c));
}
bool boolean23(int n)
{
    int a = n / 1000;
    int b = (n % 1000) / 100;
    int c = (n / 100) % 10;
    int d = n % 10;
    return (a == d) && (b == c);
}
bool boolean24(double a, double b, double c)
{
    double d = pow(b, 2) - 4 * a * c;
    return d >= 0;
}
bool boolean25(double x, double y)
{
    return x < 0 && y > 0;
}
bool boolean26(double x, double y)
{
    return x > 0 && y < 0;
}
bool boolean27(double x, double y)
{
    // y>0 для второй
    // y<0 для треетьей
    return x < 0;
}
bool boolean28(double x, double y)
{
    return (x < 0 && y < 0) || (x > 0 and y > 0);
}
bool boolean29(int x, int y, int x1, int y1, int x2, int y2)
{
    //(x >= x1 && x <= x2) - точка x внутри диапазона от x1 до x2
    //(y >= y1 && y <= y2) - точка y внутри диапазона от y1 до y2
    return (x >= x1 && x <= x2) && (y >= y1 && y <= y2);
}
bool boolean30(int a, int b, int c)
{
    return (a == b) && (b == c);
}
bool boolean31(int a, int b, int c)
{
    return (a == b) || (a == c) || (b == c);
}
bool boolean32(int a, int b, int c)
{
    return (pow(a, 2) + pow(b, 2) == pow(c, 2)) || (pow(a, 2) + pow(c, 2) == pow(b, 2)) || (pow(b, 2) + pow(c, 2) == pow(a, 2));
}
bool boolean33(int a, int b, int c)
{
    return ((a + b) > c) && ((a + c) > b) && ((b + c) > a);
}
bool boolean34(int x, int y)
{
    return ((x + y) % 2 == 1);
}
bool boolean35(int x1, int y1, int x2, int y2)
{
    return ((x1 + y1) % 2 == (x2 + y2) % 2);
}
bool boolean36(int x1, int y1, int x2, int y2)
{
    return (x1 == x2) || (y1 == y2);
}
bool boolean37(int x1, int y1, int x2, int y2)
{
    return (abs(x2 - x1) <= 1) && (abs(y2 - y1) <= 1);
}
bool boolean38(int x1, int y1, int x2, int y2)
{
    return abs(x2 - x1) == abs(y2 - y1);
}
bool boolean39(int x1, int y1, int x2, int y2)
{
    return (abs(x2 - x1) == abs(y2 - y1)) || (x1 == x2) || (y1 == y2);
}
bool boolean40(int x1, int y1, int x2, int y2)
{
    return ((abs(x2 - x1) == 2 && abs(y2 - y1) == 1) || (abs(x2 - x1) == 1 && abs(y2 - y1) == 2));
}