#ifndef _CGRAPH_COMPLEX_HPP_
#define _CGRAPH_COMPLEX_HPP_

#include "cgraph_config.hpp"

class cgraph_complex_t : virtual public cgraph_object_t
{
private:
  double re, im;
public:
  cgraph_complex_t(const double re, const double im=0.0) {  this->re = re; this->im = im; }
};


#endif /* _CGRAPH_COMPLEX_HPP_ */