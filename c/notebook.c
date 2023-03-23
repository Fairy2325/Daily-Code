/*
字符串函数：

gets()
读取整行输入，直到遇到换行符，并存储其他字符，在最后添加空字符

char *fgets(char *s,int size,stdin);
读取整行输入，直到遇到换行符，并存储所有字符，在最后添加空字符

puts()
显示字符串同时自动在末尾添加换行符，遇到换行符的时候就停止输出

int fputs(const char *str,stdout);
显示字符串，遇到换行符的时候停止输出

strlen(const char *str);
输出字符串的长度，不包括空字符

char* strcat(char* restrict s1, const char* restrict s2);
添加s2至s1，该函数返回s1。
char* strncat(char* restrict s1, const char* restrict s2, size_t n);
添加s2n个字符至s1，该函数返回s1。

int strcmp(const char* s1, const char* s2);
判断s1是否大于s2
int strncmp(const char* s1, const char* s2, size_t n);
判断s1是否大于s2(n个字符内)


char* strcpy(char* restrict s1, const char* restrict s2);
该函数把s2指向的字符串（包括空字符）拷贝至s1指向的位置，返回值是s1。
char* strncpy(char* restrict s1, const char* restrict s2, size_t n);
该函数把s2指向的字符串拷贝至s1指向的位置，拷贝的字符数不超过n，其返回值是s1。该函数不会拷贝空字符后面的字符，如果源字符串的字符少于n个，目标字符串就以拷贝的空字符结尾；如果源字符串有n个或超过n个字符，就不拷贝空字符。xxxxxxxxxx char* strcpy(char* restrict s1, const char* restrict s2);该函数把s2指向的字符串（包括空字符）拷贝至s1指向的位置，返回值是s1。char* strncpy(char* restrict s1, const char* restrict s2, size_t n);该函数把s2指向的字符串拷贝至s1指向的位置，拷贝的字符数不超过n，其返回值是s1。该函数不会拷贝空字符后面的字符，如果源字符串的字符少于n个，目标字符串就以拷贝的空字符结尾；如果源字符串有n个或超过n个字符，就不拷贝空字符。数返回s1。




*/


