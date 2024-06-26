# stdarg.h - работа со списком переменного

## ОБЗОР

```c
#include <stdarg.h>
void va_start(va_list ap, last);
type va_arg(va_list ap, type);
void va_end(va_list ap);
void va_copy(va_list dest, va_list src);
```

# ОПИСАНИЕ

Функцию можно вызвать передав ей произвольное количество аргументов разных типов.

Во включаемом файле `<stdarg.h>` объявляется тип `va_list` и определяется три макроса для пошагового обхода списка аргументов, чьё количество и типы неизвестны вызываемой функции.

В вызываемой функции требуется объявить объект с типом `va_list`, который используется макросами `va_start()`, `va_arg()` и `va_end()`.

## `va_start()`

```c
void va_start(va_list ap, last);
```

Макрос `va_start()` инициализирует `ap` для последующего использования в `va_arg()`и `va_end()`, и должен вызываться первым.

Аргумент `last` это имя последнего аргумента перед списком с переменным количеством аргументов, то есть это последний аргумент, тип которого известен вызывающей функции.

Так как адрес этого аргумента может быть использован в макросе `va_start()`, он не должен быть объявлен как регистровая переменная, иметь тип функции или массива.

## `va_arg()`

```c
type va_arg(va_list ap, type);
```

Макрос `va_arg()` раскрывается в выражение, которое имеет тип и значение следующего аргумента в вызове. 

Аргумент `ap` — это `va_list ap`, инициализированный `va_start()`. 

Каждый вызов `va_arg()` изменяет `ap` так, что следующий вызов возвращает следующий аргумент. 

Аргумент `type` — это имя типа, указанное так, что тип указателя на объект, который имеет указанный тип, можно получить просто добавив `*` в `type`.

Первый вызов макроса `va_arg()` после `va_start()` вернёт аргумент после `last`.

Последующие вызовы вернут значения оставшихся аргументов.

Если аргументы закончились, или если `type` не совместим с типом настоящего следующего аргумента (преобразование происходит согласно преобразованию аргументов по умолчанию), может произойти любая ошибка.

Если `ap` передан в функцию, которая использует `va_arg(ap,type)`, то значение `ap` не определено после возврата из функции.

## `va_end()`

```c
void va_end(va_list ap);
```

Каждый использование `va_start()` должно завершаться соответствующим вызовом `va_end()` в той же функции. После вызова `va_end(ap)` значение переменной `ap` не определено. 

Возможно несколько проходов по списку, если каждый из них начинать `va_start()` и заканчивать `va_end()`. 

Макрос `va_end()` может быть и функцией.

## `va_copy()`

Макрос `va_copy()` копирует (ранее инициализированный) список с переменным количеством аргументов `src` в `dest`. 

Его действие такое же, как если бы `va_start()` применили к `dest` с тем же аргументом `last`, после чего было бы совершено такое же количество вызовов `va_arg()`, которое имеется в текущем состоянии `src`.

Очевидной реализацией было бы создать переменную с типом `va_list`, указывающую на стековый фрейм функции с переменным количеством аргументов. В этом случае (безусловно, наиболее распространенном) кажется, что достаточно присвоения

```c
va_list aq = ap;
```

К сожалению, есть системы, в которых это массив указателей (длиной `1`), и нужно делать

```c
va_list aq;
*aq = *ap;
```

Наконец, в системах, где аргументы передаются через регистры, в `va_start()` может потребоваться выделить память, сохранить там аргументы, а также индекс следующего элемента для того, чтобы `va_arg()` мог обойти список. Также `va_end()` может освобождать выделенную память. 

Чтобы всё это учесть в C99 добавлен макрос `va_copy()`, который позволяет показанное выше назначение заменить на

```c
va_list aq;
va_copy(aq, ap);
...
va_end(aq);
```

Для каждого вызова `va_copy()` должен быть соответствующий вызов `va_end()` в той же функции. В некоторых системах нет `va_copy()`, а есть `__va_copy` — имя, которое использовалось в черновике стандарта.

# АТРИБУТЫ

Описание терминов данного раздела смотрите в [attributes](https://ru.manpages.org/attributes/7)(7).

Интерфейс | Атрибут | Значение
-|-|-
`va_start()`, `va_end()`, `va_copy()` | безвредность в нитях | безвредно (MT-Safe)
`va_arg()` | безвредность в нитях | безвредно (MT-Safe race:ap)

# СООТВЕТСТВИЕ СТАНДАРТАМ

Макросы `va_start()`, `va_arg()` и `va_end()` соответствуют C89. В C99 определён макрос va_copy().

# ЗАМЕЧАНИЯ

Эти макросы не совместимы с первыми версиями макросов, которым они пришли на смену. Обратно совместимую версию можно найти во включаемом файле `<varargs.h>`.

Изначальная версия макросов использовалась так:

```c
#include <varargs.h>
void
foo(va_alist)
    va_dcl
{
    va_list ap;
    va_start(ap);
    while (...) {
        ...
        x = va_arg(ap, type);
        ...
    }
    va_end(ap);
}
```

В некоторых системах `va_end` содержит закрывающую `'}'`, ответную `'{'` в `va_start`, поэтому оба макроса должны вызываться в одной функции.

# ДЕФЕКТЫ

В отличие от макросов `varargs`, макросы `stdarg` не позволяют программистам создать функцию без постоянных аргументов. Эта проблема создаёт работу, в основном, при преобразовании кода `varargs` в код `stdarg`, а также есть сложности с функциями с переменным количеством аргументов, которым нужно передать все их аргументы в функцию в виде аргумента с типом `va_list`, например [vfprintf](https://ru.manpages.org/vfprintf/3)(3).

# ПРИМЕР

Функция `foo` берёт строку с символами формата и печатает аргумент, связанный с каждым таким символом, на основе его типа.

```c
#include <stdio.h>
#include <stdarg.h>
void
foo(char *fmt, ...)
{
    va_list ap;
    int d;
    char c, *s;
    va_start(ap, fmt);
    while (*fmt)
        switch (*fmt++) {
        case 's':              /* строка */
            s = va_arg(ap, char *);
            printf("строка %s\n", s);
            break;
        case 'd':              /* int */
            d = va_arg(ap, int);
            printf("int %d\n", d);
            break;
        case 'c':              /* символ */
            /* здесь требуется преобразование, так как va_arg только
               с полностью описанными (promoted) типами */
            c = (char) va_arg(ap, int);
            printf("символ %c\n", c);
            break;
        }
    va_end(ap);
}
```
