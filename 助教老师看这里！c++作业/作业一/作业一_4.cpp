#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

// 辗转相减法求最大公约数
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    int r = a % b;
    return gcd(b, r);
}

// 分数类
class Fraction {
public:
    // 构造函数
    Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom) {
        simplify(); // 初始化时对分数进行化简
    }

    // 重载加法运算符
    Fraction operator+(const Fraction& other) const {
        // 计算通分后的分子和分母
        int new_numerator = numerator * other.denominator + other.numerator * denominator;
        int new_denominator = denominator * other.denominator;
        // 返回结果分数
        return Fraction(new_numerator, new_denominator);
    }

    // 输出分数，以最简形式输出
    friend ostream& operator<<(ostream& os, const Fraction& frac) {
        if (frac.numerator == 0) { // 特判分子为0
            os << 0;
        } else if (frac.denominator == 1) { // 分母为1，直接输出分子
            os << frac.numerator;
        } else { // 输出分数
            int g = gcd(abs(frac.numerator), abs(frac.denominator));
            int new_num = frac.numerator / g;
            int new_denom = frac.denominator / g;
            if (new_denom < 0) { // 分母为负数，将负号移到分子部分
                new_num = -new_num;
                new_denom = -new_denom;
            }
            os << new_num << '/' << new_denom;
        }
        return os;
    }

private:
    int numerator;       // 分子
    int denominator;     // 分母

    // 化简分数
    void simplify() {
        if (numerator == 0) {   // 特判分子为0
            denominator = 1;
            return;
        }
        // 计算最大公约数
        int g = gcd(abs(numerator), abs(denominator));
        numerator /= g;
        denominator /= g;
    }
};

int main() {
    int n;
    cin >> n;

    Fraction sum(0); // 初始化和为0
    for (int i = 0; i < n; ++i) {
        int numerator, denominator;
        char slash;
        cin >> numerator >> slash >> denominator;
        if (denominator == 0) { // 非法分母
            cout << "error" << endl;
            return 0;
        }
        Fraction frac(numerator, denominator);   // 构造分数对象
        sum = sum + frac;    // 累加
    }

    // 输出结果
    cout << sum << endl;

    return 0;
}