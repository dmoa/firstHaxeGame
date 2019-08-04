// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f182c9f42f2f4da3_39_new,"openfl.filters.BitmapFilter","new",0x22686a4a,"openfl.filters.BitmapFilter.new","openfl/filters/BitmapFilter.hx",39,0x1697f5a4)
HX_LOCAL_STACK_FRAME(_hx_pos_f182c9f42f2f4da3_59_clone,"openfl.filters.BitmapFilter","clone",0x8c417bc7,"openfl.filters.BitmapFilter.clone","openfl/filters/BitmapFilter.hx",59,0x1697f5a4)
HX_LOCAL_STACK_FRAME(_hx_pos_f182c9f42f2f4da3_64___applyFilter,"openfl.filters.BitmapFilter","__applyFilter",0xc6240310,"openfl.filters.BitmapFilter.__applyFilter","openfl/filters/BitmapFilter.hx",64,0x1697f5a4)
HX_LOCAL_STACK_FRAME(_hx_pos_f182c9f42f2f4da3_70___initShader,"openfl.filters.BitmapFilter","__initShader",0x9b1b6e4b,"openfl.filters.BitmapFilter.__initShader","openfl/filters/BitmapFilter.hx",70,0x1697f5a4)
namespace openfl{
namespace filters{

void BitmapFilter_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f182c9f42f2f4da3_39_new)
HXLINE(  40)		this->_hx___bottomExtension = (int)0;
HXLINE(  41)		this->_hx___leftExtension = (int)0;
HXLINE(  42)		this->_hx___needSecondBitmapData = true;
HXLINE(  43)		this->_hx___numShaderPasses = (int)0;
HXLINE(  44)		this->_hx___preserveObject = false;
HXLINE(  45)		this->_hx___rightExtension = (int)0;
HXLINE(  46)		this->_hx___shaderBlendMode = (int)10;
HXLINE(  47)		this->_hx___topExtension = (int)0;
HXLINE(  48)		this->_hx___smooth = true;
            	}

Dynamic BitmapFilter_obj::__CreateEmpty() { return new BitmapFilter_obj; }

void *BitmapFilter_obj::_hx_vtable = 0;

Dynamic BitmapFilter_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BitmapFilter_obj > _hx_result = new BitmapFilter_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BitmapFilter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4f68d692;
}

 ::openfl::filters::BitmapFilter BitmapFilter_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_f182c9f42f2f4da3_59_clone)
HXDLIN(  59)		return  ::openfl::filters::BitmapFilter_obj::__alloc( HX_CTX );
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFilter_obj,clone,return )

 ::openfl::display::BitmapData BitmapFilter_obj::_hx___applyFilter( ::openfl::display::BitmapData bitmapData, ::openfl::display::BitmapData sourceBitmapData, ::openfl::geom::Rectangle sourceRect, ::openfl::geom::Point destPoint){
            	HX_STACKFRAME(&_hx_pos_f182c9f42f2f4da3_64___applyFilter)
HXDLIN(  64)		return sourceBitmapData;
            	}


HX_DEFINE_DYNAMIC_FUNC4(BitmapFilter_obj,_hx___applyFilter,return )

 ::openfl::display::Shader BitmapFilter_obj::_hx___initShader( ::openfl::display::DisplayObjectRenderer renderer,int pass){
            	HX_STACKFRAME(&_hx_pos_f182c9f42f2f4da3_70___initShader)
HXDLIN(  70)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(BitmapFilter_obj,_hx___initShader,return )


hx::ObjectPtr< BitmapFilter_obj > BitmapFilter_obj::__new() {
	hx::ObjectPtr< BitmapFilter_obj > __this = new BitmapFilter_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< BitmapFilter_obj > BitmapFilter_obj::__alloc(hx::Ctx *_hx_ctx) {
	BitmapFilter_obj *__this = (BitmapFilter_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BitmapFilter_obj), true, "openfl.filters.BitmapFilter"));
	*(void **)__this = BitmapFilter_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BitmapFilter_obj::BitmapFilter_obj()
{
}

void BitmapFilter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapFilter);
	HX_MARK_MEMBER_NAME(_hx___bottomExtension,"__bottomExtension");
	HX_MARK_MEMBER_NAME(_hx___leftExtension,"__leftExtension");
	HX_MARK_MEMBER_NAME(_hx___needSecondBitmapData,"__needSecondBitmapData");
	HX_MARK_MEMBER_NAME(_hx___numShaderPasses,"__numShaderPasses");
	HX_MARK_MEMBER_NAME(_hx___preserveObject,"__preserveObject");
	HX_MARK_MEMBER_NAME(_hx___renderDirty,"__renderDirty");
	HX_MARK_MEMBER_NAME(_hx___rightExtension,"__rightExtension");
	HX_MARK_MEMBER_NAME(_hx___shaderBlendMode,"__shaderBlendMode");
	HX_MARK_MEMBER_NAME(_hx___smooth,"__smooth");
	HX_MARK_MEMBER_NAME(_hx___topExtension,"__topExtension");
	HX_MARK_END_CLASS();
}

void BitmapFilter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___bottomExtension,"__bottomExtension");
	HX_VISIT_MEMBER_NAME(_hx___leftExtension,"__leftExtension");
	HX_VISIT_MEMBER_NAME(_hx___needSecondBitmapData,"__needSecondBitmapData");
	HX_VISIT_MEMBER_NAME(_hx___numShaderPasses,"__numShaderPasses");
	HX_VISIT_MEMBER_NAME(_hx___preserveObject,"__preserveObject");
	HX_VISIT_MEMBER_NAME(_hx___renderDirty,"__renderDirty");
	HX_VISIT_MEMBER_NAME(_hx___rightExtension,"__rightExtension");
	HX_VISIT_MEMBER_NAME(_hx___shaderBlendMode,"__shaderBlendMode");
	HX_VISIT_MEMBER_NAME(_hx___smooth,"__smooth");
	HX_VISIT_MEMBER_NAME(_hx___topExtension,"__topExtension");
}

hx::Val BitmapFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__smooth") ) { return hx::Val( _hx___smooth ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__initShader") ) { return hx::Val( _hx___initShader_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__renderDirty") ) { return hx::Val( _hx___renderDirty ); }
		if (HX_FIELD_EQ(inName,"__applyFilter") ) { return hx::Val( _hx___applyFilter_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__topExtension") ) { return hx::Val( _hx___topExtension ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__leftExtension") ) { return hx::Val( _hx___leftExtension ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__preserveObject") ) { return hx::Val( _hx___preserveObject ); }
		if (HX_FIELD_EQ(inName,"__rightExtension") ) { return hx::Val( _hx___rightExtension ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__bottomExtension") ) { return hx::Val( _hx___bottomExtension ); }
		if (HX_FIELD_EQ(inName,"__numShaderPasses") ) { return hx::Val( _hx___numShaderPasses ); }
		if (HX_FIELD_EQ(inName,"__shaderBlendMode") ) { return hx::Val( _hx___shaderBlendMode ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__needSecondBitmapData") ) { return hx::Val( _hx___needSecondBitmapData ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val BitmapFilter_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__smooth") ) { _hx___smooth=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__renderDirty") ) { _hx___renderDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__topExtension") ) { _hx___topExtension=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__leftExtension") ) { _hx___leftExtension=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__preserveObject") ) { _hx___preserveObject=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rightExtension") ) { _hx___rightExtension=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__bottomExtension") ) { _hx___bottomExtension=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__numShaderPasses") ) { _hx___numShaderPasses=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__shaderBlendMode") ) { _hx___shaderBlendMode=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__needSecondBitmapData") ) { _hx___needSecondBitmapData=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__bottomExtension","\xf4","\x07","\xd4","\xa1"));
	outFields->push(HX_HCSTRING("__leftExtension","\x58","\xeb","\xad","\xe6"));
	outFields->push(HX_HCSTRING("__needSecondBitmapData","\xe3","\x61","\xb1","\xd2"));
	outFields->push(HX_HCSTRING("__numShaderPasses","\xca","\x1c","\xd2","\x59"));
	outFields->push(HX_HCSTRING("__preserveObject","\xcb","\xca","\x2a","\x20"));
	outFields->push(HX_HCSTRING("__renderDirty","\xbc","\xbd","\xf9","\xed"));
	outFields->push(HX_HCSTRING("__rightExtension","\x23","\x97","\x64","\xf8"));
	outFields->push(HX_HCSTRING("__shaderBlendMode","\x4f","\xa9","\x77","\xca"));
	outFields->push(HX_HCSTRING("__smooth","\x4e","\x73","\x9a","\xaf"));
	outFields->push(HX_HCSTRING("__topExtension","\x4a","\x95","\x66","\x73"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo BitmapFilter_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(BitmapFilter_obj,_hx___bottomExtension),HX_HCSTRING("__bottomExtension","\xf4","\x07","\xd4","\xa1")},
	{hx::fsInt,(int)offsetof(BitmapFilter_obj,_hx___leftExtension),HX_HCSTRING("__leftExtension","\x58","\xeb","\xad","\xe6")},
	{hx::fsBool,(int)offsetof(BitmapFilter_obj,_hx___needSecondBitmapData),HX_HCSTRING("__needSecondBitmapData","\xe3","\x61","\xb1","\xd2")},
	{hx::fsInt,(int)offsetof(BitmapFilter_obj,_hx___numShaderPasses),HX_HCSTRING("__numShaderPasses","\xca","\x1c","\xd2","\x59")},
	{hx::fsBool,(int)offsetof(BitmapFilter_obj,_hx___preserveObject),HX_HCSTRING("__preserveObject","\xcb","\xca","\x2a","\x20")},
	{hx::fsBool,(int)offsetof(BitmapFilter_obj,_hx___renderDirty),HX_HCSTRING("__renderDirty","\xbc","\xbd","\xf9","\xed")},
	{hx::fsInt,(int)offsetof(BitmapFilter_obj,_hx___rightExtension),HX_HCSTRING("__rightExtension","\x23","\x97","\x64","\xf8")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BitmapFilter_obj,_hx___shaderBlendMode),HX_HCSTRING("__shaderBlendMode","\x4f","\xa9","\x77","\xca")},
	{hx::fsBool,(int)offsetof(BitmapFilter_obj,_hx___smooth),HX_HCSTRING("__smooth","\x4e","\x73","\x9a","\xaf")},
	{hx::fsInt,(int)offsetof(BitmapFilter_obj,_hx___topExtension),HX_HCSTRING("__topExtension","\x4a","\x95","\x66","\x73")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *BitmapFilter_obj_sStaticStorageInfo = 0;
#endif

static ::String BitmapFilter_obj_sMemberFields[] = {
	HX_HCSTRING("__bottomExtension","\xf4","\x07","\xd4","\xa1"),
	HX_HCSTRING("__leftExtension","\x58","\xeb","\xad","\xe6"),
	HX_HCSTRING("__needSecondBitmapData","\xe3","\x61","\xb1","\xd2"),
	HX_HCSTRING("__numShaderPasses","\xca","\x1c","\xd2","\x59"),
	HX_HCSTRING("__preserveObject","\xcb","\xca","\x2a","\x20"),
	HX_HCSTRING("__renderDirty","\xbc","\xbd","\xf9","\xed"),
	HX_HCSTRING("__rightExtension","\x23","\x97","\x64","\xf8"),
	HX_HCSTRING("__shaderBlendMode","\x4f","\xa9","\x77","\xca"),
	HX_HCSTRING("__smooth","\x4e","\x73","\x9a","\xaf"),
	HX_HCSTRING("__topExtension","\x4a","\x95","\x66","\x73"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("__applyFilter","\xa6","\x20","\xa8","\x09"),
	HX_HCSTRING("__initShader","\x75","\x95","\xf9","\x59"),
	::String(null()) };

static void BitmapFilter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapFilter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BitmapFilter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapFilter_obj::__mClass,"__mClass");
};

#endif

hx::Class BitmapFilter_obj::__mClass;

void BitmapFilter_obj::__register()
{
	hx::Object *dummy = new BitmapFilter_obj;
	BitmapFilter_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.filters.BitmapFilter","\x58","\x3d","\x87","\x17");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BitmapFilter_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BitmapFilter_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapFilter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BitmapFilter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BitmapFilter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BitmapFilter_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace filters
