// Generated by Haxe 3.4.4
#ifndef INCLUDED_lime_graphics_opengl_ext_AMD_compressed_ATC_texture
#define INCLUDED_lime_graphics_opengl_ext_AMD_compressed_ATC_texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_7a228448205ba8a3_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,AMD_compressed_ATC_texture)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES AMD_compressed_ATC_texture_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef AMD_compressed_ATC_texture_obj OBJ_;
		AMD_compressed_ATC_texture_obj();

	public:
		enum { _hx_ClassId = 0x6edfb27f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.AMD_compressed_ATC_texture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.AMD_compressed_ATC_texture"); }

		hx::ObjectPtr< AMD_compressed_ATC_texture_obj > __new() {
			hx::ObjectPtr< AMD_compressed_ATC_texture_obj > __this = new AMD_compressed_ATC_texture_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< AMD_compressed_ATC_texture_obj > __alloc(hx::Ctx *_hx_ctx) {
			AMD_compressed_ATC_texture_obj *__this = (AMD_compressed_ATC_texture_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AMD_compressed_ATC_texture_obj), false, "lime.graphics.opengl.ext.AMD_compressed_ATC_texture"));
			*(void **)__this = AMD_compressed_ATC_texture_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_7a228448205ba8a3_4_new)
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::AMD_compressed_ATC_texture)(__this) )->ATC_RGBA_INTERPOLATED_ALPHA_AMD = (int)34798;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::AMD_compressed_ATC_texture)(__this) )->ATC_RGBA_EXPLICIT_ALPHA_AMD = (int)35987;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::AMD_compressed_ATC_texture)(__this) )->ATC_RGB_AMD = (int)35986;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AMD_compressed_ATC_texture_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("AMD_compressed_ATC_texture","\x15","\x0b","\x6c","\x91"); }

		int ATC_RGB_AMD;
		int ATC_RGBA_EXPLICIT_ALPHA_AMD;
		int ATC_RGBA_INTERPOLATED_ALPHA_AMD;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_AMD_compressed_ATC_texture */ 
