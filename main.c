#include <iostream>

int getvklad()
{
  int x;
  cout << "Enter Vklad: ";
  cin >> x;
  return x;
}

int getsrok()
{
  int x;
  cout << endl << "Enter Srok: ";
  cin >> x;
  return x;
}

int main()
{
  int vklad = getvlkad();
  int srok = getsrok();
  float dohod = 0;

  if (vklad > 100) a = 1.03; else a = 1.02;
  if (vklad > 100) a = 1.08; else a = 1.06;
  if (vklad > 100) a = 1.15; else a = 1.12;
  
  if (srok<=30) dohod = vklad*0.9;
  if (srok>30 && srok<121) dohod = vklad * a;
  if (srok>120 && srok<241) dohod = vklad * b;
  if (srok>240 && srok<366) dohod = vklad * c;

  cout << endl << "Dohod: " << (int)dohod;
  
  system("PAUSE");
  return 0;
}
