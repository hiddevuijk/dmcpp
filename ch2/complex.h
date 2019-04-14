#ifndef guard_complex_h
#define guard_complex_h

#include <iostream>

class complex
{
  friend double abs(const complex&);
  public:
	complex( double r=0, double i=0) : r(r), i(i) {}
	//complex( const complex& c) : r(c.i), i(c.i) {}

	complex& operator=(const complex& src)
		{ r= src.r; i=src.i; return *this; }

	complex& operator=(const double& src)
		{ r= src; i=0; return *this; }


	const double& real() const  { return r; } 
	const double& imag() const { return i; } 

  private:
	double r,i;

};


double abs(const complex& c)
{ return c.r*c.r+c.i*c.i; }

std::ostream& operator<<(std::ostream& os, const complex& c)
{
	return os << c.real() << " + " << c.imag() << "i";
}

#endif
