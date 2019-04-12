#ifndef guard_complex_h
#define guard_complex_h

class complex
{
  friend double abs(const complex&);
  public:
	complex( double r, double i) : r(r), i(i) {}
	complex( double r) : r(r) {}
	complex() : r(0), i(0) {}

	double get_r() const { return r;}
	double get_i() const { return i;}
	void set( double rr, double ii)
			{ r = rr;  i = ii;}
  private:
	double r,i;

};

double abs(const complex& c)
{ return c.r*c.r+c.i*c.i; }



#endif
