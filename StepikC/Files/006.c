/*
## Сказка о богатыре

Гилл Байт с прошлого раза чуть-чуть поднаторел в программировании. Поверив в себя, он решил написать эмулятор сказки о богатыре. Но, конечно, он был слишком самонадеян, плохо изучил теоретические основы урока, а потому всё напутал. Помогите ему исправить код, который он написал.

Входные данные:
Либо один из трёх символов f, l, r, либо любой другой символ

Выходные данные:

Одна из строк в зависимости от входных данных:<br>
l -- коня потеряешь, себя спасёшь! <br>
f -- и себя и коня потеряешь!<br>
r -- себя потеряешь, коня спасёшь!<br>
Если поступает любой другой символ, то ничего выводить не требуется.
*/
// #include <stdio.h>
// #include <conio.h>
// #include <locale.h>
// #include <math.h> // подключаем math.h

// int main() {

//   setlocale(LC_ALL, "");
//   char s;  
//   scanf("%c",&s);

//   switch (s) {
//     case 'l' : printf("коня потеряешь, себя спасёшь!\n"); break;
//     case 'f' : printf("и себя и коня потеряешь!\n"); break;
//     case 'r' : printf("себя потеряешь, коня спасёшь!\n"); break;
//     default  : break;
//   }  
    
//     getch();  
//     return 0;
// }

/*
## Написать программу, позволяющую получить словесное описание школьных отметок (1 — «плохо», 2 — «неудовлетворительно», 3 — «удовлетворительно», 4 — «хорошо», 5 — «отлично»).

Входные данные: Одно целое число k от 1 до 5.

Выходные данные:
Соответствующая k текстовое описание отметки.
*/

// #include <stdio.h>
// #include <conio.h>
// #include <locale.h>
// #include <math.h> // подключаем math.h

// int main() {

//   setlocale(LC_ALL, "");
//   int N;  
//   scanf("%d",&N);

//   switch (N) {
//     case 1 : printf("плохо\n"); break;
//     case 2 : printf("неудовлетворительно\n"); break;
//     case 3 : printf("удовлетворительно\n"); break;
//     case 4 : printf("хорошо\n"); break;
//     case 5 : printf("отлично\n"); break;
//     default  : break;
//   }  
    
//     getch();  
//     return 0;
// }

/*
## Гадание.

Написать программу, определяющую результат гадания на ромашке по количеству лепестков на ней.

Входные данные:
Одно целое число k -- количество лепестков на ромашке.

Выходные данные:

Одна строка в зависимости от результата: Любит или Не любит. Отрывая первый лепесток, произносится фраза Любит, второй -- Не любит.
*/

// #include <stdio.h>
// #include <conio.h>
// #include <locale.h>
// #include <math.h> // подключаем math.h

// int main() {

//     setlocale(LC_ALL, "");
//     int N;  
//     scanf("%d",&N);
//     if (N % 2)
//     {
//         printf("Любит\n");
//     }
//     else
//     {
//         printf("Не любит\n");
//     }
//     getch();  
//     return 0;
// }

/*
## Напишите программу-калькулятор для четырёх основных арифметических действий.

Входные данные:
Символ действия c и два целых числа a, b (b!=0)

Выходные данные:
Одно вещественное число, либо строку ERROR!, если введено недопустимое действие. Формат вывода чисел: два знака после запятой.
*/

// #include <stdio.h>
// #include <conio.h>
// #include <locale.h>
// #include <math.h> // подключаем math.h

// int main() {
//     char c;  
//     int a, b;

//     scanf("%c %d %d", &c, &a, &b);
      
//     switch (c) {
//         case '+' : printf("%.2lf\n", (double)(a + b)); break;
//         case '-' : printf("%.2lf\n", (double)(a - b)); break;
//         case '*' : printf("%.2lf\n", (double)(a * b)); break;
//         case '/' : printf("%.2lf\n", (double)(a / b)); break;
//         default : printf("ERROR!\n"); break;
//     }
    
//     getch();  
//     return 0;
// }

/*
## Усовершенствуйте программу, написанную на прошлом шаге. Теперь она должна работать для любых целых чисел, включая случай, когда b=0.

Входные данные:
Два целых числа a, b и символ действия c.

Выходные данные:
Одно вещественное число, либо строку ERROR!, если введено недопустимое действие или действие выполнить невозможно (деление на ноль). Формат вывода чисел: два знака после запятой.
*/

// #include <stdio.h>
// #include <conio.h>
// #include <locale.h>
// #include <math.h> // подключаем math.h

// int main() {
//     char c;  
//     int a, b;

//     scanf("%d %d %c", &a, &b, &c);
      
//     switch (c) {
//         case '+' : printf("%.2lf\n", (double)(a + b)); break;
//         case '-' : printf("%.2lf\n", (double)(a - b)); break;
//         case '*' : printf("%.2lf\n", (double)(a * b)); break;
//         case '/' : b == 0? printf("ERROR!\n") : printf("%.2lf\n", (double)(a / b)); break;
//         default : printf("ERROR!\n"); break;
//     }
    
//     getch();  
//     return 0;
// }

/*
## Уровень базового обмена веществ

В [третьем уроке](http://youngcoder.ru/lessons/3/vvod_dannyh_scanf.php) был приведён код программы, которая подсчитывает уровень базового обмена веществ по формуле Миффлина-Сан Жеора исходя из данных, которые вы введёте (возраст, рост и вес). Модифицируйте данную программу так, чтобы она дополнительно принимала и учитывала сведения о половой принадлежности человека.

Входные данные:<br>
Один символ и три целых числа.<br>
Символ f (female) или m(male), обозначающий половую принадлежность.<br>
Первое число a -- целое, возраст человека<br>
Второе число ℎ -- целое, рост человека в сантиметрах<br>
Третье число w -- целое, вес человека в килограммах.<br>

Выходные данные:

Вывести уровень базового обмена веществ в таблице, оформленной в соответствии примером ниже. 

Если первый аргумент не является символом f или m, то необходимо вывести одно слово ERROR!

*/

// #include <stdio.h>
// #include <conio.h>
// #include <locale.h>
// #include <math.h> // подключаем math.h

// int main() {

//     char sex;
//     int age, height, weight;
//     double bov;
    
//     scanf("%c %d %d %d", &sex, &age, &height, &weight); 
//     switch (sex)
//     {
//     case 'f':
//         bov = 10*weight + 6.25*height - 5*age - 161;
//         break;
//     case 'm':
//         bov = 10*weight + 6.25*height - 5*age + 5;
//         break;
//     default:
//         printf("ERROR!\n"); return 0;
//     }
  
//     printf("|  BMR  |\n");
//     printf("|%7.2f|\n",bov);
    
//     getch();  
//     return 0;
// }

/*
## Високосный год

Вычислить номер дня в невисокосном году по заданным числу и месяцу.

Входные данные:

Два целых числа. Первое число m -- номер месяца. 1≤m≤12

Второе число d -- номер дня в месяце. 1≤d≤31

Выходные данные:

Одно целое число -- порядковый номер дня в невисокосном году.
*/
// #include <stdio.h>
// #include <conio.h>
// #include <locale.h>
// #include <math.h> // подключаем math.h

// int main() {

//     int m, d, res, D[12] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
    
//     scanf("%d%d", &m, &d);

//     res = D[m-1] + d;
    
//     printf("%d\n", res);
    
//     getch();  
//     return 0;
// }


// #include <stdio.h>
// #include <conio.h>
// #include <locale.h>
// #include <math.h> // подключаем math.h

// int main() {

//     int k, x, res = 1;
    
//     scanf("%d%d", &k, &x);

//     while (x>0)
//     {
//         res *= x % 10;
//         x /= 10;
//     }
    
//     printf("%d\n", res);
    
//     getch();  
//     return 0;
// }

/*
## Мне K лет

Для целого числа K (от 1 до 99 включительно) напечатать фразу «Мне K лет», учитывая при этом, что при некоторых значениях K слово «лет» надо заменить на слово «год» или «года». Например, 11 лет, 22 года, 51 год.

Входные данные: Одно целое число K, 1≤k≤99

Выходные данные: Фраза с правильным окончанием
*/

// #include <stdio.h>
// #include <conio.h>
// #include <locale.h>
// #include <math.h> // подключаем math.h

// int main() {

//     setlocale(LC_ALL, "");
//     int K, d;
    
//     scanf("%d", &K);
//     d = K % 10;

//     switch (K)
//     {
//     case 11 :
//     case 12 :
//     case 13 :
//     case 14 :
//         printf("Мне %d лет\n", K);
//         return 0;
//     default:
//         switch (d)
//         {
//         case 1 :
//             printf("Мне %d год\n", K);
//             break;
//         case 2 :
//         case 3 :
//         case 4 :
//             printf("Мне %d года\n", K);
//             break;
//         default:
//             printf("Мне %d лет\n", K);
//             break;
//         }    
//     }
    
//     getch();  
//     return 0;
// }

/*
## Сравнение чисел
Напишите программу, сравнивающую два целых числа.

Входные данные:

Два целых числа x, y 

Выходные данные:
1 -- если x=y
0 -- если x≠y
*/
// #include <stdio.h>
// #include <conio.h>
// #include <locale.h>
// #include <math.h> // подключаем math.h

// int main() {

//     int x, y;
    
//     scanf("%d %d", &x, &y);

//     printf("%d", x == y);

//     getch();  
//     return 0;
// }

/*
## Квадранты

На координатной плоскости $O_{xy}$ задана точка A(x,y). Необходимо указать квадрант, в котором она расположена. Номера квадрантов представлены на рисунке ниже.

 ![006](/StepikC/Pictures/006_015.jpg)

|||
-|-
2|1
3|4

Входные данные:

Два вещественных числа x, y, которые не равны нулю.

Выходные данные:
Вывести одно целое -- номер квадранта.
*/

// #include <stdio.h>
// #include <conio.h>
// #include <locale.h>
// #include <math.h> // подключаем math.h

// int main() {

//     double x, y;
//     int res;
    
//     scanf("%lf %lf", &x, &y);

//     if (x > 0 && y > 0)
//     {
//         res = 1;
//     }
//     else if (x < 0 && y > 0)
//     {
//         res = 2;
//     }
//     else if (x < 0 && y < 0)
//     {
//         res = 3;
//     }
//     else
//     {
//         res = 4;
//     }
    
//     printf("%d", res);

//     getch();  
//     return 0;
// }

/*
## Модель анализа пожарного датчика

Написать программу — модель анализа пожарного датчика в помещении, которая выводит сообщение Fire situation, если температура в комнате превысила 60 градусов по Цельсию.

Входные данные:

Одно целое число T -- температура в помещении.

Выходные данные:

Строка Fire situation, если T>60. В противном случае ничего выводить не нужно.
*/

// #include <stdio.h>
// #include <conio.h>
// #include <locale.h>
// #include <math.h> // подключаем math.h

// int main() {

//     int T;
//     scanf("%d", &T);

//     if (T > 60)
//     {
//         printf("Fire situation");
//     }
    
//     getch();  
//     return 0;
// }

/*
## Даны три числа. Подсчитать количество положительных среди этих чисел.

Входные данные:

Три целых числа a,b,c.

Выходные данные:

Одно целое число -- количество положительных чисел, среди чисел a,b,c.
*/

// #include <stdio.h>
// #include <conio.h>
// // #include <locale.h>
// // #include <math.h> // подключаем math.h

// int main() {

//     int res = 0, x;
    
//     for (int i = 0; i < 3; i++)
//     {
//         scanf("%d", &x);
//         if (x > 0)
//         {
//             res++;
//         }
//     }
//     printf("%d", res);
    
//     getch();  
//     return 0;
// }

/*
## Написать программу проверяющую, является ли правильной дробь A/B.

Входные данные:
Два натуральных числа A,B.

Выходные данные:

Строка yes, если дробь правильная, строка no в противном случае.
*/

// #include <stdio.h>
// #include <conio.h>
// // #include <locale.h>
// #include <math.h> // подключаем math.h

// int main() {

//     int A, B;
    
//     scanf("%d%d", &A, &B);
//         if (A/B == 0)
//         {
//             printf("yes");
//         }
//         else
//         {
//             printf("no");
//         }
    
//     getch();  
//     return 0;
// }

/*
## Даны две точки: $А(х_1, у_1)$ и $В(х_2, у_2)$. Составить программу, определяющую, которая из точек находится ближе к началу координат.

Входные данные:

Четыре целых числа. Первые два числа -- координаты точки A(первая точка), следующие два числа -- координаты точки B(вторая точка).

Выходные данные:

Вывести одно число, номер точки, которая находится ближе к началу координат. Если расстояния между точками до начала координат равны - вывести 0.
*/

// #include <stdio.h>
// #include <conio.h>
// // #include <locale.h>
// #include <math.h> // подключаем math.h

// int main() {

//     int x1, y1, x2, y2, l1, l2;
    
//     scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        
//     l1 = x1 * x1 + y1 * y1;
//     l2 = x2 * x2 + y2 * y2;
    
//     printf("%d", (l1>l2) + 2 * (l1<l2));
    
//     getch();  
//     return 0;
// }

/*
## Кодовый замок

Кнопочный электронный кодовый замок имеет десять кнопок. Каждая из кнопок имеет свой порядковый номер от 0 до 9. Правильный код 1024 зашит внутрь замка. Человек, который хочет открыть дверь, должен ввести на циферблате последовательно 1, 0, 2 и 4. Напишите программу, моделирующую работу такого замка.

Входные данные:
Четыре целых числа b1 ,b2 ,b3 ,b4 -- номера кнопок, которые нажал человек.

Выходные данные:

Строка open, если введён правильный код. Строка close, если введён неправильный код.
*/

// #include <stdio.h>
// #include <conio.h>
// // #include <locale.h>
// #include <math.h> // подключаем math.h

// int main() {

//     int b1, b2, b3, b4, res;
//     scanf("%d %d %d %d", &b1, &b2, &b3, &b4);

//     res = b1 * 1000 + b2 * 100 + b3 * 10 + b4;
        
//     printf("%s", res == 1024 ? "open" : "close");
    
//     getch();  
//     return 0;
// }

/*
## Кодовый замок 2

Кнопочный механический кодовый замок имеет десять кнопок. Каждая из кнопок имеет свой порядковый номер от 0 до 9. Правильный код зашит внутрь замка и состоит из трёх цифр 2,4,8. Человек, который хочет открыть дверь, должен последовательно нажать и удерживать эти три кнопки в любом порядке.
Например, сначала зажать 2, потом, не отпуская двойку, нажать 4, потом нажать 8, не отпуская предыдущих двух кнопок. Порядок мог бы быть другим. Например, 4->2->8 тоже бы сработало.
Напишите программу, моделирующую работу такого замка.

Входные данные:
Три целых числа b1, b2, b3 -- номера кнопок, которые нажал человек.

Выходные данные:
Строка open, если введён правильный код. Строка close, если введён неправильный код.
*/

// #include <stdio.h>
// #include <conio.h>
// // #include <locale.h>
// #include <math.h> // подключаем math.h

// int main() {

//     int b1, b2, b3, res;
//     scanf("%d %d %d", &b1, &b2, &b3);

//     res = b1 * 100 + b2 * 10 + b3;
//     res = res == 248 || res == 284 ||\
//           res == 428 || res == 482 ||\
//           res == 824 || res == 842;

//     printf("%s", res ? "open" : "close");
    
//     getch();  
//     return 0;
// }

/*
## Плата за телефон

Услуги телефонной сети оплачиваются по следующему правилу: за разговоры до 500 минут (включительно) в месяц — 350 руб., а разговоры сверх установленной нормы оплачиваются из расчета 2 руб. за минуту. Написать программу, вычисляющую плату за пользование телефоном для введенного времени разговоров за месяц.

Входные данные:
Одно целое число -- количество минут разговора за прошедший месяц.

Выходные данные:
Одно целое число -- размер платы в рублях за прошедший месяц.
*/

// #include <stdio.h>
// #include <conio.h>
// // #include <locale.h>
// #include <math.h> // подключаем math.h

// int main() {

//     int D;
//     scanf("%d", &D);
//     printf("%d", 350 + (D > 500) * ((D - 500) * 2));
    
//     getch();  
//     return 0;
// }

/*
## Определить правильность даты 

Определить правильность даты, введенной с клавиатуры (число — от 1 до 31, месяц — от 1 до 12). Если введены некорректные данные, то сообщить об этом.

Входные данные:
Два целых числа: первое -- число в месяце, второе -- номер месяца в году.

Выходные данные:
Строка correct, если дата правильная, и строка error, если подобной даты не может быть.

Уточнение:
Предполагаем, что в феврале 29 дней.
*/

#include <stdio.h>
#include <conio.h>
// #include <locale.h>
#include <math.h> // подключаем math.h

int main() {

    int D, M, MD[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d %d", &D, &M);
    printf("%s", D > MD[M-1] ? "error" : "correct");
    
    getch();  
    return 0;
}