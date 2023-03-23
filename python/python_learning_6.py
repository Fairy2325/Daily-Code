#设计一个类(设计一张登记表)
class Student:
    name = None             #记录学生姓名
    gender = None           #记录学生性别
    nationality = None      #记录学生国籍
    native_place = None     #记录学生籍贯
    age = None              #记录学生年龄

#创建一个对象(打印一张登记表)
stu_1 = Student()

#对象属性进行复制(填写表单)
stu_1.name = "林俊杰"
stu_1.gender = "男"
stu_1.nationality = "中国"
stu_1.native_place = "山东省"
stu_1.age = 31

#获取对象中记录的信息
print(stu_1.name)
print(stu_1.gender)
print(stu_1.nationality)
print(stu_1.native_place)
print(stu_1.age)



#类的定义和使用



#语法如下：

#class 类名称:      class是关键字，表示要定义类了
#   类的属性        即定义在类中的变量（成员变量）
#   类的行为        即定义在类中的函数(成员方法)

#创建类对象的语法：
#对象 = 类名称()


#成员变量和成员方法

#def 方法名(self,形参1,......,形参N):       #self用来调用自身类中的变量
#   方法体

#调用成员方法时不用理会self

class Student:
    name = None
    def say_hi (self):
        print(f"大家好呀，我是{self.name}，欢迎大家多多关照")

    def say_hi2(self,msg):
        print(f"你好，我是{self.name},{msg}")

stu = Student()

stu.name = "周杰伦"
stu.say_hi()
stu.say_hi2("小伙子我看好你")

class Clock:
    id = None
    price = None

    def ring(self):
        import winsound
        winsound.Beep(2000,3000)

clock1 = Clock()
clock1.id = "003032"
clock1.price = 19.99
print(f"闹钟ID:{clock1.id}，价格：{clock1.price}")
#clock1.ring()

clock2 = Clock()
clock2.id = "003033"
clock2.price = 29.99
print(f"闹钟ID:{clock2.id}，价格：{clock2.price}")
#clock2.ring()


#属性(成员变量)的赋值
#python类可以使用:__init__()方法，称之为构造方法
#可以实现
#在创建类对象(构造类)的时候，会自动执行
#在创建类对象(构造类)的时候，将传入参数自动传递给__init__方法使用

class Student:
    
    name = None
    age = None
    tel = None  #可以省略

    def __init__(self,name,age,tel):
        self.name = name
        self.age = age
        self.tel = tel
        print("Student类创建了一个类对象")

stu = Student("周杰伦",31,18500000666)
print(stu.name)
print(stu.age)
print(stu.tel)


#常用的内置的类方法，各自有各自特殊的功能，这些内置方法我们称之为:魔术方法

#__init__       构造方法
#__str__        字符串方法
#__lt__         小于、大于符号比较
#__le__         小于等于、大于等于符号比较
#__eq__         ==符号比较




class Student:
    def __init__(self,name,age):
        self.name = name
        self.age = age

stu = Student("周杰伦",31)
print(stu)
print(str(stu))

class Student:
    def __init__(self,name,age):
        self.name = name
        self.age = age

    #__str__:
    def __str__(self):
        return f"Student类对象,name:{self.name},age:{self.age}"

    #__lt__:
    def __lt__(self,other):
        return self.age < other.age

stu1 = Student("周杰伦",31)
print(stu1)
print(str(stu1))

stu2 = Student("林俊杰",32)
print(stu2)
print(str(stu2))

print(stu1 < stu2)
print(stu1 > stu2)



#面向对象编程，简单理解为基于模板（类）去创建实体（对象），使用对象完成功能开发

#面向对象包含三大主要特性：
#封装
#继承
#多态

#封装的概念：
#将现实世界事物的 属性 和 行为 封装到类中，描述为 成员变量 和 成员方法 ，从而完成程序对现实世界事物的描述

#私有成员变量
#私有成员方法

#定义私有成员的方式为：
#成员名以__（两个下划线）开头

#定义一个类，内含私有成员变量和私有成员方法
class Phone:
    __current_voltage = 0.5

    def __keep_single_core(self):
        print("让CPU以单核模式运行")

    def call_by_5g(self):
        if self.__current_voltage >= 1:
            print ("5G通话已开启")
        else:
            self.__keep_single_core()
            print("电量不足，无法使用 5G通话，并已设置为单核运行进行省点")

phone = Phone()
phone.call_by_5g()
#phone.__keep_single_core()
#print(phone.__current_voltage)


#单继承
class Phone:
    IMEI = None
    producer = "HM"

    def call_by_4g(self):
        print("4g通话")

class Phone2022(Phone):
    
    face_id = "10001"

    def call_by_5g(self):
        print("2022年新功能：5g通话")

phone = Phone2022()
print(phone.producer)
phone.call_by_5g
phone.call_by_4g

#多继承
class NFCReader:
    nfc_type = "第五代"
    producer = "HM"

    def read_card(self):
        print("NFC读卡")
        
    def write_card(self):
        print("NFC写卡")

class RemoteControl:
    rc_type = "红外遥控"

    def control(self):
        print("红外遥控开启了")

class MyPhone(Phone,NFCReader,RemoteControl):
    pass
    #也可复写：
    #producer = "hm"
    #复写super()调用父类成员
    #super().成员变量
    #super().成员方法()
phone = MyPhone()
phone.call_by_4g()
phone.read_card()
phone.write_card()
phone.control()




#类型注解
#变量:类型

#基础数据类型注释
var_1:int = 10
var_2:str = "hello"
var_3:int = True

#类对象类型注解
class Student:
    pass
stu:Student = Student()

#基础容器类型注解
my_list:list =[1,2,3]
my_tuple:tuple = (1,2,3)
my_dict:dict = {"hello":666}

#容器类型详细注解
my_list:list[int] = [1,2,3]
my_tuple:tuple=(1,2,3)
my_dict:dict={"hello":666}

#在注释中进行类型注解
#type:类型
import random,json
var_4=random.randint(1,10)  #type: int
var_5=json.loads('{"name":"zhangsan"}') #type:dict[str,str]
def func():
    pass
var_6=func()    #type:int

#类型注解的限制
#只是备注，不会报错

#函数（方法）的类型注解-形参注解语法：
#def 方法名 (形参名:类型,形参名:类型)->返回值类型:
def add(x:int,y:int)->int:
    return x+y
print(add(3,4))


#Union类型

#导包
from typing import Union

my_list:list[Union[str,int]] = [ 1,2,"hello","world"]
my_dict:dict[str,Union[str,int]] = {"name":"小明","age":24}
def func(data:Union[int,str])->Union[int,str]:
    pass
func(2)


#多态
#指的是：多种状态，即完成某个行为时，使用不同的对象会得到不同的状态
class Animal:
    def speak(self):    #父类用来确定有哪些方法
        pass            #集体的方法实现，由子类自行决定

class Dog(Animal):
    def speak(self):
        print("汪汪汪")

class Cat(Animal):
    def speak(self):
        print("喵喵喵")

def make_noise(animal:Animal):
    animal.speak()

dog = Dog()
cat = Cat()

make_noise(dog)
make_noise(cat)

#这种写法，就叫做抽象类（也可以称之为接口）
#抽象类：含有抽象方法的类称之为抽象类
#抽象方法：方法体是空实现（pass)称之为抽象方法

#演示抽象类
class AC:
    def cool_wind(self):
        """制冷"""
        pass
    
    def hot_wind(self):
        """制热"""
        pass
    
    def swing_wind(self):
        """左右摆风"""
        pass

class Midea_AC(AC):
    def cool_wind(self):
        print("美的空调制冷")

    def hot_wind(self):
        print("美的空调制热")

    def swing_l_r(self):
        print("美的空调左右摆风")

class GREE_AC(AC):
    def cool_wind(self):
        print("格力空调制冷")

    def hot_wind(self):
        print("格力空调制热")

    def swing_l_r(self):
        print("格力空调左右摆风")

def make_cool(ac:AC):
    ac.cool_wind()

midea_ac = Midea_AC()
gree_ac = GREE_AC()

make_cool(midea_ac)
make_cool(gree_ac)
