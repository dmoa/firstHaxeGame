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
#ifndef INCLUDED_lime_utils__UInt32Array_UInt32Array_Impl_
#include <lime/utils/_UInt32Array/UInt32Array_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d6b2b432f378b5e1_120_subarray,"lime.utils._UInt32Array.UInt32Array_Impl_","subarray",0x0de4225e,"lime.utils._UInt32Array.UInt32Array_Impl_.subarray","lime/utils/UInt32Array.hx",120,0x471a2476)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b2b432f378b5e1_125_fromBytes,"lime.utils._UInt32Array.UInt32Array_Impl_","fromBytes",0x0232a0bc,"lime.utils._UInt32Array.UInt32Array_Impl_.fromBytes","lime/utils/UInt32Array.hx",125,0x471a2476)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b2b432f378b5e1_130_toBytes,"lime.utils._UInt32Array.UInt32Array_Impl_","toBytes",0x7fceb64b,"lime.utils._UInt32Array.UInt32Array_Impl_.toBytes","lime/utils/UInt32Array.hx",130,0x471a2476)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b2b432f378b5e1_135_get_length,"lime.utils._UInt32Array.UInt32Array_Impl_","get_length",0x0ef5ae34,"lime.utils._UInt32Array.UInt32Array_Impl_.get_length","lime/utils/UInt32Array.hx",135,0x471a2476)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b2b432f378b5e1_153_toString,"lime.utils._UInt32Array.UInt32Array_Impl_","toString",0x3ed19ef1,"lime.utils._UInt32Array.UInt32Array_Impl_.toString","lime/utils/UInt32Array.hx",153,0x471a2476)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b2b432f378b5e1_84_boot,"lime.utils._UInt32Array.UInt32Array_Impl_","boot",0x5dfe8bf7,"lime.utils._UInt32Array.UInt32Array_Impl_.boot","lime/utils/UInt32Array.hx",84,0x471a2476)
namespace lime{
namespace utils{
namespace _UInt32Array{

void UInt32Array_Impl__obj::__construct() { }

Dynamic UInt32Array_Impl__obj::__CreateEmpty() { return new UInt32Array_Impl__obj; }

void *UInt32Array_Impl__obj::_hx_vtable = 0;

Dynamic UInt32Array_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< UInt32Array_Impl__obj > _hx_result = new UInt32Array_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool UInt32Array_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x684bc143;
}

int UInt32Array_Impl__obj::BYTES_PER_ELEMENT;

 ::lime::utils::ArrayBufferView UInt32Array_Impl__obj::subarray( ::lime::utils::ArrayBufferView this1,int begin, ::Dynamic end){
            	HX_GC_STACKFRAME(&_hx_pos_d6b2b432f378b5e1_120_subarray)
HXDLIN( 120)		 ::Dynamic end1 = end;
HXDLIN( 120)		if (hx::IsNull( end1 )) {
HXDLIN( 120)			end1 = this1->length;
            		}
HXDLIN( 120)		int len = (end1 - begin);
HXDLIN( 120)		int byte_offset = ((begin * this1->bytesPerElement) + this1->byteOffset);
HXDLIN( 120)		 ::lime::utils::ArrayBufferView view;
HXDLIN( 120)		int _g = this1->type;
HXDLIN( 120)		switch((int)(_g)){
            			case (int)0: {
HXDLIN( 120)				HX_STACK_DO_THROW(HX_("subarray on a blank ArrayBufferView",39,87,fd,19));
            			}
            			break;
            			case (int)1: {
HXDLIN( 120)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 120)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 120)				if (hx::IsNotNull( buffer )) {
HXDLIN( 120)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)1);
HXDLIN( 120)					int in_byteOffset = byte_offset;
HXDLIN( 120)					if ((in_byteOffset < (int)0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != (int)0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					int bufferByteLength = buffer->length;
HXDLIN( 120)					int elementSize = _this->bytesPerElement;
HXDLIN( 120)					int newByteLength = bufferByteLength;
HXDLIN( 120)					if (hx::IsNull( len )) {
HXDLIN( 120)						newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 120)						if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 120)						if ((newByteLength < (int)0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXDLIN( 120)						newByteLength = (len * _this->bytesPerElement);
HXDLIN( 120)						int newRange = (in_byteOffset + newByteLength);
HXDLIN( 120)						if ((newRange > bufferByteLength)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 120)					_this->buffer = buffer;
HXDLIN( 120)					_this->byteOffset = in_byteOffset;
HXDLIN( 120)					_this->byteLength = newByteLength;
HXDLIN( 120)					_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN( 120)					this2 = _this;
            				}
            				else {
HXDLIN( 120)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Int8Array",40,53,da,77));
            				}
HXDLIN( 120)				view = this2;
            			}
            			break;
            			case (int)2: {
HXDLIN( 120)				 ::haxe::io::Bytes buffer1 = this1->buffer;
HXDLIN( 120)				 ::lime::utils::ArrayBufferView this3;
HXDLIN( 120)				if (hx::IsNotNull( buffer1 )) {
HXDLIN( 120)					 ::lime::utils::ArrayBufferView _this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)2);
HXDLIN( 120)					int in_byteOffset1 = byte_offset;
HXDLIN( 120)					if ((in_byteOffset1 < (int)0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					if ((hx::Mod(in_byteOffset1,_this1->bytesPerElement) != (int)0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					int bufferByteLength1 = buffer1->length;
HXDLIN( 120)					int elementSize1 = _this1->bytesPerElement;
HXDLIN( 120)					int newByteLength1 = bufferByteLength1;
HXDLIN( 120)					if (hx::IsNull( len )) {
HXDLIN( 120)						newByteLength1 = (bufferByteLength1 - in_byteOffset1);
HXDLIN( 120)						if ((hx::Mod(bufferByteLength1,_this1->bytesPerElement) != (int)0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 120)						if ((newByteLength1 < (int)0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXDLIN( 120)						newByteLength1 = (len * _this1->bytesPerElement);
HXDLIN( 120)						int newRange1 = (in_byteOffset1 + newByteLength1);
HXDLIN( 120)						if ((newRange1 > bufferByteLength1)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 120)					_this1->buffer = buffer1;
HXDLIN( 120)					_this1->byteOffset = in_byteOffset1;
HXDLIN( 120)					_this1->byteLength = newByteLength1;
HXDLIN( 120)					_this1->length = ::Std_obj::_hx_int(((Float)newByteLength1 / (Float)_this1->bytesPerElement));
HXDLIN( 120)					this3 = _this1;
            				}
            				else {
HXDLIN( 120)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7));
            				}
HXDLIN( 120)				view = this3;
            			}
            			break;
            			case (int)3: {
HXDLIN( 120)				 ::haxe::io::Bytes buffer2 = this1->buffer;
HXDLIN( 120)				 ::lime::utils::ArrayBufferView this4;
HXDLIN( 120)				if (hx::IsNotNull( buffer2 )) {
HXDLIN( 120)					 ::lime::utils::ArrayBufferView _this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)3);
HXDLIN( 120)					int in_byteOffset2 = byte_offset;
HXDLIN( 120)					if ((in_byteOffset2 < (int)0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					if ((hx::Mod(in_byteOffset2,_this2->bytesPerElement) != (int)0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					int bufferByteLength2 = buffer2->length;
HXDLIN( 120)					int elementSize2 = _this2->bytesPerElement;
HXDLIN( 120)					int newByteLength2 = bufferByteLength2;
HXDLIN( 120)					if (hx::IsNull( len )) {
HXDLIN( 120)						newByteLength2 = (bufferByteLength2 - in_byteOffset2);
HXDLIN( 120)						if ((hx::Mod(bufferByteLength2,_this2->bytesPerElement) != (int)0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 120)						if ((newByteLength2 < (int)0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXDLIN( 120)						newByteLength2 = (len * _this2->bytesPerElement);
HXDLIN( 120)						int newRange2 = (in_byteOffset2 + newByteLength2);
HXDLIN( 120)						if ((newRange2 > bufferByteLength2)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 120)					_this2->buffer = buffer2;
HXDLIN( 120)					_this2->byteOffset = in_byteOffset2;
HXDLIN( 120)					_this2->byteLength = newByteLength2;
HXDLIN( 120)					_this2->length = ::Std_obj::_hx_int(((Float)newByteLength2 / (Float)_this2->bytesPerElement));
HXDLIN( 120)					this4 = _this2;
            				}
            				else {
HXDLIN( 120)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Int32Array",9b,2e,53,61));
            				}
HXDLIN( 120)				view = this4;
            			}
            			break;
            			case (int)4: {
HXDLIN( 120)				 ::haxe::io::Bytes buffer3 = this1->buffer;
HXDLIN( 120)				 ::lime::utils::ArrayBufferView this5;
HXDLIN( 120)				if (hx::IsNotNull( buffer3 )) {
HXDLIN( 120)					 ::lime::utils::ArrayBufferView _this3 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)4);
HXDLIN( 120)					int in_byteOffset3 = byte_offset;
HXDLIN( 120)					if ((in_byteOffset3 < (int)0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					if ((hx::Mod(in_byteOffset3,_this3->bytesPerElement) != (int)0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					int bufferByteLength3 = buffer3->length;
HXDLIN( 120)					int elementSize3 = _this3->bytesPerElement;
HXDLIN( 120)					int newByteLength3 = bufferByteLength3;
HXDLIN( 120)					if (hx::IsNull( len )) {
HXDLIN( 120)						newByteLength3 = (bufferByteLength3 - in_byteOffset3);
HXDLIN( 120)						if ((hx::Mod(bufferByteLength3,_this3->bytesPerElement) != (int)0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 120)						if ((newByteLength3 < (int)0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXDLIN( 120)						newByteLength3 = (len * _this3->bytesPerElement);
HXDLIN( 120)						int newRange3 = (in_byteOffset3 + newByteLength3);
HXDLIN( 120)						if ((newRange3 > bufferByteLength3)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 120)					_this3->buffer = buffer3;
HXDLIN( 120)					_this3->byteOffset = in_byteOffset3;
HXDLIN( 120)					_this3->byteLength = newByteLength3;
HXDLIN( 120)					_this3->length = ::Std_obj::_hx_int(((Float)newByteLength3 / (Float)_this3->bytesPerElement));
HXDLIN( 120)					this5 = _this3;
            				}
            				else {
HXDLIN( 120)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            				}
HXDLIN( 120)				view = this5;
            			}
            			break;
            			case (int)5: {
HXDLIN( 120)				 ::haxe::io::Bytes buffer4 = this1->buffer;
HXDLIN( 120)				 ::lime::utils::ArrayBufferView this6;
HXDLIN( 120)				if (hx::IsNotNull( buffer4 )) {
HXDLIN( 120)					 ::lime::utils::ArrayBufferView _this4 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)5);
HXDLIN( 120)					int in_byteOffset4 = byte_offset;
HXDLIN( 120)					if ((in_byteOffset4 < (int)0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					if ((hx::Mod(in_byteOffset4,_this4->bytesPerElement) != (int)0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					int bufferByteLength4 = buffer4->length;
HXDLIN( 120)					int elementSize4 = _this4->bytesPerElement;
HXDLIN( 120)					int newByteLength4 = bufferByteLength4;
HXDLIN( 120)					if (hx::IsNull( len )) {
HXDLIN( 120)						newByteLength4 = (bufferByteLength4 - in_byteOffset4);
HXDLIN( 120)						if ((hx::Mod(bufferByteLength4,_this4->bytesPerElement) != (int)0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 120)						if ((newByteLength4 < (int)0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXDLIN( 120)						newByteLength4 = (len * _this4->bytesPerElement);
HXDLIN( 120)						int newRange4 = (in_byteOffset4 + newByteLength4);
HXDLIN( 120)						if ((newRange4 > bufferByteLength4)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 120)					_this4->buffer = buffer4;
HXDLIN( 120)					_this4->byteOffset = in_byteOffset4;
HXDLIN( 120)					_this4->byteLength = newByteLength4;
HXDLIN( 120)					_this4->length = ::Std_obj::_hx_int(((Float)newByteLength4 / (Float)_this4->bytesPerElement));
HXDLIN( 120)					this6 = _this4;
            				}
            				else {
HXDLIN( 120)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8ClampedArray",8d,06,77,13));
            				}
HXDLIN( 120)				view = this6;
            			}
            			break;
            			case (int)6: {
HXDLIN( 120)				 ::haxe::io::Bytes buffer5 = this1->buffer;
HXDLIN( 120)				 ::lime::utils::ArrayBufferView this7;
HXDLIN( 120)				if (hx::IsNotNull( buffer5 )) {
HXDLIN( 120)					 ::lime::utils::ArrayBufferView _this5 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)6);
HXDLIN( 120)					int in_byteOffset5 = byte_offset;
HXDLIN( 120)					if ((in_byteOffset5 < (int)0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					if ((hx::Mod(in_byteOffset5,_this5->bytesPerElement) != (int)0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					int bufferByteLength5 = buffer5->length;
HXDLIN( 120)					int elementSize5 = _this5->bytesPerElement;
HXDLIN( 120)					int newByteLength5 = bufferByteLength5;
HXDLIN( 120)					if (hx::IsNull( len )) {
HXDLIN( 120)						newByteLength5 = (bufferByteLength5 - in_byteOffset5);
HXDLIN( 120)						if ((hx::Mod(bufferByteLength5,_this5->bytesPerElement) != (int)0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 120)						if ((newByteLength5 < (int)0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXDLIN( 120)						newByteLength5 = (len * _this5->bytesPerElement);
HXDLIN( 120)						int newRange5 = (in_byteOffset5 + newByteLength5);
HXDLIN( 120)						if ((newRange5 > bufferByteLength5)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 120)					_this5->buffer = buffer5;
HXDLIN( 120)					_this5->byteOffset = in_byteOffset5;
HXDLIN( 120)					_this5->byteLength = newByteLength5;
HXDLIN( 120)					_this5->length = ::Std_obj::_hx_int(((Float)newByteLength5 / (Float)_this5->bytesPerElement));
HXDLIN( 120)					this7 = _this5;
            				}
            				else {
HXDLIN( 120)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5));
            				}
HXDLIN( 120)				view = this7;
            			}
            			break;
            			case (int)7: {
HXDLIN( 120)				 ::haxe::io::Bytes buffer6 = this1->buffer;
HXDLIN( 120)				 ::lime::utils::ArrayBufferView this8;
HXDLIN( 120)				if (hx::IsNotNull( buffer6 )) {
HXDLIN( 120)					 ::lime::utils::ArrayBufferView _this6 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)7);
HXDLIN( 120)					int in_byteOffset6 = byte_offset;
HXDLIN( 120)					if ((in_byteOffset6 < (int)0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					if ((hx::Mod(in_byteOffset6,_this6->bytesPerElement) != (int)0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					int bufferByteLength6 = buffer6->length;
HXDLIN( 120)					int elementSize6 = _this6->bytesPerElement;
HXDLIN( 120)					int newByteLength6 = bufferByteLength6;
HXDLIN( 120)					if (hx::IsNull( len )) {
HXDLIN( 120)						newByteLength6 = (bufferByteLength6 - in_byteOffset6);
HXDLIN( 120)						if ((hx::Mod(bufferByteLength6,_this6->bytesPerElement) != (int)0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 120)						if ((newByteLength6 < (int)0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXDLIN( 120)						newByteLength6 = (len * _this6->bytesPerElement);
HXDLIN( 120)						int newRange6 = (in_byteOffset6 + newByteLength6);
HXDLIN( 120)						if ((newRange6 > bufferByteLength6)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 120)					_this6->buffer = buffer6;
HXDLIN( 120)					_this6->byteOffset = in_byteOffset6;
HXDLIN( 120)					_this6->byteLength = newByteLength6;
HXDLIN( 120)					_this6->length = ::Std_obj::_hx_int(((Float)newByteLength6 / (Float)_this6->bytesPerElement));
HXDLIN( 120)					this8 = _this6;
            				}
            				else {
HXDLIN( 120)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt32Array",10,43,eb,8e));
            				}
HXDLIN( 120)				view = this8;
            			}
            			break;
            			case (int)8: {
HXDLIN( 120)				 ::haxe::io::Bytes buffer7 = this1->buffer;
HXDLIN( 120)				 ::lime::utils::ArrayBufferView this9;
HXDLIN( 120)				if (hx::IsNotNull( buffer7 )) {
HXDLIN( 120)					 ::lime::utils::ArrayBufferView _this7 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)8);
HXDLIN( 120)					int in_byteOffset7 = byte_offset;
HXDLIN( 120)					if ((in_byteOffset7 < (int)0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					if ((hx::Mod(in_byteOffset7,_this7->bytesPerElement) != (int)0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					int bufferByteLength7 = buffer7->length;
HXDLIN( 120)					int elementSize7 = _this7->bytesPerElement;
HXDLIN( 120)					int newByteLength7 = bufferByteLength7;
HXDLIN( 120)					if (hx::IsNull( len )) {
HXDLIN( 120)						newByteLength7 = (bufferByteLength7 - in_byteOffset7);
HXDLIN( 120)						if ((hx::Mod(bufferByteLength7,_this7->bytesPerElement) != (int)0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 120)						if ((newByteLength7 < (int)0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXDLIN( 120)						newByteLength7 = (len * _this7->bytesPerElement);
HXDLIN( 120)						int newRange7 = (in_byteOffset7 + newByteLength7);
HXDLIN( 120)						if ((newRange7 > bufferByteLength7)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 120)					_this7->buffer = buffer7;
HXDLIN( 120)					_this7->byteOffset = in_byteOffset7;
HXDLIN( 120)					_this7->byteLength = newByteLength7;
HXDLIN( 120)					_this7->length = ::Std_obj::_hx_int(((Float)newByteLength7 / (Float)_this7->bytesPerElement));
HXDLIN( 120)					this9 = _this7;
            				}
            				else {
HXDLIN( 120)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4));
            				}
HXDLIN( 120)				view = this9;
            			}
            			break;
            			case (int)9: {
HXDLIN( 120)				 ::haxe::io::Bytes buffer8 = this1->buffer;
HXDLIN( 120)				 ::lime::utils::ArrayBufferView this10;
HXDLIN( 120)				if (hx::IsNotNull( buffer8 )) {
HXDLIN( 120)					 ::lime::utils::ArrayBufferView _this8 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)9);
HXDLIN( 120)					int in_byteOffset8 = byte_offset;
HXDLIN( 120)					if ((in_byteOffset8 < (int)0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					if ((hx::Mod(in_byteOffset8,_this8->bytesPerElement) != (int)0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					int bufferByteLength8 = buffer8->length;
HXDLIN( 120)					int elementSize8 = _this8->bytesPerElement;
HXDLIN( 120)					int newByteLength8 = bufferByteLength8;
HXDLIN( 120)					if (hx::IsNull( len )) {
HXDLIN( 120)						newByteLength8 = (bufferByteLength8 - in_byteOffset8);
HXDLIN( 120)						if ((hx::Mod(bufferByteLength8,_this8->bytesPerElement) != (int)0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 120)						if ((newByteLength8 < (int)0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXDLIN( 120)						newByteLength8 = (len * _this8->bytesPerElement);
HXDLIN( 120)						int newRange8 = (in_byteOffset8 + newByteLength8);
HXDLIN( 120)						if ((newRange8 > bufferByteLength8)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 120)					_this8->buffer = buffer8;
HXDLIN( 120)					_this8->byteOffset = in_byteOffset8;
HXDLIN( 120)					_this8->byteLength = newByteLength8;
HXDLIN( 120)					_this8->length = ::Std_obj::_hx_int(((Float)newByteLength8 / (Float)_this8->bytesPerElement));
HXDLIN( 120)					this10 = _this8;
            				}
            				else {
HXDLIN( 120)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Float64Array",8f,de,6b,1e));
            				}
HXDLIN( 120)				view = this10;
            			}
            			break;
            		}
HXDLIN( 120)		return view;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(UInt32Array_Impl__obj,subarray,return )

 ::lime::utils::ArrayBufferView UInt32Array_Impl__obj::fromBytes( ::haxe::io::Bytes bytes, ::Dynamic __o_byteOffset, ::Dynamic len){
 ::Dynamic byteOffset = __o_byteOffset.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_d6b2b432f378b5e1_125_fromBytes)
HXDLIN( 125)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 125)		if (hx::IsNotNull( bytes )) {
HXDLIN( 125)			 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)7);
HXDLIN( 125)			int in_byteOffset = byteOffset;
HXDLIN( 125)			if ((in_byteOffset < (int)0)) {
HXDLIN( 125)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 125)			if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != (int)0)) {
HXDLIN( 125)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 125)			int bufferByteLength = bytes->length;
HXDLIN( 125)			int elementSize = _this->bytesPerElement;
HXDLIN( 125)			int newByteLength = bufferByteLength;
HXDLIN( 125)			if (hx::IsNull( len )) {
HXDLIN( 125)				newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 125)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXDLIN( 125)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN( 125)				if ((newByteLength < (int)0)) {
HXDLIN( 125)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
            			else {
HXDLIN( 125)				newByteLength = (len * _this->bytesPerElement);
HXDLIN( 125)				int newRange = (in_byteOffset + newByteLength);
HXDLIN( 125)				if ((newRange > bufferByteLength)) {
HXDLIN( 125)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN( 125)			_this->buffer = bytes;
HXDLIN( 125)			_this->byteOffset = in_byteOffset;
HXDLIN( 125)			_this->byteLength = newByteLength;
HXDLIN( 125)			_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN( 125)			this1 = _this;
            		}
            		else {
HXDLIN( 125)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt32Array",10,43,eb,8e));
            		}
HXDLIN( 125)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(UInt32Array_Impl__obj,fromBytes,return )

 ::haxe::io::Bytes UInt32Array_Impl__obj::toBytes( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_d6b2b432f378b5e1_130_toBytes)
HXDLIN( 130)		return this1->buffer;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UInt32Array_Impl__obj,toBytes,return )

int UInt32Array_Impl__obj::get_length( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_d6b2b432f378b5e1_135_get_length)
HXDLIN( 135)		return this1->length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UInt32Array_Impl__obj,get_length,return )

::String UInt32Array_Impl__obj::toString( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_d6b2b432f378b5e1_153_toString)
HXDLIN( 153)		if (hx::IsNotNull( this1 )) {
HXDLIN( 153)			return ((((HX_("UInt32Array [byteLength:",f1,11,ee,ed) + this1->byteLength) + HX_(", length:",a0,04,67,ef)) + this1->length) + HX_("]",5d,00,00,00));
            		}
            		else {
HXDLIN( 153)			return null();
            		}
HXDLIN( 153)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UInt32Array_Impl__obj,toString,return )


UInt32Array_Impl__obj::UInt32Array_Impl__obj()
{
}

bool UInt32Array_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *UInt32Array_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo UInt32Array_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &UInt32Array_Impl__obj::BYTES_PER_ELEMENT,HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void UInt32Array_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UInt32Array_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UInt32Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void UInt32Array_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UInt32Array_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UInt32Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#endif

hx::Class UInt32Array_Impl__obj::__mClass;

static ::String UInt32Array_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc"),
	HX_HCSTRING("subarray","\x19","\x54","\x81","\x07"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("toBytes","\xf0","\x54","\x1c","\x8a"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void UInt32Array_Impl__obj::__register()
{
	hx::Object *dummy = new UInt32Array_Impl__obj;
	UInt32Array_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils._UInt32Array.UInt32Array_Impl_","\xc9","\x6e","\xf8","\x9b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &UInt32Array_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = UInt32Array_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(UInt32Array_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< UInt32Array_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = UInt32Array_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UInt32Array_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UInt32Array_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void UInt32Array_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d6b2b432f378b5e1_84_boot)
HXDLIN(  84)		BYTES_PER_ELEMENT = (int)4;
            	}
}

} // end namespace lime
} // end namespace utils
} // end namespace _UInt32Array
