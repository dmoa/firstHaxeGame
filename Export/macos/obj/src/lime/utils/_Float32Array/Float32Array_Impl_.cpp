// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_lime_utils__Float32Array_Float32Array_Impl_
#include <lime/utils/_Float32Array/Float32Array_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_da58397c804069e7_123_subarray,"lime.utils._Float32Array.Float32Array_Impl_","subarray",0xef8b2282,"lime.utils._Float32Array.Float32Array_Impl_.subarray","lime/utils/Float32Array.hx",123,0x8d160228)
HX_LOCAL_STACK_FRAME(_hx_pos_da58397c804069e7_128_fromBytes,"lime.utils._Float32Array.Float32Array_Impl_","fromBytes",0x92abc018,"lime.utils._Float32Array.Float32Array_Impl_.fromBytes","lime/utils/Float32Array.hx",128,0x8d160228)
HX_LOCAL_STACK_FRAME(_hx_pos_da58397c804069e7_133_toBytes,"lime.utils._Float32Array.Float32Array_Impl_","toBytes",0xa58e06a7,"lime.utils._Float32Array.Float32Array_Impl_.toBytes","lime/utils/Float32Array.hx",133,0x8d160228)
HX_LOCAL_STACK_FRAME(_hx_pos_da58397c804069e7_138_toString,"lime.utils._Float32Array.Float32Array_Impl_","toString",0x20789f15,"lime.utils._Float32Array.Float32Array_Impl_.toString","lime/utils/Float32Array.hx",138,0x8d160228)
HX_LOCAL_STACK_FRAME(_hx_pos_da58397c804069e7_86_boot,"lime.utils._Float32Array.Float32Array_Impl_","boot",0x5a51aa1b,"lime.utils._Float32Array.Float32Array_Impl_.boot","lime/utils/Float32Array.hx",86,0x8d160228)
namespace lime{
namespace utils{
namespace _Float32Array{

void Float32Array_Impl__obj::__construct() { }

Dynamic Float32Array_Impl__obj::__CreateEmpty() { return new Float32Array_Impl__obj; }

void *Float32Array_Impl__obj::_hx_vtable = 0;

Dynamic Float32Array_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Float32Array_Impl__obj > _hx_result = new Float32Array_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Float32Array_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x76ee1857;
}

int Float32Array_Impl__obj::BYTES_PER_ELEMENT;

int Float32Array_Impl__obj::hello;

 ::lime::utils::ArrayBufferView Float32Array_Impl__obj::subarray( ::lime::utils::ArrayBufferView this1,int begin, ::Dynamic end){
            	HX_GC_STACKFRAME(&_hx_pos_da58397c804069e7_123_subarray)
HXDLIN( 123)		 ::Dynamic end1 = end;
HXDLIN( 123)		if (hx::IsNull( end1 )) {
HXDLIN( 123)			end1 = this1->length;
            		}
HXDLIN( 123)		int len = (end1 - begin);
HXDLIN( 123)		int byte_offset = ((begin * this1->bytesPerElement) + this1->byteOffset);
HXDLIN( 123)		 ::lime::utils::ArrayBufferView view;
HXDLIN( 123)		int _g = this1->type;
HXDLIN( 123)		switch((int)(_g)){
            			case (int)0: {
HXDLIN( 123)				HX_STACK_DO_THROW(HX_("subarray on a blank ArrayBufferView",39,87,fd,19));
            			}
            			break;
            			case (int)1: {
HXDLIN( 123)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 123)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 123)				if (hx::IsNotNull( buffer )) {
HXDLIN( 123)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)1);
HXDLIN( 123)					int in_byteOffset = byte_offset;
HXDLIN( 123)					if ((in_byteOffset < (int)0)) {
HXDLIN( 123)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 123)					if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != (int)0)) {
HXDLIN( 123)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 123)					int bufferByteLength = buffer->length;
HXDLIN( 123)					int elementSize = _this->bytesPerElement;
HXDLIN( 123)					int newByteLength = bufferByteLength;
HXDLIN( 123)					if (hx::IsNull( len )) {
HXDLIN( 123)						newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 123)						if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXDLIN( 123)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 123)						if ((newByteLength < (int)0)) {
HXDLIN( 123)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXDLIN( 123)						newByteLength = (len * _this->bytesPerElement);
HXDLIN( 123)						int newRange = (in_byteOffset + newByteLength);
HXDLIN( 123)						if ((newRange > bufferByteLength)) {
HXDLIN( 123)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 123)					_this->buffer = buffer;
HXDLIN( 123)					_this->byteOffset = in_byteOffset;
HXDLIN( 123)					_this->byteLength = newByteLength;
HXDLIN( 123)					_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN( 123)					this2 = _this;
            				}
            				else {
HXDLIN( 123)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Int8Array",40,53,da,77));
            				}
HXDLIN( 123)				view = this2;
            			}
            			break;
            			case (int)2: {
HXDLIN( 123)				 ::haxe::io::Bytes buffer1 = this1->buffer;
HXDLIN( 123)				 ::lime::utils::ArrayBufferView this3;
HXDLIN( 123)				if (hx::IsNotNull( buffer1 )) {
HXDLIN( 123)					 ::lime::utils::ArrayBufferView _this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)2);
HXDLIN( 123)					int in_byteOffset1 = byte_offset;
HXDLIN( 123)					if ((in_byteOffset1 < (int)0)) {
HXDLIN( 123)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 123)					if ((hx::Mod(in_byteOffset1,_this1->bytesPerElement) != (int)0)) {
HXDLIN( 123)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 123)					int bufferByteLength1 = buffer1->length;
HXDLIN( 123)					int elementSize1 = _this1->bytesPerElement;
HXDLIN( 123)					int newByteLength1 = bufferByteLength1;
HXDLIN( 123)					if (hx::IsNull( len )) {
HXDLIN( 123)						newByteLength1 = (bufferByteLength1 - in_byteOffset1);
HXDLIN( 123)						if ((hx::Mod(bufferByteLength1,_this1->bytesPerElement) != (int)0)) {
HXDLIN( 123)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 123)						if ((newByteLength1 < (int)0)) {
HXDLIN( 123)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXDLIN( 123)						newByteLength1 = (len * _this1->bytesPerElement);
HXDLIN( 123)						int newRange1 = (in_byteOffset1 + newByteLength1);
HXDLIN( 123)						if ((newRange1 > bufferByteLength1)) {
HXDLIN( 123)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 123)					_this1->buffer = buffer1;
HXDLIN( 123)					_this1->byteOffset = in_byteOffset1;
HXDLIN( 123)					_this1->byteLength = newByteLength1;
HXDLIN( 123)					_this1->length = ::Std_obj::_hx_int(((Float)newByteLength1 / (Float)_this1->bytesPerElement));
HXDLIN( 123)					this3 = _this1;
            				}
            				else {
HXDLIN( 123)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7));
            				}
HXDLIN( 123)				view = this3;
            			}
            			break;
            			case (int)3: {
HXDLIN( 123)				 ::haxe::io::Bytes buffer2 = this1->buffer;
HXDLIN( 123)				 ::lime::utils::ArrayBufferView this4;
HXDLIN( 123)				if (hx::IsNotNull( buffer2 )) {
HXDLIN( 123)					 ::lime::utils::ArrayBufferView _this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)3);
HXDLIN( 123)					int in_byteOffset2 = byte_offset;
HXDLIN( 123)					if ((in_byteOffset2 < (int)0)) {
HXDLIN( 123)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 123)					if ((hx::Mod(in_byteOffset2,_this2->bytesPerElement) != (int)0)) {
HXDLIN( 123)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 123)					int bufferByteLength2 = buffer2->length;
HXDLIN( 123)					int elementSize2 = _this2->bytesPerElement;
HXDLIN( 123)					int newByteLength2 = bufferByteLength2;
HXDLIN( 123)					if (hx::IsNull( len )) {
HXDLIN( 123)						newByteLength2 = (bufferByteLength2 - in_byteOffset2);
HXDLIN( 123)						if ((hx::Mod(bufferByteLength2,_this2->bytesPerElement) != (int)0)) {
HXDLIN( 123)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 123)						if ((newByteLength2 < (int)0)) {
HXDLIN( 123)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXDLIN( 123)						newByteLength2 = (len * _this2->bytesPerElement);
HXDLIN( 123)						int newRange2 = (in_byteOffset2 + newByteLength2);
HXDLIN( 123)						if ((newRange2 > bufferByteLength2)) {
HXDLIN( 123)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 123)					_this2->buffer = buffer2;
HXDLIN( 123)					_this2->byteOffset = in_byteOffset2;
HXDLIN( 123)					_this2->byteLength = newByteLength2;
HXDLIN( 123)					_this2->length = ::Std_obj::_hx_int(((Float)newByteLength2 / (Float)_this2->bytesPerElement));
HXDLIN( 123)					this4 = _this2;
            				}
            				else {
HXDLIN( 123)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Int32Array",9b,2e,53,61));
            				}
HXDLIN( 123)				view = this4;
            			}
            			break;
            			case (int)4: {
HXDLIN( 123)				 ::haxe::io::Bytes buffer3 = this1->buffer;
HXDLIN( 123)				 ::lime::utils::ArrayBufferView this5;
HXDLIN( 123)				if (hx::IsNotNull( buffer3 )) {
HXDLIN( 123)					 ::lime::utils::ArrayBufferView _this3 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)4);
HXDLIN( 123)					int in_byteOffset3 = byte_offset;
HXDLIN( 123)					if ((in_byteOffset3 < (int)0)) {
HXDLIN( 123)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 123)					if ((hx::Mod(in_byteOffset3,_this3->bytesPerElement) != (int)0)) {
HXDLIN( 123)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 123)					int bufferByteLength3 = buffer3->length;
HXDLIN( 123)					int elementSize3 = _this3->bytesPerElement;
HXDLIN( 123)					int newByteLength3 = bufferByteLength3;
HXDLIN( 123)					if (hx::IsNull( len )) {
HXDLIN( 123)						newByteLength3 = (bufferByteLength3 - in_byteOffset3);
HXDLIN( 123)						if ((hx::Mod(bufferByteLength3,_this3->bytesPerElement) != (int)0)) {
HXDLIN( 123)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 123)						if ((newByteLength3 < (int)0)) {
HXDLIN( 123)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXDLIN( 123)						newByteLength3 = (len * _this3->bytesPerElement);
HXDLIN( 123)						int newRange3 = (in_byteOffset3 + newByteLength3);
HXDLIN( 123)						if ((newRange3 > bufferByteLength3)) {
HXDLIN( 123)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 123)					_this3->buffer = buffer3;
HXDLIN( 123)					_this3->byteOffset = in_byteOffset3;
HXDLIN( 123)					_this3->byteLength = newByteLength3;
HXDLIN( 123)					_this3->length = ::Std_obj::_hx_int(((Float)newByteLength3 / (Float)_this3->bytesPerElement));
HXDLIN( 123)					this5 = _this3;
            				}
            				else {
HXDLIN( 123)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            				}
HXDLIN( 123)				view = this5;
            			}
            			break;
            			case (int)5: {
HXDLIN( 123)				 ::haxe::io::Bytes buffer4 = this1->buffer;
HXDLIN( 123)				 ::lime::utils::ArrayBufferView this6;
HXDLIN( 123)				if (hx::IsNotNull( buffer4 )) {
HXDLIN( 123)					 ::lime::utils::ArrayBufferView _this4 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)5);
HXDLIN( 123)					int in_byteOffset4 = byte_offset;
HXDLIN( 123)					if ((in_byteOffset4 < (int)0)) {
HXDLIN( 123)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 123)					if ((hx::Mod(in_byteOffset4,_this4->bytesPerElement) != (int)0)) {
HXDLIN( 123)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 123)					int bufferByteLength4 = buffer4->length;
HXDLIN( 123)					int elementSize4 = _this4->bytesPerElement;
HXDLIN( 123)					int newByteLength4 = bufferByteLength4;
HXDLIN( 123)					if (hx::IsNull( len )) {
HXDLIN( 123)						newByteLength4 = (bufferByteLength4 - in_byteOffset4);
HXDLIN( 123)						if ((hx::Mod(bufferByteLength4,_this4->bytesPerElement) != (int)0)) {
HXDLIN( 123)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 123)						if ((newByteLength4 < (int)0)) {
HXDLIN( 123)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXDLIN( 123)						newByteLength4 = (len * _this4->bytesPerElement);
HXDLIN( 123)						int newRange4 = (in_byteOffset4 + newByteLength4);
HXDLIN( 123)						if ((newRange4 > bufferByteLength4)) {
HXDLIN( 123)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 123)					_this4->buffer = buffer4;
HXDLIN( 123)					_this4->byteOffset = in_byteOffset4;
HXDLIN( 123)					_this4->byteLength = newByteLength4;
HXDLIN( 123)					_this4->length = ::Std_obj::_hx_int(((Float)newByteLength4 / (Float)_this4->bytesPerElement));
HXDLIN( 123)					this6 = _this4;
            				}
            				else {
HXDLIN( 123)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8ClampedArray",8d,06,77,13));
            				}
HXDLIN( 123)				view = this6;
            			}
            			break;
            			case (int)6: {
HXDLIN( 123)				 ::haxe::io::Bytes buffer5 = this1->buffer;
HXDLIN( 123)				 ::lime::utils::ArrayBufferView this7;
HXDLIN( 123)				if (hx::IsNotNull( buffer5 )) {
HXDLIN( 123)					 ::lime::utils::ArrayBufferView _this5 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)6);
HXDLIN( 123)					int in_byteOffset5 = byte_offset;
HXDLIN( 123)					if ((in_byteOffset5 < (int)0)) {
HXDLIN( 123)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 123)					if ((hx::Mod(in_byteOffset5,_this5->bytesPerElement) != (int)0)) {
HXDLIN( 123)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 123)					int bufferByteLength5 = buffer5->length;
HXDLIN( 123)					int elementSize5 = _this5->bytesPerElement;
HXDLIN( 123)					int newByteLength5 = bufferByteLength5;
HXDLIN( 123)					if (hx::IsNull( len )) {
HXDLIN( 123)						newByteLength5 = (bufferByteLength5 - in_byteOffset5);
HXDLIN( 123)						if ((hx::Mod(bufferByteLength5,_this5->bytesPerElement) != (int)0)) {
HXDLIN( 123)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 123)						if ((newByteLength5 < (int)0)) {
HXDLIN( 123)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXDLIN( 123)						newByteLength5 = (len * _this5->bytesPerElement);
HXDLIN( 123)						int newRange5 = (in_byteOffset5 + newByteLength5);
HXDLIN( 123)						if ((newRange5 > bufferByteLength5)) {
HXDLIN( 123)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 123)					_this5->buffer = buffer5;
HXDLIN( 123)					_this5->byteOffset = in_byteOffset5;
HXDLIN( 123)					_this5->byteLength = newByteLength5;
HXDLIN( 123)					_this5->length = ::Std_obj::_hx_int(((Float)newByteLength5 / (Float)_this5->bytesPerElement));
HXDLIN( 123)					this7 = _this5;
            				}
            				else {
HXDLIN( 123)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5));
            				}
HXDLIN( 123)				view = this7;
            			}
            			break;
            			case (int)7: {
HXDLIN( 123)				 ::haxe::io::Bytes buffer6 = this1->buffer;
HXDLIN( 123)				 ::lime::utils::ArrayBufferView this8;
HXDLIN( 123)				if (hx::IsNotNull( buffer6 )) {
HXDLIN( 123)					 ::lime::utils::ArrayBufferView _this6 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)7);
HXDLIN( 123)					int in_byteOffset6 = byte_offset;
HXDLIN( 123)					if ((in_byteOffset6 < (int)0)) {
HXDLIN( 123)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 123)					if ((hx::Mod(in_byteOffset6,_this6->bytesPerElement) != (int)0)) {
HXDLIN( 123)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 123)					int bufferByteLength6 = buffer6->length;
HXDLIN( 123)					int elementSize6 = _this6->bytesPerElement;
HXDLIN( 123)					int newByteLength6 = bufferByteLength6;
HXDLIN( 123)					if (hx::IsNull( len )) {
HXDLIN( 123)						newByteLength6 = (bufferByteLength6 - in_byteOffset6);
HXDLIN( 123)						if ((hx::Mod(bufferByteLength6,_this6->bytesPerElement) != (int)0)) {
HXDLIN( 123)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 123)						if ((newByteLength6 < (int)0)) {
HXDLIN( 123)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXDLIN( 123)						newByteLength6 = (len * _this6->bytesPerElement);
HXDLIN( 123)						int newRange6 = (in_byteOffset6 + newByteLength6);
HXDLIN( 123)						if ((newRange6 > bufferByteLength6)) {
HXDLIN( 123)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 123)					_this6->buffer = buffer6;
HXDLIN( 123)					_this6->byteOffset = in_byteOffset6;
HXDLIN( 123)					_this6->byteLength = newByteLength6;
HXDLIN( 123)					_this6->length = ::Std_obj::_hx_int(((Float)newByteLength6 / (Float)_this6->bytesPerElement));
HXDLIN( 123)					this8 = _this6;
            				}
            				else {
HXDLIN( 123)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt32Array",10,43,eb,8e));
            				}
HXDLIN( 123)				view = this8;
            			}
            			break;
            			case (int)8: {
HXDLIN( 123)				 ::haxe::io::Bytes buffer7 = this1->buffer;
HXDLIN( 123)				 ::lime::utils::ArrayBufferView this9;
HXDLIN( 123)				if (hx::IsNotNull( buffer7 )) {
HXDLIN( 123)					 ::lime::utils::ArrayBufferView _this7 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)8);
HXDLIN( 123)					int in_byteOffset7 = byte_offset;
HXDLIN( 123)					if ((in_byteOffset7 < (int)0)) {
HXDLIN( 123)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 123)					if ((hx::Mod(in_byteOffset7,_this7->bytesPerElement) != (int)0)) {
HXDLIN( 123)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 123)					int bufferByteLength7 = buffer7->length;
HXDLIN( 123)					int elementSize7 = _this7->bytesPerElement;
HXDLIN( 123)					int newByteLength7 = bufferByteLength7;
HXDLIN( 123)					if (hx::IsNull( len )) {
HXDLIN( 123)						newByteLength7 = (bufferByteLength7 - in_byteOffset7);
HXDLIN( 123)						if ((hx::Mod(bufferByteLength7,_this7->bytesPerElement) != (int)0)) {
HXDLIN( 123)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 123)						if ((newByteLength7 < (int)0)) {
HXDLIN( 123)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXDLIN( 123)						newByteLength7 = (len * _this7->bytesPerElement);
HXDLIN( 123)						int newRange7 = (in_byteOffset7 + newByteLength7);
HXDLIN( 123)						if ((newRange7 > bufferByteLength7)) {
HXDLIN( 123)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 123)					_this7->buffer = buffer7;
HXDLIN( 123)					_this7->byteOffset = in_byteOffset7;
HXDLIN( 123)					_this7->byteLength = newByteLength7;
HXDLIN( 123)					_this7->length = ::Std_obj::_hx_int(((Float)newByteLength7 / (Float)_this7->bytesPerElement));
HXDLIN( 123)					this9 = _this7;
            				}
            				else {
HXDLIN( 123)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4));
            				}
HXDLIN( 123)				view = this9;
            			}
            			break;
            			case (int)9: {
HXDLIN( 123)				 ::haxe::io::Bytes buffer8 = this1->buffer;
HXDLIN( 123)				 ::lime::utils::ArrayBufferView this10;
HXDLIN( 123)				if (hx::IsNotNull( buffer8 )) {
HXDLIN( 123)					 ::lime::utils::ArrayBufferView _this8 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)9);
HXDLIN( 123)					int in_byteOffset8 = byte_offset;
HXDLIN( 123)					if ((in_byteOffset8 < (int)0)) {
HXDLIN( 123)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 123)					if ((hx::Mod(in_byteOffset8,_this8->bytesPerElement) != (int)0)) {
HXDLIN( 123)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 123)					int bufferByteLength8 = buffer8->length;
HXDLIN( 123)					int elementSize8 = _this8->bytesPerElement;
HXDLIN( 123)					int newByteLength8 = bufferByteLength8;
HXDLIN( 123)					if (hx::IsNull( len )) {
HXDLIN( 123)						newByteLength8 = (bufferByteLength8 - in_byteOffset8);
HXDLIN( 123)						if ((hx::Mod(bufferByteLength8,_this8->bytesPerElement) != (int)0)) {
HXDLIN( 123)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 123)						if ((newByteLength8 < (int)0)) {
HXDLIN( 123)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXDLIN( 123)						newByteLength8 = (len * _this8->bytesPerElement);
HXDLIN( 123)						int newRange8 = (in_byteOffset8 + newByteLength8);
HXDLIN( 123)						if ((newRange8 > bufferByteLength8)) {
HXDLIN( 123)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 123)					_this8->buffer = buffer8;
HXDLIN( 123)					_this8->byteOffset = in_byteOffset8;
HXDLIN( 123)					_this8->byteLength = newByteLength8;
HXDLIN( 123)					_this8->length = ::Std_obj::_hx_int(((Float)newByteLength8 / (Float)_this8->bytesPerElement));
HXDLIN( 123)					this10 = _this8;
            				}
            				else {
HXDLIN( 123)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Float64Array",8f,de,6b,1e));
            				}
HXDLIN( 123)				view = this10;
            			}
            			break;
            		}
HXDLIN( 123)		return view;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Float32Array_Impl__obj,subarray,return )

 ::lime::utils::ArrayBufferView Float32Array_Impl__obj::fromBytes( ::haxe::io::Bytes bytes, ::Dynamic __o_byteOffset, ::Dynamic len){
 ::Dynamic byteOffset = __o_byteOffset.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_da58397c804069e7_128_fromBytes)
HXDLIN( 128)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 128)		if (hx::IsNotNull( bytes )) {
HXDLIN( 128)			 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)8);
HXDLIN( 128)			int in_byteOffset = byteOffset;
HXDLIN( 128)			if ((in_byteOffset < (int)0)) {
HXDLIN( 128)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 128)			if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != (int)0)) {
HXDLIN( 128)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 128)			int bufferByteLength = bytes->length;
HXDLIN( 128)			int elementSize = _this->bytesPerElement;
HXDLIN( 128)			int newByteLength = bufferByteLength;
HXDLIN( 128)			if (hx::IsNull( len )) {
HXDLIN( 128)				newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 128)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXDLIN( 128)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN( 128)				if ((newByteLength < (int)0)) {
HXDLIN( 128)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
            			else {
HXDLIN( 128)				newByteLength = (len * _this->bytesPerElement);
HXDLIN( 128)				int newRange = (in_byteOffset + newByteLength);
HXDLIN( 128)				if ((newRange > bufferByteLength)) {
HXDLIN( 128)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN( 128)			_this->buffer = bytes;
HXDLIN( 128)			_this->byteOffset = in_byteOffset;
HXDLIN( 128)			_this->byteLength = newByteLength;
HXDLIN( 128)			_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN( 128)			this1 = _this;
            		}
            		else {
HXDLIN( 128)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4));
            		}
HXDLIN( 128)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Float32Array_Impl__obj,fromBytes,return )

 ::haxe::io::Bytes Float32Array_Impl__obj::toBytes( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_da58397c804069e7_133_toBytes)
HXDLIN( 133)		return this1->buffer;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float32Array_Impl__obj,toBytes,return )

::String Float32Array_Impl__obj::toString( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_da58397c804069e7_138_toString)
HXDLIN( 138)		if (hx::IsNotNull( this1 )) {
HXDLIN( 138)			return ((((HX_("Float32Array [byteLength:",d3,5c,f0,6e) + this1->byteLength) + HX_(", length:",a0,04,67,ef)) + this1->length) + HX_("]",5d,00,00,00));
            		}
            		else {
HXDLIN( 138)			return null();
            		}
HXDLIN( 138)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float32Array_Impl__obj,toString,return )


Float32Array_Impl__obj::Float32Array_Impl__obj()
{
}

bool Float32Array_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"toBytes") ) { outValue = toBytes_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subarray") ) { outValue = subarray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Float32Array_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo Float32Array_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Float32Array_Impl__obj::BYTES_PER_ELEMENT,HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc")},
	{hx::fsInt,(void *) &Float32Array_Impl__obj::hello,HX_HCSTRING("hello","\x12","\x33","\xc1","\x24")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Float32Array_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Float32Array_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Float32Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
	HX_MARK_MEMBER_NAME(Float32Array_Impl__obj::hello,"hello");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Float32Array_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Float32Array_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Float32Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
	HX_VISIT_MEMBER_NAME(Float32Array_Impl__obj::hello,"hello");
};

#endif

hx::Class Float32Array_Impl__obj::__mClass;

static ::String Float32Array_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc"),
	HX_HCSTRING("hello","\x12","\x33","\xc1","\x24"),
	HX_HCSTRING("subarray","\x19","\x54","\x81","\x07"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("toBytes","\xf0","\x54","\x1c","\x8a"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void Float32Array_Impl__obj::__register()
{
	hx::Object *dummy = new Float32Array_Impl__obj;
	Float32Array_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils._Float32Array.Float32Array_Impl_","\x25","\x03","\x42","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Float32Array_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Float32Array_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Float32Array_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Float32Array_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Float32Array_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Float32Array_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Float32Array_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Float32Array_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_da58397c804069e7_86_boot)
HXDLIN(  86)		BYTES_PER_ELEMENT = (int)4;
            	}
}

} // end namespace lime
} // end namespace utils
} // end namespace _Float32Array
