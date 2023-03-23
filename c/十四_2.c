#include<stdio.h>
#define RECTANGLE 0
#define CIRCLE 1
struct point
{
    int x;
    int y;
};

struct shape {

   int shape_kind;  /* RECTANGLE or CIRCLE */   

   struct point center;  /* coordinates of center */   

   union {

    struct {   int height, width;   } rectangle;

    struct {   int radius;   } circle;

   } u;

  } s;  

int main(void)
{
    return 0;
}
 
//(a) 计算s的面积。
double calculate_square(struct shape s)
{
    if( s.shape_kind == RECTANGLE )
    {
        return s.u.rectangle.height*s.u.rectangle.width;
    }
    if( s.shape_kind == CIRCLE )
    {
        return s.u.circle.radius*s.u.circle.radius*3.14;
    }
}

//(b) 将s沿x轴方向移动x个单位，沿y轴移动y个单位，返回s修改后的内容。（x和y是函数的另外两个 实际参数。）
struct shape move(struct shape s,int x,int y)
{
    s.center.x+=x;
    s.center.y+=y;
    return s;
}

//(c) 把s缩放c倍（c是double类型的值），返回s修改后的内容。（c是函数的另外一个实际参数。）
struct shape zoom(struct shape s,double c)
{
    if( s.shape_kind == RECTANGLE )
    {
        s.u.rectangle.height/=c;
    }
    if( s.shape_kind == CIRCLE )
    {
        s.u.circle.radius/=c;
    }
    return s;
}