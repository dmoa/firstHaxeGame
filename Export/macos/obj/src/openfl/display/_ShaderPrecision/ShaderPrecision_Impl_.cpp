// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__ShaderPrecision_ShaderPrecision_Impl_
#include <openfl/display/_ShaderPrecision/ShaderPrecision_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_239e25a9d59ce7b2_55_fromString,"openfl.display._ShaderPrecision.ShaderPrecision_Impl_","fromString",0xa4b5053a,"openfl.display._ShaderPrecision.ShaderPrecision_Impl_.fromString","openfl/display/ShaderPrecision.hx",55,0xf4519f71)
HX_LOCAL_STACK_FRAME(_hx_pos_239e25a9d59ce7b2_65_toString,"openfl.display._ShaderPrecision.ShaderPrecision_Impl_","toString",0x9518c24b,"openfl.display._ShaderPrecision.ShaderPrecision_Impl_.toString","openfl/display/ShaderPrecision.hx",65,0xf4519f71)
HX_LOCAL_STACK_FRAME(_hx_pos_239e25a9d59ce7b2_41_boot,"openfl.display._ShaderPrecision.ShaderPrecision_Impl_","boot",0xa4a67a51,"openfl.display._ShaderPrecision.ShaderPrecision_Impl_.boot","openfl/display/ShaderPrecision.hx",41,0xf4519f71)
HX_LOCAL_STACK_FRAME(_hx_pos_239e25a9d59ce7b2_51_boot,"openfl.display._ShaderPrecision.ShaderPrecision_Impl_","boot",0xa4a67a51,"openfl.display._ShaderPrecision.ShaderPrecision_Impl_.boot","openfl/display/ShaderPrecision.hx",51,0xf4519f71)
namespace openfl{
namespace display{
namespace _ShaderPrecision{

void ShaderPrecision_Impl__obj::__construct() { }

Dynamic ShaderPrecision_Impl__obj::__CreateEmpty() { return new ShaderPrecision_Impl__obj; }

void *ShaderPrecision_Impl__obj::_hx_vtable = 0;

Dynamic ShaderPrecision_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ShaderPrecision_Impl__obj > _hx_result = new ShaderPrecision_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ShaderPrecision_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x195c0c6d;
}

 ::Dynamic ShaderPrecision_Impl__obj::FAST;

 ::Dynamic ShaderPrecision_Impl__obj::FULL;

 ::Dynamic ShaderPrecision_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_239e25a9d59ce7b2_55_fromString)
HXDLIN(  55)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("fast",9c,c2,b5,43)) ){
HXLINE(  57)			return (int)0;
HXDLIN(  57)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("full",8f,e9,c4,43)) ){
HXLINE(  58)			return (int)1;
HXDLIN(  58)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  59)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  55)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ShaderPrecision_Impl__obj,fromString,return )

::String ShaderPrecision_Impl__obj::toString(int value){
            	HX_STACKFRAME(&_hx_pos_239e25a9d59ce7b2_65_toString)
HXDLIN(  65)		switch((int)(value)){
            			case (int)0: {
HXLINE(  68)				return HX_("fast",9c,c2,b5,43);
            			}
            			break;
            			case (int)1: {
HXLINE(  67)				return HX_("full",8f,e9,c4,43);
            			}
            			break;
            			default:{
HXLINE(  69)				return null();
            			}
            		}
HXLINE(  65)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ShaderPrecision_Impl__obj,toString,return )


ShaderPrecision_Impl__obj::ShaderPrecision_Impl__obj()
{
}

bool ShaderPrecision_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ShaderPrecision_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo ShaderPrecision_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &ShaderPrecision_Impl__obj::FAST,HX_HCSTRING("FAST","\x9c","\x8a","\x76","\x2e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ShaderPrecision_Impl__obj::FULL,HX_HCSTRING("FULL","\x8f","\xb1","\x85","\x2e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void ShaderPrecision_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderPrecision_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ShaderPrecision_Impl__obj::FAST,"FAST");
	HX_MARK_MEMBER_NAME(ShaderPrecision_Impl__obj::FULL,"FULL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ShaderPrecision_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderPrecision_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ShaderPrecision_Impl__obj::FAST,"FAST");
	HX_VISIT_MEMBER_NAME(ShaderPrecision_Impl__obj::FULL,"FULL");
};

#endif

hx::Class ShaderPrecision_Impl__obj::__mClass;

static ::String ShaderPrecision_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("FAST","\x9c","\x8a","\x76","\x2e"),
	HX_HCSTRING("FULL","\x8f","\xb1","\x85","\x2e"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void ShaderPrecision_Impl__obj::__register()
{
	hx::Object *dummy = new ShaderPrecision_Impl__obj;
	ShaderPrecision_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._ShaderPrecision.ShaderPrecision_Impl_","\xaf","\x1e","\x4b","\x16");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ShaderPrecision_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ShaderPrecision_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ShaderPrecision_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ShaderPrecision_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ShaderPrecision_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderPrecision_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderPrecision_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ShaderPrecision_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_239e25a9d59ce7b2_41_boot)
HXDLIN(  41)		FAST = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_239e25a9d59ce7b2_51_boot)
HXDLIN(  51)		FULL = (int)1;
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _ShaderPrecision
