#include <iostream>

using namespace std;

int getvklad()
{
  int x;
  int a = 1;

  while (a)
    {
      a = 0;
      cout << "Enter Vklad: ";
      cin >> x;
      if (x<10) (a=1,cout<<"????? ?????? ???? ???? 10");
      cout << endl;
    }
  return x;
}

int getsrok()
{
  int x;
  int a = 1;

  while (a)
    {
      a = 0;
      cout << endl << "Enter Srok: ";
      cin >> x;
      if (x<0) (a=1,cout<<"???? ?? ?????? ???? ?????? 0. ");
      if (x>365) (a=1,cout<<"???? ?????? ???? ?????? 365");
      cout << endl;
    }
  return x;
}

int main()
{
  double a,b,c;

  int vklad;
  vklad=getvklad();

  int srok;
  srok=getsrok();

  double dohod = 0;

  if (vklad > 100) a = 1.03; else a = 1.02;
  if (vklad > 100) b = 1.08; else b = 1.06;
  if (vklad > 100) c = 1.15; else c = 1.12;

  if (srok<=30) dohod = vklad*0.9;
  if (srok>30 && srok<121) dohod = vklad * a;
  if (srok>120 && srok<241) dohod = vklad * b;
  if (srok>240 && srok<366) dohod = vklad * c;

  cout << endl << "Dohod: " << dohod;

  return 0;
}
