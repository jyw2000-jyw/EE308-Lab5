#include <iostream>
#include <cmath>
#include <time.h>
#include <stdlib.h>
#include <cstring>
#include <iomanip>
#include "threefour.h"
#include "onetwo.h"
#include "fivesix.h"
using namespace std;

int main(){
	int grade;//two int for func
	int num;
	double ans;//the ans
	cout<<"你的年级";
	cin>>grade;
	cout<<endl;
	cout<<"你的题目数量：";
	cin>>num;
	if(grade == 1 ||grade == 2)// get the grade
		ans = grade12(num);
	else if(grade == 3 ||grade == 4)
		ans = G3G4(num);
	else if(grade == 5 ||grade == 6)
		ans = G5G6(num);
	return 0;	
}
