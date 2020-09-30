#include<iostream>
#include<stdio.h> // NULL
#include<stdlib.h> // srand, rand
#include<time.h> // time 
#include<string>
using namespace std;

int main(){
	string friends[]={"saurabh_ritu","subodh","vivek","abhay","vineet","akash","ankit","abhishek","abhishek_cse"};
	srand(time(NULL));
	int index=rand()%10;
	cout<<"Our bill will be payed by : "<<friends[index];
	return 0;
}
