#include <cstdlib>
#include <string>
#include <iostream>
#include <math.h>

using namespace std;

//Sphere Class------------------------------------------------------------------
class Sphere{
	public:
		void getVolume(float radius){
			float volume = 0;
			volume = (4.0/3.0) * M_PI * pow(radius,3.0);
			cout << "volume = " << volume << endl;
		}

		void getFormula(){
			cout << "The volume of a sphere is 4/3*pi*r^3" << endl;
		}
};
//------------------------------------------------------------------------------


//Cylinder class----------------------------------------------------------------
class Cylinder{
	public:
		void getVolume(float radius, float height){
			float volume = 0;
			volume = M_PI * pow(radius,2.0) * height;
			cout << "volume = " << volume << endl;
		}

		void getFormula(){
			cout << "The volume of a cylinder is pi*r^2*h" << endl;
		}
};
//------------------------------------------------------------------------------


//Rectangle class---------------------------------------------------------------
class Rectangle{
	public:
		void getVolume(float length, float width, float height){
			float volume = 0;
			volume = length * width * height;
			cout << "volume = " << volume << endl;
		}

		void getFormula(){
			cout << "The volume of a rectangle is l*w*h" << endl;
		}
};
//------------------------------------------------------------------------------


//Cone class--------------------------------------------------------------------
class Cone{
	public:
		void getVolume(float radius, float height){
			float volume = 0;
			volume = (M_PI * pow(radius, 2) * height) / 3;
			cout << "volume = " << volume << endl;
		}

		void getFormula(){
			cout << "The volume of a cone is (pi*r^2*h)/3" << endl;
		}
};
//------------------------------------------------------------------------------


//Pyramid class-----------------------------------------------------------------
class Pyramid{
	public:
		void getVolume(float length, float width, float height){
			float volume = 0;
			volume = (length * width * height) / 3;
			cout << "volume = " << volume << endl;
		}

		void getFormula(){
			cout << "The volume of a pyramid is (l*w*h)/3" << endl;
		}
};
//------------------------------------------------------------------------------


void printline(){
	cout << "-------------------------------------------------------" << endl;
}


int main(){
	string shape;
	float volume = 0;

	while(1){
		printline();
		cout << "Enter a shape (type 'list' for a list of possible shapes): ";
		cin >> shape;

	//List of shapes----------------------------------------------------------------
		if(shape == "list"){
			cout << "sphere, cylinder, rectangle, cone and pyramid" << endl;
		}
	//------------------------------------------------------------------------------


	//Sphere------------------------------------------------------------------------
		if(shape == "sphere" || shape == "Sphere"){
			Sphere sphere;
			float radius;
			char option;
			cout << "Would you like to calculate the volume or see the formula ('c' or 'f'): ";
			cin >> option;
			if(option == 'c'){
				cout << "You have selected a sphere, please enter it's radius: ";
				cin >> radius;
				sphere.getVolume(radius);
				printline();
			}
			if(option == 'f'){
				sphere.getFormula();
				printline();
			}
		}
	//------------------------------------------------------------------------------


	//Cylinder----------------------------------------------------------------------
		if(shape == "cylinder" || shape == "Cylinder"){
			Cylinder cyl;
			float radius = 0;
			float height = 0;
			char option;
			cout << "Would you like to calculate the volume or see the formula ('c' or 'f'): ";
			cin >> option;
			if(option == 'c'){
				cout << "You have selected a cylinder, please enter it's radius and height" << endl;
				cout << "r: ";
				cin >> radius;
				cout << "h: ";
				cin >> height;
				cyl.getVolume(radius, height);
				printline();
			}
			if(option == 'f'){
				cyl.getFormula();
				printline();
			}
		}
	//------------------------------------------------------------------------------


	//Rectangle---------------------------------------------------------------------
		if(shape == "rectangle" || shape == "Rectangle"){
			Rectangle rec;
			float l = 0;
			float w = 0;
			float h = 0;
			char option;
			cout << "Would you like to calculate the volume or see the formula ('c' or 'f'): ";
			cin >> option;
			if(option == 'c'){
				cout << "You have selected a rectangle, please enter it's length, width and height: " << endl;
				cout << "l: ";
				cin >> l;
				cout << "w: ";
				cin >> w;
				cout << "h: ";
				cin >> h;
				rec.getVolume(l, w, h);
				printline();
			}
			if(option == 'f'){
				rec.getFormula();
				printline();
			}
		}
	//------------------------------------------------------------------------------


	//Cone--------------------------------------------------------------------------
		if(shape == "cone" || shape == "Cone"){
			Cone cone;
			float radius = 0;
			float height = 0;
			char option;
			cout << "Would you like to calculate the volume or see the formula ('c' or 'f'): ";
			cin >> option;
			if(option == 'c'){
				cout << "You have selected a cone, please enter it's radius and height: " << endl;
				cout << "r: ";
				cin >> radius;
				cout << "h: ";
				cin >> height;
				cone.getVolume(radius, height);
				printline();
			}
			if(option == 'f'){
				cone.getFormula();
				printline();
			}
		}
	//------------------------------------------------------------------------------


	//Pyramid--------------------------------------------------------------------------
		if(shape == "pyramid" || shape == "Pyramid"){
			Pyramid py;
			float length = 0;
			float width = 0;
			float height = 0;
			char option;
			cout << "Would you like to calculate the volume or see the formula ('c' or 'f'): ";
			cin >> option;
			if(option == 'c'){
				cout << "You have selected a pyramid, please enter it's length, width and height: " << endl;
				cout << "l: ";
				cin >> length;
				cout << "w: ";
				cin >> width;
				cout << "h: ";
				cin >> height;
				py.getVolume(length, width, height);
				printline();
			}
			if(option == 'f'){
				py.getFormula();
				printline();
			}
		}
	//------------------------------------------------------------------------------

		if(shape == "allf"){
			Sphere s;
			Cylinder c;
			Rectangle r;
			Cone cn;
			Pyramid py;
			s.getFormula();
			c.getFormula();
			r.getFormula();
			cn.getFormula();
			py.getFormula();
		}


	}
	return 0;
}
