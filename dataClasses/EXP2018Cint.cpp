// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dImediadIuserdIworkdIsoftwaredIEXP1803dIdataClassesdIEXP2018Cint

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/media/user/work/software/EXP1803/dataClasses/analyseRaw.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_analyseRaw(void *p = 0);
   static void *newArray_analyseRaw(Long_t size, void *p);
   static void delete_analyseRaw(void *p);
   static void deleteArray_analyseRaw(void *p);
   static void destruct_analyseRaw(void *p);
   static void streamer_analyseRaw(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::analyseRaw*)
   {
      ::analyseRaw *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::analyseRaw >(0);
      static ::ROOT::TGenericClassInfo 
         instance("analyseRaw", ::analyseRaw::Class_Version(), "dataClasses/analyseRaw.h", 15,
                  typeid(::analyseRaw), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::analyseRaw::Dictionary, isa_proxy, 16,
                  sizeof(::analyseRaw) );
      instance.SetNew(&new_analyseRaw);
      instance.SetNewArray(&newArray_analyseRaw);
      instance.SetDelete(&delete_analyseRaw);
      instance.SetDeleteArray(&deleteArray_analyseRaw);
      instance.SetDestructor(&destruct_analyseRaw);
      instance.SetStreamerFunc(&streamer_analyseRaw);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::analyseRaw*)
   {
      return GenerateInitInstanceLocal((::analyseRaw*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::analyseRaw*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr analyseRaw::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *analyseRaw::Class_Name()
{
   return "analyseRaw";
}

//______________________________________________________________________________
const char *analyseRaw::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::analyseRaw*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int analyseRaw::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::analyseRaw*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *analyseRaw::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::analyseRaw*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *analyseRaw::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::analyseRaw*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void analyseRaw::Streamer(TBuffer &R__b)
{
   // Stream an object of class analyseRaw.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> CsI;
      R__b >> tCsI;
      R__b >> nCsI;
      R__b.ReadStaticArray((float*)SQX_L);
      R__b.ReadStaticArray((float*)tSQX_L);
      R__b.ReadStaticArray((float*)SQY_L);
      R__b.ReadStaticArray((float*)tSQY_L);
      R__b.ReadStaticArray((float*)SQX_R);
      R__b.ReadStaticArray((float*)tSQX_R);
      R__b.ReadStaticArray((float*)SQY_R);
      R__b.ReadStaticArray((float*)tSQY_R);
      R__b.ReadStaticArray((float*)SQ20);
      R__b.ReadStaticArray((float*)tSQ20);
      R__b >> ToF;
      R__b >> deBeam;
      R__b >> nx1;
      R__b >> ny1;
      R__b >> nx2;
      R__b >> ny2;
      R__b >> x1;
      R__b >> x2;
      R__b >> y1;
      R__b >> y2;
      R__b >> yt;
      R__b >> xt;
      R__b >> zt;
      R__b >> trigger;
      R__b >> flagR;
      R__b >> flagL;
      R__b.CheckByteCount(R__s, R__c, analyseRaw::IsA());
   } else {
      R__c = R__b.WriteVersion(analyseRaw::IsA(), kTRUE);
      R__b << CsI;
      R__b << tCsI;
      R__b << nCsI;
      R__b.WriteArray(SQX_L, 32);
      R__b.WriteArray(tSQX_L, 32);
      R__b.WriteArray(SQY_L, 16);
      R__b.WriteArray(tSQY_L, 16);
      R__b.WriteArray(SQX_R, 32);
      R__b.WriteArray(tSQX_R, 32);
      R__b.WriteArray(SQY_R, 16);
      R__b.WriteArray(tSQY_R, 16);
      R__b.WriteArray(SQ20, 16);
      R__b.WriteArray(tSQ20, 16);
      R__b << ToF;
      R__b << deBeam;
      R__b << nx1;
      R__b << ny1;
      R__b << nx2;
      R__b << ny2;
      R__b << x1;
      R__b << x2;
      R__b << y1;
      R__b << y2;
      R__b << yt;
      R__b << xt;
      R__b << zt;
      R__b << trigger;
      R__b << flagR;
      R__b << flagL;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_analyseRaw(void *p) {
      return  p ? new(p) ::analyseRaw : new ::analyseRaw;
   }
   static void *newArray_analyseRaw(Long_t nElements, void *p) {
      return p ? new(p) ::analyseRaw[nElements] : new ::analyseRaw[nElements];
   }
   // Wrapper around operator delete
   static void delete_analyseRaw(void *p) {
      delete ((::analyseRaw*)p);
   }
   static void deleteArray_analyseRaw(void *p) {
      delete [] ((::analyseRaw*)p);
   }
   static void destruct_analyseRaw(void *p) {
      typedef ::analyseRaw current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_analyseRaw(TBuffer &buf, void *obj) {
      ((::analyseRaw*)obj)->::analyseRaw::Streamer(buf);
   }
} // end of namespace ROOT for class ::analyseRaw

namespace {
  void TriggerDictionaryInitialization_EXP2018Cint_Impl() {
    static const char* headers[] = {
"dataClasses/analyseRaw.h",
0
    };
    static const char* includePaths[] = {
"/media/user/work/software/root-6.14.00/builddir/include",
"/media/user/work/software/EXP1803/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "EXP2018Cint dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$dataClasses/analyseRaw.h")))  analyseRaw;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "EXP2018Cint dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "dataClasses/analyseRaw.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"analyseRaw", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("EXP2018Cint",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_EXP2018Cint_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_EXP2018Cint_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_EXP2018Cint() {
  TriggerDictionaryInitialization_EXP2018Cint_Impl();
}
