#include<iostream>
using namespace std;
int top;
void check(char str[ ], int n,char stack[ ]){
	top=-1;
	for(int i=0; i<n;i++){
		if(str[i]=='('){
			top++;
			stack[top]='(';
		}
		if(str[i]==')'){
			if(top==-1){
				top=top-1;
				break;
			}
			else{
				top=top-1;
			}
		}
	}
	if(top==-1)
		cout<<"String is Balance"<<"\n";
	else
		cout<<"String is Unbalance"<<"\n";
}
int main(){
	  //balanced parenthesis string.
        char str[  ] = { '(' , 'a' , '+',  '( ', 'b ' , '-' , ' c' ,')' , ' ) '} ;

        // unbalanced string . 
        char str1 [ ] = { '(' , '(' , 'a' , ' + ' , ' b' , ')' } ;
        char stack[15];
		check(str, 9 ,stack);
		check(str1, 5 ,stack);
		return 0;
}
