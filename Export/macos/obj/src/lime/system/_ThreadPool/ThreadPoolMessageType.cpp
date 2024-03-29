// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_lime_system__ThreadPool_ThreadPoolMessageType
#include <lime/system/_ThreadPool/ThreadPoolMessageType.h>
#endif
namespace lime{
namespace _hx_system{
namespace _ThreadPool{

::lime::_hx_system::_ThreadPool::ThreadPoolMessageType ThreadPoolMessageType_obj::COMPLETE;

::lime::_hx_system::_ThreadPool::ThreadPoolMessageType ThreadPoolMessageType_obj::ERROR;

::lime::_hx_system::_ThreadPool::ThreadPoolMessageType ThreadPoolMessageType_obj::EXIT;

::lime::_hx_system::_ThreadPool::ThreadPoolMessageType ThreadPoolMessageType_obj::PROGRESS;

::lime::_hx_system::_ThreadPool::ThreadPoolMessageType ThreadPoolMessageType_obj::WORK;

bool ThreadPoolMessageType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("COMPLETE",b9,90,4d,d9)) { outValue = ThreadPoolMessageType_obj::COMPLETE; return true; }
	if (inName==HX_("ERROR",a8,03,18,f1)) { outValue = ThreadPoolMessageType_obj::ERROR; return true; }
	if (inName==HX_("EXIT",1e,bf,de,2d)) { outValue = ThreadPoolMessageType_obj::EXIT; return true; }
	if (inName==HX_("PROGRESS",ad,87,b0,df)) { outValue = ThreadPoolMessageType_obj::PROGRESS; return true; }
	if (inName==HX_("WORK",d1,c9,bd,39)) { outValue = ThreadPoolMessageType_obj::WORK; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ThreadPoolMessageType_obj)

int ThreadPoolMessageType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("COMPLETE",b9,90,4d,d9)) return 0;
	if (inName==HX_("ERROR",a8,03,18,f1)) return 1;
	if (inName==HX_("EXIT",1e,bf,de,2d)) return 2;
	if (inName==HX_("PROGRESS",ad,87,b0,df)) return 3;
	if (inName==HX_("WORK",d1,c9,bd,39)) return 4;
	return super::__FindIndex(inName);
}

int ThreadPoolMessageType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("COMPLETE",b9,90,4d,d9)) return 0;
	if (inName==HX_("ERROR",a8,03,18,f1)) return 0;
	if (inName==HX_("EXIT",1e,bf,de,2d)) return 0;
	if (inName==HX_("PROGRESS",ad,87,b0,df)) return 0;
	if (inName==HX_("WORK",d1,c9,bd,39)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val ThreadPoolMessageType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("COMPLETE",b9,90,4d,d9)) return COMPLETE;
	if (inName==HX_("ERROR",a8,03,18,f1)) return ERROR;
	if (inName==HX_("EXIT",1e,bf,de,2d)) return EXIT;
	if (inName==HX_("PROGRESS",ad,87,b0,df)) return PROGRESS;
	if (inName==HX_("WORK",d1,c9,bd,39)) return WORK;
	return super::__Field(inName,inCallProp);
}

static ::String ThreadPoolMessageType_obj_sStaticFields[] = {
	HX_("COMPLETE",b9,90,4d,d9),
	HX_("ERROR",a8,03,18,f1),
	HX_("EXIT",1e,bf,de,2d),
	HX_("PROGRESS",ad,87,b0,df),
	HX_("WORK",d1,c9,bd,39),
	::String(null())
};

static void ThreadPoolMessageType_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ThreadPoolMessageType_obj::COMPLETE,"COMPLETE");
	HX_MARK_MEMBER_NAME(ThreadPoolMessageType_obj::ERROR,"ERROR");
	HX_MARK_MEMBER_NAME(ThreadPoolMessageType_obj::EXIT,"EXIT");
	HX_MARK_MEMBER_NAME(ThreadPoolMessageType_obj::PROGRESS,"PROGRESS");
	HX_MARK_MEMBER_NAME(ThreadPoolMessageType_obj::WORK,"WORK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ThreadPoolMessageType_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ThreadPoolMessageType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ThreadPoolMessageType_obj::COMPLETE,"COMPLETE");
	HX_VISIT_MEMBER_NAME(ThreadPoolMessageType_obj::ERROR,"ERROR");
	HX_VISIT_MEMBER_NAME(ThreadPoolMessageType_obj::EXIT,"EXIT");
	HX_VISIT_MEMBER_NAME(ThreadPoolMessageType_obj::PROGRESS,"PROGRESS");
	HX_VISIT_MEMBER_NAME(ThreadPoolMessageType_obj::WORK,"WORK");
};
#endif

hx::Class ThreadPoolMessageType_obj::__mClass;

Dynamic __Create_ThreadPoolMessageType_obj() { return new ThreadPoolMessageType_obj; }

void ThreadPoolMessageType_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("lime.system._ThreadPool.ThreadPoolMessageType","\xec","\x6c","\x62","\xb0"), hx::TCanCast< ThreadPoolMessageType_obj >,ThreadPoolMessageType_obj_sStaticFields,0,
	&__Create_ThreadPoolMessageType_obj, &__Create,
	&super::__SGetClass(), &CreateThreadPoolMessageType_obj, ThreadPoolMessageType_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , ThreadPoolMessageType_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ThreadPoolMessageType_obj::__GetStatic;
}

void ThreadPoolMessageType_obj::__boot()
{
COMPLETE = hx::CreateEnum< ThreadPoolMessageType_obj >(HX_HCSTRING("COMPLETE","\xb9","\x90","\x4d","\xd9"),0,0);
ERROR = hx::CreateEnum< ThreadPoolMessageType_obj >(HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1"),1,0);
EXIT = hx::CreateEnum< ThreadPoolMessageType_obj >(HX_HCSTRING("EXIT","\x1e","\xbf","\xde","\x2d"),2,0);
PROGRESS = hx::CreateEnum< ThreadPoolMessageType_obj >(HX_HCSTRING("PROGRESS","\xad","\x87","\xb0","\xdf"),3,0);
WORK = hx::CreateEnum< ThreadPoolMessageType_obj >(HX_HCSTRING("WORK","\xd1","\xc9","\xbd","\x39"),4,0);
}


} // end namespace lime
} // end namespace system
} // end namespace _ThreadPool
