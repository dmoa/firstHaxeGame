// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_AMD_performance_monitor
#include <lime/graphics/opengl/ext/AMD_performance_monitor.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_86b53c0d4ece9a1b_4_new,"lime.graphics.opengl.ext.AMD_performance_monitor","new",0xb6600274,"lime.graphics.opengl.ext.AMD_performance_monitor.new","lime/graphics/opengl/ext/AMD_performance_monitor.hx",4,0x634e329e)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void AMD_performance_monitor_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_86b53c0d4ece9a1b_4_new)
HXLINE(  12)		this->PERFMON_RESULT_AMD = (int)35782;
HXLINE(  11)		this->PERFMON_RESULT_SIZE_AMD = (int)35781;
HXLINE(  10)		this->PERFMON_RESULT_AVAILABLE_AMD = (int)35780;
HXLINE(   9)		this->PERCENTAGE_AMD = (int)35779;
HXLINE(   8)		this->UNSIGNED_INT64_AMD = (int)35778;
HXLINE(   7)		this->COUNTER_RANGE_AMD = (int)35777;
HXLINE(   6)		this->COUNTER_TYPE_AMD = (int)35776;
            	}

Dynamic AMD_performance_monitor_obj::__CreateEmpty() { return new AMD_performance_monitor_obj; }

void *AMD_performance_monitor_obj::_hx_vtable = 0;

Dynamic AMD_performance_monitor_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AMD_performance_monitor_obj > _hx_result = new AMD_performance_monitor_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AMD_performance_monitor_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2d6c52d6;
}


AMD_performance_monitor_obj::AMD_performance_monitor_obj()
{
}

hx::Val AMD_performance_monitor_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"PERCENTAGE_AMD") ) { return hx::Val( PERCENTAGE_AMD ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"COUNTER_TYPE_AMD") ) { return hx::Val( COUNTER_TYPE_AMD ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"COUNTER_RANGE_AMD") ) { return hx::Val( COUNTER_RANGE_AMD ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT64_AMD") ) { return hx::Val( UNSIGNED_INT64_AMD ); }
		if (HX_FIELD_EQ(inName,"PERFMON_RESULT_AMD") ) { return hx::Val( PERFMON_RESULT_AMD ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"PERFMON_RESULT_SIZE_AMD") ) { return hx::Val( PERFMON_RESULT_SIZE_AMD ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"PERFMON_RESULT_AVAILABLE_AMD") ) { return hx::Val( PERFMON_RESULT_AVAILABLE_AMD ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val AMD_performance_monitor_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"PERCENTAGE_AMD") ) { PERCENTAGE_AMD=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"COUNTER_TYPE_AMD") ) { COUNTER_TYPE_AMD=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"COUNTER_RANGE_AMD") ) { COUNTER_RANGE_AMD=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT64_AMD") ) { UNSIGNED_INT64_AMD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PERFMON_RESULT_AMD") ) { PERFMON_RESULT_AMD=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"PERFMON_RESULT_SIZE_AMD") ) { PERFMON_RESULT_SIZE_AMD=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"PERFMON_RESULT_AVAILABLE_AMD") ) { PERFMON_RESULT_AVAILABLE_AMD=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AMD_performance_monitor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("COUNTER_TYPE_AMD","\x96","\xb3","\x5a","\x5d"));
	outFields->push(HX_HCSTRING("COUNTER_RANGE_AMD","\x93","\xf4","\x50","\xe4"));
	outFields->push(HX_HCSTRING("UNSIGNED_INT64_AMD","\x1c","\x40","\x37","\xa0"));
	outFields->push(HX_HCSTRING("PERCENTAGE_AMD","\xf3","\x76","\xad","\x36"));
	outFields->push(HX_HCSTRING("PERFMON_RESULT_AVAILABLE_AMD","\x7c","\x92","\x8d","\x67"));
	outFields->push(HX_HCSTRING("PERFMON_RESULT_SIZE_AMD","\xe0","\xc4","\x64","\x06"));
	outFields->push(HX_HCSTRING("PERFMON_RESULT_AMD","\xd2","\x3e","\x3f","\x51"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo AMD_performance_monitor_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(AMD_performance_monitor_obj,COUNTER_TYPE_AMD),HX_HCSTRING("COUNTER_TYPE_AMD","\x96","\xb3","\x5a","\x5d")},
	{hx::fsInt,(int)offsetof(AMD_performance_monitor_obj,COUNTER_RANGE_AMD),HX_HCSTRING("COUNTER_RANGE_AMD","\x93","\xf4","\x50","\xe4")},
	{hx::fsInt,(int)offsetof(AMD_performance_monitor_obj,UNSIGNED_INT64_AMD),HX_HCSTRING("UNSIGNED_INT64_AMD","\x1c","\x40","\x37","\xa0")},
	{hx::fsInt,(int)offsetof(AMD_performance_monitor_obj,PERCENTAGE_AMD),HX_HCSTRING("PERCENTAGE_AMD","\xf3","\x76","\xad","\x36")},
	{hx::fsInt,(int)offsetof(AMD_performance_monitor_obj,PERFMON_RESULT_AVAILABLE_AMD),HX_HCSTRING("PERFMON_RESULT_AVAILABLE_AMD","\x7c","\x92","\x8d","\x67")},
	{hx::fsInt,(int)offsetof(AMD_performance_monitor_obj,PERFMON_RESULT_SIZE_AMD),HX_HCSTRING("PERFMON_RESULT_SIZE_AMD","\xe0","\xc4","\x64","\x06")},
	{hx::fsInt,(int)offsetof(AMD_performance_monitor_obj,PERFMON_RESULT_AMD),HX_HCSTRING("PERFMON_RESULT_AMD","\xd2","\x3e","\x3f","\x51")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AMD_performance_monitor_obj_sStaticStorageInfo = 0;
#endif

static ::String AMD_performance_monitor_obj_sMemberFields[] = {
	HX_HCSTRING("COUNTER_TYPE_AMD","\x96","\xb3","\x5a","\x5d"),
	HX_HCSTRING("COUNTER_RANGE_AMD","\x93","\xf4","\x50","\xe4"),
	HX_HCSTRING("UNSIGNED_INT64_AMD","\x1c","\x40","\x37","\xa0"),
	HX_HCSTRING("PERCENTAGE_AMD","\xf3","\x76","\xad","\x36"),
	HX_HCSTRING("PERFMON_RESULT_AVAILABLE_AMD","\x7c","\x92","\x8d","\x67"),
	HX_HCSTRING("PERFMON_RESULT_SIZE_AMD","\xe0","\xc4","\x64","\x06"),
	HX_HCSTRING("PERFMON_RESULT_AMD","\xd2","\x3e","\x3f","\x51"),
	::String(null()) };

static void AMD_performance_monitor_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AMD_performance_monitor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AMD_performance_monitor_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AMD_performance_monitor_obj::__mClass,"__mClass");
};

#endif

hx::Class AMD_performance_monitor_obj::__mClass;

void AMD_performance_monitor_obj::__register()
{
	hx::Object *dummy = new AMD_performance_monitor_obj;
	AMD_performance_monitor_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.AMD_performance_monitor","\x82","\xf8","\xb0","\xc5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AMD_performance_monitor_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AMD_performance_monitor_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AMD_performance_monitor_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AMD_performance_monitor_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AMD_performance_monitor_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AMD_performance_monitor_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
