#ifndef _CGRAPH_VECTOR_HPP_
#define _CGRAPH_VECTOR_HPP_

#include "cgraph_config.hpp"

class cgraph_vector_t : virtual public cgraph_struct_t
{
private:
  void *data;
public:
};


#endif /* _CGRAPH_VECTOR_HPP_ */