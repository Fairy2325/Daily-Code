"""
MySQL


数据定义:DDL
库的创建删除、表的创建删除等

数据操纵:DML
新增数据、删除数据、修改数据等

数据控制:DCL
新增用户、删除用户、密码修改、权限管理等

数据查询:DQL
基于需求查询和计算数据

语法特征：
大小写不敏感
可以单行和多行书写，最后以";"结束
SQL支持注释:
单行注释：-- 注释内容(--后面一定要有一个空格)
单行注释：#注释内容(#后面可以不加空格，推荐加上)
多行注释：/*注释内容*/

查看数据库
show databases;

使用数据库
use 数据库名称;

创建数据库
create database 数据库名称 [charset UTF8];

删除数据库
drop database 数据库名称;

查看当前使用的数据库
select database();

DDL-表管理

查看有哪些表
show tables;    注意；需要先选择数据库哦

删除表
drop table 表名称;
drop table if exists 表名称;

创建表
craste table 表名称(
    列名称 列类型，
    列名称 列类型，
    ······
);

列类型有
int         整数
float       浮点数
varchar     文本，长度为数字，做最大长度限制
data        日期类型
timestamp   时间戳类型









"""