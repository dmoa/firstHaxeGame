// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_lime_ui_MouseWheelMode
#include <lime/ui/MouseWheelMode.h>
#endif
namespace lime{
namespace ui{

::lime::ui::MouseWheelMode MouseWheelMode_obj::LINES;

::lime::ui::MouseWheelMode MouseWheelMode_obj::PAGES;

::lime::ui::MouseWheelMode MouseWheelMode_obj::PIXELS;

::lime::ui::MouseWheelMode MouseWheelMode_obj::UNKNOWN;

bool MouseWheelMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("LINES",df,15,f0,f2)) { outValue = MouseWheelMode_obj::LINES; return true; }
	if (inName==HX_("PAGES",24,63,3b,3b)) { outValue = MouseWheelMode_obj::PAGES; return true; }
	if (inName==HX_("PIXELS",2d,9b,2c,3f)) { outValue = MouseWheelMode_obj::PIXELS; return true; }
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) { outValue = MouseWheelMode_obj::UNKNOWN; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(MouseWheelMode_obj)

int MouseWheelMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("LINES",df,15,f0,f2)) return 1;
	if (inName==HX_("PAGES",24,63,3b,3b)) return 2;
	if (inName==HX_("PIXELS",2d,9b,2c,3f)) return 0;
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) return 3;
	return super::__FindIndex(inName);
}

int MouseWheelMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("LINES",df,15,f0,f2)) return 0;
	if (inName==HX_("PAGES",24,63,3b,3b)) return 0;
	if (inName==HX_("PIXELS",2d,9b,2c,3f)) return 0;
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val MouseWheelMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("LINES",df,15,f0,f2)) return LINES;
	if (inName==HX_("PAGES",24,63,3b,3b)) return PAGES;
	if (inName==HX_("PIXELS",2d,9b,2c,3f)) return PIXELS;
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) return UNKNOWN;
	return super::__Field(inName,inCallProp);
}

static ::String MouseWheelMode_obj_sStaticFields[] = {
	HX_("PIXELS",2d,9b,2c,3f),
	HX_("LINES",df,15,f0,f2),
	HX_("PAGES",24,63,3b,3b),
	HX_("UNKNOWN",6a,f7,4e,61),
	::String(null())
};

static void MouseWheelMode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseWheelMode_obj::LINES,"LINES");
	HX_MARK_MEMBER_NAME(MouseWheelMode_obj::PAGES,"PAGES");
	HX_MARK_MEMBER_NAME(MouseWheelMode_obj::PIXELS,"PIXELS");
	HX_MARK_MEMBER_NAME(MouseWheelMode_obj::UNKNOWN,"UNKNOWN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MouseWheelMode_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseWheelMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MouseWheelMode_obj::LINES,"LINES");
	HX_VISIT_MEMBER_NAME(MouseWheelMode_obj::PAGES,"PAGES");
	HX_VISIT_MEMBER_NAME(MouseWheelMode_obj::PIXELS,"PIXELS");
	HX_VISIT_MEMBER_NAME(MouseWheelMode_obj::UNKNOWN,"UNKNOWN");
};
#endif

hx::Class MouseWheelMode_obj::__mClass;

Dynamic __Create_MouseWheelMode_obj() { return new MouseWheelMode_obj; }

void MouseWheelMode_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("lime.ui.MouseWheelMode","\x1a","\x08","\x21","\x1a"), hx::TCanCast< MouseWheelMode_obj >,MouseWheelMode_obj_sStaticFields,0,
	&__Create_MouseWheelMode_obj, &__Create,
	&super::__SGetClass(), &CreateMouseWheelMode_obj, MouseWheelMode_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , MouseWheelMode_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &MouseWheelMode_obj::__GetStatic;
}

void MouseWheelMode_obj::__boot()
{
LINES = hx::CreateEnum< MouseWheelMode_obj >(HX_HCSTRING("LINES","\xdf","\x15","\xf0","\xf2"),1,0);
PAGES = hx::CreateEnum< MouseWheelMode_obj >(HX_HCSTRING("PAGES","\x24","\x63","\x3b","\x3b"),2,0);
PIXELS = hx::CreateEnum< MouseWheelMode_obj >(HX_HCSTRING("PIXELS","\x2d","\x9b","\x2c","\x3f"),0,0);
UNKNOWN = hx::CreateEnum< MouseWheelMode_obj >(HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61"),3,0);
}


} // end namespace lime
} // end namespace ui
