#include <stdio.h>
int main()
{
  int N;

  scanf("%d", &N);
  int a = 1, b = 1, c;
  if (N <= 2) // Первые два числа (a и b) равны 1
    printf("1 ");
  else 
  {
    for (int i = 3; i <= N; i++) 
    {
      c = a + b; // вычисляем следующее число как сумму двух предыдущих
      a = b; b = c; // перемещаем два предыдущих числа
    }
    printf("%d ", b); // выводим последнее число
  }
  
  return 0;
}