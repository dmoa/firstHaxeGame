// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_alpha_test
#include <lime/graphics/opengl/ext/QCOM_alpha_test.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_399cf2cdee05251f_4_new,"lime.graphics.opengl.ext.QCOM_alpha_test","new",0x0896a752,"lime.graphics.opengl.ext.QCOM_alpha_test.new","lime/graphics/opengl/ext/QCOM_alpha_test.hx",4,0xac036180)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void QCOM_alpha_test_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_399cf2cdee05251f_4_new)
HXLINE(   8)		this->ALPHA_TEST_REF_QCOM = (int)3010;
HXLINE(   7)		this->ALPHA_TEST_FUNC_QCOM = (int)3009;
HXLINE(   6)		this->ALPHA_TEST_QCOM = (int)3008;
            	}

Dynamic QCOM_alpha_test_obj::__CreateEmpty() { return new QCOM_alpha_test_obj; }

void *QCOM_alpha_test_obj::_hx_vtable = 0;

Dynamic QCOM_alpha_test_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< QCOM_alpha_test_obj > _hx_result = new QCOM_alpha_test_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool QCOM_alpha_test_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x699a2650;
}


QCOM_alpha_test_obj::QCOM_alpha_test_obj()
{
}

hx::Val QCOM_alpha_test_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"ALPHA_TEST_QCOM") ) { return hx::Val( ALPHA_TEST_QCOM ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ALPHA_TEST_REF_QCOM") ) { return hx::Val( ALPHA_TEST_REF_QCOM ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"ALPHA_TEST_FUNC_QCOM") ) { return hx::Val( ALPHA_TEST_FUNC_QCOM ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val QCOM_alpha_test_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"ALPHA_TEST_QCOM") ) { ALPHA_TEST_QCOM=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ALPHA_TEST_REF_QCOM") ) { ALPHA_TEST_REF_QCOM=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"ALPHA_TEST_FUNC_QCOM") ) { ALPHA_TEST_FUNC_QCOM=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QCOM_alpha_test_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ALPHA_TEST_QCOM","\x3c","\x9b","\x7f","\x99"));
	outFields->push(HX_HCSTRING("ALPHA_TEST_FUNC_QCOM","\x3f","\x1c","\x4c","\x9d"));
	outFields->push(HX_HCSTRING("ALPHA_TEST_REF_QCOM","\x08","\xdf","\x0e","\xf3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo QCOM_alpha_test_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(QCOM_alpha_test_obj,ALPHA_TEST_QCOM),HX_HCSTRING("ALPHA_TEST_QCOM","\x3c","\x9b","\x7f","\x99")},
	{hx::fsInt,(int)offsetof(QCOM_alpha_test_obj,ALPHA_TEST_FUNC_QCOM),HX_HCSTRING("ALPHA_TEST_FUNC_QCOM","\x3f","\x1c","\x4c","\x9d")},
	{hx::fsInt,(int)offsetof(QCOM_alpha_test_obj,ALPHA_TEST_REF_QCOM),HX_HCSTRING("ALPHA_TEST_REF_QCOM","\x08","\xdf","\x0e","\xf3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *QCOM_alpha_test_obj_sStaticStorageInfo = 0;
#endif

static ::String QCOM_alpha_test_obj_sMemberFields[] = {
	HX_HCSTRING("ALPHA_TEST_QCOM","\x3c","\x9b","\x7f","\x99"),
	HX_HCSTRING("ALPHA_TEST_FUNC_QCOM","\x3f","\x1c","\x4c","\x9d"),
	HX_HCSTRING("ALPHA_TEST_REF_QCOM","\x08","\xdf","\x0e","\xf3"),
	::String(null()) };

static void QCOM_alpha_test_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QCOM_alpha_test_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void QCOM_alpha_test_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QCOM_alpha_test_obj::__mClass,"__mClass");
};

#endif

hx::Class QCOM_alpha_test_obj::__mClass;

void QCOM_alpha_test_obj::__register()
{
	hx::Object *dummy = new QCOM_alpha_test_obj;
	QCOM_alpha_test_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.QCOM_alpha_test","\x60","\x56","\x80","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = QCOM_alpha_test_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(QCOM_alpha_test_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QCOM_alpha_test_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = QCOM_alpha_test_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = QCOM_alpha_test_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = QCOM_alpha_test_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
