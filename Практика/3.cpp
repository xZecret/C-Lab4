#include <stdio.h>

void a()
{
    int a, c = 0;
    while ((a = getchar()) != 10)
    {
        if (a == 'a')
            c++;
    }
    printf("%d\n", c);
}

void b()
{
    int a, c = 0;
    while ((a = getchar()) != 10)
    {
        if (a == 'e')
            c++;
        if (a == 'u')
            break;
    }
    printf("%d\n", c);
}

void c()
{
    int a, b, c = 0;
    while ((a = getchar()) != 10)
    {
        if (a == 'n')
            if ((b = getchar()) == 'o')
                c++;
        if (a == 'o')
            if ((b = getchar()) == 'n')
                c++;
        if (b == 10)
            break;
    }
    printf("%d\n", c);
}

void d()
{
    int a, b = 0, c = 0, d = 0;
    while ((a = getchar()) != 10)
    {
        if (a == '+')
        {
            b++;
            if ((a = getchar()) == '-')
                d++;
        }
        if (a == '-')
            c++;
        if (a == 10)
            break;
    }
    printf("+:  %d\n-:  %d\n+-: %d\n", b, c, d);
}

void e()
{
    int a, b = 0;
    while ((a = getchar()) != 10)
    {
        if (a == 'C')
            if ((a = getchar()) == '+')
                if ((a = getchar()) == '+')
                    b++;
        if (a == 10)
            break;
    }
    printf("C++:  %d\n", b);
}

void f()
{
    int a,b,c,d, f = 0;
        while ((a = getchar()) != 10)
        {
            if (a == 'c')
                if ((b = getchar()) == 'h')
                    if ((c = getchar()) == 'a')
                        if ((d = getchar()) == 'r')
                            f++;
            if (a == 10)
                break;
        }
        printf("char: %d\n", f);
}

void g()
{
    int a, b = 'a';
    while ((a = getchar()) != 10)
    {
        if (a == b)
            b++;
        if (a == 10)
            break;
    }
    printf("alphabet:  %d\n", b - 'a');
}

int main()
{
    a();
    b();
    c();
    d();
    e();
    f();
    g();
}
