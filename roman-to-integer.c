int atroman(char letter);

int romanToInt(char* s)
{
    int     i;
    int     res;

    i = 0;
    res = 0;
    while (s[i])
    {
        if (atroman(s[i]) < atroman(s[i + 1]))
        {
            res += atroman(s[i + 1]) - atroman(s[i]);
            i++;
        }
        else
            res += atroman(s[i]);
        i++;
    }
    return (res);
}

int atroman(char letter)
{
    if (letter == 'I')
        return (1);
    if (letter == 'V')
        return (5);
    if (letter == 'X')
        return (10);
    if (letter == 'L')
        return (50);
    if (letter == 'C')
        return (100);
    if (letter == 'D')
        return (500);
    if  (letter == 'M')
        return (1000);
    return (0);
}