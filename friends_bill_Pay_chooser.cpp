#include<iostream>
#include<stdio.h> // NULL
#include<stdlib.h> // srand, rand
#include<time.h> // time 
#include<string>
using namespace std;
// main function
int main(){
	// friend list
	string friends[]={"saurabh_ritu","subodh","vivek","abhay","vineet","akash","ankit","abhishek","abhishek_cse"};
	//generate random number
	srand(time(NULL));
	int index=rand()%10;
	//choosing one of friend
	cout<<"Our bill will be payed by : "<<friends[index];
	return 0;
}
