// Generated by Haxe 3.4.4
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#define INCLUDED_openfl__internal_renderer_DrawCommandReader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandBuffer)
HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandReader)
HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandType)

namespace openfl{
namespace _internal{
namespace renderer{


class HXCPP_CLASS_ATTRIBUTES DrawCommandReader_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef DrawCommandReader_obj OBJ_;
		DrawCommandReader_obj();

	public:
		enum { _hx_ClassId = 0x7bfe56df };

		void __construct( ::openfl::_internal::renderer::DrawCommandBuffer buffer);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.DrawCommandReader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.renderer.DrawCommandReader"); }
		static hx::ObjectPtr< DrawCommandReader_obj > __new( ::openfl::_internal::renderer::DrawCommandBuffer buffer);
		static hx::ObjectPtr< DrawCommandReader_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::_internal::renderer::DrawCommandBuffer buffer);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DrawCommandReader_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DrawCommandReader","\x2a","\xc6","\x97","\xe0"); }

		static void __boot();
		static  ::Dynamic __meta__;
		 ::openfl::_internal::renderer::DrawCommandBuffer buffer;
		int bPos;
		int iiPos;
		int iPos;
		int ffPos;
		int fPos;
		int oPos;
		 ::openfl::_internal::renderer::DrawCommandType prev;
		int tsPos;
		void advance();
		::Dynamic advance_dyn();

		bool _hx_bool(int index);
		::Dynamic _hx_bool_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		::Array< Float > fArr(int index);
		::Dynamic fArr_dyn();

		Float _hx_float(int index);
		::Dynamic _hx_float_dyn();

		::Array< int > iArr(int index);
		::Dynamic iArr_dyn();

		int _hx_int(int index);
		::Dynamic _hx_int_dyn();

		 ::Dynamic obj(int index);
		::Dynamic obj_dyn();

		 ::openfl::_internal::renderer::DrawCommandReader readBeginBitmapFill();
		::Dynamic readBeginBitmapFill_dyn();

		 ::openfl::_internal::renderer::DrawCommandReader readBeginFill();
		::Dynamic readBeginFill_dyn();

		 ::openfl::_internal::renderer::DrawCommandReader readBeginGradientFill();
		::Dynamic readBeginGradientFill_dyn();

		 ::openfl::_internal::renderer::DrawCommandReader readBeginShaderFill();
		::Dynamic readBeginShaderFill_dyn();

		 ::openfl::_internal::renderer::DrawCommandReader readCubicCurveTo();
		::Dynamic readCubicCurveTo_dyn();

		 ::openfl::_internal::renderer::DrawCommandReader readCurveTo();
		::Dynamic readCurveTo_dyn();

		 ::openfl::_internal::renderer::DrawCommandReader readDrawCircle();
		::Dynamic readDrawCircle_dyn();

		 ::openfl::_internal::renderer::DrawCommandReader readDrawEllipse();
		::Dynamic readDrawEllipse_dyn();

		 ::openfl::_internal::renderer::DrawCommandReader readDrawQuads();
		::Dynamic readDrawQuads_dyn();

		 ::openfl::_internal::renderer::DrawCommandReader readDrawRect();
		::Dynamic readDrawRect_dyn();

		 ::openfl::_internal::renderer::DrawCommandReader readDrawRoundRect();
		::Dynamic readDrawRoundRect_dyn();

		 ::openfl::_internal::renderer::DrawCommandReader readDrawTriangles();
		::Dynamic readDrawTriangles_dyn();

		 ::openfl::_internal::renderer::DrawCommandReader readEndFill();
		::Dynamic readEndFill_dyn();

		 ::openfl::_internal::renderer::DrawCommandReader readLineBitmapStyle();
		::Dynamic readLineBitmapStyle_dyn();

		 ::openfl::_internal::renderer::DrawCommandReader readLineGradientStyle();
		::Dynamic readLineGradientStyle_dyn();

		 ::openfl::_internal::renderer::DrawCommandReader readLineStyle();
		::Dynamic readLineStyle_dyn();

		 ::openfl::_internal::renderer::DrawCommandReader readLineTo();
		::Dynamic readLineTo_dyn();

		 ::openfl::_internal::renderer::DrawCommandReader readMoveTo();
		::Dynamic readMoveTo_dyn();

		 ::openfl::_internal::renderer::DrawCommandReader readOverrideBlendMode();
		::Dynamic readOverrideBlendMode_dyn();

		 ::openfl::_internal::renderer::DrawCommandReader readOverrideMatrix();
		::Dynamic readOverrideMatrix_dyn();

		 ::openfl::_internal::renderer::DrawCommandReader readWindingEvenOdd();
		::Dynamic readWindingEvenOdd_dyn();

		 ::openfl::_internal::renderer::DrawCommandReader readWindingNonZero();
		::Dynamic readWindingNonZero_dyn();

		void reset();
		::Dynamic reset_dyn();

		void skip( ::openfl::_internal::renderer::DrawCommandType type);
		::Dynamic skip_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer

#endif /* INCLUDED_openfl__internal_renderer_DrawCommandReader */ 
