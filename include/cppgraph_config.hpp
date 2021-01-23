#ifndef _CPPGRAPH_CONFIG_HPP_
#define _CPPGRAPH_CONFIG_HPP_

typedef enum cppgraph_type_t {
    CPPGRAPH_OBJECT_T,

};

#include "cppgraph.hpp"

class cppgraph_object_t
{
  private:
  protected:
    cppgraph_size_t _len_, _size_;
    cppgraph_size_t _type_;

  public:
    virtual cppgraph_type_t type(void) { return _type_; }
    virtual cppgraph_size_t len(void) { return _len_; }
    virtual cppgraph_size_t size(void) { return _size_; }
};

class cppgraph_struct_t : virtual public cppgraph_object_t
{
  private:
  protected:
    int _dtype_;

  public:
    virtual cppgraph_type_t dtype(void) { return _dtype_; }
};

#endif /* _CPPGRAPH_CONFIG_HPP_ */