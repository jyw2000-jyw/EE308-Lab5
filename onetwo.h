#include <iostream> 
#include <stdlib.h> 
#include <time.h> 
#define MIN 0 
#define MAX 100
#define SUANFA 2
using namespace std; 
double grade12(int c) 
{ 
	int lab4[2];
    int a;//将生成的第一个随机数存到该值中 
    int b;//将生成的两个随机数进行加或减的计算 
    //int c;//生成的题目数 
    int suanfa[2];//将产生的从1到4的数组放到该数组中 
	int i; 
	double score=100;
	int q;//用户输入的数 
	srand((unsigned)time(NULL));  
	for(int j=0;j<c;j++){
    	for(i=0; i<2; i++) 
    	{ 
        	lab4[i]=MIN + rand() % (MAX + MIN - 1); 
        	a=MIN +rand()%(SUANFA+MIN-1);

    	} 
    	if(a=0){
    		cout<<lab4[0]<<"+"<<lab4[1]<<endl;
        	b=lab4[0]+lab4[1];
        	cout<<"请输入你的答案";
    		cin>>q;
        	if(q!=b){
        	score=score-100/c;
			}
		}
		else if(a=1)
		{
			cout<<lab4[0]<<"-"<<lab4[1]<<endl;
			b=lab4[0]-lab4[1];
			cout<<"请输入你的答案";
    		cin>>q;
			if(q!=b){
        	score=score-100/c;
			}
		}
		//cout<<b<<endl;
	}
	cout<<"你的分数是"; 
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<score<<endl;
    return score; 
}

