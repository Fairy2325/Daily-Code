def hanoi(n, x, y, z, count=0):
    if n == 1:
        print(x, ' --> ', z)
        count += 1
    else:
        count = hanoi(n - 1, x, z, y, count)
        print(x, ' --> ', z)
        count += 1
        count = hanoi(n - 1, y, x, z, count)

    return count 
if __name__ == '__main__':
    n = int(input('请输入汉诺塔层数：'))

    print("所需步数：", hanoi(n, '1', '2', '3'))