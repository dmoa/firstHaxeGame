// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_element_index_uint
#include <lime/graphics/opengl/ext/OES_element_index_uint.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c9ab2221efeb0596_7_new,"lime.graphics.opengl.ext.OES_element_index_uint","new",0xddf74ae0,"lime.graphics.opengl.ext.OES_element_index_uint.new","lime/graphics/opengl/ext/OES_element_index_uint.hx",7,0x4991bfae)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void OES_element_index_uint_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c9ab2221efeb0596_7_new)
HXDLIN(   7)		this->UNSIGNED_INT = (int)5125;
            	}

Dynamic OES_element_index_uint_obj::__CreateEmpty() { return new OES_element_index_uint_obj; }

void *OES_element_index_uint_obj::_hx_vtable = 0;

Dynamic OES_element_index_uint_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< OES_element_index_uint_obj > _hx_result = new OES_element_index_uint_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OES_element_index_uint_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2f21a8fe;
}


OES_element_index_uint_obj::OES_element_index_uint_obj()
{
}

hx::Val OES_element_index_uint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT") ) { return hx::Val( UNSIGNED_INT ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val OES_element_index_uint_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT") ) { UNSIGNED_INT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_element_index_uint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("UNSIGNED_INT","\x45","\xfd","\xb9","\x1c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo OES_element_index_uint_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OES_element_index_uint_obj,UNSIGNED_INT),HX_HCSTRING("UNSIGNED_INT","\x45","\xfd","\xb9","\x1c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *OES_element_index_uint_obj_sStaticStorageInfo = 0;
#endif

static ::String OES_element_index_uint_obj_sMemberFields[] = {
	HX_HCSTRING("UNSIGNED_INT","\x45","\xfd","\xb9","\x1c"),
	::String(null()) };

static void OES_element_index_uint_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OES_element_index_uint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OES_element_index_uint_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OES_element_index_uint_obj::__mClass,"__mClass");
};

#endif

hx::Class OES_element_index_uint_obj::__mClass;

void OES_element_index_uint_obj::__register()
{
	hx::Object *dummy = new OES_element_index_uint_obj;
	OES_element_index_uint_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.OES_element_index_uint","\xee","\x9a","\x88","\x1c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = OES_element_index_uint_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(OES_element_index_uint_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OES_element_index_uint_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OES_element_index_uint_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OES_element_index_uint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OES_element_index_uint_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
