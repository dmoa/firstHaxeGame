// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_system__CFFIPointer_CFFIPointer_Impl_
#include <lime/system/_CFFIPointer/CFFIPointer_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_9__new,"lime.system._CFFIPointer.CFFIPointer_Impl_","_new",0xca839748,"lime.system._CFFIPointer.CFFIPointer_Impl_._new","lime/system/CFFIPointer.hx",9,0x1e20e50d)
HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_15_get,"lime.system._CFFIPointer.CFFIPointer_Impl_","get",0xe8d2f88f,"lime.system._CFFIPointer.CFFIPointer_Impl_.get","lime/system/CFFIPointer.hx",15,0x1e20e50d)
HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_28_equals,"lime.system._CFFIPointer.CFFIPointer_Impl_","equals",0x4ee8f7e6,"lime.system._CFFIPointer.CFFIPointer_Impl_.equals","lime/system/CFFIPointer.hx",28,0x1e20e50d)
HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_33_equalsPointer,"lime.system._CFFIPointer.CFFIPointer_Impl_","equalsPointer",0x0bf95977,"lime.system._CFFIPointer.CFFIPointer_Impl_.equalsPointer","lime/system/CFFIPointer.hx",33,0x1e20e50d)
HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_38_greaterThan,"lime.system._CFFIPointer.CFFIPointer_Impl_","greaterThan",0xe66d5a74,"lime.system._CFFIPointer.CFFIPointer_Impl_.greaterThan","lime/system/CFFIPointer.hx",38,0x1e20e50d)
HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_43_greaterThanPointer,"lime.system._CFFIPointer.CFFIPointer_Impl_","greaterThanPointer",0x36a084a9,"lime.system._CFFIPointer.CFFIPointer_Impl_.greaterThanPointer","lime/system/CFFIPointer.hx",43,0x1e20e50d)
HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_48_greaterThanOrEqual,"lime.system._CFFIPointer.CFFIPointer_Impl_","greaterThanOrEqual",0x87aca37d,"lime.system._CFFIPointer.CFFIPointer_Impl_.greaterThanOrEqual","lime/system/CFFIPointer.hx",48,0x1e20e50d)
HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_53_greaterThanOrEqualPointer,"lime.system._CFFIPointer.CFFIPointer_Impl_","greaterThanOrEqualPointer",0x30925ec0,"lime.system._CFFIPointer.CFFIPointer_Impl_.greaterThanOrEqualPointer","lime/system/CFFIPointer.hx",53,0x1e20e50d)
HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_58_lessThan,"lime.system._CFFIPointer.CFFIPointer_Impl_","lessThan",0xb2fd60c1,"lime.system._CFFIPointer.CFFIPointer_Impl_.lessThan","lime/system/CFFIPointer.hx",58,0x1e20e50d)
HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_63_lessThanPointer,"lime.system._CFFIPointer.CFFIPointer_Impl_","lessThanPointer",0x7ee991fc,"lime.system._CFFIPointer.CFFIPointer_Impl_.lessThanPointer","lime/system/CFFIPointer.hx",63,0x1e20e50d)
HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_68_lessThanOrEqual,"lime.system._CFFIPointer.CFFIPointer_Impl_","lessThanOrEqual",0xcff5b0d0,"lime.system._CFFIPointer.CFFIPointer_Impl_.lessThanOrEqual","lime/system/CFFIPointer.hx",68,0x1e20e50d)
HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_73_lessThanOrEqualPointer,"lime.system._CFFIPointer.CFFIPointer_Impl_","lessThanOrEqualPointer",0x8e8ff1cd,"lime.system._CFFIPointer.CFFIPointer_Impl_.lessThanOrEqualPointer","lime/system/CFFIPointer.hx",73,0x1e20e50d)
HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_78_notEquals,"lime.system._CFFIPointer.CFFIPointer_Impl_","notEquals",0x4cf4046b,"lime.system._CFFIPointer.CFFIPointer_Impl_.notEquals","lime/system/CFFIPointer.hx",78,0x1e20e50d)
HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_83_notEqualsPointer,"lime.system._CFFIPointer.CFFIPointer_Impl_","notEqualsPointer",0xc9dd1792,"lime.system._CFFIPointer.CFFIPointer_Impl_.notEqualsPointer","lime/system/CFFIPointer.hx",83,0x1e20e50d)
namespace lime{
namespace _hx_system{
namespace _CFFIPointer{

void CFFIPointer_Impl__obj::__construct() { }

Dynamic CFFIPointer_Impl__obj::__CreateEmpty() { return new CFFIPointer_Impl__obj; }

void *CFFIPointer_Impl__obj::_hx_vtable = 0;

Dynamic CFFIPointer_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CFFIPointer_Impl__obj > _hx_result = new CFFIPointer_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CFFIPointer_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2488cd1b;
}

 ::Dynamic CFFIPointer_Impl__obj::_new( ::Dynamic handle){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_9__new)
HXDLIN(   9)		 ::Dynamic this1 = handle;
HXDLIN(   9)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CFFIPointer_Impl__obj,_new,return )

Float CFFIPointer_Impl__obj::get( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_15_get)
HXLINE(  16)		if (hx::IsNotNull( this1 )) {
HXLINE(  19)			return ::lime::_internal::backend::native::NativeCFFI_obj::lime_cffi_get_native_pointer(hx::DynamicPtr(this1));
            		}
HXLINE(  23)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CFFIPointer_Impl__obj,get,return )

bool CFFIPointer_Impl__obj::equals( ::Dynamic a,int b){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_28_equals)
HXDLIN(  28)		return (::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a) == b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,equals,return )

bool CFFIPointer_Impl__obj::equalsPointer( ::Dynamic a, ::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_33_equalsPointer)
HXDLIN(  33)		Float _hx_tmp = ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a);
HXDLIN(  33)		return (_hx_tmp == ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,equalsPointer,return )

bool CFFIPointer_Impl__obj::greaterThan( ::Dynamic a,int b){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_38_greaterThan)
HXDLIN(  38)		return (::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a) > b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,greaterThan,return )

bool CFFIPointer_Impl__obj::greaterThanPointer( ::Dynamic a, ::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_43_greaterThanPointer)
HXDLIN(  43)		Float _hx_tmp = ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a);
HXDLIN(  43)		return (_hx_tmp > ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,greaterThanPointer,return )

bool CFFIPointer_Impl__obj::greaterThanOrEqual( ::Dynamic a,int b){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_48_greaterThanOrEqual)
HXDLIN(  48)		return (::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a) >= b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,greaterThanOrEqual,return )

bool CFFIPointer_Impl__obj::greaterThanOrEqualPointer( ::Dynamic a, ::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_53_greaterThanOrEqualPointer)
HXDLIN(  53)		Float _hx_tmp = ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a);
HXDLIN(  53)		return (_hx_tmp >= ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,greaterThanOrEqualPointer,return )

bool CFFIPointer_Impl__obj::lessThan( ::Dynamic a,int b){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_58_lessThan)
HXDLIN(  58)		return (::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a) < b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,lessThan,return )

bool CFFIPointer_Impl__obj::lessThanPointer( ::Dynamic a, ::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_63_lessThanPointer)
HXDLIN(  63)		Float _hx_tmp = ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a);
HXDLIN(  63)		return (_hx_tmp < ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,lessThanPointer,return )

bool CFFIPointer_Impl__obj::lessThanOrEqual( ::Dynamic a,int b){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_68_lessThanOrEqual)
HXDLIN(  68)		return (::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a) <= b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,lessThanOrEqual,return )

bool CFFIPointer_Impl__obj::lessThanOrEqualPointer( ::Dynamic a, ::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_73_lessThanOrEqualPointer)
HXDLIN(  73)		Float _hx_tmp = ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a);
HXDLIN(  73)		return (_hx_tmp <= ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,lessThanOrEqualPointer,return )

bool CFFIPointer_Impl__obj::notEquals( ::Dynamic a,int b){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_78_notEquals)
HXDLIN(  78)		return (::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a) != b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,notEquals,return )

bool CFFIPointer_Impl__obj::notEqualsPointer( ::Dynamic a, ::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_83_notEqualsPointer)
HXDLIN(  83)		Float _hx_tmp = ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a);
HXDLIN(  83)		return (_hx_tmp != ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,notEqualsPointer,return )


CFFIPointer_Impl__obj::CFFIPointer_Impl__obj()
{
}

bool CFFIPointer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { outValue = equals_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lessThan") ) { outValue = lessThan_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"notEquals") ) { outValue = notEquals_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"greaterThan") ) { outValue = greaterThan_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"equalsPointer") ) { outValue = equalsPointer_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lessThanPointer") ) { outValue = lessThanPointer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lessThanOrEqual") ) { outValue = lessThanOrEqual_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"notEqualsPointer") ) { outValue = notEqualsPointer_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"greaterThanPointer") ) { outValue = greaterThanPointer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"greaterThanOrEqual") ) { outValue = greaterThanOrEqual_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lessThanOrEqualPointer") ) { outValue = lessThanOrEqualPointer_dyn(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"greaterThanOrEqualPointer") ) { outValue = greaterThanOrEqualPointer_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CFFIPointer_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CFFIPointer_Impl__obj_sStaticStorageInfo = 0;
#endif

static void CFFIPointer_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CFFIPointer_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CFFIPointer_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CFFIPointer_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class CFFIPointer_Impl__obj::__mClass;

static ::String CFFIPointer_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("equalsPointer","\x3e","\xd0","\x43","\x1a"),
	HX_HCSTRING("greaterThan","\x7b","\xc1","\x4a","\x75"),
	HX_HCSTRING("greaterThanPointer","\x82","\x1c","\xaf","\xc9"),
	HX_HCSTRING("greaterThanOrEqual","\x56","\x3b","\xbb","\x1a"),
	HX_HCSTRING("greaterThanOrEqualPointer","\x07","\x64","\x57","\x78"),
	HX_HCSTRING("lessThan","\x5a","\x5f","\x34","\xf3"),
	HX_HCSTRING("lessThanPointer","\x83","\x88","\xd4","\x8d"),
	HX_HCSTRING("lessThanOrEqual","\x57","\xa7","\xe0","\xde"),
	HX_HCSTRING("lessThanOrEqualPointer","\x26","\xea","\x29","\x34"),
	HX_HCSTRING("notEquals","\xb2","\xcb","\xdb","\x3c"),
	HX_HCSTRING("notEqualsPointer","\x2b","\xd7","\x89","\xc8"),
	::String(null())
};

void CFFIPointer_Impl__obj::__register()
{
	hx::Object *dummy = new CFFIPointer_Impl__obj;
	CFFIPointer_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system._CFFIPointer.CFFIPointer_Impl_","\xe7","\x27","\x6d","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CFFIPointer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CFFIPointer_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CFFIPointer_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CFFIPointer_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CFFIPointer_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CFFIPointer_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CFFIPointer_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace system
} // end namespace _CFFIPointer
