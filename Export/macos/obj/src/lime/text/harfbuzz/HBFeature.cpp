// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_lime_text_harfbuzz_HBFeature
#include <lime/text/harfbuzz/HBFeature.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e935673f08494dca_6_new,"lime.text.harfbuzz.HBFeature","new",0x57bdac68,"lime.text.harfbuzz.HBFeature.new","lime/text/harfbuzz/HBFeature.hx",6,0xa73f5d29)
namespace lime{
namespace text{
namespace harfbuzz{

void HBFeature_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e935673f08494dca_6_new)
            	}

Dynamic HBFeature_obj::__CreateEmpty() { return new HBFeature_obj; }

void *HBFeature_obj::_hx_vtable = 0;

Dynamic HBFeature_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HBFeature_obj > _hx_result = new HBFeature_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HBFeature_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f31ef9e;
}


HBFeature_obj::HBFeature_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *HBFeature_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *HBFeature_obj_sStaticStorageInfo = 0;
#endif

static void HBFeature_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HBFeature_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HBFeature_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HBFeature_obj::__mClass,"__mClass");
};

#endif

hx::Class HBFeature_obj::__mClass;

void HBFeature_obj::__register()
{
	hx::Object *dummy = new HBFeature_obj;
	HBFeature_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.text.harfbuzz.HBFeature","\x76","\x98","\x0d","\x55");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HBFeature_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< HBFeature_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HBFeature_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HBFeature_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HBFeature_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace text
} // end namespace harfbuzz
