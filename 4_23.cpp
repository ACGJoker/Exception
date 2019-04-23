#include <iostream>
using namespace std;

//class BaseExcept
//{
//};
//class DerivExcept: public BaseExcept
//{
//};
//
//int main()
//{
//   DerivExcept de;
//   DerivExcept *p= &de;
//   int i;
//   int *pi=&i;
//   cin>>i;
//   try
//   {
//   	if(i==1) throw de;//派生类对象
//   	if(i==2)  throw p;
//   	if(i==3)  throw pi;
//   	if(i==4) throw i;
//   	cout <<i <<endl;
//   	cout << "in the try" <<endl;
//   }
//   catch(BaseExcept )  //catch子句参数类型就是异常对象的public基类
//   {
//     cout<<"catch the BaseExcept "<<endl;
//   }
//   catch(BaseExcept *) //catch子句参数类型为基类指针或引用，而异常对象为派生类指针或引用。
//   {
//    cout<<"catch the BaseExcept * "<<endl;
//   }
//   catch(void *) //子句参数类型为void*,而异常对象为任何类型指针。
//   {
//   cout<<"catch the pointer"<<endl;
//   }
//   catch(...) //catch子句为catch-all，即catch{…}，捕获所有异常。
//   {
//   cout<<"catch all exception"<<endl;
//   }
//
//   cout<<"end of main" <<endl;
//}

class Triangle{
public:
	Triangle(int n):num(n)
	{cout<<"构造函数调,num="<<num<<endl;}
	~Triangle(){ cout<<"析构函数调用,num="<<num<<endl; }
	void set_sides(double a,double b,double c){
	    if(a<=0||b<=0||c<=0) throw "边长必须为正";
	    if(a+b<=c||b+c<=a||c+a<=b)
            throw "边长不满足三角不等式";
        s1=a;s2=b;s3=c;
	    cout<<"三角形"<<num<<"三边设置完毕"<<endl;
	}
private:
    int num;
double s1; double s2; double s3;
};
void test(){
    Triangle tri1(1);  Triangle tri2(2);
	tri1.set_sides(3,4,5);
    tri2.set_sides(1,4,5);
}
int main(){//主函数
    cout<<"main start"<<endl;
	cout<<"call test"<<endl;
	try{
	    test();
	   // Triangle tr3(3);//作用域到‘try }’
	   // tr3.set_sides(2,1,1);
	    cout<<"end of try"<<endl;
	}catch(const char* c){
	    cout<<"异常："<<c<<endl;
	}

	cout<<"main end"<<endl;
	return 0;
}
//	    Triangle tr3(3);
//	    tr3.set_sides(1,1,1);
/*main start
call test
构造函数调,num=3
三角形3三边设置完毕
end of try
析构函数调用,num=3
main end*/

/*
		
*/