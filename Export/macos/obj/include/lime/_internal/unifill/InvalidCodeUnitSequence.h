// Generated by Haxe 3.4.4
#ifndef INCLUDED_lime__internal_unifill_InvalidCodeUnitSequence
#define INCLUDED_lime__internal_unifill_InvalidCodeUnitSequence

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime__internal_unifill_Exception
#include <lime/_internal/unifill/Exception.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_8f5478c43f75177c_46_new)
HX_DECLARE_CLASS3(lime,_internal,unifill,Exception)
HX_DECLARE_CLASS3(lime,_internal,unifill,InvalidCodeUnitSequence)

namespace lime{
namespace _internal{
namespace unifill{


class HXCPP_CLASS_ATTRIBUTES InvalidCodeUnitSequence_obj : public  ::lime::_internal::unifill::Exception_obj
{
	public:
		typedef  ::lime::_internal::unifill::Exception_obj super;
		typedef InvalidCodeUnitSequence_obj OBJ_;
		InvalidCodeUnitSequence_obj();

	public:
		enum { _hx_ClassId = 0x382d5d99 };

		void __construct(int index);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._internal.unifill.InvalidCodeUnitSequence")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime._internal.unifill.InvalidCodeUnitSequence"); }

		hx::ObjectPtr< InvalidCodeUnitSequence_obj > __new(int index) {
			hx::ObjectPtr< InvalidCodeUnitSequence_obj > __this = new InvalidCodeUnitSequence_obj();
			__this->__construct(index);
			return __this;
		}

		static hx::ObjectPtr< InvalidCodeUnitSequence_obj > __alloc(hx::Ctx *_hx_ctx,int index) {
			InvalidCodeUnitSequence_obj *__this = (InvalidCodeUnitSequence_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(InvalidCodeUnitSequence_obj), false, "lime._internal.unifill.InvalidCodeUnitSequence"));
			*(void **)__this = InvalidCodeUnitSequence_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_8f5478c43f75177c_46_new)
HXLINE(  47)		__this->super::__construct();
HXLINE(  48)		( ( ::lime::_internal::unifill::InvalidCodeUnitSequence)(__this) )->index = index;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InvalidCodeUnitSequence_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("InvalidCodeUnitSequence","\xa9","\x92","\x0c","\x23"); }

		int index;
		virtual ::String toString();

};

} // end namespace lime
} // end namespace _internal
} // end namespace unifill

#endif /* INCLUDED_lime__internal_unifill_InvalidCodeUnitSequence */ 
