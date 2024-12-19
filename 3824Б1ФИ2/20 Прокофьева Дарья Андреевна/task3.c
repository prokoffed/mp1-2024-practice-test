// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Скопировать строку s в новую и зашифровать ее,
// заменяя каждую букву на следующую за ней в алфавите 
// (считать, что за ‘z’ следует ‘a’), сохраняя регистр.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


char* task3(char* s) {
    if (s == NULL) {
        return NULL;
    }

    size_t length = 0;
    while (s[length] != '\0') {
        length++;
    }

    
    char* encrypted = (char*)malloc((length + 1) * sizeof(char));
    if (encrypted == NULL) {
        printf("Memory allocation error.\n");
        return NULL;
    }

    for (size_t i = 0; i < length; i++) {
        if (isalpha(s[i])) { 
            if (s[i] == 'z') {
                encrypted[i] = 'a';
            }
            else if (s[i] == 'Z') {
                encrypted[i] = 'A';
            }
            else {
                encrypted[i] = s[i] + 1;
            }
        }
        else {
            encrypted[i] = s[i]; 
        }
    }

    encrypted[length] = '\0';
    return encrypted;
}
