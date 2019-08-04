// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_lime_text_harfbuzz_HBGlyphPosition
#include <lime/text/harfbuzz/HBGlyphPosition.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ac97e2fa85d7d054_11_new,"lime.text.harfbuzz.HBGlyphPosition","new",0xd832bba7,"lime.text.harfbuzz.HBGlyphPosition.new","lime/text/harfbuzz/HBGlyphPosition.hx",11,0xc342498a)
namespace lime{
namespace text{
namespace harfbuzz{

void HBGlyphPosition_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ac97e2fa85d7d054_11_new)
            	}

Dynamic HBGlyphPosition_obj::__CreateEmpty() { return new HBGlyphPosition_obj; }

void *HBGlyphPosition_obj::_hx_vtable = 0;

Dynamic HBGlyphPosition_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HBGlyphPosition_obj > _hx_result = new HBGlyphPosition_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HBGlyphPosition_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x659a10f5;
}


HBGlyphPosition_obj::HBGlyphPosition_obj()
{
}

hx::Val HBGlyphPosition_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"xOffset") ) { return hx::Val( xOffset ); }
		if (HX_FIELD_EQ(inName,"yOffset") ) { return hx::Val( yOffset ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xAdvance") ) { return hx::Val( xAdvance ); }
		if (HX_FIELD_EQ(inName,"yAdvance") ) { return hx::Val( yAdvance ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val HBGlyphPosition_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"xOffset") ) { xOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yOffset") ) { yOffset=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xAdvance") ) { xAdvance=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yAdvance") ) { yAdvance=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HBGlyphPosition_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("xAdvance","\xea","\xae","\x02","\x8c"));
	outFields->push(HX_HCSTRING("xOffset","\x2b","\xb6","\xe3","\x12"));
	outFields->push(HX_HCSTRING("yAdvance","\x09","\x21","\x35","\xc5"));
	outFields->push(HX_HCSTRING("yOffset","\xec","\x2c","\x79","\x3c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo HBGlyphPosition_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(HBGlyphPosition_obj,xAdvance),HX_HCSTRING("xAdvance","\xea","\xae","\x02","\x8c")},
	{hx::fsInt,(int)offsetof(HBGlyphPosition_obj,xOffset),HX_HCSTRING("xOffset","\x2b","\xb6","\xe3","\x12")},
	{hx::fsInt,(int)offsetof(HBGlyphPosition_obj,yAdvance),HX_HCSTRING("yAdvance","\x09","\x21","\x35","\xc5")},
	{hx::fsInt,(int)offsetof(HBGlyphPosition_obj,yOffset),HX_HCSTRING("yOffset","\xec","\x2c","\x79","\x3c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *HBGlyphPosition_obj_sStaticStorageInfo = 0;
#endif

static ::String HBGlyphPosition_obj_sMemberFields[] = {
	HX_HCSTRING("xAdvance","\xea","\xae","\x02","\x8c"),
	HX_HCSTRING("xOffset","\x2b","\xb6","\xe3","\x12"),
	HX_HCSTRING("yAdvance","\x09","\x21","\x35","\xc5"),
	HX_HCSTRING("yOffset","\xec","\x2c","\x79","\x3c"),
	::String(null()) };

static void HBGlyphPosition_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HBGlyphPosition_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HBGlyphPosition_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HBGlyphPosition_obj::__mClass,"__mClass");
};

#endif

hx::Class HBGlyphPosition_obj::__mClass;

void HBGlyphPosition_obj::__register()
{
	hx::Object *dummy = new HBGlyphPosition_obj;
	HBGlyphPosition_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.text.harfbuzz.HBGlyphPosition","\x35","\x5c","\xdc","\x39");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HBGlyphPosition_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HBGlyphPosition_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HBGlyphPosition_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HBGlyphPosition_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HBGlyphPosition_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HBGlyphPosition_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace text
} // end namespace harfbuzz
