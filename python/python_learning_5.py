#可视化图表




######################.json文件################################




""" # json是一种轻量级的数据交互格式，可按照json指定的格式去阻止和封装数据
# json本质上是一个带有特定格式的字符串
# 
# 主要功能：json就是一种在各个编程语言中流通的数据格式，负责不同编程语言中的数据传递和交互。


#json数据的格式可以是：
{"name":"admin","age":18}

#也可以是：
[{"name":"admin","age":18},{"name":"root","age":16}]


#演示json数据和Python字典的相互转换

#导入json模块
import json

#准备列表，列表内每一个元素都是字典，将其装换为json
data =[{"name":"张大山","age":11},{"name":"王大锤","age":13},{"name":"赵小虎","age":16}]
json_str = json.dumps(data,)
print(type(json_str))
print(json_str)

#准备一个字典，将字典转换为json
d = {"name":"周杰伦","addr":"台北"}
json_str = json.dumps(d,ensure_ascii=False)
print(type(json_str))
print(json_str)

#将json转换为Python数据类型列表
s = '[{"name":"张大山","age":11},{"name":"王大锤","age":13},{"name":"赵小虎","age":16}]'
l = json.loads(s)
print(type(l))
print(l)

#将json转换为Python数据类型列表
s = '{"name":"周杰伦","addr":"台北"}'
d = json.loads(s)
print(type(d))
print(d)




####################pyecharts模块#################



# Echarts 是个由百度开源的数据可视化，凭借着良好的
# 交互性，精巧的图表设计，得到了众多开发者的认可，
# 而Python是们富有表达力的语言，很适合用于数据处理，
# 当数据分析遇上数据可视化时pyecharts诞生了。


#pip install pyecharts


#构建一个基础的折线图:

#导包，导入line功能构建折线图对象
from pyecharts.charts import Line
from pyecharts.options import (TitleOpts,LegendOpts,ToolboxOpts,VisualMapOpts)
#得到折线图对象
line = Line()
#添加x轴数据
line.add_xaxis(["中国","美国","英国"])
#添加y轴数据
line.add_yaxis("GDP",[30,20,10])

##设置全局配置项
line.set_global_opts(
    title_opts=TitleOpts(title = "GDP展示",pos_left = "center",pos_bottom="1%"),
    legend_opts=LegendOpts(is_show=True),
    toolbox_opts=ToolboxOpts(is_show=True),
    visualmap_opts=VisualMapOpts(is_show=True),
)


#生成图表
line.render()



#pyecharts 有哪些配置选项？
#1.全局配置选项
#可以通过set_global_opts方法来进行配置，相应的选项和选项的功能如下：

#TitleOpts:     标题配置项
#LegendOpts:    图例配置项
#ToolboxOpts:   工具箱配置项
#VisualMapOpts: 视觉映射配置项
#TooltipOpts:   提示框配置项
#DataZoomOpts:  区域缩放配置项

#2.系列配置选项 """






#通过json模块对数据进行处理


""" import json
from pyecharts.charts import Line
from pyecharts.options import (TitleOpts,LabelOpts)

# 处理数据
f_us = open("python\美国.txt","r",encoding="UTF-8")
us_data = f_us.read()
f_jp = open("python\日本.txt","r",encoding="UTF-8")
jp_data = f_jp.read()
f_in = open("python\印度.txt","r",encoding="UTF-8")
in_data = f_in.read()

#去掉不合json规范的开头
us_data = us_data.replace("jsonp_1629344292311_69436(","")
jp_data = jp_data.replace("jsonp_1629350871167_29498(","")
in_data = in_data.replace("jsonp_1629350745930_63180(","")

#去掉不合json规范的结尾
us_data = us_data[:-2]
jp_data = jp_data[:-2]
in_data = in_data[:-2]

#json转python字典
us_dict = json.loads(us_data)
jp_dict = json.loads(jp_data)
in_dict = json.loads(in_data)

#获取trend key
us_trend_data = us_dict['data'][0]['trend']
jp_trend_data = jp_dict['data'][0]['trend']
in_trend_data = in_dict['data'][0]['trend']

#获取日期数据，用于x轴，取2020年（到314下标结束）
us_x_data = us_trend_data['updateDate'][:314]
jp_x_data = jp_trend_data['updateDate'][:314]
in_x_data = in_trend_data['updateDate'][:314]

#获取确认数据，用于y轴，取2020年（到314下标结束）
us_y_data = us_trend_data['list'][0]['data'][:314]
jp_y_data = jp_trend_data['list'][0]['data'][:314]
in_y_data = in_trend_data['list'][0]['data'][:314]

#生成图表
line = Line()

#添加x轴数据
line.add_xaxis(us_x_data)

#添加y轴数据
line.add_yaxis("美国确诊人数",us_y_data,label_opts=LabelOpts(is_show=False))
line.add_yaxis("日本确诊人数",jp_y_data,label_opts=LabelOpts(is_show=False))
line.add_yaxis("印度确诊人数",in_y_data,label_opts=LabelOpts(is_show=False))

#设置全局选项
line.set_global_opts(
    #标题设置
    title_opts=TitleOpts(title="2020年美日印三国确诊人数对比折线图",pos_left="center",pos_bottom="1%")

)
#调用render方法，生成图表
line.render()

#关闭文件对象
f_us.close()
f_jp.close()
f_in.close() """




#使用pyecharts构建基础的全国地图可视化图表

""" from pyecharts.charts import Map
from pyecharts.options import (VisualMapOpts)

#准备地图对象
map = Map()

#准备数据
data = [
    ("北京市",99),
    ("上海省",199),
    ("湖南省",299),
    ("台湾省",399),
    ("广东省",499)
]

#添加数据
map.add("测试地图",data,"china")

#设置全局选项
map.set_global_opts(
    visualmap_opts=VisualMapOpts(
        is_show=True,
        is_piecewise=True,
        pieces=[
            {"min":1,"max":9,"label":"1-9","color":"#CCFFFF"},
            {"min":10,"max":99,"label":"10-99","color":"#FF6666"},
            {"min":100,"max":500,"label":"100-500","color":"#990033"},
        ]
    )
)
#绘图
map.render() """



#全国疫情可视化地图开发

""" import json
from pyecharts.charts import Map
from pyecharts.options import *

#读取数据文件
f = open("python\疫情.txt","r",encoding="UTF-8")
data = f.read()

#关闭文件
f.close()

#将字符串json装换为Python的字典
data_dict = json.loads(data)

#从字典中取出省份的数据
province_data_list = data_dict["areaTree"][0]["children"]


#组装每个省份和确诊人数为元组，并将各个省的数据都封装入列表内
data_list = []

for province_data in province_data_list:
    province_name = province_data["name"]
    province_name = province_name.replace("台湾","台湾省")  
    province_name = province_name.replace("江苏","江苏省")
    province_name = province_name.replace("云南","云南省")
    province_name = province_name.replace("河南","河南省")
    province_name = province_name.replace("上海","上海市")
    province_name = province_name.replace("湖南","湖南省")
    province_name = province_name.replace("湖北","湖北省")
    province_name = province_name.replace("广东","广东省")
    province_name = province_name.replace("香港","香港特别行政区")
    province_name = province_name.replace("福建","福建省")
    province_name = province_name.replace("浙江","浙江省")
    province_name = province_name.replace("山东","山东省")
    province_name = province_name.replace("四川","四川省")
    province_name = province_name.replace("天津","天津市")
    province_name = province_name.replace("北京","北京市")
    province_name = province_name.replace("陕西","陕西省")
    province_name = province_name.replace("广西","广西壮族自治区")
    province_name = province_name.replace("辽宁","辽宁省")
    province_name = province_name.replace("重庆","重庆市")
    province_name = province_name.replace("澳门","澳门特别行政区")
    province_name = province_name.replace("甘肃","甘肃省")
    province_name = province_name.replace("山西","山西省")
    province_name = province_name.replace("海南","海南省")
    province_name = province_name.replace("内蒙古","内蒙古自治区")
    province_name = province_name.replace("吉林","吉林省")
    province_name = province_name.replace("黑龙江","黑龙江省")
    province_name = province_name.replace("宁夏","宁夏回族自治区")
    province_name = province_name.replace("青海","青海省")
    province_name = province_name.replace("江西","江西省")
    province_name = province_name.replace("贵州","贵州省")
    province_name = province_name.replace("西藏","西藏自治区")
    province_name = province_name.replace("安徽","安徽省")
    province_name = province_name.replace("河北","河北省")
    province_name = province_name.replace("新疆","新疆维吾尔自治区")
    province_confirm = province_data["total"]["confirm"]
    
    data_list.append((province_name,province_confirm))

#创建地图
map = Map()

#添加数据
map.add("各省份确诊人数",data_list,"china")

#设置全局配置
map.set_global_opts(
    title_opts=TitleOpts(title="全国疫情地图"),
    visualmap_opts=VisualMapOpts(
        is_show=True,
        is_piecewise=True,
        pieces=[
            {"min":1,"max":99,"lable":"1-99人","color":"#CCFFFF"},
            {"min":100,"max":999,"lable":"100-999人","color":"#FFFF99"},
            {"min":1000,"max":4999,"lable":"1000-4999人","color":"#FF9966"},
            {"min":5000,"max":9999,"lable":"5000-9999人","color":"#FF6666"},
            {"min":10000,"max":99999,"lable":"10000-99999人","color":"#CC3333"},
            {"min":100000,"lable":"100000+人","color":"#990033"},
        ]
    )
)

#绘图
map.render("全国疫情地图.html") """



#演示河南省疫情地图开发

""" import json
from pyecharts.charts import Map
from pyecharts.options import *
#读取文件
f = open("python\疫情.txt","r",encoding="UTF-8")
data = f.read()
data_dict = json.loads(data)

#关闭文件
f.close()

#获取河南省数据
cities_data = data_dict["areaTree"][0]["children"][3]["children"]

#准备数据为元组并放入list
data_list = []
for city_data in cities_data:
    city_name = city_data["name"]+"市"
    city_confirm = city_data["total"]["confirm"]
    data_list.append((city_name,city_confirm))

#手动添加济源市的数据
data_list.append(("济源市",5))

#构建地图
map =Map()
map.add("河南省疫情分布",data_list,"河南")

#设置全局选项
map.set_global_opts(
    title_opts=TitleOpts(title="河南省疫情地图"),
    visualmap_opts=VisualMapOpts(
        is_show=True,
        is_piecewise=True,
        pieces=[
            {"min":1,"max":99,"lable":"1-99人","color":"#CCFFFF"},
            {"min":100,"max":999,"lable":"100-999人","color":"#FFFF99"},
            {"min":1000,"max":4999,"lable":"1000-4999人","color":"#FF9966"},
            {"min":5000,"max":9999,"lable":"5000-9999人","color":"#FF6666"},
            {"min":10000,"max":99999,"lable":"10000-99999人","color":"#CC3333"},
            {"min":100000,"lable":"100000+人","color":"#990033"},
        ]
    )
)

#绘图
map.render("河南省疫情地图.html") """



#通过Bar构建基础柱状图


""" from pyecharts.charts import Bar
from pyecharts.options import *

bar = Bar()

#添加x轴的数据
bar.add_xaxis(["中国","美国","英国"])

#添加y轴的数据
bar.add_yaxis("GDP",[30,20,10],label_opts=LabelOpts(position="right"))

#翻转x轴和y轴
bar.reversal_axis()

#设置数值标签在右侧
#绘图
bar.render("基础柱状图.html") """



#基础时间线柱状图


""" from pyecharts.charts import Bar,Timeline
from pyecharts.options import *
from pyecharts.globals import ThemeType

bar1 = Bar()
bar1.add_xaxis(["中国","美国","英国"])
bar1.add_yaxis("GDP",[30,20,10],label_opts=LabelOpts(position="right"))
bar1.reversal_axis()

bar2 = Bar()
bar2.add_xaxis(["中国","美国","英国"])
bar2.add_yaxis("GDP",[50,50,50],label_opts=LabelOpts(position="right"))
bar2.reversal_axis()

bar3 = Bar()
bar3.add_xaxis(["中国","美国","英国"])
bar3.add_yaxis("GDP",[70,60,60],label_opts=LabelOpts(position="right"))
bar3.reversal_axis()

#构建时间线对象
timeline = Timeline(
    {"theme":ThemeType.LIGHT}
)

#在时间线内添加柱状图对象
timeline.add(bar1,"点1")
timeline.add(bar2,"点2")
timeline.add(bar3,"点3")

#自动播放设置
timeline.add_schema(
    play_interval=1000,
    is_timeline_show=True,
    is_auto_play=True,
    is_loop_play=True
)

#主题设置

#绘图使用时间线对象绘图
timeline.render("基础时间线柱状图.html") """



####################动态GDP柱状图绘制################




#列表的sort方法

#列表.sort(key=选择排序依据的函数,reverse=True|False)
#参数key，是要求传入一个函数，表示将列表的每一个原素都传入函数中，返回排序的依据
#例：
my_list = [["a",33],["b",55],["c",11]]

def choose_sort_key(element):
    return element[1]

my_list.sort(key=choose_sort_key,reverse=True)
print(my_list)

#或者是：
my_list.sort(key=lambda element:element[1],reverse=True)
print(my_list)




#演示第三个图表：GDP动态柱状图开发


from pyecharts.charts import Bar,Timeline
from pyecharts.options import *
from pyecharts.globals import ThemeType
#读取数据
f = open("python\\1960-2019全球GDP数据.csv","r",encoding="GB2312")
data_lines = f.readlines()

#删除第一条数据
data_lines.pop(0)

#将数据转换为字典存储，格式为：
#{年份:[[国家,GDP],[国家,GDP],......],年份:[[国家,GDP],[国家,GDP],......]......}
data_dict = {}
for line in data_lines:
    
    year = int(line.split(",")[0])
    country = line.split(",")[1]
    gdp = float(line.split(",")[2])
    
    try:
        data_dict[year].append([country,gdp])
    except KeyError:
        data_dict[year] = []
        data_dict[year].append([country,gdp])

#创建时间线对象
timeline = Timeline({"theme":ThemeType.LIGHT})

#排序年份
sorted_year_list = sorted(data_dict.keys())
for year in sorted_year_list:
    data_dict[year].sort(key = lambda element:element[1],reverse=True)
    #取出本年份前8名的国家
    year_data = data_dict[year][0:8]
    x_data = []
    y_data = []
    for country_gdp in year_data:
        x_data.append(country_gdp[0])
        y_data.append(country_gdp[1] / 100000000)
    #构建柱状图
    bar = Bar()
    x_data.reverse()
    y_data.reverse()
    bar.add_xaxis(x_data)
    bar.add_yaxis("GDP(亿)",y_data,label_opts=LabelOpts(position="right"))
    #翻转x轴和y轴
    bar.reversal_axis()
    #设置每一年的图表的标题
    bar.set_global_opts(
        title_opts=TitleOpts(title=f"{year}年全球前8GDP数据")
    )
    timeline.add(bar,str(year))

#设置时间线自动播放
timeline.add_schema(
    play_interval=1000,
    is_timeline_show=True,
    is_auto_play=True,
    is_loop_play=False
)

#关闭文件
f.close()

#绘图
timeline.render("1960-2019全球GDP前8国家.html")