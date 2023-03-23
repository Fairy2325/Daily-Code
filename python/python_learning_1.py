""" 
print(" 请告诉我你是谁")
name=input()
print("你是%s" %  name) 
"""

""" 
num=input("请告诉我你的密码")
print("密码是%s" %  num)
num=int(num)
"""
"""
result=10>5
#result=True
print(f"10>5的结果是:{result},类型是：{type(result)}")
"""

#判断语句if，else，elif
""" age=19
if age>=18:
    print("我已经成年了")
else:    
    print("我还没有成年") """

""" a=10
b=20
if a>b:
    print("a>b")
elif a<b:
    print("a<b")
else:
    print ("a=b") """

#while与for循环
""" num = 4
while num !=5:
    import random
    num = random.randint(1,10)
    print (num) """

""" name = "i love you"
for x in name:
    print(x) """

#for与range的配合使用
""" for x in range(num1)
range(num1,num2)
range(num1,num2,step) """

#定义函数
""" def function(x,y):
    return 0 """


#初始化列表以及提取列表中的值
""" list = ['ele1','ele2','ele3','...',[1,2,3]]
print(list)
print(list[0])
print(list[1])
print(list[2])
print(list[-2])
print(list[-1][2]) """

#class定义函数以及调用函数
""" class Student:
    def add(self,x,y):
        return x+y

student = Student()
num = student.add(1,2)
print(num) """


#列表操作
""" list = ["one","two","three","one"]
index = list.index("one")
print(index)
list[3] = "four"
print(list)
list.insert(3,"pai")
print(list)
list.append("five")
print(list)
list.extend([1,2,3])
print(list)
del list[3]
print(list)
ele=list.pop(-1)
print(list,ele)
list.remove(2)
print(list)
print(list.count(1))
print(len(list))
list.clear()
print(list)
 """


#遍历列表
""" list = [1,2,"hao",4]
index=0

while index<len(list):
    print(list[index])
    index += 1

for element in list:
    print(element) """




#元组
""" tuple1 = (1,"Hello",True,(1,2,3),1)
tuple2 = ("hello",)
print(tuple1,tuple2)
print(tuple1[3][2])

index =tuple1.index("Hello")

print(tuple1[index])

num = tuple1.count(True)
if True == 1:
    print(num)

num = len(tuple1)
print(num) """




#字符串
""" name = "fairy"
for x in range(len(name)):
    print(name[x])

print(name.index("i"))

new_name = name.replace("airy","uck")
print(name)
print(new_name)

string = "i love you"
string_list = string.split(" ")
print(string_list)

my_str = "     learn python     "
new_my_str = my_str.strip()
print(new_my_str)

my_str = "123learn python23121"
new_my_str = my_str.strip("123")
print(new_my_str)
 
my_str.count

len(my_str) """

#切片：array[begin:end:step]
#可反向：step为负数，同时begin与end也要反向
#begin与end可留白，默认从头到尾
#:step可省略，默认为1




#集合
my_set = {"集合内不会出现重复元素",1,True,"而且内容无序"}
print(my_set)

#添加新元素
my_set.add("添加'新元素'")
print(my_set)

#删除元素
my_set.remove("集合内不会出现重复元素")
print(my_set)

#随机（存疑）取出一个值
print(my_set.pop())

#清空集合
my_set.clear()
print(my_set)

#取出两个集合（set1里面有set2里面没有）的差集,原集合不变
set1 = {1,2,3}
set2 = {1,5,6}
set3 = set1.difference(set2)
print(f"{set1} {set2} {set3}")

#消除两个集合的差集（在set1里面删除set2里面有的元素）
set1 = {1,2,3}
set2 = {1,5,6}
set1.difference_update(set2)
print(f"{set1} {set2}")

#合并两个集合，原集合不变
set1 = {1,2,3}
set2 = {1,5,6}
set3 = set1.union(set2)
print(f"{set1} {set2} {set3}")

#统计集合元素数量
set3 = {1,2,4,3,2,1,3,4,5,5,}
print(len(set3))

#集合的遍历
for element in set3:
    print(element)




#字典的定义（不允许重复，新的会取代老的）
my_dict1 = {"刻晴":17,"雷电将军":81,"纳西妲":69}
my_dict2 = {}
my_dict3 = dict()
print(my_dict1)
print(my_dict2)
print(my_dict3)

#基于key获取value
print(my_dict1["雷电将军"])

#字典的嵌套（key不可以为字典）
my_dict = {
    "刻晴"     :{"攻击力":2000,"暴击率":"69%"},
    "雷电将军" :{"攻击力":1690,"暴击率":"57%"},
    "纳西妲"   :{"攻击力":1220,"暴击率":"39%"}
}

#获取字典中的数据
crit_rate = my_dict["刻晴"]["暴击率"]
print(f"刻晴的暴击率为{crit_rate}")

#字典的常用操作

#新增元素/更新元素
#dict[Key] = Value

#删除元素并取出键值对
#Value = dict.pop(Key)

#清空元素
dict.clear()

#获取全部的key与遍历字典
keys = dict.keys()

#for key in keys:

#for key in dict:

#统计字典内元素数量
#len(dict)


#数据容器通用及转换
len()
max()
min()

list()#转列表
tuple()#转元组
str()#转字符串
set()#转集合

#进行容器的排序
sorted()#结果为列表
#sorted( ,reverse=True)#反向排序