// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_lime_text_harfbuzz_HBGlyphInfo
#include <lime/text/harfbuzz/HBGlyphInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_24b4250effd3403c_10_new,"lime.text.harfbuzz.HBGlyphInfo","new",0x936863ec,"lime.text.harfbuzz.HBGlyphInfo.new","lime/text/harfbuzz/HBGlyphInfo.hx",10,0x4a494c65)
namespace lime{
namespace text{
namespace harfbuzz{

void HBGlyphInfo_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_24b4250effd3403c_10_new)
            	}

Dynamic HBGlyphInfo_obj::__CreateEmpty() { return new HBGlyphInfo_obj; }

void *HBGlyphInfo_obj::_hx_vtable = 0;

Dynamic HBGlyphInfo_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HBGlyphInfo_obj > _hx_result = new HBGlyphInfo_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HBGlyphInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x392f4b9e;
}


HBGlyphInfo_obj::HBGlyphInfo_obj()
{
}

hx::Val HBGlyphInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { return hx::Val( mask ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cluster") ) { return hx::Val( cluster ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"codepoint") ) { return hx::Val( codepoint ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val HBGlyphInfo_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { mask=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cluster") ) { cluster=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"codepoint") ) { codepoint=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HBGlyphInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("codepoint","\x03","\xa0","\x38","\xc7"));
	outFields->push(HX_HCSTRING("mask","\xec","\x40","\x56","\x48"));
	outFields->push(HX_HCSTRING("cluster","\xfa","\xaa","\x95","\xed"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo HBGlyphInfo_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(HBGlyphInfo_obj,codepoint),HX_HCSTRING("codepoint","\x03","\xa0","\x38","\xc7")},
	{hx::fsInt,(int)offsetof(HBGlyphInfo_obj,mask),HX_HCSTRING("mask","\xec","\x40","\x56","\x48")},
	{hx::fsInt,(int)offsetof(HBGlyphInfo_obj,cluster),HX_HCSTRING("cluster","\xfa","\xaa","\x95","\xed")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *HBGlyphInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String HBGlyphInfo_obj_sMemberFields[] = {
	HX_HCSTRING("codepoint","\x03","\xa0","\x38","\xc7"),
	HX_HCSTRING("mask","\xec","\x40","\x56","\x48"),
	HX_HCSTRING("cluster","\xfa","\xaa","\x95","\xed"),
	::String(null()) };

static void HBGlyphInfo_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HBGlyphInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HBGlyphInfo_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HBGlyphInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class HBGlyphInfo_obj::__mClass;

void HBGlyphInfo_obj::__register()
{
	hx::Object *dummy = new HBGlyphInfo_obj;
	HBGlyphInfo_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.text.harfbuzz.HBGlyphInfo","\xfa","\x3d","\x9d","\xfe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HBGlyphInfo_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HBGlyphInfo_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HBGlyphInfo_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HBGlyphInfo_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HBGlyphInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HBGlyphInfo_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace text
} // end namespace harfbuzz
