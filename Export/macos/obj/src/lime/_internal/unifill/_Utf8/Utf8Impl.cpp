// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_unifill_Exception
#include <lime/_internal/unifill/Exception.h>
#endif
#ifndef INCLUDED_lime__internal_unifill_InvalidCodePoint
#include <lime/_internal/unifill/InvalidCodePoint.h>
#endif
#ifndef INCLUDED_lime__internal_unifill_InvalidCodeUnitSequence
#include <lime/_internal/unifill/InvalidCodeUnitSequence.h>
#endif
#ifndef INCLUDED_lime__internal_unifill__Utf8_Utf8Impl
#include <lime/_internal/unifill/_Utf8/Utf8Impl.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_166eb997cfb34041_199_code_point_width,"lime._internal.unifill._Utf8.Utf8Impl","code_point_width",0xfe39ba5e,"lime._internal.unifill._Utf8.Utf8Impl.code_point_width","lime/_internal/unifill/Utf8.hx",199,0x18196bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_166eb997cfb34041_203_find_prev_code_point,"lime._internal.unifill._Utf8.Utf8Impl","find_prev_code_point",0xa17b7cdd,"lime._internal.unifill._Utf8.Utf8Impl.find_prev_code_point","lime/_internal/unifill/Utf8.hx",203,0x18196bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_166eb997cfb34041_211_encode_code_point,"lime._internal.unifill._Utf8.Utf8Impl","encode_code_point",0x62732b0e,"lime._internal.unifill._Utf8.Utf8Impl.encode_code_point","lime/_internal/unifill/Utf8.hx",211,0x18196bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_166eb997cfb34041_240_decode_code_point,"lime._internal.unifill._Utf8.Utf8Impl","decode_code_point",0xdecde6f6,"lime._internal.unifill._Utf8.Utf8Impl.decode_code_point","lime/_internal/unifill/Utf8.hx",240,0x18196bc4)
namespace lime{
namespace _internal{
namespace unifill{
namespace _Utf8{

void Utf8Impl_obj::__construct() { }

Dynamic Utf8Impl_obj::__CreateEmpty() { return new Utf8Impl_obj; }

void *Utf8Impl_obj::_hx_vtable = 0;

Dynamic Utf8Impl_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Utf8Impl_obj > _hx_result = new Utf8Impl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Utf8Impl_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x436cefb1;
}

int Utf8Impl_obj::code_point_width(int c){
            	HX_STACKFRAME(&_hx_pos_166eb997cfb34041_199_code_point_width)
HXDLIN( 199)		if ((c < (int)192)) {
HXDLIN( 199)			return (int)1;
            		}
            		else {
HXDLIN( 199)			if ((c < (int)224)) {
HXDLIN( 199)				return (int)2;
            			}
            			else {
HXDLIN( 199)				if ((c < (int)240)) {
HXDLIN( 199)					return (int)3;
            				}
            				else {
HXDLIN( 199)					if ((c < (int)248)) {
HXDLIN( 199)						return (int)4;
            					}
            					else {
HXDLIN( 199)						return (int)1;
            					}
            				}
            			}
            		}
HXDLIN( 199)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8Impl_obj,code_point_width,return )

int Utf8Impl_obj::find_prev_code_point( ::Dynamic accessor,int index){
            	HX_STACKFRAME(&_hx_pos_166eb997cfb34041_203_find_prev_code_point)
HXLINE( 204)		int c1 = ( (int)(accessor((index - (int)1))) );
HXLINE( 206)		bool _hx_tmp;
HXDLIN( 206)		if ((c1 >= (int)128)) {
HXLINE( 206)			_hx_tmp = (c1 >= (int)192);
            		}
            		else {
HXLINE( 206)			_hx_tmp = true;
            		}
HXDLIN( 206)		if (_hx_tmp) {
HXLINE( 206)			return (int)1;
            		}
            		else {
HXLINE( 206)			if ((((int)( (int)(accessor((index - (int)2))) ) & (int)(int)224) == (int)192)) {
HXLINE( 206)				return (int)2;
            			}
            			else {
HXLINE( 206)				if ((((int)( (int)(accessor((index - (int)3))) ) & (int)(int)240) == (int)224)) {
HXLINE( 206)					return (int)3;
            				}
            				else {
HXLINE( 206)					if ((((int)( (int)(accessor((index - (int)4))) ) & (int)(int)248) == (int)240)) {
HXLINE( 206)						return (int)4;
            					}
            					else {
HXLINE( 206)						return (int)1;
            					}
            				}
            			}
            		}
HXDLIN( 206)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8Impl_obj,find_prev_code_point,return )

void Utf8Impl_obj::encode_code_point( ::Dynamic addUnit,int codePoint){
            	HX_GC_STACKFRAME(&_hx_pos_166eb997cfb34041_211_encode_code_point)
HXDLIN( 211)		if ((codePoint <= (int)127)) {
HXLINE( 213)			addUnit(codePoint);
            		}
            		else {
HXLINE( 215)			if ((codePoint <= (int)2047)) {
HXLINE( 217)				addUnit(((int)(int)192 | (int)((int)codePoint >> (int)(int)6)));
HXLINE( 218)				addUnit(((int)(int)128 | (int)((int)codePoint & (int)(int)63)));
            			}
            			else {
HXLINE( 220)				if ((codePoint <= (int)65535)) {
HXLINE( 222)					addUnit(((int)(int)224 | (int)((int)codePoint >> (int)(int)12)));
HXLINE( 223)					addUnit(((int)(int)128 | (int)((int)((int)codePoint >> (int)(int)6) & (int)(int)63)));
HXLINE( 224)					addUnit(((int)(int)128 | (int)((int)codePoint & (int)(int)63)));
            				}
            				else {
HXLINE( 226)					if ((codePoint <= (int)1114111)) {
HXLINE( 228)						addUnit(((int)(int)240 | (int)((int)codePoint >> (int)(int)18)));
HXLINE( 229)						addUnit(((int)(int)128 | (int)((int)((int)codePoint >> (int)(int)12) & (int)(int)63)));
HXLINE( 230)						addUnit(((int)(int)128 | (int)((int)((int)codePoint >> (int)(int)6) & (int)(int)63)));
HXLINE( 231)						addUnit(((int)(int)128 | (int)((int)codePoint & (int)(int)63)));
            					}
            					else {
HXLINE( 235)						HX_STACK_DO_THROW( ::lime::_internal::unifill::InvalidCodePoint_obj::__alloc( HX_CTX ,codePoint));
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8Impl_obj,encode_code_point,(void))

int Utf8Impl_obj::decode_code_point(int len, ::Dynamic accessor,int index){
            	HX_GC_STACKFRAME(&_hx_pos_166eb997cfb34041_240_decode_code_point)
HXLINE( 241)		int i = index;
HXLINE( 242)		bool _hx_tmp;
HXDLIN( 242)		if ((i >= (int)0)) {
HXLINE( 242)			_hx_tmp = (len <= i);
            		}
            		else {
HXLINE( 242)			_hx_tmp = true;
            		}
HXDLIN( 242)		if (_hx_tmp) {
HXLINE( 242)			HX_STACK_DO_THROW( ::lime::_internal::unifill::InvalidCodeUnitSequence_obj::__alloc( HX_CTX ,index));
            		}
HXLINE( 243)		int c1 = ( (int)(accessor(i)) );
HXLINE( 244)		if ((c1 < (int)128)) {
HXLINE( 246)			return c1;
            		}
HXLINE( 248)		if ((c1 < (int)192)) {
HXLINE( 250)			HX_STACK_DO_THROW( ::lime::_internal::unifill::InvalidCodeUnitSequence_obj::__alloc( HX_CTX ,index));
            		}
HXLINE( 252)		i = (i + (int)1);
HXLINE( 253)		bool _hx_tmp1;
HXDLIN( 253)		if ((i >= (int)0)) {
HXLINE( 253)			_hx_tmp1 = (len <= i);
            		}
            		else {
HXLINE( 253)			_hx_tmp1 = true;
            		}
HXDLIN( 253)		if (_hx_tmp1) {
HXLINE( 253)			HX_STACK_DO_THROW( ::lime::_internal::unifill::InvalidCodeUnitSequence_obj::__alloc( HX_CTX ,index));
            		}
HXLINE( 254)		int c2 = ( (int)(accessor(i)) );
HXLINE( 255)		if ((c1 < (int)224)) {
HXLINE( 257)			bool _hx_tmp2;
HXDLIN( 257)			if ((((int)c1 & (int)(int)30) != (int)0)) {
HXLINE( 257)				_hx_tmp2 = (((int)c2 & (int)(int)192) == (int)128);
            			}
            			else {
HXLINE( 257)				_hx_tmp2 = false;
            			}
HXDLIN( 257)			if (_hx_tmp2) {
HXLINE( 257)				return ((int)((int)((int)c1 & (int)(int)63) << (int)(int)6) | (int)((int)c2 & (int)(int)127));
            			}
            			else {
HXLINE( 259)				HX_STACK_DO_THROW( ::lime::_internal::unifill::InvalidCodeUnitSequence_obj::__alloc( HX_CTX ,index));
            			}
            		}
HXLINE( 261)		i = (i + (int)1);
HXLINE( 262)		bool _hx_tmp3;
HXDLIN( 262)		if ((i >= (int)0)) {
HXLINE( 262)			_hx_tmp3 = (len <= i);
            		}
            		else {
HXLINE( 262)			_hx_tmp3 = true;
            		}
HXDLIN( 262)		if (_hx_tmp3) {
HXLINE( 262)			HX_STACK_DO_THROW( ::lime::_internal::unifill::InvalidCodeUnitSequence_obj::__alloc( HX_CTX ,index));
            		}
HXLINE( 263)		int c3 = ( (int)(accessor(i)) );
HXLINE( 264)		if ((c1 < (int)240)) {
HXLINE( 266)			bool _hx_tmp4;
HXDLIN( 266)			bool _hx_tmp5;
HXDLIN( 266)			bool _hx_tmp6;
HXDLIN( 266)			bool _hx_tmp7;
HXDLIN( 266)			if ((((int)c1 & (int)(int)15) == (int)0)) {
HXLINE( 266)				_hx_tmp7 = (((int)c2 & (int)(int)32) != (int)0);
            			}
            			else {
HXLINE( 266)				_hx_tmp7 = true;
            			}
HXDLIN( 266)			if (_hx_tmp7) {
HXLINE( 266)				_hx_tmp6 = (((int)c2 & (int)(int)192) == (int)128);
            			}
            			else {
HXLINE( 266)				_hx_tmp6 = false;
            			}
HXDLIN( 266)			if (_hx_tmp6) {
HXLINE( 266)				_hx_tmp5 = (((int)c3 & (int)(int)192) == (int)128);
            			}
            			else {
HXLINE( 266)				_hx_tmp5 = false;
            			}
HXDLIN( 266)			if (_hx_tmp5) {
HXLINE( 269)				bool _hx_tmp8;
HXDLIN( 269)				bool _hx_tmp9;
HXDLIN( 269)				if ((c1 == (int)237)) {
HXLINE( 269)					_hx_tmp9 = ((int)160 <= c2);
            				}
            				else {
HXLINE( 269)					_hx_tmp9 = false;
            				}
HXDLIN( 269)				if (_hx_tmp9) {
HXLINE( 269)					_hx_tmp8 = (c2 <= (int)191);
            				}
            				else {
HXLINE( 269)					_hx_tmp8 = false;
            				}
HXLINE( 266)				_hx_tmp4 = !(_hx_tmp8);
            			}
            			else {
HXLINE( 266)				_hx_tmp4 = false;
            			}
HXDLIN( 266)			if (_hx_tmp4) {
HXLINE( 269)				return ((int)((int)((int)((int)c1 & (int)(int)31) << (int)(int)12) | (int)((int)((int)c2 & (int)(int)127) << (int)(int)6)) | (int)((int)c3 & (int)(int)127));
            			}
            			else {
HXLINE( 271)				HX_STACK_DO_THROW( ::lime::_internal::unifill::InvalidCodeUnitSequence_obj::__alloc( HX_CTX ,index));
            			}
            		}
HXLINE( 273)		i = (i + (int)1);
HXLINE( 274)		bool _hx_tmp10;
HXDLIN( 274)		if ((i >= (int)0)) {
HXLINE( 274)			_hx_tmp10 = (len <= i);
            		}
            		else {
HXLINE( 274)			_hx_tmp10 = true;
            		}
HXDLIN( 274)		if (_hx_tmp10) {
HXLINE( 274)			HX_STACK_DO_THROW( ::lime::_internal::unifill::InvalidCodeUnitSequence_obj::__alloc( HX_CTX ,index));
            		}
HXLINE( 275)		int c4 = ( (int)(accessor(i)) );
HXLINE( 276)		if ((c1 < (int)248)) {
HXLINE( 278)			bool _hx_tmp11;
HXDLIN( 278)			bool _hx_tmp12;
HXDLIN( 278)			bool _hx_tmp13;
HXDLIN( 278)			bool _hx_tmp14;
HXDLIN( 278)			bool _hx_tmp15;
HXDLIN( 278)			if ((((int)c1 & (int)(int)7) == (int)0)) {
HXLINE( 278)				_hx_tmp15 = (((int)c2 & (int)(int)48) != (int)0);
            			}
            			else {
HXLINE( 278)				_hx_tmp15 = true;
            			}
HXDLIN( 278)			if (_hx_tmp15) {
HXLINE( 278)				_hx_tmp14 = (((int)c2 & (int)(int)192) == (int)128);
            			}
            			else {
HXLINE( 278)				_hx_tmp14 = false;
            			}
HXDLIN( 278)			if (_hx_tmp14) {
HXLINE( 278)				_hx_tmp13 = (((int)c3 & (int)(int)192) == (int)128);
            			}
            			else {
HXLINE( 278)				_hx_tmp13 = false;
            			}
HXDLIN( 278)			if (_hx_tmp13) {
HXLINE( 278)				_hx_tmp12 = (((int)c4 & (int)(int)192) == (int)128);
            			}
            			else {
HXLINE( 278)				_hx_tmp12 = false;
            			}
HXDLIN( 278)			if (_hx_tmp12) {
HXLINE( 282)				bool _hx_tmp16;
HXDLIN( 282)				bool _hx_tmp17;
HXDLIN( 282)				if ((c1 == (int)244)) {
HXLINE( 282)					_hx_tmp17 = (c2 > (int)143);
            				}
            				else {
HXLINE( 282)					_hx_tmp17 = false;
            				}
HXDLIN( 282)				if (!(_hx_tmp17)) {
HXLINE( 282)					_hx_tmp16 = (c1 > (int)244);
            				}
            				else {
HXLINE( 282)					_hx_tmp16 = true;
            				}
HXLINE( 278)				_hx_tmp11 = !(_hx_tmp16);
            			}
            			else {
HXLINE( 278)				_hx_tmp11 = false;
            			}
HXDLIN( 278)			if (_hx_tmp11) {
HXLINE( 282)				return ((int)((int)((int)((int)((int)c1 & (int)(int)15) << (int)(int)18) | (int)((int)((int)c2 & (int)(int)127) << (int)(int)12)) | (int)((int)((int)c3 & (int)(int)127) << (int)(int)6)) | (int)((int)c4 & (int)(int)127));
            			}
            			else {
HXLINE( 284)				HX_STACK_DO_THROW( ::lime::_internal::unifill::InvalidCodeUnitSequence_obj::__alloc( HX_CTX ,index));
            			}
            		}
HXLINE( 286)		HX_STACK_DO_THROW( ::lime::_internal::unifill::InvalidCodeUnitSequence_obj::__alloc( HX_CTX ,index));
HXDLIN( 286)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utf8Impl_obj,decode_code_point,return )


Utf8Impl_obj::Utf8Impl_obj()
{
}

bool Utf8Impl_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"code_point_width") ) { outValue = code_point_width_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"encode_code_point") ) { outValue = encode_code_point_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"decode_code_point") ) { outValue = decode_code_point_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"find_prev_code_point") ) { outValue = find_prev_code_point_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Utf8Impl_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Utf8Impl_obj_sStaticStorageInfo = 0;
#endif

static void Utf8Impl_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utf8Impl_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Utf8Impl_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Utf8Impl_obj::__mClass,"__mClass");
};

#endif

hx::Class Utf8Impl_obj::__mClass;

static ::String Utf8Impl_obj_sStaticFields[] = {
	HX_HCSTRING("code_point_width","\x45","\xbc","\xb7","\x0f"),
	HX_HCSTRING("find_prev_code_point","\x44","\xfe","\x1d","\xb2"),
	HX_HCSTRING("encode_code_point","\x47","\xd3","\x36","\x9f"),
	HX_HCSTRING("decode_code_point","\x2f","\x8f","\x91","\x1b"),
	::String(null())
};

void Utf8Impl_obj::__register()
{
	hx::Object *dummy = new Utf8Impl_obj;
	Utf8Impl_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._internal.unifill._Utf8.Utf8Impl","\x75","\xaa","\x5a","\x58");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Utf8Impl_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Utf8Impl_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Utf8Impl_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Utf8Impl_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Utf8Impl_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Utf8Impl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Utf8Impl_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace unifill
} // end namespace _Utf8
