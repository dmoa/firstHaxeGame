// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_graphics_BlurStack
#include <lime/_internal/graphics/BlurStack.h>
#endif
#ifndef INCLUDED_lime__internal_graphics_StackBlur
#include <lime/_internal/graphics/StackBlur.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0876aa6d3697a386_14_blur,"lime._internal.graphics.StackBlur","blur",0x11e5705e,"lime._internal.graphics.StackBlur.blur","lime/_internal/graphics/StackBlur.hx",14,0x80163c06)
HX_LOCAL_STACK_FRAME(_hx_pos_0876aa6d3697a386_20___stackBlurCanvasRGBA,"lime._internal.graphics.StackBlur","__stackBlurCanvasRGBA",0x767d35c4,"lime._internal.graphics.StackBlur.__stackBlurCanvasRGBA","lime/_internal/graphics/StackBlur.hx",20,0x80163c06)
HX_LOCAL_STACK_FRAME(_hx_pos_0876aa6d3697a386_10_boot,"lime._internal.graphics.StackBlur","boot",0x11e7b1e9,"lime._internal.graphics.StackBlur.boot","lime/_internal/graphics/StackBlur.hx",10,0x80163c06)
static const int _hx_array_data_b2c50e17_15[] = {
	(int)1,(int)171,(int)205,(int)293,(int)57,(int)373,(int)79,(int)137,(int)241,(int)27,(int)391,(int)357,(int)41,(int)19,(int)283,(int)265,(int)497,(int)469,(int)443,(int)421,(int)25,(int)191,(int)365,(int)349,(int)335,(int)161,(int)155,(int)149,(int)9,(int)278,(int)269,(int)261,(int)505,(int)245,(int)475,(int)231,(int)449,(int)437,(int)213,(int)415,(int)405,(int)395,(int)193,(int)377,(int)369,(int)361,(int)353,(int)345,(int)169,(int)331,(int)325,(int)319,(int)313,(int)307,(int)301,(int)37,(int)145,(int)285,(int)281,(int)69,(int)271,(int)267,(int)263,(int)259,(int)509,(int)501,(int)493,(int)243,(int)479,(int)118,(int)465,(int)459,(int)113,(int)446,(int)55,(int)435,(int)429,(int)423,(int)209,(int)413,(int)51,(int)403,(int)199,(int)393,(int)97,(int)3,(int)379,(int)375,(int)371,(int)367,(int)363,(int)359,(int)355,(int)351,(int)347,(int)43,(int)85,(int)337,(int)333,(int)165,(int)327,(int)323,(int)5,(int)317,(int)157,(int)311,(int)77,(int)305,(int)303,(int)75,(int)297,(int)294,(int)73,(int)289,(int)287,(int)71,(int)141,(int)279,(int)277,(int)275,(int)68,(int)135,(int)67,(int)133,(int)33,(int)262,(int)260,(int)129,(int)511,(int)507,(int)503,(int)499,(int)495,(int)491,(int)61,(int)121,(int)481,(int)477,(int)237,(int)235,(int)467,(int)232,(int)115,(int)457,(int)227,(int)451,(int)7,(int)445,(int)221,(int)439,(int)218,(int)433,(int)215,(int)427,(int)425,(int)211,(int)419,(int)417,(int)207,(int)411,(int)409,(int)203,(int)202,(int)401,(int)399,(int)396,(int)197,(int)49,(int)389,(int)387,(int)385,(int)383,(int)95,(int)189,(int)47,(int)187,(int)93,(int)185,(int)23,(int)183,(int)91,(int)181,(int)45,(int)179,(int)89,(int)177,(int)11,(int)175,(int)87,(int)173,(int)345,(int)343,(int)341,(int)339,(int)337,(int)21,(int)167,(int)83,(int)331,(int)329,(int)327,(int)163,(int)81,(int)323,(int)321,(int)319,(int)159,(int)79,(int)315,(int)313,(int)39,(int)155,(int)309,(int)307,(int)153,(int)305,(int)303,(int)151,(int)75,(int)299,(int)149,(int)37,(int)295,(int)147,(int)73,(int)291,(int)145,(int)289,(int)287,(int)143,(int)285,(int)71,(int)141,(int)281,(int)35,(int)279,(int)139,(int)69,(int)275,(int)137,(int)273,(int)17,(int)271,(int)135,(int)269,(int)267,(int)133,(int)265,(int)33,(int)263,(int)131,(int)261,(int)130,(int)259,(int)129,(int)257,(int)1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_0876aa6d3697a386_11_boot,"lime._internal.graphics.StackBlur","boot",0x11e7b1e9,"lime._internal.graphics.StackBlur.boot","lime/_internal/graphics/StackBlur.hx",11,0x80163c06)
static const int _hx_array_data_b2c50e17_17[] = {
	(int)0,(int)9,(int)10,(int)11,(int)9,(int)12,(int)10,(int)11,(int)12,(int)9,(int)13,(int)13,(int)10,(int)9,(int)13,(int)13,(int)14,(int)14,(int)14,(int)14,(int)10,(int)13,(int)14,(int)14,(int)14,(int)13,(int)13,(int)13,(int)9,(int)14,(int)14,(int)14,(int)15,(int)14,(int)15,(int)14,(int)15,(int)15,(int)14,(int)15,(int)15,(int)15,(int)14,(int)15,(int)15,(int)15,(int)15,(int)15,(int)14,(int)15,(int)15,(int)15,(int)15,(int)15,(int)15,(int)12,(int)14,(int)15,(int)15,(int)13,(int)15,(int)15,(int)15,(int)15,(int)16,(int)16,(int)16,(int)15,(int)16,(int)14,(int)16,(int)16,(int)14,(int)16,(int)13,(int)16,(int)16,(int)16,(int)15,(int)16,(int)13,(int)16,(int)15,(int)16,(int)14,(int)9,(int)16,(int)16,(int)16,(int)16,(int)16,(int)16,(int)16,(int)16,(int)16,(int)13,(int)14,(int)16,(int)16,(int)15,(int)16,(int)16,(int)10,(int)16,(int)15,(int)16,(int)14,(int)16,(int)16,(int)14,(int)16,(int)16,(int)14,(int)16,(int)16,(int)14,(int)15,(int)16,(int)16,(int)16,(int)14,(int)15,(int)14,(int)15,(int)13,(int)16,(int)16,(int)15,(int)17,(int)17,(int)17,(int)17,(int)17,(int)17,(int)14,(int)15,(int)17,(int)17,(int)16,(int)16,(int)17,(int)16,(int)15,(int)17,(int)16,(int)17,(int)11,(int)17,(int)16,(int)17,(int)16,(int)17,(int)16,(int)17,(int)17,(int)16,(int)17,(int)17,(int)16,(int)17,(int)17,(int)16,(int)16,(int)17,(int)17,(int)17,(int)16,(int)14,(int)17,(int)17,(int)17,(int)17,(int)15,(int)16,(int)14,(int)16,(int)15,(int)16,(int)13,(int)16,(int)15,(int)16,(int)14,(int)16,(int)15,(int)16,(int)12,(int)16,(int)15,(int)16,(int)17,(int)17,(int)17,(int)17,(int)17,(int)13,(int)16,(int)15,(int)17,(int)17,(int)17,(int)16,(int)15,(int)17,(int)17,(int)17,(int)16,(int)15,(int)17,(int)17,(int)14,(int)16,(int)17,(int)17,(int)16,(int)17,(int)17,(int)16,(int)15,(int)17,(int)16,(int)14,(int)17,(int)16,(int)15,(int)17,(int)16,(int)17,(int)17,(int)16,(int)17,(int)15,(int)16,(int)17,(int)14,(int)17,(int)16,(int)15,(int)17,(int)16,(int)17,(int)13,(int)17,(int)16,(int)17,(int)17,(int)16,(int)17,(int)14,(int)17,(int)16,(int)17,(int)16,(int)17,(int)16,(int)17,(int)9,
};
namespace lime{
namespace _internal{
namespace graphics{

void StackBlur_obj::__construct() { }

Dynamic StackBlur_obj::__CreateEmpty() { return new StackBlur_obj; }

void *StackBlur_obj::_hx_vtable = 0;

Dynamic StackBlur_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StackBlur_obj > _hx_result = new StackBlur_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StackBlur_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x36afab3d;
}

::Array< int > StackBlur_obj::MUL_TABLE;

::Array< int > StackBlur_obj::SHG_TABLE;

void StackBlur_obj::blur( ::lime::graphics::Image dest, ::lime::graphics::Image source, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint,Float blurX,Float blurY,int quality){
            	HX_STACKFRAME(&_hx_pos_0876aa6d3697a386_14_blur)
HXLINE(  15)		dest->copyPixels(source,sourceRect,destPoint,null(),null(),null());
HXLINE(  16)		int _hx_tmp = ::Std_obj::_hx_int(sourceRect->width);
HXDLIN(  16)		::lime::_internal::graphics::StackBlur_obj::_hx___stackBlurCanvasRGBA(dest,_hx_tmp,::Std_obj::_hx_int(sourceRect->height),blurX,blurY,quality);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(StackBlur_obj,blur,(void))

void StackBlur_obj::_hx___stackBlurCanvasRGBA( ::lime::graphics::Image image,int width,int height,Float blurX,Float blurY,int quality){
            	HX_GC_STACKFRAME(&_hx_pos_0876aa6d3697a386_20___stackBlurCanvasRGBA)
HXLINE(  24)		int radiusX = ((int)::Math_obj::round(blurX) >> (int)(int)1);
HXLINE(  25)		int radiusY = ((int)::Math_obj::round(blurY) >> (int)(int)1);
HXLINE(  27)		if (hx::IsNull( ::lime::_internal::graphics::StackBlur_obj::MUL_TABLE )) {
HXLINE(  27)			return;
            		}
HXLINE(  28)		if ((radiusX >= ::lime::_internal::graphics::StackBlur_obj::MUL_TABLE->length)) {
HXLINE(  28)			radiusX = (::lime::_internal::graphics::StackBlur_obj::MUL_TABLE->length - (int)1);
            		}
HXLINE(  29)		if ((radiusY >= ::lime::_internal::graphics::StackBlur_obj::MUL_TABLE->length)) {
HXLINE(  29)			radiusY = (::lime::_internal::graphics::StackBlur_obj::MUL_TABLE->length - (int)1);
            		}
HXLINE(  30)		bool _hx_tmp;
HXDLIN(  30)		if ((radiusX >= (int)0)) {
HXLINE(  30)			_hx_tmp = (radiusY < (int)0);
            		}
            		else {
HXLINE(  30)			_hx_tmp = true;
            		}
HXDLIN(  30)		if (_hx_tmp) {
HXLINE(  30)			return;
            		}
HXLINE(  32)		int iterations = quality;
HXLINE(  33)		if ((iterations < (int)1)) {
HXLINE(  33)			iterations = (int)1;
            		}
HXLINE(  34)		if ((iterations > (int)3)) {
HXLINE(  34)			iterations = (int)3;
            		}
HXLINE(  36)		 ::lime::utils::ArrayBufferView px = image->get_data();
HXLINE(  37)		int x;
HXDLIN(  37)		int y;
HXDLIN(  37)		int i;
HXDLIN(  37)		int p;
HXDLIN(  37)		int yp;
HXDLIN(  37)		int yi;
HXDLIN(  37)		int yw;
HXLINE(  38)		int r;
HXDLIN(  38)		int g;
HXDLIN(  38)		int b;
HXDLIN(  38)		int a;
HXDLIN(  38)		int pr;
HXDLIN(  38)		int pg;
HXDLIN(  38)		int pb;
HXDLIN(  38)		int pa;
HXLINE(  39)		Float f;
HXLINE(  41)		int divx = ((radiusX + radiusX) + (int)1);
HXLINE(  42)		int divy = ((radiusY + radiusY) + (int)1);
HXLINE(  43)		int w = width;
HXLINE(  44)		int h = height;
HXLINE(  46)		int w1 = (w - (int)1);
HXLINE(  47)		int h1 = (h - (int)1);
HXLINE(  48)		int rxp1 = (radiusX + (int)1);
HXLINE(  49)		int ryp1 = (radiusY + (int)1);
HXLINE(  51)		 ::lime::_internal::graphics::BlurStack ssx =  ::lime::_internal::graphics::BlurStack_obj::__alloc( HX_CTX );
HXLINE(  52)		 ::lime::_internal::graphics::BlurStack sx = ssx;
HXLINE(  53)		{
HXLINE(  53)			int _g1 = (int)1;
HXDLIN(  53)			int _g = divx;
HXDLIN(  53)			while((_g1 < _g)){
HXLINE(  53)				_g1 = (_g1 + (int)1);
HXDLIN(  53)				int i1 = (_g1 - (int)1);
HXLINE(  55)				sx = (sx->n =  ::lime::_internal::graphics::BlurStack_obj::__alloc( HX_CTX ));
            			}
            		}
HXLINE(  57)		sx->n = ssx;
HXLINE(  59)		 ::lime::_internal::graphics::BlurStack ssy =  ::lime::_internal::graphics::BlurStack_obj::__alloc( HX_CTX );
HXLINE(  60)		 ::lime::_internal::graphics::BlurStack sy = ssy;
HXLINE(  61)		{
HXLINE(  61)			int _g11 = (int)1;
HXDLIN(  61)			int _g2 = divy;
HXDLIN(  61)			while((_g11 < _g2)){
HXLINE(  61)				_g11 = (_g11 + (int)1);
HXDLIN(  61)				int i2 = (_g11 - (int)1);
HXLINE(  63)				sy = (sy->n =  ::lime::_internal::graphics::BlurStack_obj::__alloc( HX_CTX ));
            			}
            		}
HXLINE(  65)		sy->n = ssy;
HXLINE(  67)		 ::lime::_internal::graphics::BlurStack si = null();
HXLINE(  69)		int mtx = ::lime::_internal::graphics::StackBlur_obj::MUL_TABLE->__get(radiusX);
HXLINE(  70)		int stx = ::lime::_internal::graphics::StackBlur_obj::SHG_TABLE->__get(radiusX);
HXLINE(  71)		int mty = ::lime::_internal::graphics::StackBlur_obj::MUL_TABLE->__get(radiusY);
HXLINE(  72)		int sty = ::lime::_internal::graphics::StackBlur_obj::SHG_TABLE->__get(radiusY);
HXLINE(  74)		while((iterations > (int)0)){
HXLINE(  76)			iterations = (iterations - (int)1);
HXLINE(  77)			yi = (int)0;
HXDLIN(  77)			yw = yi;
HXLINE(  78)			int ms = mtx;
HXLINE(  79)			int ss = stx;
HXLINE(  80)			y = h;
HXLINE(  81)			while(true){
HXLINE(  83)				pr = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + yi)) & (int)(int)255);
HXDLIN(  83)				r = (rxp1 * pr);
HXLINE(  84)				int px1 = px->byteOffset;
HXDLIN(  84)				pg = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px1 + (yi + (int)1))) & (int)(int)255);
HXDLIN(  84)				g = (rxp1 * pg);
HXLINE(  85)				int px2 = px->byteOffset;
HXDLIN(  85)				pb = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px2 + (yi + (int)2))) & (int)(int)255);
HXDLIN(  85)				b = (rxp1 * pb);
HXLINE(  86)				int px3 = px->byteOffset;
HXDLIN(  86)				pa = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px3 + (yi + (int)3))) & (int)(int)255);
HXDLIN(  86)				a = (rxp1 * pa);
HXLINE(  87)				sx = ssx;
HXLINE(  88)				i = rxp1;
HXLINE(  89)				while(true){
HXLINE(  91)					sx->r = pr;
HXLINE(  92)					sx->g = pg;
HXLINE(  93)					sx->b = pb;
HXLINE(  94)					sx->a = pa;
HXLINE(  95)					sx = sx->n;
HXLINE(  96)					i = (i - (int)1);
HXLINE(  89)					if (!((i > (int)-1))) {
HXLINE(  89)						goto _hx_goto_5;
            					}
            				}
            				_hx_goto_5:;
HXLINE(  98)				{
HXLINE(  98)					int _g12 = (int)1;
HXDLIN(  98)					int _g3 = rxp1;
HXDLIN(  98)					while((_g12 < _g3)){
HXLINE(  98)						_g12 = (_g12 + (int)1);
HXDLIN(  98)						int i3 = (_g12 - (int)1);
HXLINE( 100)						int p1;
HXDLIN( 100)						if ((w1 < i3)) {
HXLINE( 100)							p1 = w1;
            						}
            						else {
HXLINE( 100)							p1 = i3;
            						}
HXDLIN( 100)						p = (yi + ((int)p1 << (int)(int)2));
HXLINE( 101)						r = (r + (sx->r = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + p)) & (int)(int)255)));
HXLINE( 102)						int px4 = px->byteOffset;
HXDLIN( 102)						g = (g + (sx->g = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px4 + (p + (int)1))) & (int)(int)255)));
HXLINE( 103)						int px5 = px->byteOffset;
HXDLIN( 103)						b = (b + (sx->b = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px5 + (p + (int)2))) & (int)(int)255)));
HXLINE( 104)						int px6 = px->byteOffset;
HXDLIN( 104)						a = (a + (sx->a = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px6 + (p + (int)3))) & (int)(int)255)));
HXLINE( 105)						sx = sx->n;
            					}
            				}
HXLINE( 108)				si = ssx;
HXLINE( 109)				{
HXLINE( 109)					int _g13 = (int)0;
HXDLIN( 109)					int _g4 = w;
HXDLIN( 109)					while((_g13 < _g4)){
HXLINE( 109)						_g13 = (_g13 + (int)1);
HXDLIN( 109)						int x1 = (_g13 - (int)1);
HXLINE( 111)						{
HXLINE( 111)							yi = (yi + (int)1);
HXDLIN( 111)							int val = hx::UShr((r * ms),ss);
HXDLIN( 111)							::__hxcpp_memory_set_byte(px->buffer->b,(px->byteOffset + (yi - (int)1)),val);
            						}
HXLINE( 112)						{
HXLINE( 112)							yi = (yi + (int)1);
HXDLIN( 112)							int val1 = hx::UShr((g * ms),ss);
HXDLIN( 112)							::__hxcpp_memory_set_byte(px->buffer->b,(px->byteOffset + (yi - (int)1)),val1);
            						}
HXLINE( 113)						{
HXLINE( 113)							yi = (yi + (int)1);
HXDLIN( 113)							int val2 = hx::UShr((b * ms),ss);
HXDLIN( 113)							::__hxcpp_memory_set_byte(px->buffer->b,(px->byteOffset + (yi - (int)1)),val2);
            						}
HXLINE( 114)						{
HXLINE( 114)							yi = (yi + (int)1);
HXDLIN( 114)							int val3 = hx::UShr((a * ms),ss);
HXDLIN( 114)							::__hxcpp_memory_set_byte(px->buffer->b,(px->byteOffset + (yi - (int)1)),val3);
            						}
HXLINE( 115)						int p2;
HXDLIN( 115)						p = ((x1 + radiusX) + (int)1);
HXDLIN( 115)						if ((p < w1)) {
HXLINE( 115)							p2 = p;
            						}
            						else {
HXLINE( 115)							p2 = w1;
            						}
HXDLIN( 115)						p = ((int)(yw + p2) << (int)(int)2);
HXLINE( 116)						int si1 = si->r;
HXDLIN( 116)						r = (r - (si1 - (si->r = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + p)) & (int)(int)255))));
HXLINE( 117)						int si2 = si->g;
HXDLIN( 117)						int px7 = px->byteOffset;
HXDLIN( 117)						g = (g - (si2 - (si->g = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px7 + (p + (int)1))) & (int)(int)255))));
HXLINE( 118)						int si3 = si->b;
HXDLIN( 118)						int px8 = px->byteOffset;
HXDLIN( 118)						b = (b - (si3 - (si->b = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px8 + (p + (int)2))) & (int)(int)255))));
HXLINE( 119)						int si4 = si->a;
HXDLIN( 119)						int px9 = px->byteOffset;
HXDLIN( 119)						a = (a - (si4 - (si->a = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px9 + (p + (int)3))) & (int)(int)255))));
HXLINE( 120)						si = si->n;
            					}
            				}
HXLINE( 122)				yw = (yw + w);
HXLINE( 123)				y = (y - (int)1);
HXLINE(  81)				if (!((y > (int)0))) {
HXLINE(  81)					goto _hx_goto_4;
            				}
            			}
            			_hx_goto_4:;
HXLINE( 125)			ms = mty;
HXLINE( 126)			ss = sty;
HXLINE( 127)			{
HXLINE( 127)				int _g14 = (int)0;
HXDLIN( 127)				int _g5 = w;
HXDLIN( 127)				while((_g14 < _g5)){
HXLINE( 127)					_g14 = (_g14 + (int)1);
HXDLIN( 127)					int x2 = (_g14 - (int)1);
HXLINE( 129)					yi = ((int)x2 << (int)(int)2);
HXLINE( 130)					pr = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + yi)) & (int)(int)255);
HXDLIN( 130)					r = (ryp1 * pr);
HXLINE( 131)					int px10 = px->byteOffset;
HXDLIN( 131)					pg = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px10 + (yi + (int)1))) & (int)(int)255);
HXDLIN( 131)					g = (ryp1 * pg);
HXLINE( 132)					int px11 = px->byteOffset;
HXDLIN( 132)					pb = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px11 + (yi + (int)2))) & (int)(int)255);
HXDLIN( 132)					b = (ryp1 * pb);
HXLINE( 133)					int px12 = px->byteOffset;
HXDLIN( 133)					pa = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px12 + (yi + (int)3))) & (int)(int)255);
HXDLIN( 133)					a = (ryp1 * pa);
HXLINE( 134)					sy = ssy;
HXLINE( 135)					{
HXLINE( 135)						int _g31 = (int)0;
HXDLIN( 135)						int _g21 = ryp1;
HXDLIN( 135)						while((_g31 < _g21)){
HXLINE( 135)							_g31 = (_g31 + (int)1);
HXDLIN( 135)							int i4 = (_g31 - (int)1);
HXLINE( 137)							sy->r = pr;
HXLINE( 138)							sy->g = pg;
HXLINE( 139)							sy->b = pb;
HXLINE( 140)							sy->a = pa;
HXLINE( 141)							sy = sy->n;
            						}
            					}
HXLINE( 143)					yp = w;
HXLINE( 144)					{
HXLINE( 144)						int _g32 = (int)1;
HXDLIN( 144)						int _g22 = (radiusY + (int)1);
HXDLIN( 144)						while((_g32 < _g22)){
HXLINE( 144)							_g32 = (_g32 + (int)1);
HXDLIN( 144)							int i5 = (_g32 - (int)1);
HXLINE( 146)							yi = ((int)(yp + x2) << (int)(int)2);
HXLINE( 147)							r = (r + (sy->r = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + yi)) & (int)(int)255)));
HXLINE( 148)							int px13 = px->byteOffset;
HXDLIN( 148)							g = (g + (sy->g = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px13 + (yi + (int)1))) & (int)(int)255)));
HXLINE( 149)							int px14 = px->byteOffset;
HXDLIN( 149)							b = (b + (sy->b = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px14 + (yi + (int)2))) & (int)(int)255)));
HXLINE( 150)							int px15 = px->byteOffset;
HXDLIN( 150)							a = (a + (sy->a = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px15 + (yi + (int)3))) & (int)(int)255)));
HXLINE( 151)							sy = sy->n;
HXLINE( 152)							if ((i5 < h1)) {
HXLINE( 154)								yp = (yp + w);
            							}
            						}
            					}
HXLINE( 157)					yi = x2;
HXLINE( 158)					si = ssy;
HXLINE( 160)					if ((iterations > (int)0)) {
HXLINE( 162)						int _g33 = (int)0;
HXDLIN( 162)						int _g23 = h;
HXDLIN( 162)						while((_g33 < _g23)){
HXLINE( 162)							_g33 = (_g33 + (int)1);
HXDLIN( 162)							int y1 = (_g33 - (int)1);
HXLINE( 164)							p = ((int)yi << (int)(int)2);
HXLINE( 165)							{
HXLINE( 165)								pa = hx::UShr((a * ms),ss);
HXDLIN( 165)								int val4 = pa;
HXDLIN( 165)								{
HXLINE( 165)									int px16 = px->byteOffset;
HXDLIN( 165)									::__hxcpp_memory_set_byte(px->buffer->b,(px16 + (p + (int)3)),val4);
            								}
            							}
HXLINE( 166)							if ((pa > (int)0)) {
HXLINE( 168)								{
HXLINE( 168)									int val5 = hx::UShr((r * ms),ss);
HXDLIN( 168)									::__hxcpp_memory_set_byte(px->buffer->b,(px->byteOffset + p),val5);
            								}
HXLINE( 169)								{
HXLINE( 169)									int val6 = hx::UShr((g * ms),ss);
HXDLIN( 169)									{
HXLINE( 169)										int px17 = px->byteOffset;
HXDLIN( 169)										::__hxcpp_memory_set_byte(px->buffer->b,(px17 + (p + (int)1)),val6);
            									}
            								}
HXLINE( 170)								{
HXLINE( 170)									int val7 = hx::UShr((b * ms),ss);
HXDLIN( 170)									{
HXLINE( 170)										int px18 = px->byteOffset;
HXDLIN( 170)										::__hxcpp_memory_set_byte(px->buffer->b,(px18 + (p + (int)2)),val7);
            									}
            								}
            							}
            							else {
HXLINE( 174)								{
HXLINE( 174)									int px19 = px->byteOffset;
HXDLIN( 174)									::__hxcpp_memory_set_byte(px->buffer->b,(px19 + (p + (int)2)),(int)0);
            								}
HXDLIN( 174)								int val8 = (int)0;
HXDLIN( 174)								{
HXLINE( 174)									int px20 = px->byteOffset;
HXDLIN( 174)									::__hxcpp_memory_set_byte(px->buffer->b,(px20 + (p + (int)1)),val8);
            								}
HXDLIN( 174)								int val9 = val8;
HXDLIN( 174)								::__hxcpp_memory_set_byte(px->buffer->b,(px->byteOffset + p),val9);
            							}
HXLINE( 176)							int p3;
HXDLIN( 176)							p = (y1 + ryp1);
HXDLIN( 176)							if ((p < h1)) {
HXLINE( 176)								p3 = p;
            							}
            							else {
HXLINE( 176)								p3 = h1;
            							}
HXDLIN( 176)							p = ((int)(x2 + (p3 * w)) << (int)(int)2);
HXLINE( 177)							int si5 = si->r;
HXDLIN( 177)							r = (r - (si5 - (si->r = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + p)) & (int)(int)255))));
HXLINE( 178)							int si6 = si->g;
HXDLIN( 178)							int px21 = px->byteOffset;
HXDLIN( 178)							g = (g - (si6 - (si->g = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px21 + (p + (int)1))) & (int)(int)255))));
HXLINE( 179)							int si7 = si->b;
HXDLIN( 179)							int px22 = px->byteOffset;
HXDLIN( 179)							b = (b - (si7 - (si->b = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px22 + (p + (int)2))) & (int)(int)255))));
HXLINE( 180)							int si8 = si->a;
HXDLIN( 180)							int px23 = px->byteOffset;
HXDLIN( 180)							a = (a - (si8 - (si->a = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px23 + (p + (int)3))) & (int)(int)255))));
HXLINE( 181)							si = si->n;
HXLINE( 182)							yi = (yi + w);
            						}
            					}
            					else {
HXLINE( 187)						int _g34 = (int)0;
HXDLIN( 187)						int _g24 = h;
HXDLIN( 187)						while((_g34 < _g24)){
HXLINE( 187)							_g34 = (_g34 + (int)1);
HXDLIN( 187)							int y2 = (_g34 - (int)1);
HXLINE( 189)							p = ((int)yi << (int)(int)2);
HXLINE( 190)							{
HXLINE( 190)								pa = hx::UShr((a * ms),ss);
HXDLIN( 190)								int val10 = pa;
HXDLIN( 190)								{
HXLINE( 190)									int px24 = px->byteOffset;
HXDLIN( 190)									::__hxcpp_memory_set_byte(px->buffer->b,(px24 + (p + (int)3)),val10);
            								}
            							}
HXLINE( 191)							if ((pa > (int)0)) {
HXLINE( 193)								f = ((Float)(int)255 / (Float)pa);
HXLINE( 194)								pr = ::Std_obj::_hx_int((hx::UShr((r * ms),ss) * f));
HXLINE( 195)								pg = ::Std_obj::_hx_int((hx::UShr((g * ms),ss) * f));
HXLINE( 196)								pb = ::Std_obj::_hx_int((hx::UShr((b * ms),ss) * f));
HXLINE( 197)								{
HXLINE( 197)									int val11;
HXDLIN( 197)									if ((pr > (int)255)) {
HXLINE( 197)										val11 = (int)255;
            									}
            									else {
HXLINE( 197)										val11 = pr;
            									}
HXDLIN( 197)									::__hxcpp_memory_set_byte(px->buffer->b,(px->byteOffset + p),val11);
            								}
HXLINE( 198)								{
HXLINE( 198)									int val12;
HXDLIN( 198)									if ((pg > (int)255)) {
HXLINE( 198)										val12 = (int)255;
            									}
            									else {
HXLINE( 198)										val12 = pg;
            									}
HXDLIN( 198)									{
HXLINE( 198)										int px25 = px->byteOffset;
HXDLIN( 198)										::__hxcpp_memory_set_byte(px->buffer->b,(px25 + (p + (int)1)),val12);
            									}
            								}
HXLINE( 199)								{
HXLINE( 199)									int val13;
HXDLIN( 199)									if ((pb > (int)255)) {
HXLINE( 199)										val13 = (int)255;
            									}
            									else {
HXLINE( 199)										val13 = pb;
            									}
HXDLIN( 199)									{
HXLINE( 199)										int px26 = px->byteOffset;
HXDLIN( 199)										::__hxcpp_memory_set_byte(px->buffer->b,(px26 + (p + (int)2)),val13);
            									}
            								}
            							}
            							else {
HXLINE( 203)								{
HXLINE( 203)									int px27 = px->byteOffset;
HXDLIN( 203)									::__hxcpp_memory_set_byte(px->buffer->b,(px27 + (p + (int)2)),(int)0);
            								}
HXDLIN( 203)								int val14 = (int)0;
HXDLIN( 203)								{
HXLINE( 203)									int px28 = px->byteOffset;
HXDLIN( 203)									::__hxcpp_memory_set_byte(px->buffer->b,(px28 + (p + (int)1)),val14);
            								}
HXDLIN( 203)								int val15 = val14;
HXDLIN( 203)								::__hxcpp_memory_set_byte(px->buffer->b,(px->byteOffset + p),val15);
            							}
HXLINE( 205)							int p4;
HXDLIN( 205)							p = (y2 + ryp1);
HXDLIN( 205)							if ((p < h1)) {
HXLINE( 205)								p4 = p;
            							}
            							else {
HXLINE( 205)								p4 = h1;
            							}
HXDLIN( 205)							p = ((int)(x2 + (p4 * w)) << (int)(int)2);
HXLINE( 206)							int si9 = si->r;
HXDLIN( 206)							r = (r - (si9 - (si->r = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + p)) & (int)(int)255))));
HXLINE( 207)							int si10 = si->g;
HXDLIN( 207)							int px29 = px->byteOffset;
HXDLIN( 207)							g = (g - (si10 - (si->g = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px29 + (p + (int)1))) & (int)(int)255))));
HXLINE( 208)							int si11 = si->b;
HXDLIN( 208)							int px30 = px->byteOffset;
HXDLIN( 208)							b = (b - (si11 - (si->b = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px30 + (p + (int)2))) & (int)(int)255))));
HXLINE( 209)							int si12 = si->a;
HXDLIN( 209)							int px31 = px->byteOffset;
HXDLIN( 209)							a = (a - (si12 - (si->a = ((int)::__hxcpp_memory_get_byte(px->buffer->b,(px31 + (p + (int)3))) & (int)(int)255))));
HXLINE( 210)							si = si->n;
HXLINE( 211)							yi = (yi + w);
            						}
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(StackBlur_obj,_hx___stackBlurCanvasRGBA,(void))


StackBlur_obj::StackBlur_obj()
{
}

bool StackBlur_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"blur") ) { outValue = blur_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MUL_TABLE") ) { outValue = ( MUL_TABLE ); return true; }
		if (HX_FIELD_EQ(inName,"SHG_TABLE") ) { outValue = ( SHG_TABLE ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__stackBlurCanvasRGBA") ) { outValue = _hx___stackBlurCanvasRGBA_dyn(); return true; }
	}
	return false;
}

bool StackBlur_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"MUL_TABLE") ) { MUL_TABLE=ioValue.Cast< ::Array< int > >(); return true; }
		if (HX_FIELD_EQ(inName,"SHG_TABLE") ) { SHG_TABLE=ioValue.Cast< ::Array< int > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *StackBlur_obj_sMemberStorageInfo = 0;
static hx::StaticInfo StackBlur_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(void *) &StackBlur_obj::MUL_TABLE,HX_HCSTRING("MUL_TABLE","\x13","\xf2","\x74","\x4d")},
	{hx::fsObject /*Array< int >*/ ,(void *) &StackBlur_obj::SHG_TABLE,HX_HCSTRING("SHG_TABLE","\xc1","\x4a","\xa2","\x87")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void StackBlur_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StackBlur_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(StackBlur_obj::MUL_TABLE,"MUL_TABLE");
	HX_MARK_MEMBER_NAME(StackBlur_obj::SHG_TABLE,"SHG_TABLE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StackBlur_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StackBlur_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StackBlur_obj::MUL_TABLE,"MUL_TABLE");
	HX_VISIT_MEMBER_NAME(StackBlur_obj::SHG_TABLE,"SHG_TABLE");
};

#endif

hx::Class StackBlur_obj::__mClass;

static ::String StackBlur_obj_sStaticFields[] = {
	HX_HCSTRING("MUL_TABLE","\x13","\xf2","\x74","\x4d"),
	HX_HCSTRING("SHG_TABLE","\xc1","\x4a","\xa2","\x87"),
	HX_HCSTRING("blur","\xa7","\x42","\x19","\x41"),
	HX_HCSTRING("__stackBlurCanvasRGBA","\x5b","\x41","\x5c","\x36"),
	::String(null())
};

void StackBlur_obj::__register()
{
	hx::Object *dummy = new StackBlur_obj;
	StackBlur_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._internal.graphics.StackBlur","\x17","\x0e","\xc5","\xb2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StackBlur_obj::__GetStatic;
	__mClass->mSetStaticField = &StackBlur_obj::__SetStatic;
	__mClass->mMarkFunc = StackBlur_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(StackBlur_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StackBlur_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StackBlur_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StackBlur_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StackBlur_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StackBlur_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0876aa6d3697a386_10_boot)
HXDLIN(  10)		MUL_TABLE = ::Array_obj< int >::fromData( _hx_array_data_b2c50e17_15,257);
            	}
{
            	HX_STACKFRAME(&_hx_pos_0876aa6d3697a386_11_boot)
HXDLIN(  11)		SHG_TABLE = ::Array_obj< int >::fromData( _hx_array_data_b2c50e17_17,257);
            	}
}

} // end namespace lime
} // end namespace _internal
} // end namespace graphics