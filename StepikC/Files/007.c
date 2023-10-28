/*
Написать программу выводящую на экран первые N натуральных чисел.

Входные данные:

Одно  целое число N, N>0

Выходные данные:

Первые N натуральных чисел, записанных через пробел.
*/

// #include <stdio.h>
// #include <conio.h>
// // #include <locale.h>
// // #include <math.h> // подключаем math.h

// int main() {

//     int N;
//     scanf("%d", &N);

//     for (int i =  1; i < N + 1; i++)
//     {
//             printf("%d%s", i, i < N ? " " : "");        
//     }


//     getch();  
//     return 0;
// }

/*
## Усовершенствуйте программу, написанную на прошлом шаге. Теперь необходимо вывести все натуральные числа из промежутка [K,M],(K<M)

Входные данные:
Два целых числа K,M. При этом M больше K.

Выходные данные:

Натуральные числа в порядке возрастания принадлежащие промежутку [K,M]. Числа нужно разделять одним пробелом.
*/

// #include <stdio.h>
// #include <conio.h>
// // #include <locale.h>
// // #include <math.h> // подключаем math.h

// int main() {

//     int K, M;
//     scanf("%d%d", &K, &M);
//     for (int i = K > 0 ? K : 1 ; i < M + 1; i++)
//     {
//             printf("%d%s", i, i < M ? " " : "");        
//     }


//     getch();  
//     return 0;
// }

/*
## Усовершенствовать программу, написанную на прошлом шаге: дополнительно на отдельной строке вывести количество напечатанных чисел.

Входные данные:

Два целых числа K,M. При этом M больше K.

Выходные данные:

Натуральные числа в порядке возрастания, принадлежащие промежутку [K,M]. 

Числа нужно разделять одним пробелом. 

На новой строке вывести количество выведенных натуральных чисел, а если натуральные числа отсутствуют -- ноль.

Уточнение:

На конце первой строки обязательно должен ставиться пробел.
*/

// #include <stdio.h>
// #include <conio.h>
// // #include <locale.h>
// // #include <math.h> // подключаем math.h

// int main() {

//     int K, M, res = 0;
//     scanf("%d%d", &K, &M);
//     for (int i = K > 0 ? K : 1 ; i < M + 1; i++)
//     {
//             printf("%d ", i);
//             res++;        
//     }
//     printf("\n%d", res);

//     getch();  
//     return 0;
// }

/*
## Вывести через пробел все целые числа из промежутка [A,B],(A<B) в обратном порядке: от B до A.

Входные данные:

Два целых числа A,B, при этом A<B.

Выходные данные:

Целые числа из промежутка от [A,B], записанные через пробел в обратном порядке.
*/

// #include <stdio.h>
// #include <conio.h>
// // #include <locale.h>
// // #include <math.h> // подключаем math.h

// int main() {

//     int A, B;
//     scanf("%d%d", &A, &B);
//     for (int i = B; i > A - 1; i--)
//     {
//             printf("%d ", i);
//     }

//     getch();  
//     return 0;
// }

/*
## Факториал.
Для целого числа k(0≤k≤12) посчитать k!.

Входные данные:

Одно целое число k, (0≤k≤12).

Выходные данные:

Значение факториала числа k.
*/

// #include <stdio.h>
// #include <conio.h>
// // #include <locale.h>
// // #include <math.h> // подключаем math.h

// int main() {

//     int K, res = 1;
//     scanf("%d", &K);
//     for (int i = 1; i < K + 1; i++)
//     {
//         res *=i;
//     }
//     printf("%d ", res);

//     getch();  
//     return 0;
// }

/*
## Числа Фибоначчи
Последовательность чисел Фибоначчи определяется следующим образом:

$F_1 = 1, F_2  =1, F_3 = F_1 + F_2, … , F_k = F_{k−2} + F_{k−1}$.

Посчитать значение N-го числа Фибоначчи.

Входные данные:

Одно натуральное число N, (N≤45)

Выходные данные:

Значение N-го числа Фибоначчи.
*/

// #include <stdio.h>
// #include <conio.h>
// // #include <locale.h>
// // #include <math.h> // подключаем math.h

// int main() {

//     int N, res, N1 = 1, N2 = 1;
//     scanf("%d", &N);
//     for (int i = 1; i < N + 1; i++)
//     {
//         res = N1;
//         N1 = N2;
//         N2 = N1 + res;
//         printf("%d ", res);    
//     }
//     printf("%d ", res);

//     getch();  
//     return 0;
// }

/*
## Вывести все числа из промежутка [A;B],(B>A). При этом число A должно выводиться 1 раз, число A+1 -- два раза, A+2 -- три раза и т.д.

Входные данные:

Два натуральных числа A,B, таких, что (B>A).

Выходные данные:

Число A, два числа A+1, три числа A+2 и т.д. Каждое число занимает поле шириной в 5 символа, выравнивание по правому краю.
*/

// #include <stdio.h>
// #include <conio.h>
// // #include <locale.h>
// // #include <math.h> // подключаем math.h

// int main() {

//     int A, B, count = 1, i, j;
//     scanf("%d%d", &A, &B);
    
//     for (j = A; j < B + 1; j++)
//     {
//         for (int i = 0; i < count; i++)
//         {
//             printf("%5d", j);    
//         }
//         count++;
//     }

//     getch();  
//     return 0;
// }

/*
## Измените программу, написанную на прошлом шаге таким образом, чтобы каждое число выводилось столько раз, каково его значение. Например, число 5 раз.

Входные данные:

Два натуральных числа A,B, таких, что B>A.

Выходные данные:

A чисел A, A+1 чисел A+1 и т.д. 

Каждое число занимает поле шириной в 4 символа.
*/

// #include <stdio.h>
// #include <conio.h>
// // #include <locale.h>
// // #include <math.h> // подключаем math.h

// int main()
// {
//     int A, B;
//     scanf("%d%d", &A, &B);
    
//     for (int j = A; j < B + 1; j++)
//     {
//         for (int i = 0; i < j; i++)
//         {
//             printf("%4d", j);    
//         }
//     }

//     getch();  
//     return 0;
// }

/*
## Делители
Для заданного числа n вывести все его делители и их количество на экран.

Входные данные:

Одно натуральное число N.

Выходные данные:

Делители числа N, записанные через один пробел в порядке возрастания .

Количество делителей на отдельной строке.
*/

// #include <stdio.h>
// #include <conio.h>
// // #include <locale.h>
// // #include <math.h> // подключаем math.h

// int main()
// {
//     int N;
//     int count;

//     count = 0;

//     scanf("%d", &N);
    
//     for (int j = 1; j < N / 2 + 1; j++)
//     {
//         if (N % j == 0)
//         {
//             printf("%d ", j);
//             count++;
//         }
//     }
//             printf("%d\n%d", N, count + 1);

//     getch();  
//     return 0;
// }

/*
## Для заданного числа N проверить, является ли оно простым.

Входные данные:

Одно натуральное число N, отличное от 1.

Выходные данные:

1 -- если число простое<br>
0 -- если число составное<br>
*/

// #include <stdio.h>
// #include <conio.h>
// #include <locale.h>
// #include <math.h> // подключаем math.h

// int main()
// {
//     int N;

//     scanf("%d", &N);
    
//     for (int j = 2; j < N / 2 + 1; j++)
//     {
//         if (N % j)
//         {
//             continue;
//         }
//         else
//         {
//             printf("%d ", 0);
//             return 0;
//         }
//     }
//     printf("%d ", 1);

//     getch();  
//     return 0;
// }

/*
Гилл Байтс изучил циклы и решил написать программу, которая ищет максимальное среди чисел введённых пользователем. Предполагалось, что программа будет работать следующим образом.
Пользователь вводит точное количество чисел, которые он хочет сравнить, например 5. После этого вводит свои пять чисел по модулю не превышающих 100. Далее программа выдаёт ему максимальное среди них.

Гилл, как обычно, поторопился и допустил в программе некоторые ошибки. Помогите ему их исправить.

Обратите внимание на разработанный Гиллом алгоритм. 

Это стандартный алгоритм поиска максимального числа. 

Попытайтесь самостоятельно разобраться с тем, как он работает. 

Возникнут трудности пишите в комментарии к этому уроку.
*/

// #include <stdio.h>
// #include <conio.h>
// // #include <limits.h>
// // #include <locale.h>
// // #include <math.h> // подключаем math.h

// int main()
// {
//     int N;
//     scanf("%d", &N);

//     int max = -999;
//     int number;

//     for (int i = 0; i < N; i++)
//     {
//         scanf("%d", &number);
//         if (max < number)
//         max = number;
//     }
//     printf("%d", max);

//     getch();  
//     return 0;
// }

/*
## Последовательность

Вывести последовательность чисел, поступившую на вход.

Входные данные:

На вход программы поступает последовательность целых чисел. 

Количество чисел в последовательности заранее неизвестно. 

Но известно, что в конце последовательности записано число -9999 и в последовательности всегда есть хотя бы одно число, кроме -9999.

Выходные данные:
Вывести элементы последовательности на экран через пробел.
*/

// #include <stdio.h>
// #include <conio.h>
// // #include <limits.h>
// // #include <locale.h>
// // #include <math.h> // подключаем math.h

// int main()
// {
//     int N;
//     do
//     {
//     scanf("%d", &N);
//     printf("%d", N);

//     } while (N != -9999);

//     getch();  
//     return 0;
// }

/*
## Последовательность 2.
Вывести последовательность чисел, поступившую на вход.

Входные данные:
На вход программы поступает последовательность целых чисел. Количество чисел в последовательности заранее неизвестно, но зато известно, что в конце последовательности записано число -9999 и в последовательности всегда есть хотя бы одно число.

Выходные данные:
Вывести все элементы последовательности, кроме заключительного -9999, на экран.
*/

// #include <stdio.h>
// #include <conio.h>
// // #include <limits.h>
// // #include <locale.h>
// // #include <math.h> // подключаем math.h

// int main()
// {
//     int N;
//     while (1)
//     {
//     scanf("%d", &N);
//         if (N == -9999)
//         {
//             return 0;
//         }
//         else
//         {
//             printf("%d", N);
//         }
//     } 

//     getch();  
//     return 0;
// }

/*
## Сумма элементов последовательности
Вычислить сумму элементов последовательности неизвестной длины.

Входные данные:

Последовательность целых чисел, оканчивающаяся нулём.

Выходные данные:

Одно целое число -- сумма всех элементов последовательности.
*/

// #include <stdio.h>
// #include <conio.h>
// // #include <limits.h>
// // #include <locale.h>
// // #include <math.h> // подключаем math.h

// int main()
// {
//     int N;
//     int result;

//     result = 0;

//     while (1)
//     {
//     scanf("%d", &N);
//         if (N == 0)
//         {
//             printf("%d", result);
//             return 0;
//         }
//         else
//         {
//             result +=N;
//         }
//     } 

//     getch();  
//     return 0;
// }

/*
## Максимум и минимум

Необходимо найти максимальный и минимальный элемент последовательности, неизвестной длины.

Входные данные:

Последовательность целых чисел, оканчивающаяся нулём. Само число нуль не является членом последовательности, а является лишь сигналом того, что достигнут конец последовательности. В последовательности есть как минимум одно ненулевое число.

Выходные данные:

Вывести два целых числа M и m, где M - максимальный элемент последовательности, m - минимальный элемент последовательности.
*/

// // #include <locale.h>
// // #include <math.h> // подключаем math.h

// #include <stdio.h>
// #include <limits.h>

// int main(void) {
//     int N;
//     int max;
//     int min;

//     max = INT_MIN;
//     min = INT_MAX;

//     while (1)
//     {
//     scanf("%d", &N);
//     if (N == 0)
//         {
//             printf("%d %d", max, min);
//             return 0;
//         }
//     if (N > max)
//         {
//             max = N;
//         }
//     if (N < min && N != 0)
//         {
//             min = N;
//         }
// }
  
//   return 0;
// }

/*
## Точные квадраты
Выведите на экран все точные квадраты натуральных чисел, не превосходящие данного числа N. Выводить квадраты следует от меньшего к большему.

Входные данные:

Одно целое число N. (1≤N≤10000)

Выходные данные:

Квадраты натуральных чисел, записанные через пробел.
*/

// #include <locale.h>
// #include <math.h> // подключаем math.h
// #include <limits.h>

// #include <stdio.h>
// #include <math.h>

// int main(void) {
//     int N;

//     scanf("%d", &N);

//     for (int i = 1; i < N + 1; i++)
//     {
//         if ( sqrt(i) - (int) sqrt(i) > 0)
//         {
//             printf("%d ", i);
//         }    
//     }
    
//     return 0;
// }

/*
## Степень двойки
По данном числу N определить, является ли оно степенью числа 2.

Входные данные:

Одно целое неотрицательное число N.

Выходные данные:

YES -- если число N является степенью двойки, и NO в противном случае.
*/

// #include <stdio.h>
// #include <math.h>

// int main(void) {
//     int N;
//     int temp;
//     int power;

//     scanf("%d", &N);
    
//     power = 0;
//     temp = N;

//     while (N > 1)
//     {
//         N /=2;
//         power++;
//     }
    
//     printf("%s", temp == (int) pow(2, power)? "YES": "NO");
        
//     return 0;
// }

/*
## Количество цифр
Подсчитать количество цифр в записи натурального числа N.

Входные данные:

Одно натуральное число N.

Выходные данные:

Одно целое число k -- количество цифр в записи числа N.
*/

// #include <stdio.h>
// #include <math.h>

// int main(void) {
//     int N;
//     int result;

//     result = 0;
    
//     scanf("%d", &N);
    
//     while (N > 0)
//     {
//         N /= 10;
//         result++;
//     }
    
//     printf("%d", result);
        
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main(void) 
// {
//     int N;
//     int result;

//     result = 1;
    
//     scanf("%d", &N);
    
//     while (pow(2, result) < N)
//     {
//         printf("%d ", result);
//         result++;
//     }
        
//     return 0;
// }

/*
## Дано натуральное число N. Найти наименьшее натуральное число r, такое, что $2^r ≥N$.

Входные данные:

Одно натуральное число N.

Выходные данные:

Число r
*/

// #include <stdio.h>
// #include <math.h>

// int main(void) 
// {
//     int N;
//     int result;

//     result = 1;
    
//     scanf("%d", &N);
    
//     while (pow(2, result) < N)
//     {
//         result++;
//     }

//     printf("%d ", result);        
    
//     return 0;
// }

/*
## Перевёртыш
Напишите программу, которая по данному натуральному N печатает его цифры в обратном порядке.

Входные данные:

Одно натуральное число N.

Выходные данные:
Цифры числа N, записанные в обратном порядке.
*/

// #include <stdio.h>
// #include <math.h>

// int main(void) 
// {
//     int N;
    
//     scanf("%d", &N);
    
//     while (N > 0)
//     {
//         printf("%d", N % 10);        
//         N/=10;
//     }

//     return 0;
// }

/*
## Экспонента с заданной точностью

Вычислить число $e = 1 + \dfrac{1}{1!} + \dfrac{1}{2!} + \dfrac{1}{3!} + \dfrac{1}{4!} + …$ с точностью  ε.

Входные данные:

Вещественное число $ε,(10^{−9} <= ε <= 10^{−1})$ .

Выходные данные:

Значение числа e с точностью ϵ (8 знаков после запятой). Считать, что достигнута точность ε, если очередной член последовательности меньше ε, т.е. $ \dfrac{1}{k!} < ε$
*/

// #include <stdio.h>
// #include <math.h>

// int main(void) 
// {
//     double e;
//     double eps;
//     double k;
//     double fact;

//     e = 0;
//     k = fact = 1.0L;
    
//     scanf("%lf", &eps);
    
//     while (1)
//     {
//         e += 1/fact;
//         fact *= k++;
//         // printf("%.8lf\t %lf \n", 1/fact, fact);
//         if (1/fact > eps)
//         {
//             printf("%.8lf", e);
//             return 0;
//         }
//     }
//     // printf("%.8lf\n", e);
//     // printf("%.8lf", eps);

//     return 0;
// }

/*
## Быстрое возведение в степень
Гилл Байтс на последнем занятии по информатике изучал алгоритм быстрого возведения числа a в степень k. Он основывается на следующем свойстве степени: $a^{2k} =a^k \cdot a^k$

Например, при нахождении чётной степени $a^4$ вместо последовательного вычисления $a^2, a^3$ и $a^4$ можно после вычисления $a^2$ умножить это число само на себя и получить сразу $a^4$. При нахождении нечётной степени, например, $a^5 можно действовать по тому же алгоритму, но получив $a^4 домножить результат на a.
*/

// #include <stdio.h>
// #include <conio.h>
// #include <math.h>

// int main(void) 
// {
//     int a, k;
//     int res;

//     scanf("%d %d", &a, &k);
//     res = pow(a, k);
//     printf("%d\n", res);
    
//     getch();
//     return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// #include <math.h>

// int main(void) 
// {
//     int a, k;
//     int res;

//     scanf("%d %d", &a, &k);
//     res = 1;
//     //пока степень больше нуля
//     while (k > 0)
//     {
//         // если степень чётная, то
//         if (k%2 == 0) 
//         { 
//             a = a * a; // умножаем текущий результат на себя
//             k = k/2;       // степень делим пополам
//         }
//         else if (k%2)
//         { //если степень нечётная
//             res = res * a; // то умножаем на исходное число
//             k = k - 1;   // от степени вычитаем единицу
//         }
//     }
//     printf("%d\n", res);

//     getch();
//     return 0;
// }

/*

*/

// #include <stdio.h>
// #include <conio.h>
// #include <math.h>

// int main(void) 
// {
//     int a, b;
//     int res;

//     scanf("%d %d", &a, &b);
//     res = a * b;
//     //найдем НОД - наибольший общий делитель
//     while (a !=0 && b != 0)
//     {
//         if (a > b) 
//         { 
//             a = a % b; 
//         }
//         else 
//         {
//             b = b % a;
//         }
//     }
//     //найдем НОК - наименьшее общее кратное
//     printf("%d", res / (a + b));

//     getch();
//     return 0;
// }

/*
## Последовательность 3.1

Вывести положительные члены последовательности чисел, поступившей на вход.

Входные данные:

На вход программы поступает последовательность целых чисел. Количество чисел в последовательности заранее неизвестно. Но известно, что в конце последовательности записано число нуль и в последовательности всегда есть хотя бы одно число.

Выходные данные:

Вывести положительные элементы последовательности на экран через пробел. Заключительный символ нуль выводить не нужно.
*/

// #include <stdio.h>
// #include <conio.h>
// #include <math.h>

// int main(void) 
// {
//     int a;
    
//     while(1)
//     {
//         scanf("%d", &a);
//         if (a > 0) 
//         { 
//             printf("%d ", a);
//         }
//         else if (a == 0)
//         {
//             return 0;
//         }
//     }
    
//     getch();
//     return 0;
// }

/*
## Пирамида.
Вывести на экран пирамиду из чисел (см. пример входных данных).

Входные данные:

Одно целое число N.

Выходные данные:

Пирамида из натуральных чисел высоты N.
*/

// #include <stdio.h>
// #include <conio.h>
// #include <math.h>

// int main(void) 
// {
//     int N;
//     scanf("%d", &N);
    
//     for (int i = 1; i < N + 1; i++)
//     {
//         for (int j = 1; j < i + 1; j++)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
    
//     getch();
//     return 0;
// }

/*
## Положительная последовательность
Будем называть последовательность положительной, если все числа последовательности неотрицательны.

Входные данные:

Целочисленная последовательность произвольной длины, заканчивающаяся числом −9999

Выходные данные:

YES -- если последовательность положительная, NO в противном случае - в последовательности присутствуют отрицательные числа или числа отсутствуют, то есть сразу подаётся число −9999 (тест №3).
*/

// #include <stdio.h>
// // #include <conio.h>
// #include <math.h>

// int main(void) 
// {
//     int N, flag;
//     flag = 1;
    
//     while(1)
//     {
//         scanf("%d", &N);
//         if (N == -9999)
//         {
//             printf("%s", flag? "NO" : "YES");
//             return 0;
//         }
//         else if (N < 0)
//         {
//             printf("%s", "NO");
//         }
//         else
//         {
//             flag = 0;
//         }
//     }
        
//     // getch();
//     return 0;
// }

/*
## Дубликаты
Удалить из последовательности дубликаты.

Входные данные:

В первой строке задано натуральное число N. Во второй строке записана упорядоченная по возрастанию последовательность из N целых чисел, которая может содержать одинаковые элементы.

Выходные данные:

Вывести все различные элементы последовательности, упорядоченные по возрастанию.

*/

// #include <stdio.h>
// #include <math.h>

// int main(void) 
// {
//     int count;
//     scanf("%d", &count);
//     int numbers[count];

//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &numbers[i]);
//     }
    
//     printf("%d", numbers[0]);

//     for (int i = 1; i < count; i++)
//     {
//         if (numbers[i] != numbers[i-1])
//         {
//             printf("%d ", numbers[0]);
//         }
//     }
        
//     return 0;
// }

/*
## Возрастающая последовательность

Последовательность назовём возрастающей, если каждый её следующий член больше предыдущего. Написать программу, проверяющую является ли последовательность возрастающей.

Входные данные:

Последовательность целых чисел. Признак окончания последовательности - число -9999. В последовательности всегда есть хотя бы два числа, кроме числа -9999.

Выходные данные:

YES -- если последовательность является возрастающей, NO в противном случае.
*/

// #include <stdio.h>

// int main() {
//     int N, flag, test;
//     flag = 1;
//     test = -9999;
    
//     while(1)
//     {
//         scanf("%d", &N);
//         if (N == -9999)
//         {
//             printf("%s", flag? "NO" : "YES");
//             return 0;
//         }
//         else if (N <= test)
//         {
//             printf("%s", "NO");
//             return 0;
//         }
//         else
//         {
//             flag = 0;
//             test = N;
//         }
//     }
//     return 0;
// }

/*
## Возрастающая последовательность 2

Модернизировать программу, написанную на прошлом шаге так, чтобы программа выдавала число 0, если последовательность возрастающая, либо номер элемента последовательности, нарушающего возрастание.

Входные данные:

Последовательность целых чисел. Признак окончания последовательности - число -9999.

Выходные данные:

Число 0 -- если последовательность возрастающая. Число k -- если последовательность не является возрастающей. 

k -- номер первого члена последовательности, которые нарушает возрастание.
*/

#include <stdio.h>

int main() {
    int N, flag, test, count;
    flag = 1;
    test = -9999;
    count = 1;
    
    while(1)
    {
        scanf("%d", &N);
        if (N == -9999)
        {
            printf("%d", flag? count : flag);
            return 0;
        }
        else if (N <= test)
        {
            printf("%s", "NO");
            return 0;
        }
        else
        {
            flag = 0;
            test = N;
            count++;
        }
    }
    return 0;
}



