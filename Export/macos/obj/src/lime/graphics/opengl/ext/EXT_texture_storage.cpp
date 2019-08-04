// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_texture_storage
#include <lime/graphics/opengl/ext/EXT_texture_storage.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4a94eca10f0d89d1_4_new,"lime.graphics.opengl.ext.EXT_texture_storage","new",0xf17af0a9,"lime.graphics.opengl.ext.EXT_texture_storage.new","lime/graphics/opengl/ext/EXT_texture_storage.hx",4,0xdbb00909)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void EXT_texture_storage_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4a94eca10f0d89d1_4_new)
HXLINE(  28)		this->RG16F_EXT = (int)33327;
HXLINE(  27)		this->R16F_EXT = (int)33325;
HXLINE(  26)		this->RG32F_EXT = (int)33328;
HXLINE(  25)		this->R32F_EXT = (int)33326;
HXLINE(  24)		this->RG8_EXT = (int)33323;
HXLINE(  23)		this->R8_EXT = (int)33321;
HXLINE(  22)		this->BGRA8_EXT = (int)37793;
HXLINE(  21)		this->RGB10_EXT = (int)32850;
HXLINE(  20)		this->RGB10_A2_EXT = (int)32857;
HXLINE(  19)		this->LUMINANCE_ALPHA16F_EXT = (int)34847;
HXLINE(  18)		this->LUMINANCE16F_EXT = (int)34846;
HXLINE(  17)		this->ALPHA16F_EXT = (int)34844;
HXLINE(  16)		this->RGB16F_EXT = (int)34843;
HXLINE(  15)		this->RGBA16F_EXT = (int)34842;
HXLINE(  14)		this->LUMINANCE_ALPHA32F_EXT = (int)34841;
HXLINE(  13)		this->LUMINANCE32F_EXT = (int)34840;
HXLINE(  12)		this->ALPHA32F_EXT = (int)34838;
HXLINE(  11)		this->RGB32F_EXT = (int)34837;
HXLINE(  10)		this->RGBA32F_EXT = (int)34836;
HXLINE(   9)		this->LUMINANCE8_ALPHA8_EXT = (int)32837;
HXLINE(   8)		this->LUMINANCE8_EXT = (int)32832;
HXLINE(   7)		this->ALPHA8_EXT = (int)32828;
HXLINE(   6)		this->TEXTURE_IMMUTABLE_FORMAT_EXT = (int)37167;
            	}

Dynamic EXT_texture_storage_obj::__CreateEmpty() { return new EXT_texture_storage_obj; }

void *EXT_texture_storage_obj::_hx_vtable = 0;

Dynamic EXT_texture_storage_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< EXT_texture_storage_obj > _hx_result = new EXT_texture_storage_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EXT_texture_storage_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0203d7f7;
}


EXT_texture_storage_obj::EXT_texture_storage_obj()
{
}

hx::Val EXT_texture_storage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"R8_EXT") ) { return hx::Val( R8_EXT ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"RG8_EXT") ) { return hx::Val( RG8_EXT ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"R32F_EXT") ) { return hx::Val( R32F_EXT ); }
		if (HX_FIELD_EQ(inName,"R16F_EXT") ) { return hx::Val( R16F_EXT ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RGB10_EXT") ) { return hx::Val( RGB10_EXT ); }
		if (HX_FIELD_EQ(inName,"BGRA8_EXT") ) { return hx::Val( BGRA8_EXT ); }
		if (HX_FIELD_EQ(inName,"RG32F_EXT") ) { return hx::Val( RG32F_EXT ); }
		if (HX_FIELD_EQ(inName,"RG16F_EXT") ) { return hx::Val( RG16F_EXT ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ALPHA8_EXT") ) { return hx::Val( ALPHA8_EXT ); }
		if (HX_FIELD_EQ(inName,"RGB32F_EXT") ) { return hx::Val( RGB32F_EXT ); }
		if (HX_FIELD_EQ(inName,"RGB16F_EXT") ) { return hx::Val( RGB16F_EXT ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"RGBA32F_EXT") ) { return hx::Val( RGBA32F_EXT ); }
		if (HX_FIELD_EQ(inName,"RGBA16F_EXT") ) { return hx::Val( RGBA16F_EXT ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ALPHA32F_EXT") ) { return hx::Val( ALPHA32F_EXT ); }
		if (HX_FIELD_EQ(inName,"ALPHA16F_EXT") ) { return hx::Val( ALPHA16F_EXT ); }
		if (HX_FIELD_EQ(inName,"RGB10_A2_EXT") ) { return hx::Val( RGB10_A2_EXT ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"LUMINANCE8_EXT") ) { return hx::Val( LUMINANCE8_EXT ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"LUMINANCE32F_EXT") ) { return hx::Val( LUMINANCE32F_EXT ); }
		if (HX_FIELD_EQ(inName,"LUMINANCE16F_EXT") ) { return hx::Val( LUMINANCE16F_EXT ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"LUMINANCE8_ALPHA8_EXT") ) { return hx::Val( LUMINANCE8_ALPHA8_EXT ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"LUMINANCE_ALPHA32F_EXT") ) { return hx::Val( LUMINANCE_ALPHA32F_EXT ); }
		if (HX_FIELD_EQ(inName,"LUMINANCE_ALPHA16F_EXT") ) { return hx::Val( LUMINANCE_ALPHA16F_EXT ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"TEXTURE_IMMUTABLE_FORMAT_EXT") ) { return hx::Val( TEXTURE_IMMUTABLE_FORMAT_EXT ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val EXT_texture_storage_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"R8_EXT") ) { R8_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"RG8_EXT") ) { RG8_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"R32F_EXT") ) { R32F_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"R16F_EXT") ) { R16F_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RGB10_EXT") ) { RGB10_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BGRA8_EXT") ) { BGRA8_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RG32F_EXT") ) { RG32F_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RG16F_EXT") ) { RG16F_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ALPHA8_EXT") ) { ALPHA8_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB32F_EXT") ) { RGB32F_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB16F_EXT") ) { RGB16F_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"RGBA32F_EXT") ) { RGBA32F_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGBA16F_EXT") ) { RGBA16F_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ALPHA32F_EXT") ) { ALPHA32F_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALPHA16F_EXT") ) { ALPHA16F_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB10_A2_EXT") ) { RGB10_A2_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"LUMINANCE8_EXT") ) { LUMINANCE8_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"LUMINANCE32F_EXT") ) { LUMINANCE32F_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LUMINANCE16F_EXT") ) { LUMINANCE16F_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"LUMINANCE8_ALPHA8_EXT") ) { LUMINANCE8_ALPHA8_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"LUMINANCE_ALPHA32F_EXT") ) { LUMINANCE_ALPHA32F_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LUMINANCE_ALPHA16F_EXT") ) { LUMINANCE_ALPHA16F_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"TEXTURE_IMMUTABLE_FORMAT_EXT") ) { TEXTURE_IMMUTABLE_FORMAT_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_texture_storage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("TEXTURE_IMMUTABLE_FORMAT_EXT","\xba","\x95","\x0b","\xec"));
	outFields->push(HX_HCSTRING("ALPHA8_EXT","\xbc","\x89","\x03","\x7f"));
	outFields->push(HX_HCSTRING("LUMINANCE8_EXT","\xe2","\x52","\xe8","\x03"));
	outFields->push(HX_HCSTRING("LUMINANCE8_ALPHA8_EXT","\x7b","\x5d","\x96","\xd3"));
	outFields->push(HX_HCSTRING("RGBA32F_EXT","\x95","\xe1","\x9c","\x57"));
	outFields->push(HX_HCSTRING("RGB32F_EXT","\x7c","\x2c","\x7b","\xab"));
	outFields->push(HX_HCSTRING("ALPHA32F_EXT","\x4b","\xe0","\x47","\xb8"));
	outFields->push(HX_HCSTRING("LUMINANCE32F_EXT","\xf1","\xbe","\xcd","\xd6"));
	outFields->push(HX_HCSTRING("LUMINANCE_ALPHA32F_EXT","\x52","\xc4","\x77","\x9e"));
	outFields->push(HX_HCSTRING("RGBA16F_EXT","\x8f","\x65","\xdf","\x9d"));
	outFields->push(HX_HCSTRING("RGB16F_EXT","\x76","\xb0","\xbd","\xf1"));
	outFields->push(HX_HCSTRING("ALPHA16F_EXT","\x45","\x64","\x8a","\xfe"));
	outFields->push(HX_HCSTRING("LUMINANCE16F_EXT","\xeb","\x42","\x10","\x1d"));
	outFields->push(HX_HCSTRING("LUMINANCE_ALPHA16F_EXT","\x4c","\x48","\xba","\xe4"));
	outFields->push(HX_HCSTRING("RGB10_A2_EXT","\xe6","\xb6","\x90","\xee"));
	outFields->push(HX_HCSTRING("RGB10_EXT","\x8e","\x5a","\x92","\xa0"));
	outFields->push(HX_HCSTRING("BGRA8_EXT","\x86","\xa0","\xbd","\x0b"));
	outFields->push(HX_HCSTRING("R8_EXT","\x28","\x00","\xb4","\x46"));
	outFields->push(HX_HCSTRING("RG8_EXT","\xe5","\x11","\xa7","\x32"));
	outFields->push(HX_HCSTRING("R32F_EXT","\xb7","\xc9","\xd3","\x25"));
	outFields->push(HX_HCSTRING("RG32F_EXT","\xb4","\x84","\xfc","\x41"));
	outFields->push(HX_HCSTRING("R16F_EXT","\xb1","\x4d","\x16","\x6c"));
	outFields->push(HX_HCSTRING("RG16F_EXT","\xae","\x08","\x3f","\x88"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo EXT_texture_storage_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_texture_storage_obj,TEXTURE_IMMUTABLE_FORMAT_EXT),HX_HCSTRING("TEXTURE_IMMUTABLE_FORMAT_EXT","\xba","\x95","\x0b","\xec")},
	{hx::fsInt,(int)offsetof(EXT_texture_storage_obj,ALPHA8_EXT),HX_HCSTRING("ALPHA8_EXT","\xbc","\x89","\x03","\x7f")},
	{hx::fsInt,(int)offsetof(EXT_texture_storage_obj,LUMINANCE8_EXT),HX_HCSTRING("LUMINANCE8_EXT","\xe2","\x52","\xe8","\x03")},
	{hx::fsInt,(int)offsetof(EXT_texture_storage_obj,LUMINANCE8_ALPHA8_EXT),HX_HCSTRING("LUMINANCE8_ALPHA8_EXT","\x7b","\x5d","\x96","\xd3")},
	{hx::fsInt,(int)offsetof(EXT_texture_storage_obj,RGBA32F_EXT),HX_HCSTRING("RGBA32F_EXT","\x95","\xe1","\x9c","\x57")},
	{hx::fsInt,(int)offsetof(EXT_texture_storage_obj,RGB32F_EXT),HX_HCSTRING("RGB32F_EXT","\x7c","\x2c","\x7b","\xab")},
	{hx::fsInt,(int)offsetof(EXT_texture_storage_obj,ALPHA32F_EXT),HX_HCSTRING("ALPHA32F_EXT","\x4b","\xe0","\x47","\xb8")},
	{hx::fsInt,(int)offsetof(EXT_texture_storage_obj,LUMINANCE32F_EXT),HX_HCSTRING("LUMINANCE32F_EXT","\xf1","\xbe","\xcd","\xd6")},
	{hx::fsInt,(int)offsetof(EXT_texture_storage_obj,LUMINANCE_ALPHA32F_EXT),HX_HCSTRING("LUMINANCE_ALPHA32F_EXT","\x52","\xc4","\x77","\x9e")},
	{hx::fsInt,(int)offsetof(EXT_texture_storage_obj,RGBA16F_EXT),HX_HCSTRING("RGBA16F_EXT","\x8f","\x65","\xdf","\x9d")},
	{hx::fsInt,(int)offsetof(EXT_texture_storage_obj,RGB16F_EXT),HX_HCSTRING("RGB16F_EXT","\x76","\xb0","\xbd","\xf1")},
	{hx::fsInt,(int)offsetof(EXT_texture_storage_obj,ALPHA16F_EXT),HX_HCSTRING("ALPHA16F_EXT","\x45","\x64","\x8a","\xfe")},
	{hx::fsInt,(int)offsetof(EXT_texture_storage_obj,LUMINANCE16F_EXT),HX_HCSTRING("LUMINANCE16F_EXT","\xeb","\x42","\x10","\x1d")},
	{hx::fsInt,(int)offsetof(EXT_texture_storage_obj,LUMINANCE_ALPHA16F_EXT),HX_HCSTRING("LUMINANCE_ALPHA16F_EXT","\x4c","\x48","\xba","\xe4")},
	{hx::fsInt,(int)offsetof(EXT_texture_storage_obj,RGB10_A2_EXT),HX_HCSTRING("RGB10_A2_EXT","\xe6","\xb6","\x90","\xee")},
	{hx::fsInt,(int)offsetof(EXT_texture_storage_obj,RGB10_EXT),HX_HCSTRING("RGB10_EXT","\x8e","\x5a","\x92","\xa0")},
	{hx::fsInt,(int)offsetof(EXT_texture_storage_obj,BGRA8_EXT),HX_HCSTRING("BGRA8_EXT","\x86","\xa0","\xbd","\x0b")},
	{hx::fsInt,(int)offsetof(EXT_texture_storage_obj,R8_EXT),HX_HCSTRING("R8_EXT","\x28","\x00","\xb4","\x46")},
	{hx::fsInt,(int)offsetof(EXT_texture_storage_obj,RG8_EXT),HX_HCSTRING("RG8_EXT","\xe5","\x11","\xa7","\x32")},
	{hx::fsInt,(int)offsetof(EXT_texture_storage_obj,R32F_EXT),HX_HCSTRING("R32F_EXT","\xb7","\xc9","\xd3","\x25")},
	{hx::fsInt,(int)offsetof(EXT_texture_storage_obj,RG32F_EXT),HX_HCSTRING("RG32F_EXT","\xb4","\x84","\xfc","\x41")},
	{hx::fsInt,(int)offsetof(EXT_texture_storage_obj,R16F_EXT),HX_HCSTRING("R16F_EXT","\xb1","\x4d","\x16","\x6c")},
	{hx::fsInt,(int)offsetof(EXT_texture_storage_obj,RG16F_EXT),HX_HCSTRING("RG16F_EXT","\xae","\x08","\x3f","\x88")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *EXT_texture_storage_obj_sStaticStorageInfo = 0;
#endif

static ::String EXT_texture_storage_obj_sMemberFields[] = {
	HX_HCSTRING("TEXTURE_IMMUTABLE_FORMAT_EXT","\xba","\x95","\x0b","\xec"),
	HX_HCSTRING("ALPHA8_EXT","\xbc","\x89","\x03","\x7f"),
	HX_HCSTRING("LUMINANCE8_EXT","\xe2","\x52","\xe8","\x03"),
	HX_HCSTRING("LUMINANCE8_ALPHA8_EXT","\x7b","\x5d","\x96","\xd3"),
	HX_HCSTRING("RGBA32F_EXT","\x95","\xe1","\x9c","\x57"),
	HX_HCSTRING("RGB32F_EXT","\x7c","\x2c","\x7b","\xab"),
	HX_HCSTRING("ALPHA32F_EXT","\x4b","\xe0","\x47","\xb8"),
	HX_HCSTRING("LUMINANCE32F_EXT","\xf1","\xbe","\xcd","\xd6"),
	HX_HCSTRING("LUMINANCE_ALPHA32F_EXT","\x52","\xc4","\x77","\x9e"),
	HX_HCSTRING("RGBA16F_EXT","\x8f","\x65","\xdf","\x9d"),
	HX_HCSTRING("RGB16F_EXT","\x76","\xb0","\xbd","\xf1"),
	HX_HCSTRING("ALPHA16F_EXT","\x45","\x64","\x8a","\xfe"),
	HX_HCSTRING("LUMINANCE16F_EXT","\xeb","\x42","\x10","\x1d"),
	HX_HCSTRING("LUMINANCE_ALPHA16F_EXT","\x4c","\x48","\xba","\xe4"),
	HX_HCSTRING("RGB10_A2_EXT","\xe6","\xb6","\x90","\xee"),
	HX_HCSTRING("RGB10_EXT","\x8e","\x5a","\x92","\xa0"),
	HX_HCSTRING("BGRA8_EXT","\x86","\xa0","\xbd","\x0b"),
	HX_HCSTRING("R8_EXT","\x28","\x00","\xb4","\x46"),
	HX_HCSTRING("RG8_EXT","\xe5","\x11","\xa7","\x32"),
	HX_HCSTRING("R32F_EXT","\xb7","\xc9","\xd3","\x25"),
	HX_HCSTRING("RG32F_EXT","\xb4","\x84","\xfc","\x41"),
	HX_HCSTRING("R16F_EXT","\xb1","\x4d","\x16","\x6c"),
	HX_HCSTRING("RG16F_EXT","\xae","\x08","\x3f","\x88"),
	::String(null()) };

static void EXT_texture_storage_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_texture_storage_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EXT_texture_storage_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_texture_storage_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_texture_storage_obj::__mClass;

void EXT_texture_storage_obj::__register()
{
	hx::Object *dummy = new EXT_texture_storage_obj;
	EXT_texture_storage_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_texture_storage","\x37","\x68","\xe1","\xf6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = EXT_texture_storage_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(EXT_texture_storage_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_texture_storage_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EXT_texture_storage_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EXT_texture_storage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EXT_texture_storage_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
