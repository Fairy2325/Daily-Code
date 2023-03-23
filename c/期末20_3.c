#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Toinit(char *s, int i);

void Toten(char *s, int i);

int main() {
    char str[100] = {'\0'};
    fgets(str, sizeof(str), stdin);
    int len = (int) strlen(str) - 1;
    str[len] = '\0';
    for (int i = 0; i < len - 1; i++) {
        if (str[i] == '\\') {
            if (isdigit(str[i + 1])) {
                Toten(str, i);
                continue;
            }
            switch (str[i + 1]) {
                case 'a' :
                    str[i] = '\a';
                    str[i + 1] = '\0';
                    break;
                case 'b' :
                    str[i] = '\b';
                    str[i + 1] = '\0';
                    break;
                case 'f' :
                    str[i] = '\f';
                    str[i + 1] = '\0';
                    break;
                case 'n' :
                    str[i] = '\n';
                    str[i + 1] = '\0';
                    break;
                case '?' :
                    str[i] = '\?';
                    str[i + 1] = '\0';
                    break;
                case 'r' :
                    str[i] = '\r';
                    str[i + 1] = '\0';
                    break;
                case 't' :
                    str[i] = '\t';
                    str[i + 1] = '\0';
                    break;
                case 'v' :
                    str[i] = '\v';
                    str[i + 1] = '\0';
                    break;
                case '\'' :
                    str[i] = '\'';
                    str[i + 1] = '\0';
                    break;
                case '\"' :
                    str[i] = '\"';
                    str[i + 1] = '\0';
                    break;
                case '\\' :
                    str[i] = '\\';
                    str[i + 1] = '\0';
                    break;
                case 'X' :
                    Toinit(str, i);
                    break;
                case 'x':
                    Toinit(str, i);
                    break;
                default:
                    break;
            }
        }
    }

    for (int i = 0; i < len; i++)
        if (str[i] != '\0')
            printf("%.2X ", (int) str[i]);

    return 0;
}

void Toinit(char *s, int i) {
    int sum = 0;
    int a = i + 2;
    while (isdigit(s[a]) || ('a' <= s[a] && s[a] <= 'f') || ('A' <= s[a] && s[a] <= 'F')) {
        if(isdigit(s[a]))
            sum = sum * 16 + s[a] - '0';
        if('a' <= s[a] && s[a] <= 'f')
            sum = sum * 16 + s[a] - 'a' + 10;
        if('A' <= s[a] && s[a] <= 'F')
            sum = sum * 16 + s[a] - 'A' + 10;
        a++;
    }

    for (int k = i; k < a; k++)
        s[k] = '\0';

    s[i] = (char) sum;
}

void Toten(char *s, int i) {
    int sum = 0;
    int a = i + 1;
    while (isdigit(s[a])) {
        sum = sum * 8 + s[a] - '0';
        a++;
    }
    for (int k = i; k < a; k++)
        s[k] = '\0';
    s[i] = (char) sum;
}

