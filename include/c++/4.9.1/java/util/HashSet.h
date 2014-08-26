
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_HashSet__
#define __java_util_HashSet__

#pragma interface

#include <java/util/AbstractSet.h>

class java::util::HashSet : public ::java::util::AbstractSet
{

public:
  HashSet();
  HashSet(jint);
  HashSet(jint, jfloat);
  HashSet(::java::util::Collection *);
  virtual jboolean add(::java::lang::Object *);
  virtual void clear();
  virtual ::java::lang::Object * clone();
  virtual jboolean contains(::java::lang::Object *);
  virtual jboolean isEmpty();
  virtual ::java::util::Iterator * iterator();
  virtual jboolean remove(::java::lang::Object *);
  virtual jint size();
public: // actually package-private
  virtual ::java::util::HashMap * init(jint, jfloat);
private:
  void writeObject(::java::io::ObjectOutputStream *);
  void readObject(::java::io::ObjectInputStream *);
  static const jlong serialVersionUID = -5024744406713321676LL;
  ::java::util::HashMap * __attribute__((aligned(__alignof__( ::java::util::AbstractSet)))) map;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_HashSet__
