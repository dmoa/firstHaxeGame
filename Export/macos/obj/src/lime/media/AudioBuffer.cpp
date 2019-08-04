// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_crypto_Base64
#include <haxe/crypto/Base64.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_media_AudioBuffer
#include <lime/app/Promise_lime_media_AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_media_vorbis_VorbisFile
#include <lime/media/vorbis/VorbisFile.h>
#endif
#ifndef INCLUDED_lime_media_vorbis_VorbisInfo
#include <lime/media/vorbis/VorbisInfo.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_Bytes
#include <lime/net/_HTTPRequest_Bytes.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_lime_media_AudioBuffer
#include <lime/net/_HTTPRequest_lime_media_AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_60_new,"lime.media.AudioBuffer","new",0x18eea6a5,"lime.media.AudioBuffer.new","lime/media/AudioBuffer.hx",60,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_63_dispose,"lime.media.AudioBuffer","dispose",0xa3b05d64,"lime.media.AudioBuffer.dispose","lime/media/AudioBuffer.hx",63,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_377_get_src,"lime.media.AudioBuffer","get_src",0x0f304c40,"lime.media.AudioBuffer.get_src","lime/media/AudioBuffer.hx",377,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_394_set_src,"lime.media.AudioBuffer","set_src",0x0231dd4c,"lime.media.AudioBuffer.set_src","lime/media/AudioBuffer.hx",394,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_70_fromBase64,"lime.media.AudioBuffer","fromBase64",0xbd10aef4,"lime.media.AudioBuffer.fromBase64","lime/media/AudioBuffer.hx",70,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_116_fromBytes,"lime.media.AudioBuffer","fromBytes",0x20c94aa6,"lime.media.AudioBuffer.fromBytes","lime/media/AudioBuffer.hx",116,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_149_fromFile,"lime.media.AudioBuffer","fromFile",0x1084eca1,"lime.media.AudioBuffer.fromFile","lime/media/AudioBuffer.hx",149,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_200_fromFiles,"lime.media.AudioBuffer","fromFiles",0x63ca20b2,"lime.media.AudioBuffer.fromFiles","lime/media/AudioBuffer.hx",200,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_226_fromVorbisFile,"lime.media.AudioBuffer","fromVorbisFile",0x6dde6b54,"lime.media.AudioBuffer.fromVorbisFile","lime/media/AudioBuffer.hx",226,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_297_loadFromFile,"lime.media.AudioBuffer","loadFromFile",0x735d4267,"lime.media.AudioBuffer.loadFromFile","lime/media/AudioBuffer.hx",297,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_246_loadFromFile,"lime.media.AudioBuffer","loadFromFile",0x735d4267,"lime.media.AudioBuffer.loadFromFile","lime/media/AudioBuffer.hx",246,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_335_loadFromFiles,"lime.media.AudioBuffer","loadFromFiles",0x7e3cd82c,"lime.media.AudioBuffer.loadFromFiles","lime/media/AudioBuffer.hx",335,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_310_loadFromFiles,"lime.media.AudioBuffer","loadFromFiles",0x7e3cd82c,"lime.media.AudioBuffer.loadFromFiles","lime/media/AudioBuffer.hx",310,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_342___getCodec,"lime.media.AudioBuffer","__getCodec",0x720a859b,"lime.media.AudioBuffer.__getCodec","lime/media/AudioBuffer.hx",342,0xf6fabaad)
namespace lime{
namespace media{

void AudioBuffer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_60_new)
            	}

Dynamic AudioBuffer_obj::__CreateEmpty() { return new AudioBuffer_obj; }

void *AudioBuffer_obj::_hx_vtable = 0;

Dynamic AudioBuffer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AudioBuffer_obj > _hx_result = new AudioBuffer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AudioBuffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2df176eb;
}

void AudioBuffer_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_63_dispose)
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioBuffer_obj,dispose,(void))

 ::Dynamic AudioBuffer_obj::get_src(){
            	HX_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_377_get_src)
HXDLIN( 377)		return this->_hx___srcVorbisFile;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioBuffer_obj,get_src,return )

 ::Dynamic AudioBuffer_obj::set_src( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_394_set_src)
HXDLIN( 394)		return (this->_hx___srcVorbisFile = ( ( ::lime::media::vorbis::VorbisFile)(value) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,set_src,return )

 ::lime::media::AudioBuffer AudioBuffer_obj::fromBase64(::String base64String){
            	HX_GC_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_70_fromBase64)
HXLINE(  71)		if (hx::IsNull( base64String )) {
HXLINE(  71)			return null();
            		}
HXLINE(  86)		::Array< ::String > base64StringSplit = base64String.split(HX_(",",2c,00,00,00));
HXLINE(  87)		::String base64StringNoEncoding = base64StringSplit->__get((base64StringSplit->length - (int)1));
HXLINE(  88)		 ::haxe::io::Bytes bytes = ::haxe::crypto::Base64_obj::decode(base64StringNoEncoding,null());
HXLINE(  89)		 ::lime::media::AudioBuffer audioBuffer =  ::lime::media::AudioBuffer_obj::__alloc( HX_CTX );
HXLINE(  90)		 ::haxe::io::Bytes buffer = ::haxe::io::Bytes_obj::alloc((int)0);
HXDLIN(  90)		 ::lime::utils::ArrayBufferView this1;
HXDLIN(  90)		if (hx::IsNotNull( buffer )) {
HXLINE(  90)			 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)4);
HXDLIN(  90)			int in_byteOffset = (int)0;
HXDLIN(  90)			if ((in_byteOffset < (int)0)) {
HXLINE(  90)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN(  90)			if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != (int)0)) {
HXLINE(  90)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN(  90)			int bufferByteLength = buffer->length;
HXDLIN(  90)			int elementSize = _this->bytesPerElement;
HXDLIN(  90)			int newByteLength = bufferByteLength;
HXDLIN(  90)			{
HXLINE(  90)				newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN(  90)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE(  90)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN(  90)				if ((newByteLength < (int)0)) {
HXLINE(  90)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN(  90)			_this->buffer = buffer;
HXDLIN(  90)			_this->byteOffset = in_byteOffset;
HXDLIN(  90)			_this->byteLength = newByteLength;
HXDLIN(  90)			_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN(  90)			this1 = _this;
            		}
            		else {
HXLINE(  90)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            		}
HXDLIN(  90)		audioBuffer->data = this1;
HXLINE(  92)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_audio_load_bytes(hx::DynamicPtr(bytes),hx::DynamicPtr(audioBuffer))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,fromBase64,return )

 ::lime::media::AudioBuffer AudioBuffer_obj::fromBytes( ::haxe::io::Bytes bytes){
            	HX_GC_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_116_fromBytes)
HXLINE( 117)		if (hx::IsNull( bytes )) {
HXLINE( 117)			return null();
            		}
HXLINE( 126)		 ::lime::media::AudioBuffer audioBuffer =  ::lime::media::AudioBuffer_obj::__alloc( HX_CTX );
HXLINE( 127)		 ::haxe::io::Bytes buffer = ::haxe::io::Bytes_obj::alloc((int)0);
HXDLIN( 127)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 127)		if (hx::IsNotNull( buffer )) {
HXLINE( 127)			 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)4);
HXDLIN( 127)			int in_byteOffset = (int)0;
HXDLIN( 127)			if ((in_byteOffset < (int)0)) {
HXLINE( 127)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 127)			if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != (int)0)) {
HXLINE( 127)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 127)			int bufferByteLength = buffer->length;
HXDLIN( 127)			int elementSize = _this->bytesPerElement;
HXDLIN( 127)			int newByteLength = bufferByteLength;
HXDLIN( 127)			{
HXLINE( 127)				newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 127)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE( 127)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN( 127)				if ((newByteLength < (int)0)) {
HXLINE( 127)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN( 127)			_this->buffer = buffer;
HXDLIN( 127)			_this->byteOffset = in_byteOffset;
HXDLIN( 127)			_this->byteLength = newByteLength;
HXDLIN( 127)			_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN( 127)			this1 = _this;
            		}
            		else {
HXLINE( 127)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            		}
HXDLIN( 127)		audioBuffer->data = this1;
HXLINE( 129)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_audio_load_bytes(hx::DynamicPtr(bytes),hx::DynamicPtr(audioBuffer))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,fromBytes,return )

 ::lime::media::AudioBuffer AudioBuffer_obj::fromFile(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_149_fromFile)
HXLINE( 150)		if (hx::IsNull( path )) {
HXLINE( 150)			return null();
            		}
HXLINE( 175)		 ::lime::media::AudioBuffer audioBuffer =  ::lime::media::AudioBuffer_obj::__alloc( HX_CTX );
HXLINE( 176)		 ::haxe::io::Bytes buffer = ::haxe::io::Bytes_obj::alloc((int)0);
HXDLIN( 176)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 176)		if (hx::IsNotNull( buffer )) {
HXLINE( 176)			 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)4);
HXDLIN( 176)			int in_byteOffset = (int)0;
HXDLIN( 176)			if ((in_byteOffset < (int)0)) {
HXLINE( 176)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 176)			if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != (int)0)) {
HXLINE( 176)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 176)			int bufferByteLength = buffer->length;
HXDLIN( 176)			int elementSize = _this->bytesPerElement;
HXDLIN( 176)			int newByteLength = bufferByteLength;
HXDLIN( 176)			{
HXLINE( 176)				newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 176)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE( 176)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN( 176)				if ((newByteLength < (int)0)) {
HXLINE( 176)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN( 176)			_this->buffer = buffer;
HXDLIN( 176)			_this->byteOffset = in_byteOffset;
HXDLIN( 176)			_this->byteLength = newByteLength;
HXDLIN( 176)			_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN( 176)			this1 = _this;
            		}
            		else {
HXLINE( 176)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            		}
HXDLIN( 176)		audioBuffer->data = this1;
HXLINE( 178)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_audio_load_file(hx::DynamicPtr(path),hx::DynamicPtr(audioBuffer))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,fromFile,return )

 ::lime::media::AudioBuffer AudioBuffer_obj::fromFiles(::Array< ::String > paths){
            	HX_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_200_fromFiles)
HXLINE( 212)		 ::lime::media::AudioBuffer buffer = null();
HXLINE( 214)		{
HXLINE( 214)			int _g = (int)0;
HXDLIN( 214)			while((_g < paths->length)){
HXLINE( 214)				::String path = paths->__get(_g);
HXDLIN( 214)				_g = (_g + (int)1);
HXLINE( 216)				buffer = ::lime::media::AudioBuffer_obj::fromFile(path);
HXLINE( 217)				if (hx::IsNotNull( buffer )) {
HXLINE( 217)					goto _hx_goto_7;
            				}
            			}
            			_hx_goto_7:;
            		}
HXLINE( 220)		return buffer;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,fromFiles,return )

 ::lime::media::AudioBuffer AudioBuffer_obj::fromVorbisFile( ::lime::media::vorbis::VorbisFile vorbisFile){
            	HX_GC_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_226_fromVorbisFile)
HXLINE( 227)		if (hx::IsNull( vorbisFile )) {
HXLINE( 227)			return null();
            		}
HXLINE( 229)		 ::lime::media::vorbis::VorbisInfo info = vorbisFile->info(null());
HXLINE( 231)		 ::lime::media::AudioBuffer audioBuffer =  ::lime::media::AudioBuffer_obj::__alloc( HX_CTX );
HXLINE( 232)		audioBuffer->channels = info->channels;
HXLINE( 233)		audioBuffer->sampleRate = info->rate;
HXLINE( 234)		audioBuffer->bitsPerSample = (int)16;
HXLINE( 235)		audioBuffer->_hx___srcVorbisFile = vorbisFile;
HXLINE( 237)		return audioBuffer;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,fromVorbisFile,return )

 ::lime::app::Future AudioBuffer_obj::loadFromFile(::String path){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::lime::app::Future _hx_run( ::lime::media::AudioBuffer buffer){
            			HX_GC_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_297_loadFromFile)
HXLINE( 297)			if (hx::IsNotNull( buffer )) {
HXLINE( 299)				return ::lime::app::Future_obj::withValue(buffer);
            			}
            			else {
HXLINE( 303)				return ::lime::app::Future_obj::withError(HX_("",00,00,00,00));
            			}
HXLINE( 297)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_246_loadFromFile)
HXLINE( 294)		 ::lime::net::_HTTPRequest_lime_media_AudioBuffer request =  ::lime::net::_HTTPRequest_lime_media_AudioBuffer_obj::__alloc( HX_CTX ,null());
HXLINE( 295)		return request->load(path)->then( ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,loadFromFile,return )

 ::lime::app::Future AudioBuffer_obj::loadFromFiles(::Array< ::String > paths){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0,::Array< ::String >,paths) HXARGC(0)
            		 ::lime::media::AudioBuffer _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_335_loadFromFiles)
HXLINE( 335)			return ::lime::media::AudioBuffer_obj::fromFiles(paths);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_GC_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_310_loadFromFiles)
HXLINE( 311)		 ::lime::app::Promise_lime_media_AudioBuffer promise =  ::lime::app::Promise_lime_media_AudioBuffer_obj::__alloc( HX_CTX );
HXLINE( 335)		promise->completeWith( ::lime::app::Future_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0(paths)),true));
HXLINE( 338)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,loadFromFiles,return )

::String AudioBuffer_obj::_hx___getCodec( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_342___getCodec)
HXLINE( 343)		::String signature = bytes->getString((int)0,(int)4,null());
HXLINE( 345)		::String _hx_switch_0 = signature;
            		if (  (_hx_switch_0==HX_("OggS",44,5d,86,34)) ){
HXLINE( 348)			return HX_("audio/ogg",56,37,42,54);
HXDLIN( 348)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("RIFF",b7,20,6b,36)) ){
HXLINE( 351)			if ((bytes->getString((int)8,(int)4,null()) == HX_("WAVE",b9,2d,b3,39))) {
HXLINE( 352)				return HX_("audio/wav",33,44,48,54);
            			}
            			else {
HXLINE( 354)				int _g = bytes->b->__get((int)2);
HXDLIN( 354)				int _g1 = bytes->b->__get((int)1);
HXDLIN( 354)				int _g2 = bytes->b->__get((int)0);
HXDLIN( 354)				switch((int)(_g2)){
            					case (int)73: {
HXLINE( 354)						if ((_g1 == (int)68)) {
HXLINE( 354)							if ((_g == (int)51)) {
HXLINE( 356)								return HX_("audio/mp3",77,ba,40,54);
            							}
            						}
            					}
            					break;
            					case (int)255: {
HXLINE( 354)						switch((int)(_g1)){
            							case (int)243: case (int)250: case (int)251: {
HXLINE( 356)								return HX_("audio/mp3",77,ba,40,54);
            							}
            							break;
            							default:{
            							}
            						}
            					}
            					break;
            					default:{
            					}
            				}
            			}
HXLINE( 351)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("fLaC",68,c3,a5,43)) ){
HXLINE( 350)			return HX_("audio/flac",c1,0e,bf,5f);
HXDLIN( 350)			goto _hx_goto_14;
            		}
            		/* default */{
HXLINE( 354)			int _g3 = bytes->b->__get((int)2);
HXDLIN( 354)			int _g11 = bytes->b->__get((int)1);
HXDLIN( 354)			int _g21 = bytes->b->__get((int)0);
HXDLIN( 354)			switch((int)(_g21)){
            				case (int)73: {
HXLINE( 354)					if ((_g11 == (int)68)) {
HXLINE( 354)						if ((_g3 == (int)51)) {
HXLINE( 356)							return HX_("audio/mp3",77,ba,40,54);
            						}
            					}
            				}
            				break;
            				case (int)255: {
HXLINE( 354)					switch((int)(_g11)){
            						case (int)243: case (int)250: case (int)251: {
HXLINE( 356)							return HX_("audio/mp3",77,ba,40,54);
            						}
            						break;
            						default:{
            						}
            					}
            				}
            				break;
            				default:{
            				}
            			}
            		}
            		_hx_goto_14:;
HXLINE( 361)		::lime::utils::Log_obj::error(HX_("Unsupported sound format",d3,74,34,38),hx::SourceInfo(HX_("AudioBuffer.hx",28,d6,7b,8c),361,HX_("lime.media.AudioBuffer",33,70,4b,3a),HX_("__getCodec",40,d9,65,4d)));
HXLINE( 362)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,_hx___getCodec,return )


hx::ObjectPtr< AudioBuffer_obj > AudioBuffer_obj::__new() {
	hx::ObjectPtr< AudioBuffer_obj > __this = new AudioBuffer_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< AudioBuffer_obj > AudioBuffer_obj::__alloc(hx::Ctx *_hx_ctx) {
	AudioBuffer_obj *__this = (AudioBuffer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AudioBuffer_obj), true, "lime.media.AudioBuffer"));
	*(void **)__this = AudioBuffer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AudioBuffer_obj::AudioBuffer_obj()
{
}

void AudioBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioBuffer);
	HX_MARK_MEMBER_NAME(bitsPerSample,"bitsPerSample");
	HX_MARK_MEMBER_NAME(channels,"channels");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(sampleRate,"sampleRate");
	HX_MARK_MEMBER_NAME(_hx___srcAudio,"__srcAudio");
	HX_MARK_MEMBER_NAME(_hx___srcBuffer,"__srcBuffer");
	HX_MARK_MEMBER_NAME(_hx___srcCustom,"__srcCustom");
	HX_MARK_MEMBER_NAME(_hx___srcHowl,"__srcHowl");
	HX_MARK_MEMBER_NAME(_hx___srcSound,"__srcSound");
	HX_MARK_MEMBER_NAME(_hx___srcVorbisFile,"__srcVorbisFile");
	HX_MARK_END_CLASS();
}

void AudioBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitsPerSample,"bitsPerSample");
	HX_VISIT_MEMBER_NAME(channels,"channels");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(sampleRate,"sampleRate");
	HX_VISIT_MEMBER_NAME(_hx___srcAudio,"__srcAudio");
	HX_VISIT_MEMBER_NAME(_hx___srcBuffer,"__srcBuffer");
	HX_VISIT_MEMBER_NAME(_hx___srcCustom,"__srcCustom");
	HX_VISIT_MEMBER_NAME(_hx___srcHowl,"__srcHowl");
	HX_VISIT_MEMBER_NAME(_hx___srcSound,"__srcSound");
	HX_VISIT_MEMBER_NAME(_hx___srcVorbisFile,"__srcVorbisFile");
}

hx::Val AudioBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_src() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_src") ) { return hx::Val( get_src_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_src") ) { return hx::Val( set_src_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { return hx::Val( channels ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__srcHowl") ) { return hx::Val( _hx___srcHowl ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sampleRate") ) { return hx::Val( sampleRate ); }
		if (HX_FIELD_EQ(inName,"__srcAudio") ) { return hx::Val( _hx___srcAudio ); }
		if (HX_FIELD_EQ(inName,"__srcSound") ) { return hx::Val( _hx___srcSound ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__srcBuffer") ) { return hx::Val( _hx___srcBuffer ); }
		if (HX_FIELD_EQ(inName,"__srcCustom") ) { return hx::Val( _hx___srcCustom ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bitsPerSample") ) { return hx::Val( bitsPerSample ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__srcVorbisFile") ) { return hx::Val( _hx___srcVorbisFile ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AudioBuffer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromFiles") ) { outValue = fromFiles_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromBase64") ) { outValue = fromBase64_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__getCodec") ) { outValue = _hx___getCodec_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromFile") ) { outValue = loadFromFile_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadFromFiles") ) { outValue = loadFromFiles_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromVorbisFile") ) { outValue = fromVorbisFile_dyn(); return true; }
	}
	return false;
}

hx::Val AudioBuffer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_src(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__srcHowl") ) { _hx___srcHowl=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sampleRate") ) { sampleRate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcAudio") ) { _hx___srcAudio=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcSound") ) { _hx___srcSound=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__srcBuffer") ) { _hx___srcBuffer=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcCustom") ) { _hx___srcCustom=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bitsPerSample") ) { bitsPerSample=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__srcVorbisFile") ) { _hx___srcVorbisFile=inValue.Cast<  ::lime::media::vorbis::VorbisFile >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitsPerSample","\x01","\x01","\x36","\xc4"));
	outFields->push(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("sampleRate","\x2a","\x3c","\x4c","\x67"));
	outFields->push(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"));
	outFields->push(HX_HCSTRING("__srcAudio","\x72","\x3a","\x73","\x29"));
	outFields->push(HX_HCSTRING("__srcBuffer","\xe4","\x63","\x0b","\x83"));
	outFields->push(HX_HCSTRING("__srcCustom","\x95","\x2e","\x09","\xf2"));
	outFields->push(HX_HCSTRING("__srcHowl","\xc0","\x38","\xb9","\xf4"));
	outFields->push(HX_HCSTRING("__srcSound","\x6b","\x4e","\xbf","\x82"));
	outFields->push(HX_HCSTRING("__srcVorbisFile","\x53","\x8c","\xee","\xce"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo AudioBuffer_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(AudioBuffer_obj,bitsPerSample),HX_HCSTRING("bitsPerSample","\x01","\x01","\x36","\xc4")},
	{hx::fsInt,(int)offsetof(AudioBuffer_obj,channels),HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(AudioBuffer_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsInt,(int)offsetof(AudioBuffer_obj,sampleRate),HX_HCSTRING("sampleRate","\x2a","\x3c","\x4c","\x67")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioBuffer_obj,_hx___srcAudio),HX_HCSTRING("__srcAudio","\x72","\x3a","\x73","\x29")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioBuffer_obj,_hx___srcBuffer),HX_HCSTRING("__srcBuffer","\xe4","\x63","\x0b","\x83")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioBuffer_obj,_hx___srcCustom),HX_HCSTRING("__srcCustom","\x95","\x2e","\x09","\xf2")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioBuffer_obj,_hx___srcHowl),HX_HCSTRING("__srcHowl","\xc0","\x38","\xb9","\xf4")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioBuffer_obj,_hx___srcSound),HX_HCSTRING("__srcSound","\x6b","\x4e","\xbf","\x82")},
	{hx::fsObject /*::lime::media::vorbis::VorbisFile*/ ,(int)offsetof(AudioBuffer_obj,_hx___srcVorbisFile),HX_HCSTRING("__srcVorbisFile","\x53","\x8c","\xee","\xce")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AudioBuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String AudioBuffer_obj_sMemberFields[] = {
	HX_HCSTRING("bitsPerSample","\x01","\x01","\x36","\xc4"),
	HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("sampleRate","\x2a","\x3c","\x4c","\x67"),
	HX_HCSTRING("__srcAudio","\x72","\x3a","\x73","\x29"),
	HX_HCSTRING("__srcBuffer","\xe4","\x63","\x0b","\x83"),
	HX_HCSTRING("__srcCustom","\x95","\x2e","\x09","\xf2"),
	HX_HCSTRING("__srcHowl","\xc0","\x38","\xb9","\xf4"),
	HX_HCSTRING("__srcSound","\x6b","\x4e","\xbf","\x82"),
	HX_HCSTRING("__srcVorbisFile","\x53","\x8c","\xee","\xce"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("get_src","\x7b","\x6f","\xcc","\x26"),
	HX_HCSTRING("set_src","\x87","\x00","\xce","\x19"),
	::String(null()) };

static void AudioBuffer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AudioBuffer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioBuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class AudioBuffer_obj::__mClass;

static ::String AudioBuffer_obj_sStaticFields[] = {
	HX_HCSTRING("fromBase64","\x99","\x02","\x6c","\x98"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("fromFiles","\xad","\xc8","\x21","\xb5"),
	HX_HCSTRING("fromVorbisFile","\x79","\xf5","\xfc","\xd5"),
	HX_HCSTRING("loadFromFile","\x4c","\x89","\xf0","\x5a"),
	HX_HCSTRING("loadFromFiles","\xa7","\x99","\x87","\x37"),
	HX_HCSTRING("__getCodec","\x40","\xd9","\x65","\x4d"),
	::String(null())
};

void AudioBuffer_obj::__register()
{
	hx::Object *dummy = new AudioBuffer_obj;
	AudioBuffer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.media.AudioBuffer","\x33","\x70","\x4b","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AudioBuffer_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AudioBuffer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(AudioBuffer_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AudioBuffer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AudioBuffer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AudioBuffer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AudioBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AudioBuffer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace media