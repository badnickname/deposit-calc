#include <stdio.h>

int getVklad() {
    int value;
    int is_loop = 1;
    while (is_loop) {
    is_loop = 0;
        printf("Введите вклад: ");
        scanf("%d",&value);
        if (value<10) (is_loop=1,printf("Минимальная сумма вклада - 10\n"));
    }
    return value;
}

int getSrok() {
    int value;
    int is_loop = 1;
    while (is_loop) {
        is_loop = 0;
        printf("Введите срок: ");
        scanf("%d",&value);
        if (value<0) (is_loop=1,printf("Срок должен быть больше 0\n"));
        if (value>365) (is_loop=1,printf("Срок должен быть меньше 365\n"));
    }
    return value;
}

double countDohod() {
    double a,b,c;

    int vklad = getVklad();
    int srok = getSrok();
    double dohod = 0;

    if (vklad > 100) {
        a = 1.03;
        b = 1.08;
        c = 1.15;
    } else {
        a = 1.02;
        b = 1.06;
        c = 1.12;
    }

    if (srok<=30) dohod = vklad*0.9;
    if (srok>30 && srok<121) dohod = vklad * a;
    if (srok>120 && srok<241) dohod = vklad * b;
    if (srok>240 && srok<366) dohod = vklad * c;

    return dohod;
}
