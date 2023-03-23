""" #捕获常规异常
try:
    f = open('linux.txt','r')
except:
    f = open('linux.txt','w') """

#捕获指定的异常
try:
    print(name)
except NameError as e:
    print("出现了变量未定义的异常")
    print(type(e))
    print(e)

#捕获多个异常
try:
    print(name)
    print(1/0)
except(NameError,ZeroDivisionError)as e:
    print("出现了变量未定义 或者 除数为0的异常错误")

#捕获全部异常
try:
    print("hhh")
except Exception as e:
    print("出现异常")
    print(type(e))
    print(e)
#else 与 finally
else:
    print("没有异常")
finally:
    print("over")


###################模块#######################



#模块的导入方式语法如下：

#[from 模块名]import[ 模块 | 类 | 变量 | 函数 | *][as 别名]

#常用的组合形式如：

#import 模块名
#from 模块名 import 类、变量、方法等
#from 模块名 import *
#import 模块名 as 别名
#from 模块名 import 功能名 as 别名

import time  #导入python内置的time模块（time.py这个代码文件）

a = 0
print("Hello")
time.sleep(a)
print("\nI'm Li Hua!")

from time import sleep #使用from导入time的sleep功能（函数）

print("What's your name ?")
sleep(a)
print("\nemmm , I'm Wang Xiaomei")

from time import * #使用*导入time模块的全部功能

print("Have you got some problem ?")
sleep(a)
print("\nI just wanna talk with you for a while.")

import time as t #导入并设置别名

print("you look so beatiful.")
t.sleep(a)
print("\nThank you , but...")



###############制作自定义模块####################



from my_module1 import * 

test(10,20)
test_A()
#test_B()报错




######################包###########################


#包：有"__init__.py"文件的文件夹就是包

from my_package import *
#my_module2.info_print2会报错


import my_package.my_module2
from my_package.my_module3 import info_print3 

my_package.my_module2.info_print2()
info_print3()



#安装第三方包
#pip install name
#pip install -i https://pypi.tuna.tsinghua.edu.cn/simple name