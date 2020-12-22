//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
#include<iostream>
using namespace std;

//设计一个学生类
class Student
{
	//获取访问权限
	//公共访问权限
    public:
	//学号和姓名都是学术类的属性
	string s_name;
	string s_number;
	//行为：打印出学号和姓名
	void print()
	{
		cout << s_name << "\n"<< s_number << endl;//s_name是字符串，可以调用头文件string，也可以不调用
	}
};
int main()
{
	//定义类变量
    Student b1;//和结构体不太一样，结构体可以加或者不加struct
	b1.s_name = "linzetain";
	b1.s_number = "201511411321";
	b1.print();//因为print是一个类，所以在调用时，需要加上变量b1
	//cout << "s_name" << b1.s_name << "\n"<<"s_number" << b1.s_number << endl;
	system("pause");
	return 0;
}