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
//   	if(i==1) throw de;//���������
//   	if(i==2)  throw p;
//   	if(i==3)  throw pi;
//   	if(i==4) throw i;
//   	cout <<i <<endl;
//   	cout << "in the try" <<endl;
//   }
//   catch(BaseExcept )  //catch�Ӿ�������;����쳣�����public����
//   {
//     cout<<"catch the BaseExcept "<<endl;
//   }
//   catch(BaseExcept *) //catch�Ӿ��������Ϊ����ָ������ã����쳣����Ϊ������ָ������á�
//   {
//    cout<<"catch the BaseExcept * "<<endl;
//   }
//   catch(void *) //�Ӿ��������Ϊvoid*,���쳣����Ϊ�κ�����ָ�롣
//   {
//   cout<<"catch the pointer"<<endl;
//   }
//   catch(...) //catch�Ӿ�Ϊcatch-all����catch{��}�����������쳣��
//   {
//   cout<<"catch all exception"<<endl;
//   }
//
//   cout<<"end of main" <<endl;
//}

class Triangle{
public:
	Triangle(int n):num(n)
	{cout<<"���캯����,num="<<num<<endl;}
	~Triangle(){ cout<<"������������,num="<<num<<endl; }
	void set_sides(double a,double b,double c){
	    if(a<=0||b<=0||c<=0) throw "�߳�����Ϊ��";
	    if(a+b<=c||b+c<=a||c+a<=b)
            throw "�߳����������ǲ���ʽ";
        s1=a;s2=b;s3=c;
	    cout<<"������"<<num<<"�����������"<<endl;
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
int main(){//������
    cout<<"main start"<<endl;
	cout<<"call test"<<endl;
	try{
	    test();
	   // Triangle tr3(3);//�����򵽡�try }��
	   // tr3.set_sides(2,1,1);
	    cout<<"end of try"<<endl;
	}catch(const char* c){
	    cout<<"�쳣��"<<c<<endl;
	}

	cout<<"main end"<<endl;
	return 0;
}
//	    Triangle tr3(3);
//	    tr3.set_sides(1,1,1);
/*main start
call test
���캯����,num=3
������3�����������
end of try
������������,num=3
main end*/

/*
		
*/