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
	int grade;
	int num;
	double ans;
	cout<<"����꼶";
	cin>>grade;
	cout<<endl;
	cout<<"�����Ŀ������";
	cin>>num;
	if(grade == 1 ||grade == 2)
		ans = grade12(num);
	else if(grade == 3 ||grade == 4)
		ans = G3G4(num);
	else if(grade == 5 ||grade == 6)
		ans = G5G6(num);
	return 0;	
}
