"""
和文件相关的类定义
"""

from data_define import Record

#定义一个抽象类用来做顶层设计，确定有那些功能需要实现
class FileReader:
    
    def read_data(self)->list[Record]:
        """读取文件的数据，读到的每一条数据都转换为record对象，将他们都封装到list内返回即可"""
        pass

class TextFileReader(FileReader):

    def __init__(self,path):
        self.path = path        #定义成员变量记录文件的路径

#复写（实现抽象方法）父类的方法
def read_data(self)->list[Record]:
    f = open(self.path,"r",encoding="UTF-8")
    for line in f.readlines():
        line = line.strip()
        data_list = line.split(",")
        Record(data_list[0],data_list[1],)