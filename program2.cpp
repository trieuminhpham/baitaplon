#include<iostream>
#include<cmath>
using namespace std;

class Point{
	private:
		float x, y;
	public:
		void Nhap(){
			cout<<"Nhap x: "; cin>>x;
			cout<<"Nhap y: "; cin>>y;
		}
		void HienThi(){
			cout<<"Hoanh do la: "<<x<<endl;
			cout<<"Tung do la: "<<y<<endl;
		}
		float get_x(){
			return x;
		}
		void set_x(int a){
			x=a;
		}
		float get_y(){
			return y;
		}
		void set_y(int b){
			y=b;
		}
		void get_xy(float &a, float &b){
			a=x;
			b=y;
		}
		void set_xy(int a, int b){
			x=a;
			y=b;
		}
		float TinhKhoangCach(Point p){
			float deltaX=(p.x-x);
			float deltaY=(p.y-y);
			return sqrt( pow(deltaX, 2) + pow(deltaY, 2));
		}
};

int main(){
	Point a, b;
	cout<<"Nhap thong tin cho diem a:\n";
	a.Nhap();
	a.HienThi();
	a.set_x(6);
	a.set_y(9);
	cout<<"Diem a sau khi set lan 1 la: \n";
	a.HienThi();
	a.set_xy(5,7);
	cout<<"Diem a sau khi set lan 2 la: \n";
	a.HienThi();
	cout<<"Nhap thong tin cho diem b:"<<endl;
	b.Nhap();
	cout<<"Khoang cach 2 diem a va b la: "<<a.TinhKhoangCach(b);
	
	return 0;
}
