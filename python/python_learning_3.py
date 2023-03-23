""" #open()打开函数
'open(name,mode,encoding)'
f = open("c\测试.txt","r",encoding="UTF-8")
#encoding的顺序不是第三位，所以不能用位置参数，用关键字参数直接指定
print(type(f))



################读操作相关方法##################



#num代表要读取的数据的长度（单位是字节[存疑]），如果没有传入num，那么表示读取文件所有数据,读取的结果为字符串
print(f"读取5个字节的结果:{f.read(5)}")
print(f"读取的结果:{f.read()}")

#readlines按照行的方式把整个文件中的内容进行一次性读取，并且返回一个列表，其中每一行的数据为一个原素
lines = f.readlines()
print(type(lines))
print(lines)

#readline
line1 = f.readline()
line2 = f.readline()
print(f"第一行数据是：{line1}")
print(f"第二行数据是：{line2}")

#for循环读取文件行（这个似乎无关指针）
for line in f:
    print(line)

#close()关闭文件对象
f.close()

#with open 使用完后自动关闭
with open("c\测试.txt","r")as f:
    for line in f:
        print(line) """



###############写操作相关用法###########################



""" #1.打开文件
f=open("c\测试.txt","w",encoding="UTF-8")

#2.文件写入
f.write("天动万象")

#3.内容刷新
f.flush()

f.close() """



###############追加操作相关用法##################



#1.打开文件
f=open("c\测试.txt","a",encoding="UTF-8")

#2.文件写入
f.write("\n欲买桂花同载酒")

#3.内容刷新
f.flush()

f.close()

