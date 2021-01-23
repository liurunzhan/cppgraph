#ifndef _CPPGRAPH_VECTOR_HPP_
#define _CPPGRAPH_VECTOR_HPP_

#include "cppgraph_config.hpp"

class cppgraph_vector_t : virtual public cppgraph_struct_t
{
  private:
    void *data;

  public:
};

#endif /* _CPPGRAPH_VECTOR_HPP_ */