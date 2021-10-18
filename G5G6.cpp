#include<iostream>
#include<cmath>
#include<cstring>
#include<stdlib.h>
#include<time.h>
using namespace std;
double G3G4(int a){
	float num1,num2;
	float x,count,y;
	float result;
	float score;
	float answer;
	const float EP=0.01;
	srand((int)time(0));
	count=0;
	for (int i=0;i<a;i++){
		num1= rand()+1;
	    num2= rand()+1;
		x=rand()%4+1;
		if(x==1){
			result= num1+num2;
			cout<<num1<<"+"<<num2<<"="<<endl;
		}else if(x==2){
			result=num1-num2;
			cout<<num1<<"-"<<num2<<"="<<endl;
		}else if(x==3){
			result=num1*num2;
			cout<<num1<<"*"<<num2<<"="<<endl;
		}else if(x==4){
			result=num1/num2;
			cout<<num1<<"/"<<num2<<"="<<endl;
		}else{
			result=-1;
		}
		cin>>answer;
		y=answer-result;
		if((y>=-EP)&&(y<=EP)){
			count++;
		}
	}
	score=count/a*100;
	return score;
} 
int main()
{
	int a;
	cin>>a;
	cout<<G3G4(a)<<endl;

	return 0;
}

