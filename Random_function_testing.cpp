#include<iostream>
#include<stdio.h> // NULL
#include<stdlib.h> // srand, rand
#include<time.h> // time
#include<vector>
using namespace std;

int main(){
	vector<int> vec1;
	srand(time(NULL));
	
	for(int i=0;i<9; i++){
	int random_seed=rand()%10;
	vec1.push_back(random_seed);
	}
	
int index=rand()%10;
cout<<vec1[index];
	return 0;
}
