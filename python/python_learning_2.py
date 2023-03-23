#函数返回多个返回值
def test_return():
    return 1,2,3

x,y,z = test_return()
print(x,y,z)


#########################函数多种传参方式########################


#位置参数：调用函数时根据函数定义的参数位置来传递参数
def user_info(name,age,gender):
    print(f'您的名字是{name}，年龄是{age}，性别是{gender}')

user_info('TOM',20,'男')

#关键字参数：函数调用时通过“建=值”形式传递参数
def user_info(name,age,gender):
    print(f"您的名字是：{name},年龄是{age},性别是{gender}")

user_info("小明",gender="男",age=20)

#缺省参数：设置默认值，且必须在最后
def user_info(name,age,gender="男"):
    print(f'您的名字是{name}，年龄是{age}，性别是{gender}')

user_info('TOM',20,)

#不定长参数：可变参数，用于不确定调用的时候会传递多少个参数（不传参也可以）的场景

#1.位置传递,将参数合并为元组
def user_info(*args):
    print(args)

user_info('TOM')
user_info('TOM',18)

#2.关键字传递,将参数合并为字典
def user_info(**kwargs):
    print(kwargs)

user_info(name='TOM',age=18,id=110)


########################匿名函数########################


#函数作为参数传递(感觉是一个子函数调用另一个子函数)
def test_func(compute):
    result = compute(1,2)
    print(result)

def compute(x,y):
    return x + y

test_func(compute)

#lambda匿名函数,无名称的匿名函数，只可以临时使用一次
#语法：lambda 传入参数：函数体（一行代码）
def test_func(compute):
    result = compute(1,2)
    print(result)

test_func(lambda x,y: x + y)
