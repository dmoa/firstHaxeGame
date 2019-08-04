// Generated by Haxe 3.4.4
#ifndef INCLUDED_lime__internal_backend_native_NativeApplication
#define INCLUDED_lime__internal_backend_native_NativeApplication

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS4(lime,_internal,backend,native,ApplicationEventInfo)
HX_DECLARE_CLASS4(lime,_internal,backend,native,ClipboardEventInfo)
HX_DECLARE_CLASS4(lime,_internal,backend,native,DropEventInfo)
HX_DECLARE_CLASS4(lime,_internal,backend,native,GamepadEventInfo)
HX_DECLARE_CLASS4(lime,_internal,backend,native,JoystickEventInfo)
HX_DECLARE_CLASS4(lime,_internal,backend,native,KeyEventInfo)
HX_DECLARE_CLASS4(lime,_internal,backend,native,MouseEventInfo)
HX_DECLARE_CLASS4(lime,_internal,backend,native,NativeApplication)
HX_DECLARE_CLASS4(lime,_internal,backend,native,NativeCFFI)
HX_DECLARE_CLASS4(lime,_internal,backend,native,RenderEventInfo)
HX_DECLARE_CLASS4(lime,_internal,backend,native,SensorEventInfo)
HX_DECLARE_CLASS4(lime,_internal,backend,native,TextEventInfo)
HX_DECLARE_CLASS4(lime,_internal,backend,native,TouchEventInfo)
HX_DECLARE_CLASS4(lime,_internal,backend,native,WindowEventInfo)
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)

namespace lime{
namespace _internal{
namespace backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES NativeApplication_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef NativeApplication_obj OBJ_;
		NativeApplication_obj();

	public:
		enum { _hx_ClassId = 0x3c2383b5 };

		void __construct( ::lime::app::Application parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime._internal.backend.native.NativeApplication")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime._internal.backend.native.NativeApplication"); }
		static hx::ObjectPtr< NativeApplication_obj > __new( ::lime::app::Application parent);
		static hx::ObjectPtr< NativeApplication_obj > __alloc(hx::Ctx *_hx_ctx, ::lime::app::Application parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NativeApplication_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		static void __init__();

		::String __ToString() const { return HX_HCSTRING("NativeApplication","\xd9","\x82","\x56","\xe0"); }

		static void __boot();
		 ::lime::_internal::backend::native::ApplicationEventInfo applicationEventInfo;
		 ::lime::_internal::backend::native::ClipboardEventInfo clipboardEventInfo;
		 ::haxe::ds::IntMap currentTouches;
		 ::lime::_internal::backend::native::DropEventInfo dropEventInfo;
		 ::lime::_internal::backend::native::GamepadEventInfo gamepadEventInfo;
		 ::lime::_internal::backend::native::JoystickEventInfo joystickEventInfo;
		 ::lime::_internal::backend::native::KeyEventInfo keyEventInfo;
		 ::lime::_internal::backend::native::MouseEventInfo mouseEventInfo;
		 ::lime::_internal::backend::native::RenderEventInfo renderEventInfo;
		 ::lime::_internal::backend::native::SensorEventInfo sensorEventInfo;
		 ::lime::_internal::backend::native::TextEventInfo textEventInfo;
		 ::lime::_internal::backend::native::TouchEventInfo touchEventInfo;
		 ::List unusedTouchesPool;
		 ::lime::_internal::backend::native::WindowEventInfo windowEventInfo;
		 ::Dynamic handle;
		int pauseTimer;
		 ::lime::app::Application parent;
		bool toggleFullscreen;
		void advanceTimer();
		::Dynamic advanceTimer_dyn();

		int exec();
		::Dynamic exec_dyn();

		void exit();
		::Dynamic exit_dyn();

		void handleApplicationEvent();
		::Dynamic handleApplicationEvent_dyn();

		void handleClipboardEvent();
		::Dynamic handleClipboardEvent_dyn();

		void handleDropEvent();
		::Dynamic handleDropEvent_dyn();

		void handleGamepadEvent();
		::Dynamic handleGamepadEvent_dyn();

		void handleJoystickEvent();
		::Dynamic handleJoystickEvent_dyn();

		void handleKeyEvent();
		::Dynamic handleKeyEvent_dyn();

		void handleMouseEvent();
		::Dynamic handleMouseEvent_dyn();

		void handleRenderEvent();
		::Dynamic handleRenderEvent_dyn();

		void handleSensorEvent();
		::Dynamic handleSensorEvent_dyn();

		void handleTextEvent();
		::Dynamic handleTextEvent_dyn();

		void handleTouchEvent();
		::Dynamic handleTouchEvent_dyn();

		void handleWindowEvent();
		::Dynamic handleWindowEvent_dyn();

		void updateTimer();
		::Dynamic updateTimer_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native

#endif /* INCLUDED_lime__internal_backend_native_NativeApplication */ 
