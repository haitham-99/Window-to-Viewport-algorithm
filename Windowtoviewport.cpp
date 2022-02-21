#include <iostream>
using namespace std;
void WindowtoViewport(float wx,float wy,float wxmax,float wymax,float wxmin,float wymin, float vxmax,float vymax,float vxmin,float vymin)
{
	float vx, vy;
	vx = (wx-wxmin)*((vxmax - vxmin) /(wxmax - wxmin))+vxmin;
	vy = (wy-wymin)*((vymax - vymin) /(wymax - wymin))+vymin;
	cout<< "The point on viewport: ("<<vx <<","<< vy<<")" ;
}
int main()
{
float wx, wy;
cout<<"enter values of WX and WY"<<endl;
cin>>wx>>wy;
// boundary values for viewport
float vxmax, vymax, vxmin, vymin;
cout<<"enter values of VXMAX,VXMIN, VYMAX,VYMIN"<<endl;
cin>>vxmax>>vxmin>>vymax>>vymin;
// boundary values for window
float wxmax, wymax, wxmin , wymin;
cout<<"enter values of WXMAX,WXMIN, WYMAX,WYMIN"<<endl;
cin>>wxmax>>wxmin>>wymax>>wymin;
WindowtoViewport(wx, wy, wxmax, wymax, wxmin, wymin, vxmax, vymax, vxmin, vymin);
}
