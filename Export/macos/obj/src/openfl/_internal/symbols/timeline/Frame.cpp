// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_symbols_timeline_Frame
#include <openfl/_internal/symbols/timeline/Frame.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_timeline_FrameObject
#include <openfl/_internal/symbols/timeline/FrameObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1ad0298f7ef9a7b0_15_new,"openfl._internal.symbols.timeline.Frame","new",0xebb96bf5,"openfl._internal.symbols.timeline.Frame.new","openfl/_internal/symbols/timeline/Frame.hx",15,0xa1f0d979)
namespace openfl{
namespace _internal{
namespace symbols{
namespace timeline{

void Frame_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1ad0298f7ef9a7b0_15_new)
            	}

Dynamic Frame_obj::__CreateEmpty() { return new Frame_obj; }

void *Frame_obj::_hx_vtable = 0;

Dynamic Frame_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Frame_obj > _hx_result = new Frame_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Frame_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x738807d9;
}


Frame_obj::Frame_obj()
{
}

void Frame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Frame);
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_MEMBER_NAME(objects,"objects");
	HX_MARK_MEMBER_NAME(script,"script");
	HX_MARK_MEMBER_NAME(scriptSource,"scriptSource");
	HX_MARK_END_CLASS();
}

void Frame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(label,"label");
	HX_VISIT_MEMBER_NAME(objects,"objects");
	HX_VISIT_MEMBER_NAME(script,"script");
	HX_VISIT_MEMBER_NAME(scriptSource,"scriptSource");
}

hx::Val Frame_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return hx::Val( label ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"script") ) { return hx::Val( script ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { return hx::Val( objects ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scriptSource") ) { return hx::Val( scriptSource ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Frame_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"script") ) { script=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { objects=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scriptSource") ) { scriptSource=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Frame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"));
	outFields->push(HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82"));
	outFields->push(HX_HCSTRING("scriptSource","\x46","\x0d","\xc1","\xc9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Frame_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Frame_obj,label),HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Frame_obj,objects),HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Frame_obj,script),HX_HCSTRING("script","\x0b","\x4e","\x60","\x47")},
	{hx::fsString,(int)offsetof(Frame_obj,scriptSource),HX_HCSTRING("scriptSource","\x46","\x0d","\xc1","\xc9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Frame_obj_sStaticStorageInfo = 0;
#endif

static ::String Frame_obj_sMemberFields[] = {
	HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"),
	HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82"),
	HX_HCSTRING("script","\x0b","\x4e","\x60","\x47"),
	HX_HCSTRING("scriptSource","\x46","\x0d","\xc1","\xc9"),
	::String(null()) };

static void Frame_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Frame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Frame_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Frame_obj::__mClass,"__mClass");
};

#endif

hx::Class Frame_obj::__mClass;

void Frame_obj::__register()
{
	hx::Object *dummy = new Frame_obj;
	Frame_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.symbols.timeline.Frame","\x83","\x4d","\x55","\x36");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Frame_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Frame_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Frame_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Frame_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Frame_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Frame_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace symbols
} // end namespace timeline