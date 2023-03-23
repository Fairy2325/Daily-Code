__all__ = ['test_A','test']

def test(a,b):
    print(a+b)

def test_A():
    print("A")

def test_B():
    print("B")

if __name__ == '__main__':#__name__是内置变量
    test(1,2)