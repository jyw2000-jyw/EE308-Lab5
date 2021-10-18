#include<iostream>
#include<cmath>
#include<cstring>
#include<stdlib.h>
#include<time.h>
using namespace std;
double G3G4(int a){
	float num1,num2;                           //Save two numbers
	float x;                                   //To get the calculation 
	float count;                               //Save the correct times
	float y;                                   //Used to compare the sizes of two floats 
	float result;                              //Save the right result
	float score;                               //Save the final score
	float answer;                              //Save the input answer
	const float EP=0.01;                       //Used to compare the sizes of two floats
	srand((int)time(0));                       //Generate truly random numbers
	count=0;                         
	for (int i=0;i<a;i++){                     //Enter the number of questions loop
		num1= rand()+1;                    //Random number generation
	    num2= rand()+1;
		x=rand()%4+1;                      //Generate the corresponding algorithm(1 for addition,2 for subtraction,3 for multiplication,4 for division)
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
		cin>>answer;                       //Get the input answer
		y=answer-result;                  
		if((y>=-EP)&&(y<=EP)){             //Campare the result and answer 
			count++;                   //If correct, count plus one
		}
	}
	score=count/a*100;
	cout<<"你的分数是"; 
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<score<<endl;
	return score;
} 


