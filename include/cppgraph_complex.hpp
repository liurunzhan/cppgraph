#ifndef _CPPGRAPH_COMPLEX_HPP_
#define _CPPGRAPH_COMPLEX_HPP_

#include "cppgraph_config.hpp"

class cppgraph_complex_t : virtual public cgraph_object_t
{
  private:
    double re, im;

  public:
    cppgraph_complex_t(const double re = 0.0, const double im = 0.0)
    {
        this->re = re;
        this->im = im;
    }
};

#endif /* _CPPGRAPH_COMPLEX_HPP_ */