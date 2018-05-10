#include <iostream>

#include <math.h>

using namespace std;



class Complexo
{
public:

  
  
float real;
    
float im;



public:

    

Complexo(float a, float b){
        
real = a;
        
im = b;
    
};

    

 float Modulo(){
        
return sqrt(real*real + im*im);
    
};

 

Complexo Conjugado(){
       
return Complexo(real, -im);
    
};





Complexo operator+(Complexo z){
        
Complexo y(real,im);
        
y.real = this ->real + z.real;
       
y.im = this ->im + z.im;
        
return y;
    }


    

   
Complexo operator -(Complexo z){
       
 Complexo x(real,im);
       
 x.real = this->real - z.real;
        
x.im = this->im - z.im;
       
 return x;
    }


    

Complexo operator/(Complexo z){
        

return Complexo((this->real * z.real  +  this->im * z.im)/(z.real*z.real + z.im*z.im) , (-this->real * z.im  +  this->im * z.real)/(z.real*z.real + z.im*z.im
));
    
}

    

Complexo operator*(Complexo z ){
        
Complexo z1(real, im);
        z1.real = (this->real * z.real) - (this->im * z.im);
        z1.im = (this->real * z.im) + (this->im * z.real);
       
 return z1;

    }

};