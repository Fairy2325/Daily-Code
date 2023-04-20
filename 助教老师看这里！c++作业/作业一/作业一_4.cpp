#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

// շת����������Լ��
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    int r = a % b;
    return gcd(b, r);
}

// ������
class Fraction {
public:
    // ���캯��
    Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom) {
        simplify(); // ��ʼ��ʱ�Է������л���
    }

    // ���ؼӷ������
    Fraction operator+(const Fraction& other) const {
        // ����ͨ�ֺ�ķ��Ӻͷ�ĸ
        int new_numerator = numerator * other.denominator + other.numerator * denominator;
        int new_denominator = denominator * other.denominator;
        // ���ؽ������
        return Fraction(new_numerator, new_denominator);
    }

    // ����������������ʽ���
    friend ostream& operator<<(ostream& os, const Fraction& frac) {
        if (frac.numerator == 0) { // ���з���Ϊ0
            os << 0;
        } else if (frac.denominator == 1) { // ��ĸΪ1��ֱ���������
            os << frac.numerator;
        } else { // �������
            int g = gcd(abs(frac.numerator), abs(frac.denominator));
            int new_num = frac.numerator / g;
            int new_denom = frac.denominator / g;
            if (new_denom < 0) { // ��ĸΪ�������������Ƶ����Ӳ���
                new_num = -new_num;
                new_denom = -new_denom;
            }
            os << new_num << '/' << new_denom;
        }
        return os;
    }

private:
    int numerator;       // ����
    int denominator;     // ��ĸ

    // �������
    void simplify() {
        if (numerator == 0) {   // ���з���Ϊ0
            denominator = 1;
            return;
        }
        // �������Լ��
        int g = gcd(abs(numerator), abs(denominator));
        numerator /= g;
        denominator /= g;
    }
};

int main() {
    int n;
    cin >> n;

    Fraction sum(0); // ��ʼ����Ϊ0
    for (int i = 0; i < n; ++i) {
        int numerator, denominator;
        char slash;
        cin >> numerator >> slash >> denominator;
        if (denominator == 0) { // �Ƿ���ĸ
            cout << "error" << endl;
            return 0;
        }
        Fraction frac(numerator, denominator);   // �����������
        sum = sum + frac;    // �ۼ�
    }

    // ������
    cout << sum << endl;

    return 0;
}