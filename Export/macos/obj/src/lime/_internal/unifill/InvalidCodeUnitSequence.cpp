// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_unifill_Exception
#include <lime/_internal/unifill/Exception.h>
#endif
#ifndef INCLUDED_lime__internal_unifill_InvalidCodeUnitSequence
#include <lime/_internal/unifill/InvalidCodeUnitSequence.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8f5478c43f75177c_46_new,"lime._internal.unifill.InvalidCodeUnitSequence","new",0x5c0aa5b5,"lime._internal.unifill.InvalidCodeUnitSequence.new","lime/_internal/unifill/Exception.hx",46,0x1ae400d8)
HX_LOCAL_STACK_FRAME(_hx_pos_8f5478c43f75177c_53_toString,"lime._internal.unifill.InvalidCodeUnitSequence","toString",0xa9298737,"lime._internal.unifill.InvalidCodeUnitSequence.toString","lime/_internal/unifill/Exception.hx",53,0x1ae400d8)
namespace lime{
namespace _internal{
namespace unifill{

void InvalidCodeUnitSequence_obj::__construct(int index){
            	HX_STACKFRAME(&_hx_pos_8f5478c43f75177c_46_new)
HXLINE(  47)		super::__construct();
HXLINE(  48)		this->index = index;
            	}

Dynamic InvalidCodeUnitSequence_obj::__CreateEmpty() { return new InvalidCodeUnitSequence_obj; }

void *InvalidCodeUnitSequence_obj::_hx_vtable = 0;

Dynamic InvalidCodeUnitSequence_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< InvalidCodeUnitSequence_obj > _hx_result = new InvalidCodeUnitSequence_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool InvalidCodeUnitSequence_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0200bd3b) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0200bd3b;
	} else {
		return inClassId==(int)0x382d5d99;
	}
}

::String InvalidCodeUnitSequence_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_8f5478c43f75177c_53_toString)
HXDLIN(  53)		return ((HX_("InvalidCodeUnitSequence(index: ",b9,ee,ed,ce) + this->index) + HX_(")",29,00,00,00));
            	}



InvalidCodeUnitSequence_obj::InvalidCodeUnitSequence_obj()
{
}

hx::Val InvalidCodeUnitSequence_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return hx::Val( index ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val InvalidCodeUnitSequence_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InvalidCodeUnitSequence_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo InvalidCodeUnitSequence_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(InvalidCodeUnitSequence_obj,index),HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *InvalidCodeUnitSequence_obj_sStaticStorageInfo = 0;
#endif

static ::String InvalidCodeUnitSequence_obj_sMemberFields[] = {
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void InvalidCodeUnitSequence_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InvalidCodeUnitSequence_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void InvalidCodeUnitSequence_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InvalidCodeUnitSequence_obj::__mClass,"__mClass");
};

#endif

hx::Class InvalidCodeUnitSequence_obj::__mClass;

void InvalidCodeUnitSequence_obj::__register()
{
	hx::Object *dummy = new InvalidCodeUnitSequence_obj;
	InvalidCodeUnitSequence_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._internal.unifill.InvalidCodeUnitSequence","\x43","\xa7","\x96","\x3b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = InvalidCodeUnitSequence_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(InvalidCodeUnitSequence_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InvalidCodeUnitSequence_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = InvalidCodeUnitSequence_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InvalidCodeUnitSequence_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InvalidCodeUnitSequence_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace unifill
