#include<iostream>
using namespace std;

bool divide(double a,double b){//�ú�������ֵ��Ϊ�����־

	if(b==0)return false;
	else{cout<<a/b<<endl;return true;}//���ú����е�cout.��Ȩ��Ӧ�÷��ؽ����double��
}

double divideS(double a,double b){
	//�쳣�������   
    //���³���Ĵ����봦�����Ĵ�����ȫ����

	if(b!=0&&a>=0) return a/b;
	else if(b==0){
		throw "����";//const char*
	}
	else
		throw 0;//int

}


int main()
{	
	double a,b;
	cout<<"Input 2 number"<<endl;//.inf:�޷�Ԥ֪���

	cin>>a>>b;	//if(b==0) return 0;//����ʱ��ֹ����
	
	try{
		double c;
		c=divideS(a,b);//���throw����try������䲻ִ�У�ת����һ��catch
		cout<<"c is "<<c<<endl;
	}catch(int)//���Խ��������
	{
		cout<<"it will not do"<<endl;
	}catch(const char* s){//Ҳ���Խ�"ը��"��������
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