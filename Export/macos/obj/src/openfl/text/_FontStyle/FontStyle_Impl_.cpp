// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_openfl_text__FontStyle_FontStyle_Impl_
#include <openfl/text/_FontStyle/FontStyle_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2a9064c0a4b35973_41_fromString,"openfl.text._FontStyle.FontStyle_Impl_","fromString",0x9783fd8f,"openfl.text._FontStyle.FontStyle_Impl_.fromString","openfl/text/FontStyle.hx",41,0x6b07f79f)
HX_LOCAL_STACK_FRAME(_hx_pos_2a9064c0a4b35973_53_toString,"openfl.text._FontStyle.FontStyle_Impl_","toString",0x0cd38b60,"openfl.text._FontStyle.FontStyle_Impl_.toString","openfl/text/FontStyle.hx",53,0x6b07f79f)
HX_LOCAL_STACK_FRAME(_hx_pos_2a9064c0a4b35973_16_boot,"openfl.text._FontStyle.FontStyle_Impl_","boot",0x44f7d4e6,"openfl.text._FontStyle.FontStyle_Impl_.boot","openfl/text/FontStyle.hx",16,0x6b07f79f)
HX_LOCAL_STACK_FRAME(_hx_pos_2a9064c0a4b35973_23_boot,"openfl.text._FontStyle.FontStyle_Impl_","boot",0x44f7d4e6,"openfl.text._FontStyle.FontStyle_Impl_.boot","openfl/text/FontStyle.hx",23,0x6b07f79f)
HX_LOCAL_STACK_FRAME(_hx_pos_2a9064c0a4b35973_30_boot,"openfl.text._FontStyle.FontStyle_Impl_","boot",0x44f7d4e6,"openfl.text._FontStyle.FontStyle_Impl_.boot","openfl/text/FontStyle.hx",30,0x6b07f79f)
HX_LOCAL_STACK_FRAME(_hx_pos_2a9064c0a4b35973_37_boot,"openfl.text._FontStyle.FontStyle_Impl_","boot",0x44f7d4e6,"openfl.text._FontStyle.FontStyle_Impl_.boot","openfl/text/FontStyle.hx",37,0x6b07f79f)
namespace openfl{
namespace text{
namespace _FontStyle{

void FontStyle_Impl__obj::__construct() { }

Dynamic FontStyle_Impl__obj::__CreateEmpty() { return new FontStyle_Impl__obj; }

void *FontStyle_Impl__obj::_hx_vtable = 0;

Dynamic FontStyle_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FontStyle_Impl__obj > _hx_result = new FontStyle_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FontStyle_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2560f57e;
}

 ::Dynamic FontStyle_Impl__obj::BOLD;

 ::Dynamic FontStyle_Impl__obj::BOLD_ITALIC;

 ::Dynamic FontStyle_Impl__obj::ITALIC;

 ::Dynamic FontStyle_Impl__obj::REGULAR;

 ::Dynamic FontStyle_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_2a9064c0a4b35973_41_fromString)
HXDLIN(  41)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("bold",85,81,1b,41)) ){
HXLINE(  43)			return (int)0;
HXDLIN(  43)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("boldItalic",55,96,d1,ad)) ){
HXLINE(  44)			return (int)1;
HXDLIN(  44)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("italic",f0,2e,64,06)) ){
HXLINE(  45)			return (int)2;
HXDLIN(  45)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("regular",5c,52,88,82)) ){
HXLINE(  46)			return (int)3;
HXDLIN(  46)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  47)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  41)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FontStyle_Impl__obj,fromString,return )

::String FontStyle_Impl__obj::toString(int value){
            	HX_STACKFRAME(&_hx_pos_2a9064c0a4b35973_53_toString)
HXDLIN(  53)		switch((int)(value)){
            			case (int)0: {
HXLINE(  55)				return HX_("bold",85,81,1b,41);
            			}
            			break;
            			case (int)1: {
HXLINE(  56)				return HX_("boldItalic",55,96,d1,ad);
            			}
            			break;
            			case (int)2: {
HXLINE(  57)				return HX_("italic",f0,2e,64,06);
            			}
            			break;
            			case (int)3: {
HXLINE(  58)				return HX_("regular",5c,52,88,82);
            			}
            			break;
            			default:{
HXLINE(  59)				return null();
            			}
            		}
HXLINE(  53)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FontStyle_Impl__obj,toString,return )


FontStyle_Impl__obj::FontStyle_Impl__obj()
{
}

bool FontStyle_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *FontStyle_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo FontStyle_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &FontStyle_Impl__obj::BOLD,HX_HCSTRING("BOLD","\x85","\x49","\xdc","\x2b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FontStyle_Impl__obj::BOLD_ITALIC,HX_HCSTRING("BOLD_ITALIC","\xaa","\x0d","\xc2","\x88")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FontStyle_Impl__obj::ITALIC,HX_HCSTRING("ITALIC","\xf0","\xda","\xe6","\xb8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FontStyle_Impl__obj::REGULAR,HX_HCSTRING("REGULAR","\x3c","\x26","\x5c","\x02")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void FontStyle_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FontStyle_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FontStyle_Impl__obj::BOLD,"BOLD");
	HX_MARK_MEMBER_NAME(FontStyle_Impl__obj::BOLD_ITALIC,"BOLD_ITALIC");
	HX_MARK_MEMBER_NAME(FontStyle_Impl__obj::ITALIC,"ITALIC");
	HX_MARK_MEMBER_NAME(FontStyle_Impl__obj::REGULAR,"REGULAR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FontStyle_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontStyle_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FontStyle_Impl__obj::BOLD,"BOLD");
	HX_VISIT_MEMBER_NAME(FontStyle_Impl__obj::BOLD_ITALIC,"BOLD_ITALIC");
	HX_VISIT_MEMBER_NAME(FontStyle_Impl__obj::ITALIC,"ITALIC");
	HX_VISIT_MEMBER_NAME(FontStyle_Impl__obj::REGULAR,"REGULAR");
};

#endif

hx::Class FontStyle_Impl__obj::__mClass;

static ::String FontStyle_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("BOLD","\x85","\x49","\xdc","\x2b"),
	HX_HCSTRING("BOLD_ITALIC","\xaa","\x0d","\xc2","\x88"),
	HX_HCSTRING("ITALIC","\xf0","\xda","\xe6","\xb8"),
	HX_HCSTRING("REGULAR","\x3c","\x26","\x5c","\x02"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void FontStyle_Impl__obj::__register()
{
	hx::Object *dummy = new FontStyle_Impl__obj;
	FontStyle_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.text._FontStyle.FontStyle_Impl_","\x3a","\xcc","\x41","\x0b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FontStyle_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FontStyle_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FontStyle_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FontStyle_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FontStyle_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FontStyle_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FontStyle_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FontStyle_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2a9064c0a4b35973_16_boot)
HXDLIN(  16)		BOLD = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2a9064c0a4b35973_23_boot)
HXDLIN(  23)		BOLD_ITALIC = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2a9064c0a4b35973_30_boot)
HXDLIN(  30)		ITALIC = (int)2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2a9064c0a4b35973_37_boot)
HXDLIN(  37)		REGULAR = (int)3;
            	}
}

} // end namespace openfl
} // end namespace text
} // end namespace _FontStyle
