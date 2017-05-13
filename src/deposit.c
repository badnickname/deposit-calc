#include <stdio.h>

int isVkladCorrect(int value) {
    if (value<10) return 0;
    return 1;
}

int isSrokCorrect(int value) {
    if (value<0 || value>365) return 0;
    return 1;
}

int getVklad() {
    int value;
    int is_loop = 1;
    while (is_loop) {
    is_loop = 0;
        printf("Введите вклад: ");
        scanf("%d",&value);
        if (!isVkladCorrect(value)) (is_loop=1,printf("Минимальная сумма вклада - 10\n"));
    }
    return value;
}

int getSrok() {
    int value;
    int is_loop = 1;
    while (is_loop) {
        is_loop = 0;
        printf("Введите срок (от 0 до 365): ");
        scanf("%d",&value);
        if (!isSrokCorrect(value)) (is_loop=1,printf("Введен некорректный срок\n"));
    }
    return value;
}

double countDohod(double vklad, int srok) {
    if (!isSrokCorrect(srok) || !isVkladCorrect(vklad)) return 0;
    double a,b,c;
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
