// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app__Event_Float_Float_Int_Void
#include <lime/app/_Event_Float_Float_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Float_Float_Void
#include <lime/app/_Event_Float_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Float_Float_lime_ui_MouseButton_Void
#include <lime/app/_Event_Float_Float_lime_ui_MouseButton_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Float_Float_lime_ui_MouseWheelMode_Void
#include <lime/app/_Event_Float_Float_lime_ui_MouseWheelMode_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Int_Void
#include <lime/app/_Event_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_String_Int_Int_Void
#include <lime/app/_Event_String_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_String_Void
#include <lime/app/_Event_String_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_graphics_RenderContext_Void
#include <lime/app/_Event_lime_graphics_RenderContext_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void
#include <lime/app/_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_Window_Void
#include <lime/app/_Event_lime_ui_Window_Void.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_ui_MouseWheelMode
#include <lime/ui/MouseWheelMode.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl__internal_Lib
#include <openfl/_internal/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Application
#include <openfl/display/Application.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Loader
#include <openfl/display/Loader.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Window
#include <openfl/display/Window.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_548c78caa19a1a14_30_new,"openfl.display.Application","new",0x436ec718,"openfl.display.Application.new","openfl/display/Application.hx",30,0xe1d30bda)
HX_LOCAL_STACK_FRAME(_hx_pos_548c78caa19a1a14_55_createWindow,"openfl.display.Application","createWindow",0xc33e4654,"openfl.display.Application.createWindow","openfl/display/Application.hx",55,0xe1d30bda)
HX_LOCAL_STACK_FRAME(_hx_pos_548c78caa19a1a14_49_createWindow,"openfl.display.Application","createWindow",0xc33e4654,"openfl.display.Application.createWindow","openfl/display/Application.hx",49,0xe1d30bda)
HX_LOCAL_STACK_FRAME(_hx_pos_548c78caa19a1a14_21_boot,"openfl.display.Application","boot",0xb5986e7a,"openfl.display.Application.boot","openfl/display/Application.hx",21,0xe1d30bda)
namespace openfl{
namespace display{

void Application_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_548c78caa19a1a14_30_new)
HXLINE(  32)		super::__construct();
HXLINE(  35)		if (hx::IsNull( ::openfl::_internal::Lib_obj::application )) {
HXLINE(  37)			::openfl::_internal::Lib_obj::application = hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE(  41)		if (hx::IsNull( ::openfl::_internal::Lib_obj::current )) {
HXLINE(  41)			::openfl::_internal::Lib_obj::current =  ::openfl::display::MovieClip_obj::__alloc( HX_CTX );
            		}
HXLINE(  42)		::openfl::_internal::Lib_obj::current->_hx___loaderInfo = ::openfl::display::LoaderInfo_obj::create(null());
HXLINE(  43)		::openfl::_internal::Lib_obj::current->_hx___loaderInfo->content = ::openfl::_internal::Lib_obj::current;
            	}

Dynamic Application_obj::__CreateEmpty() { return new Application_obj; }

void *Application_obj::_hx_vtable = 0;

Dynamic Application_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Application_obj > _hx_result = new Application_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Application_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4b993f3e) {
		if (inClassId<=(int)0x31cfae44) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x31cfae44;
		} else {
			return inClassId==(int)0x4b993f3e;
		}
	} else {
		return inClassId==(int)0x77491638;
	}
}

 ::lime::ui::Window Application_obj::createWindow( ::Dynamic attributes){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::Dynamic,f, ::lime::ui::Window,a1) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_548c78caa19a1a14_55_createWindow)
HXLINE(  55)			f(a1);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_548c78caa19a1a14_49_createWindow)
HXLINE(  50)		 ::openfl::display::Window window =  ::openfl::display::Window_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this),attributes);
HXLINE(  52)		this->_hx___windows->push(window);
HXLINE(  53)		this->_hx___windowByID->set(window->id,window);
HXLINE(  55)		 ::Dynamic f = this->_hx___onWindowClose_dyn();
HXDLIN(  55)		 ::lime::ui::Window a1 = window;
HXDLIN(  55)		 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(f,a1));
HXDLIN(  55)		window->onClose->add(_hx_tmp,false,(int)-10000);
HXLINE(  57)		if (hx::IsNull( this->_hx___window )) {
HXLINE(  59)			this->_hx___window = window;
HXLINE(  61)			window->onActivate->add(this->onWindowActivate_dyn(),null(),null());
HXLINE(  62)			window->onRenderContextLost->add(this->onRenderContextLost_dyn(),null(),null());
HXLINE(  63)			window->onRenderContextRestored->add(this->onRenderContextRestored_dyn(),null(),null());
HXLINE(  64)			window->onDeactivate->add(this->onWindowDeactivate_dyn(),null(),null());
HXLINE(  65)			window->onDropFile->add(this->onWindowDropFile_dyn(),null(),null());
HXLINE(  66)			window->onEnter->add(this->onWindowEnter_dyn(),null(),null());
HXLINE(  67)			window->onExpose->add(this->onWindowExpose_dyn(),null(),null());
HXLINE(  68)			window->onFocusIn->add(this->onWindowFocusIn_dyn(),null(),null());
HXLINE(  69)			window->onFocusOut->add(this->onWindowFocusOut_dyn(),null(),null());
HXLINE(  70)			window->onFullscreen->add(this->onWindowFullscreen_dyn(),null(),null());
HXLINE(  71)			window->onKeyDown->add(this->onKeyDown_dyn(),null(),null());
HXLINE(  72)			window->onKeyUp->add(this->onKeyUp_dyn(),null(),null());
HXLINE(  73)			window->onLeave->add(this->onWindowLeave_dyn(),null(),null());
HXLINE(  74)			window->onMinimize->add(this->onWindowMinimize_dyn(),null(),null());
HXLINE(  75)			window->onMouseDown->add(this->onMouseDown_dyn(),null(),null());
HXLINE(  76)			window->onMouseMove->add(this->onMouseMove_dyn(),null(),null());
HXLINE(  77)			window->onMouseMoveRelative->add(this->onMouseMoveRelative_dyn(),null(),null());
HXLINE(  78)			window->onMouseUp->add(this->onMouseUp_dyn(),null(),null());
HXLINE(  79)			window->onMouseWheel->add(this->onMouseWheel_dyn(),null(),null());
HXLINE(  80)			window->onMove->add(this->onWindowMove_dyn(),null(),null());
HXLINE(  81)			window->onRender->add(this->render_dyn(),null(),null());
HXLINE(  82)			window->onResize->add(this->onWindowResize_dyn(),null(),null());
HXLINE(  83)			window->onRestore->add(this->onWindowRestore_dyn(),null(),null());
HXLINE(  84)			window->onTextEdit->add(this->onTextEdit_dyn(),null(),null());
HXLINE(  85)			window->onTextInput->add(this->onTextInput_dyn(),null(),null());
HXLINE(  87)			this->onWindowCreate();
            		}
HXLINE(  90)		this->onCreateWindow->dispatch(window);
HXLINE(  92)		return window;
            	}



hx::ObjectPtr< Application_obj > Application_obj::__new() {
	hx::ObjectPtr< Application_obj > __this = new Application_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Application_obj > Application_obj::__alloc(hx::Ctx *_hx_ctx) {
	Application_obj *__this = (Application_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Application_obj), true, "openfl.display.Application"));
	*(void **)__this = Application_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Application_obj::Application_obj()
{
}

hx::Val Application_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"createWindow") ) { return hx::Val( createWindow_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Application_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Application_obj_sStaticStorageInfo = 0;
#endif

static ::String Application_obj_sMemberFields[] = {
	HX_HCSTRING("createWindow","\x0c","\xd4","\xe1","\x74"),
	::String(null()) };

static void Application_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Application_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Application_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Application_obj::__mClass,"__mClass");
};

#endif

hx::Class Application_obj::__mClass;

void Application_obj::__register()
{
	hx::Object *dummy = new Application_obj;
	Application_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Application","\x26","\x9b","\x0f","\x74");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Application_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Application_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Application_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Application_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Application_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Application_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Application_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_548c78caa19a1a14_21_boot)
HXDLIN(  21)		__mClass->__meta__ =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
