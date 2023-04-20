#include <iostream>
#include <string>

using namespace std;

class Converter {
    private:
        long long num;   // ʮ������
        int base;        // Ŀ�����
        string digits;   // ���ڱ�ʾ���ڵ��� 10 �����ֵ��ַ�

    public:
        Converter(long long n, int b) {
            num = n;
            base = b;
            digits = "0123456789ABCDEF";
        }

        // ��ʮ������ת��ΪĿ�����
        string convert() {
            string res = "";
            while (num) {
                res = digits[num % base] + res;  // ��������Ӧ���ַ��ӵ��������ǰ��
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