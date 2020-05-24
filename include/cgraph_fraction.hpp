#ifndef _CGRAPH_FRACTION_HPP_
#define _CGRAPH_FRACTION_HPP_

#include "cgraph_config.hpp"

class cgraph_fraction_t : virtual public cgraph_object_t
{
private:
  int den, num;
public:
  cgraph_fraction_t(const int den, const int num=1) {  this->den = den; this->num = num; }
  cgraph_fraction_t operator++();
  cgraph_fraction_t operator+(const cgraph_fraction_t& x);
  cgraph_fraction_t operator-(const cgraph_fraction_t& x);
  cgraph_fraction_t operator*(const cgraph_fraction_t& x);
  cgraph_fraction_t operator/(const cgraph_fraction_t& x);
};


#endif /* _CGRAPH_FRACTION_HPP_ */