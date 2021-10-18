#include <iostream>
#include <cmath>
#include <time.h>
#include <stdlib.h>
#include <cstring>
#include <iomanip>
using namespace std;
// for 5 6 grades
double G5G6(int num)
{
    double G = 0;//grade
    double ans = 0;
    double userAns;//cin the ans
    double EP = 0.01; 
    for(int i = 0; i < num; i++)//times
    {
        srand((int)time(0));
        double m = rand() % (100)/(float)(100);
        double n = rand() % (100)/(float)(100);
        double x = rand() + m;
        double y = rand() + m;
        int type = rand() % 4 + 1;
        switch (type)//the type of +-/*
        {
        case 1:
            ans = x + y;
            cout<<x<<"+"<<y<<"=?"<<endl;
            break;
        case 2:
            ans = x - y;
            cout<<x<<"-"<<y<<"=?"<<endl;
            break;
        case 3:
            ans = x * y;
            cout<<x<<"*"<<y<<"=?"<<endl;
            break;
        case 4:
            if(y == 0)
                y += 1;
            ans = x / y;
            cout<<x<<"/"<<y<<"=?"<<endl;
            break;
        default:
            break;
        }
        //ans = round(ans * 100)/ 100.0;
        //cout<<"ans"<<ans<<endl;
        cout<<"answer: ";
        cin>>userAns;
        double ansP = userAns - ans;
        if((ansP >= -EP)&&(ansP <= EP))
        {
        	G++;
        	cout<<"right"<<endl;
		}
    }
	G = (double)G/num;
	G = G * 100;
	cout<<"成绩："; 
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<G<<endl;
    return G;
}

