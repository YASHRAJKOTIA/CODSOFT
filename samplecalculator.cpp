#include<iostream>
using namespace std;
//switch case
int main(){
	char o;
	float a,b,c,div;
	 //div;
	cout<<"******** SAMPLE CALCULATOR *******"<<endl;
	cout<<"ENTER THE NUMBER FOR WHICH YOU WANT THE CALCULATION "<<endl;
	cout<<"PRESS + FOR ADDDITION \n PRESS - for SUBBTRACTION \n PRESS * FOR MULTIPLICATION \n PRESS /  FOR DIVISION "<<endl;
	cin>>o;
	switch(o){
		case '+':
			cout<<"ENTER FIRST NUMBER"<<endl;
			cin>>a;
			cout<<"ENTER THE SECOND NUMBER"<<endl;
			cin>>b;
			c=a+b;
			cout<<"THE ADDITON IS "<<c<<endl;
			break;
			case '-':
			cout<<"ENTER FIRST NUMBER"<<endl;
			cin>>a;
			cout<<"ENTER THE SECOND NUMBER"<<endl;
			cin>>b;
				c=a-b;
				cout<<"THE SUBBTRACTION IS"<<c<<endl;
				break;
				case '*':
		  	     cout<<"ENTER FIRST NUMBER"<<endl;
			     cin>>a;
			     cout<<"ENTER THE SECOND NUMBER"<<endl;
			      cin>>b;
					c=a*b;
					cout<<"THE MULTIPLICATION IS"<<c<<endl;
					break;
					case '/':
						cout<<"ENTER FIRST NUMBER"<<endl;
		              	cin>>a;
			           cout<<"ENTER THE SECOND NUMBER"<<endl;
			            cin>>b;
						div=a/b;
						cout<<"THE DIVISION IS"<<div<<endl;
						break;
					 default:
						cout<<"INVALID CHOICE";
						break;
	}
cout<<endl;
return 0;	
}
