// Generated by Haxe 3.4.4
#ifndef INCLUDED_openfl_display3D_Program3D
#define INCLUDED_openfl_display3D_Program3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS3(openfl,_internal,renderer,SamplerState)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,Program3D)
HX_DECLARE_CLASS2(openfl,display3D,Uniform)
HX_DECLARE_CLASS2(openfl,display3D,UniformMap)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace display3D{


class HXCPP_CLASS_ATTRIBUTES Program3D_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Program3D_obj OBJ_;
		Program3D_obj();

	public:
		enum { _hx_ClassId = 0x28394b12 };

		void __construct( ::openfl::display3D::Context3D context3D, ::Dynamic format);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.Program3D")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display3D.Program3D"); }
		static hx::ObjectPtr< Program3D_obj > __new( ::openfl::display3D::Context3D context3D, ::Dynamic format);
		static hx::ObjectPtr< Program3D_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context3D, ::Dynamic format);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Program3D_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Program3D","\x15","\x00","\x97","\x7e"); }

		::Array< ::Dynamic> _hx___agalAlphaSamplerEnabled;
		 ::List _hx___agalAlphaSamplerUniforms;
		 ::openfl::display3D::UniformMap _hx___agalFragmentUniformMap;
		 ::openfl::display3D::Uniform _hx___agalPositionScale;
		 ::List _hx___agalSamplerUniforms;
		int _hx___agalSamplerUsageMask;
		 ::List _hx___agalUniforms;
		 ::openfl::display3D::UniformMap _hx___agalVertexUniformMap;
		 ::openfl::display3D::Context3D _hx___context;
		 ::Dynamic _hx___format;
		 ::lime::graphics::opengl::GLObject _hx___glFragmentShader;
		::String _hx___glFragmentSource;
		 ::lime::graphics::opengl::GLObject _hx___glProgram;
		::Array< ::String > _hx___glslAttribNames;
		::Array< ::Dynamic> _hx___glslAttribTypes;
		::Array< ::String > _hx___glslSamplerNames;
		::Array< int > _hx___glslUniformLocations;
		::Array< ::String > _hx___glslUniformNames;
		::Array< ::Dynamic> _hx___glslUniformTypes;
		 ::lime::graphics::opengl::GLObject _hx___glVertexShader;
		::String _hx___glVertexSource;
		::Array< ::Dynamic> _hx___samplerStates;
		void dispose();
		::Dynamic dispose_dyn();

		int getAttributeIndex(::String name);
		::Dynamic getAttributeIndex_dyn();

		int getConstantIndex(::String name);
		::Dynamic getConstantIndex_dyn();

		void upload( ::openfl::utils::ByteArrayData vertexProgram, ::openfl::utils::ByteArrayData fragmentProgram);
		::Dynamic upload_dyn();

		void uploadSources(::String vertexSource,::String fragmentSource);
		::Dynamic uploadSources_dyn();

		void _hx___buildAGALUniformList();
		::Dynamic _hx___buildAGALUniformList_dyn();

		void _hx___deleteShaders();
		::Dynamic _hx___deleteShaders_dyn();

		void _hx___disable();
		::Dynamic _hx___disable_dyn();

		void _hx___enable();
		::Dynamic _hx___enable_dyn();

		void _hx___flush();
		::Dynamic _hx___flush_dyn();

		 ::openfl::_internal::renderer::SamplerState _hx___getSamplerState(int sampler);
		::Dynamic _hx___getSamplerState_dyn();

		void _hx___markDirty(bool isVertex,int index,int count);
		::Dynamic _hx___markDirty_dyn();

		void _hx___processGLSLData(::String source,::String storageType);
		::Dynamic _hx___processGLSLData_dyn();

		void _hx___setPositionScale( ::lime::utils::ArrayBufferView positionScale);
		::Dynamic _hx___setPositionScale_dyn();

		void _hx___setSamplerState(int sampler, ::openfl::_internal::renderer::SamplerState state);
		::Dynamic _hx___setSamplerState_dyn();

		void _hx___uploadFromGLSL(::String vertexShaderSource,::String fragmentShaderSource);
		::Dynamic _hx___uploadFromGLSL_dyn();

};

} // end namespace openfl
} // end namespace display3D

#endif /* INCLUDED_openfl_display3D_Program3D */ 
