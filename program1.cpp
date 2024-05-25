#include<stdio.h>
#include<math.h>

int scs(int n){
	int scs1=0;
	while(n!=0){
		scs1+=1;
		n/=10;
	}
	return scs1;
}

int tong(int n){
	int tong=0;
	int t=scs(n);
	while(n!=0){
	    int a=n%10;
		tong+=pow(a, t);
		n/=10;
	}
	return tong;
}

//day la phan da xoa
