#include <iostream>
#include <string>

using namespace std;

class Converter {
    private:
        long long num;   // 十进制数
        int base;        // 目标进制
        string digits;   // 用于表示大于等于 10 的数字的字符

    public:
        Converter(long long n, int b) {
            num = n;
            base = b;
            digits = "0123456789ABCDEF";
        }

        // 将十进制数转换为目标进制
        string convert() {
            string res = "";
            while (num) {
                res = digits[num % base] + res;  // 将余数对应的字符加到结果的最前面
                num /= base;
            }
            return res;
        }
};

int main() {
    long long num;
    int base;

    while (cin >> num >> base) {
        Converter converter(num, base);
        cout << converter.convert() << endl;
    }

    return 0;
}