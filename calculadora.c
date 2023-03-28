#include <stdio.h>

void
main ()
{
  char matemaquina;
  float x;
  float y;
  float resultado;

  printf
    ("Escolha uma opC'C#o:  (+) somar, (-) subtrair, (*) multiplicar, (/) dividir, (e) sair : ");
  scanf ("%c", &matemaquina);

  printf ("Digite o primeiro numero: ");
  scanf ("%f", &x);
  printf ("Digite o segundo numero: ");
  scanf ("%f", &y);


  switch (matemaquina)
    {

    case '+':
      resultado = x + y;
      break;

    case '-':
      resultado = x - y;
      break;

    case '*':
      resultado = x * y;
      break;

    case '/':
      resultado = x / y;
      break;

    case 'e':
      printf ("exit");
      break;

    default:
      printf ("OpC'C#o Ivalida");
    }

  printf ("O resultado C): %2.f", resultado);

}