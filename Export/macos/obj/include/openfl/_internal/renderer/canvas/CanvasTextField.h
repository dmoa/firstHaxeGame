// Generated by Haxe 3.4.4
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasTextField
#define INCLUDED_openfl__internal_renderer_canvas_CanvasTextField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,_internal,renderer,canvas,CanvasTextField)
HX_DECLARE_CLASS2(openfl,display,CanvasRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace openfl{
namespace _internal{
namespace renderer{
namespace canvas{


class HXCPP_CLASS_ATTRIBUTES CanvasTextField_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef CanvasTextField_obj OBJ_;
		CanvasTextField_obj();

	public:
		enum { _hx_ClassId = 0x173f8092 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer.canvas.CanvasTextField")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._internal.renderer.canvas.CanvasTextField"); }

		hx::ObjectPtr< CanvasTextField_obj > __new() {
			hx::ObjectPtr< CanvasTextField_obj > __this = new CanvasTextField_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< CanvasTextField_obj > __alloc(hx::Ctx *_hx_ctx) {
			CanvasTextField_obj *__this = (CanvasTextField_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CanvasTextField_obj), false, "openfl._internal.renderer.canvas.CanvasTextField"));
			*(void **)__this = CanvasTextField_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CanvasTextField_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CanvasTextField","\xb5","\x5c","\x88","\x79"); }

		static void __boot();
		static  ::Dynamic __meta__;
		static void render( ::openfl::text::TextField textField, ::openfl::display::CanvasRenderer renderer, ::openfl::geom::Matrix transform);
		static ::Dynamic render_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace canvas

#endif /* INCLUDED_openfl__internal_renderer_canvas_CanvasTextField */ 
