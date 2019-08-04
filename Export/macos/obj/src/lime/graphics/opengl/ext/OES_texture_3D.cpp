// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_texture_3D
#include <lime/graphics/opengl/ext/OES_texture_3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_973c90bb42c6d3fb_4_new,"lime.graphics.opengl.ext.OES_texture_3D","new",0x31a9ba2b,"lime.graphics.opengl.ext.OES_texture_3D.new","lime/graphics/opengl/ext/OES_texture_3D.hx",4,0x0ea6b4c3)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void OES_texture_3D_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_973c90bb42c6d3fb_4_new)
HXLINE(  11)		this->FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES = (int)36052;
HXLINE(  10)		this->SAMPLER_3D_OES = (int)35679;
HXLINE(   9)		this->MAX_3D_TEXTURE_SIZE_OES = (int)32883;
HXLINE(   8)		this->TEXTURE_BINDING_3D_OES = (int)32874;
HXLINE(   7)		this->TEXTURE_3D_OES = (int)32879;
HXLINE(   6)		this->TEXTURE_WRAP_R_OES = (int)32882;
            	}

Dynamic OES_texture_3D_obj::__CreateEmpty() { return new OES_texture_3D_obj; }

void *OES_texture_3D_obj::_hx_vtable = 0;

Dynamic OES_texture_3D_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< OES_texture_3D_obj > _hx_result = new OES_texture_3D_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OES_texture_3D_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x039d46c9;
}


OES_texture_3D_obj::OES_texture_3D_obj()
{
}

hx::Val OES_texture_3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"TEXTURE_3D_OES") ) { return hx::Val( TEXTURE_3D_OES ); }
		if (HX_FIELD_EQ(inName,"SAMPLER_3D_OES") ) { return hx::Val( SAMPLER_3D_OES ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_R_OES") ) { return hx::Val( TEXTURE_WRAP_R_OES ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_3D_OES") ) { return hx::Val( TEXTURE_BINDING_3D_OES ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"MAX_3D_TEXTURE_SIZE_OES") ) { return hx::Val( MAX_3D_TEXTURE_SIZE_OES ); }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES") ) { return hx::Val( FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val OES_texture_3D_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"TEXTURE_3D_OES") ) { TEXTURE_3D_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLER_3D_OES") ) { SAMPLER_3D_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_R_OES") ) { TEXTURE_WRAP_R_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_3D_OES") ) { TEXTURE_BINDING_3D_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"MAX_3D_TEXTURE_SIZE_OES") ) { MAX_3D_TEXTURE_SIZE_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES") ) { FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_texture_3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("TEXTURE_WRAP_R_OES","\x9f","\x85","\xe8","\x16"));
	outFields->push(HX_HCSTRING("TEXTURE_3D_OES","\xf3","\x9e","\x21","\x9e"));
	outFields->push(HX_HCSTRING("TEXTURE_BINDING_3D_OES","\x0d","\x94","\x1d","\x37"));
	outFields->push(HX_HCSTRING("MAX_3D_TEXTURE_SIZE_OES","\x16","\x3e","\xa6","\x5c"));
	outFields->push(HX_HCSTRING("SAMPLER_3D_OES","\x66","\x32","\x6e","\x5c"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES","\xcb","\x20","\xe8","\x2f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo OES_texture_3D_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OES_texture_3D_obj,TEXTURE_WRAP_R_OES),HX_HCSTRING("TEXTURE_WRAP_R_OES","\x9f","\x85","\xe8","\x16")},
	{hx::fsInt,(int)offsetof(OES_texture_3D_obj,TEXTURE_3D_OES),HX_HCSTRING("TEXTURE_3D_OES","\xf3","\x9e","\x21","\x9e")},
	{hx::fsInt,(int)offsetof(OES_texture_3D_obj,TEXTURE_BINDING_3D_OES),HX_HCSTRING("TEXTURE_BINDING_3D_OES","\x0d","\x94","\x1d","\x37")},
	{hx::fsInt,(int)offsetof(OES_texture_3D_obj,MAX_3D_TEXTURE_SIZE_OES),HX_HCSTRING("MAX_3D_TEXTURE_SIZE_OES","\x16","\x3e","\xa6","\x5c")},
	{hx::fsInt,(int)offsetof(OES_texture_3D_obj,SAMPLER_3D_OES),HX_HCSTRING("SAMPLER_3D_OES","\x66","\x32","\x6e","\x5c")},
	{hx::fsInt,(int)offsetof(OES_texture_3D_obj,FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES),HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES","\xcb","\x20","\xe8","\x2f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *OES_texture_3D_obj_sStaticStorageInfo = 0;
#endif

static ::String OES_texture_3D_obj_sMemberFields[] = {
	HX_HCSTRING("TEXTURE_WRAP_R_OES","\x9f","\x85","\xe8","\x16"),
	HX_HCSTRING("TEXTURE_3D_OES","\xf3","\x9e","\x21","\x9e"),
	HX_HCSTRING("TEXTURE_BINDING_3D_OES","\x0d","\x94","\x1d","\x37"),
	HX_HCSTRING("MAX_3D_TEXTURE_SIZE_OES","\x16","\x3e","\xa6","\x5c"),
	HX_HCSTRING("SAMPLER_3D_OES","\x66","\x32","\x6e","\x5c"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES","\xcb","\x20","\xe8","\x2f"),
	::String(null()) };

static void OES_texture_3D_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OES_texture_3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OES_texture_3D_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OES_texture_3D_obj::__mClass,"__mClass");
};

#endif

hx::Class OES_texture_3D_obj::__mClass;

void OES_texture_3D_obj::__register()
{
	hx::Object *dummy = new OES_texture_3D_obj;
	OES_texture_3D_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.OES_texture_3D","\xb9","\xc8","\xc8","\xe5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = OES_texture_3D_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(OES_texture_3D_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OES_texture_3D_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OES_texture_3D_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OES_texture_3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OES_texture_3D_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
