#ifndef _CGRAPH_CONFIG_HPP_
#define _CGRAPH_CONFIG_HPP_


class cgraph_object_t
{
private:

protected:
  int _len_, _size_;
  int _type_;
public:
  virtual int type(void) { return _type_; }
  virtual int len(void) { return _len_; }
  virtual int size(void) { return _size_; }
};

class cgraph_struct_t : virtual public cgraph_object_t
{
private:

protected:
  int _dtype_;
public:
  virtual int dtype(void) { return _dtype_; }
};


#endif /* _CGRAPH_CONFIG_HPP_ */