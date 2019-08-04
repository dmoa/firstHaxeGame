// Generated by Haxe 3.4.4
#ifndef INCLUDED_openfl__Vector_FunctionVector
#define INCLUDED_openfl__Vector_FunctionVector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
HX_DECLARE_CLASS2(openfl,_Vector,FunctionVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)

namespace openfl{
namespace _Vector{


class HXCPP_CLASS_ATTRIBUTES FunctionVector_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FunctionVector_obj OBJ_;
		FunctionVector_obj();

	public:
		enum { _hx_ClassId = 0x3899d30d };

		void __construct(hx::Null< int >  __o_length,hx::Null< bool >  __o_fixed,::cpp::VirtualArray array);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._Vector.FunctionVector")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._Vector.FunctionVector"); }
		static hx::ObjectPtr< FunctionVector_obj > __new(hx::Null< int >  __o_length,hx::Null< bool >  __o_fixed,::cpp::VirtualArray array);
		static hx::ObjectPtr< FunctionVector_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_length,hx::Null< bool >  __o_fixed,::cpp::VirtualArray array);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FunctionVector_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("FunctionVector","\x1b","\xc6","\x6f","\x50"); }

		static void __boot();
		static  ::Dynamic __meta__;
		bool fixed;
		::cpp::VirtualArray _hx___array;
		::Dynamic concat(::Dynamic a);
		::Dynamic concat_dyn();

		::Dynamic copy();
		::Dynamic copy_dyn();

		 ::Dynamic get(int index);
		::Dynamic get_dyn();

		int indexOf( ::Dynamic x,hx::Null< int >  from);
		::Dynamic indexOf_dyn();

		void insertAt(int index, ::Dynamic element);
		::Dynamic insertAt_dyn();

		 ::Dynamic iterator();
		::Dynamic iterator_dyn();

		::String join(::String sep);
		::Dynamic join_dyn();

		int lastIndexOf( ::Dynamic x, ::Dynamic from);
		::Dynamic lastIndexOf_dyn();

		 ::Dynamic pop();
		::Dynamic pop_dyn();

		int push( ::Dynamic x);
		::Dynamic push_dyn();

		 ::Dynamic removeAt(int index);
		::Dynamic removeAt_dyn();

		::Dynamic reverse();
		::Dynamic reverse_dyn();

		 ::Dynamic set(int index, ::Dynamic value);
		::Dynamic set_dyn();

		 ::Dynamic shift();
		::Dynamic shift_dyn();

		::Dynamic slice(hx::Null< int >  startIndex, ::Dynamic endIndex);
		::Dynamic slice_dyn();

		void sort( ::Dynamic f);
		::Dynamic sort_dyn();

		::Dynamic splice(int pos,int len);
		::Dynamic splice_dyn();

		 ::Dynamic toJSON();
		::Dynamic toJSON_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		void unshift( ::Dynamic x);
		::Dynamic unshift_dyn();

		int get_length();
		::Dynamic get_length_dyn();

		int set_length(int value);
		::Dynamic set_length_dyn();

};

} // end namespace openfl
} // end namespace _Vector

#endif /* INCLUDED_openfl__Vector_FunctionVector */ 
