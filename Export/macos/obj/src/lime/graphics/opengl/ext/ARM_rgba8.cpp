// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_ARM_rgba8
#include <lime/graphics/opengl/ext/ARM_rgba8.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e0775cc2fd58ee3f_5_new,"lime.graphics.opengl.ext.ARM_rgba8","new",0xe0dce511,"lime.graphics.opengl.ext.ARM_rgba8.new","lime/graphics/opengl/ext/ARM_rgba8.hx",5,0xfb26fb21)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void ARM_rgba8_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e0775cc2fd58ee3f_5_new)
            	}

Dynamic ARM_rgba8_obj::__CreateEmpty() { return new ARM_rgba8_obj; }

void *ARM_rgba8_obj::_hx_vtable = 0;

Dynamic ARM_rgba8_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ARM_rgba8_obj > _hx_result = new ARM_rgba8_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ARM_rgba8_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x31bdb7f3;
}


ARM_rgba8_obj::ARM_rgba8_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ARM_rgba8_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ARM_rgba8_obj_sStaticStorageInfo = 0;
#endif

static void ARM_rgba8_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ARM_rgba8_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ARM_rgba8_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ARM_rgba8_obj::__mClass,"__mClass");
};

#endif

hx::Class ARM_rgba8_obj::__mClass;

void ARM_rgba8_obj::__register()
{
	hx::Object *dummy = new ARM_rgba8_obj;
	ARM_rgba8_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.ARM_rgba8","\x9f","\x08","\x47","\x51");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ARM_rgba8_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ARM_rgba8_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ARM_rgba8_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ARM_rgba8_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ARM_rgba8_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
