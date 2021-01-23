#ifndef _CGRAPH_FRACTION_HPP_
#define _CGRAPH_FRACTION_HPP_

#include "cgraph_config.hpp"

class cppgraph_fraction_t : virtual public cppgraph_object_t
{
  private:
    int den, num;

  public:
    cppgraph_fraction_t(const int den, const int num = 1)
    {
        this->den = den;
        this->num = num;
    }
    cppgraph_fraction_t operator++();
    cppgraph_fraction_t operator+(const cgraph_fraction_t &x);
    cppgraph_fraction_t operator-(const cgraph_fraction_t &x);
    cppgraph_fraction_t operator*(const cgraph_fraction_t &x);
    cppgraph_fraction_t operator/(const cgraph_fraction_t &x);
};

#endif /* _CGRAPH_FRACTION_HPP_ */