
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_jar_JarEntry__
#define __java_util_jar_JarEntry__

#pragma interface

#include <java/util/zip/ZipEntry.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      namespace cert
      {
          class Certificate;
      }
    }
  }
}

class java::util::jar::JarEntry : public ::java::util::zip::ZipEntry
{

public:
  JarEntry(::java::lang::String *);
  JarEntry(::java::util::zip::ZipEntry *);
  JarEntry(::java::util::jar::JarEntry *);
  virtual ::java::util::jar::Attributes * getAttributes();
  virtual JArray< ::java::security::cert::Certificate * > * getCertificates();
public: // actually package-private
  ::java::util::jar::Attributes * __attribute__((aligned(__alignof__( ::java::util::zip::ZipEntry)))) attr;
  ::java::util::jar::JarFile * jarfile;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_jar_JarEntry__
