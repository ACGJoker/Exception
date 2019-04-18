#include<iostream>
using namespace std;

bool divide(double a,double b){//用函数返回值作为错误标志

	if(b==0)return false;
	else{cout<<a/b<<endl;return true;}//调用函数中的cout.无权，应该返回结果（double）
}

double divideS(double a,double b){
	//异常处理机制   
    //导致出错的代码与处理错误的代码完全隔离

	if(b!=0&&a>=0) return a/b;
	else if(b==0){
		throw "错辽";//const char*
	}
	else
		throw 0;//int

}


int main()
{	
	double a,b;
	cout<<"Input 2 number"<<endl;//.inf:无法预知结果

	cin>>a>>b;	//if(b==0) return 0;//出错时终止程序
	
	try{
		double c;
		c=divideS(a,b);//如果throw，到try最后的语句不执行，转到第一个catch
		cout<<"c is "<<c<<endl;
	}catch(int)//可以仅检测类型
	{
		cout<<"it will not do"<<endl;
	}catch(const char* s){//也可以接"炸弹"，并利用
		cout<<s<<endl;
		cout<<"it's ok now"<<endl;
	}

	cout<<"end of main"<<endl;


	//if(divide(a,b)==false){
	//	cout<<"Input 2 number"<<endl;
	//	cin>>a>>b;		
	//}

	return 0;
}