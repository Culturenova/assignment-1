#include <iostream>
using namespace std;
int main(){
	char operation;
	double num1;
	double num2;
	double result;
	
	cout<<"choose operation: ";
	cin>>operation;
	
	cout<<"enter num1: ";
	cin>>num1;
	cout<<"enter num2: ";
	cin>>num2;
	
	
	switch(operation){
		case'+':
			result =num1+num2;
			cout<<num1<<" + "<<num2<< " = "<< result;
			break;
			case'-':
				result=num1-num2;
				cout<<num1<< " - " <<num2<< " = " <<result;
				break;
				case'*':
					result=num1*num2;
					cout<<num1<< " x " <<num2<< " = " <<result;
					break;
					case'/':
						
						if(num2==0){
							cout<<"invalid error! cannot devide by zero. ";
					   }
					   else{
					   	result =num1/num2;
					   	cout<<num1<< " / " <<num2<< " = " <<result;
					   	
					   }
						break;
						default:
						cout<<"invalid operation entered!";
						
	}
	return 0;
}