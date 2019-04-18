#include<iostream>
using namespace std;

template<class T>
class Stack{
private:
	T* st;
	int N;
	int Top;
public:
	Stack(int n=10):Top(-1),N(n){
		st=new T[n];
	}
	~Stack(){delete[]st;}
	bool Insert(T elem);//push½øÕ»
	bool Del();//pop³öÕ»
	bool getTop(T& elem);//top
};

template<class T>
bool Stack<T>::Del(){
	if(Top==-1)
		return false;
	else{
		//st[Top]=0;
		Top-=1;//Âß¼­ÉÏÉ¾³ý
		return true;
	}
}

template<class T>
bool Stack<T>::getTop(T& elem){
	if(Top==-1)
		return false;
	else{
		elem=st[Top];
		return true;
	}	
}

template<class T>
bool Stack<T>::Insert(T elem){
	if(Top==N-1)
		return false;
	else{
		Top+=1;
		st[Top]=elem;
	}
}

int main()
{
	Stack<int> mst(5);
	mst.Insert(10);
	mst.Insert(20);
	mst.Del();


	int x;
	mst.getTop(x);
	cout<<x<<endl;
}
