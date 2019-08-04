// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DefaultPreloader
#include <openfl/display/DefaultPreloader.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a3b7e47404dab77a_117_new,"openfl.display.DefaultPreloader","new",0xd9ecb051,"openfl.display.DefaultPreloader.new","openfl/display/Preloader.hx",117,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_163_getBackgroundColor,"openfl.display.DefaultPreloader","getBackgroundColor",0xe99da5ce,"openfl.display.DefaultPreloader.getBackgroundColor","openfl/display/Preloader.hx",163,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_177_getHeight,"openfl.display.DefaultPreloader","getHeight",0xf2617bce,"openfl.display.DefaultPreloader.getHeight","openfl/display/Preloader.hx",177,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_191_getWidth,"openfl.display.DefaultPreloader","getWidth",0x7b1a7bff,"openfl.display.DefaultPreloader.getWidth","openfl/display/Preloader.hx",191,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_206_onInit,"openfl.display.DefaultPreloader","onInit",0x238e307e,"openfl.display.DefaultPreloader.onInit","openfl/display/Preloader.hx",206,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_210_onLoaded,"openfl.display.DefaultPreloader","onLoaded",0x88fcf4f3,"openfl.display.DefaultPreloader.onLoaded","openfl/display/Preloader.hx",210,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_217_onUpdate,"openfl.display.DefaultPreloader","onUpdate",0xb79332f7,"openfl.display.DefaultPreloader.onUpdate","openfl/display/Preloader.hx",217,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_235_this_onAddedToStage,"openfl.display.DefaultPreloader","this_onAddedToStage",0xa7de3014,"openfl.display.DefaultPreloader.this_onAddedToStage","openfl/display/Preloader.hx",235,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_246_this_onComplete,"openfl.display.DefaultPreloader","this_onComplete",0x228a21ea,"openfl.display.DefaultPreloader.this_onComplete","openfl/display/Preloader.hx",246,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_256_this_onEnterFrame,"openfl.display.DefaultPreloader","this_onEnterFrame",0x72c19366,"openfl.display.DefaultPreloader.this_onEnterFrame","openfl/display/Preloader.hx",256,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_271_this_onProgress,"openfl.display.DefaultPreloader","this_onProgress",0x28ed18de,"openfl.display.DefaultPreloader.this_onProgress","openfl/display/Preloader.hx",271,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_109_boot,"openfl.display.DefaultPreloader","boot",0xcd469721,"openfl.display.DefaultPreloader.boot","openfl/display/Preloader.hx",109,0xc399db74)
namespace openfl{
namespace display{

void DefaultPreloader_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_a3b7e47404dab77a_117_new)
HXLINE( 118)		super::__construct();
HXLINE( 120)		int backgroundColor = this->getBackgroundColor();
HXLINE( 121)		int r = ((int)((int)backgroundColor >> (int)(int)16) & (int)(int)255);
HXLINE( 122)		int g = ((int)((int)backgroundColor >> (int)(int)8) & (int)(int)255);
HXLINE( 123)		int b = ((int)backgroundColor & (int)(int)255);
HXLINE( 124)		Float perceivedLuminosity = (((((Float)0.299) * r) + (((Float)0.587) * g)) + (((Float)0.114) * b));
HXLINE( 125)		int color = (int)0;
HXLINE( 127)		if ((perceivedLuminosity < (int)70)) {
HXLINE( 129)			color = (int)16777215;
            		}
HXLINE( 132)		int x = (int)30;
HXLINE( 133)		int height = (int)7;
HXLINE( 134)		Float y = ((Float)this->getHeight() / (Float)(int)2);
HXDLIN( 134)		Float y1 = (y - ((Float)height / (Float)(int)2));
HXLINE( 135)		Float width = this->getWidth();
HXDLIN( 135)		Float width1 = (width - (x * (int)2));
HXLINE( 137)		int padding = (int)2;
HXLINE( 139)		this->outline =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE( 140)		this->outline->get_graphics()->beginFill(color,((Float)0.07));
HXLINE( 141)		this->outline->get_graphics()->drawRect((int)0,(int)0,width1,height);
HXLINE( 142)		this->outline->set_x(x);
HXLINE( 143)		this->outline->set_y(y1);
HXLINE( 144)		this->outline->set_alpha((int)0);
HXLINE( 145)		this->addChild(this->outline);
HXLINE( 147)		this->progress =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE( 148)		this->progress->get_graphics()->beginFill(color,((Float)0.35));
HXLINE( 149)		 ::openfl::display::Graphics _hx_tmp = this->progress->get_graphics();
HXDLIN( 149)		_hx_tmp->drawRect((int)0,(int)0,(width1 - (padding * (int)2)),(height - (padding * (int)2)));
HXLINE( 150)		 ::openfl::display::Sprite _hx_tmp1 = this->progress;
HXDLIN( 150)		_hx_tmp1->set_x((x + padding));
HXLINE( 151)		 ::openfl::display::Sprite _hx_tmp2 = this->progress;
HXDLIN( 151)		_hx_tmp2->set_y((y1 + padding));
HXLINE( 152)		this->progress->set_scaleX((int)0);
HXLINE( 153)		this->progress->set_alpha((int)0);
HXLINE( 154)		this->addChild(this->progress);
HXLINE( 156)		this->startAnimation = (::openfl::Lib_obj::getTimer() + (int)100);
HXLINE( 157)		this->endAnimation = (this->startAnimation + (int)1000);
HXLINE( 159)		this->addEventListener(HX_("addedToStage",63,22,55,0c),this->this_onAddedToStage_dyn(),null(),null(),null());
            	}

Dynamic DefaultPreloader_obj::__CreateEmpty() { return new DefaultPreloader_obj; }

void *DefaultPreloader_obj::_hx_vtable = 0;

Dynamic DefaultPreloader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DefaultPreloader_obj > _hx_result = new DefaultPreloader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DefaultPreloader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x17120186) {
		if (inClassId<=(int)0x0ddfced7) {
			if (inClassId<=(int)0x015b8e1b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x015b8e1b;
			} else {
				return inClassId==(int)0x0ddfced7;
			}
		} else {
			return inClassId==(int)0x17120186;
		}
	} else {
		if (inClassId<=(int)0x1b123bf8) {
			return inClassId==(int)0x19c29573 || inClassId==(int)0x1b123bf8;
		} else {
			return inClassId==(int)0x3f2b00af;
		}
	}
}

int DefaultPreloader_obj::getBackgroundColor(){
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_163_getBackgroundColor)
HXLINE( 164)		 ::Dynamic attributes = ::openfl::Lib_obj::get_current()->stage->window->context->attributes;
HXLINE( 166)		bool _hx_tmp;
HXDLIN( 166)		if (::Reflect_obj::hasField(attributes,HX_("background",ee,93,1d,26))) {
HXLINE( 166)			_hx_tmp = hx::IsNotNull( attributes->__Field(HX_("background",ee,93,1d,26),hx::paccDynamic) );
            		}
            		else {
HXLINE( 166)			_hx_tmp = false;
            		}
HXDLIN( 166)		if (_hx_tmp) {
HXLINE( 168)			return ( (int)(attributes->__Field(HX_("background",ee,93,1d,26),hx::paccDynamic)) );
            		}
            		else {
HXLINE( 172)			return (int)0;
            		}
HXLINE( 166)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPreloader_obj,getBackgroundColor,return )

Float DefaultPreloader_obj::getHeight(){
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_177_getHeight)
HXLINE( 178)		int height = ::openfl::Lib_obj::get_current()->stage->window->_hx___height;
HXLINE( 180)		if ((height > (int)0)) {
HXLINE( 182)			return height;
            		}
            		else {
HXLINE( 186)			return ::openfl::Lib_obj::get_current()->stage->stageHeight;
            		}
HXLINE( 180)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPreloader_obj,getHeight,return )

Float DefaultPreloader_obj::getWidth(){
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_191_getWidth)
HXLINE( 192)		int width = ::openfl::Lib_obj::get_current()->stage->window->_hx___width;
HXLINE( 194)		if ((width > (int)0)) {
HXLINE( 196)			return width;
            		}
            		else {
HXLINE( 200)			return ::openfl::Lib_obj::get_current()->stage->stageWidth;
            		}
HXLINE( 194)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPreloader_obj,getWidth,return )

void DefaultPreloader_obj::onInit(){
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_206_onInit)
HXDLIN( 206)		this->addEventListener(HX_("enterFrame",f5,03,50,02),this->this_onEnterFrame_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPreloader_obj,onInit,(void))

void DefaultPreloader_obj::onLoaded(){
            	HX_GC_STACKFRAME(&_hx_pos_a3b7e47404dab77a_210_onLoaded)
HXLINE( 211)		this->removeEventListener(HX_("enterFrame",f5,03,50,02),this->this_onEnterFrame_dyn(),null());
HXLINE( 213)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("unload",ff,a0,8c,65),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPreloader_obj,onLoaded,(void))

void DefaultPreloader_obj::onUpdate(int bytesLoaded,int bytesTotal){
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_217_onUpdate)
HXLINE( 218)		Float percentLoaded = ((Float)0.0);
HXLINE( 220)		if ((bytesTotal > (int)0)) {
HXLINE( 222)			percentLoaded = ((Float)bytesLoaded / (Float)bytesTotal);
HXLINE( 224)			if ((percentLoaded > (int)1)) {
HXLINE( 226)				percentLoaded = (int)1;
            			}
            		}
HXLINE( 230)		this->progress->set_scaleX(percentLoaded);
            	}


HX_DEFINE_DYNAMIC_FUNC2(DefaultPreloader_obj,onUpdate,(void))

void DefaultPreloader_obj::this_onAddedToStage( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_235_this_onAddedToStage)
HXLINE( 236)		this->removeEventListener(HX_("addedToStage",63,22,55,0c),this->this_onAddedToStage_dyn(),null());
HXLINE( 238)		this->onInit();
HXLINE( 239)		int _hx_tmp = this->get_loaderInfo()->bytesLoaded;
HXDLIN( 239)		this->onUpdate(_hx_tmp,this->get_loaderInfo()->bytesTotal);
HXLINE( 241)		this->addEventListener(HX_("progress",ad,f7,2a,86),this->this_onProgress_dyn(),null(),null(),null());
HXLINE( 242)		this->addEventListener(HX_("complete",b9,00,c8,7f),this->this_onComplete_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPreloader_obj,this_onAddedToStage,(void))

void DefaultPreloader_obj::this_onComplete( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_246_this_onComplete)
HXLINE( 247)		event->preventDefault();
HXLINE( 249)		this->removeEventListener(HX_("progress",ad,f7,2a,86),this->this_onProgress_dyn(),null());
HXLINE( 250)		this->removeEventListener(HX_("complete",b9,00,c8,7f),this->this_onComplete_dyn(),null());
HXLINE( 252)		this->onLoaded();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPreloader_obj,this_onComplete,(void))

void DefaultPreloader_obj::this_onEnterFrame( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_256_this_onEnterFrame)
HXLINE( 257)		int elapsed = ::openfl::Lib_obj::getTimer();
HXDLIN( 257)		int elapsed1 = (elapsed - this->startAnimation);
HXLINE( 258)		int total = (this->endAnimation - this->startAnimation);
HXLINE( 260)		Float percent = ((Float)elapsed1 / (Float)total);
HXLINE( 262)		if ((percent < (int)0)) {
HXLINE( 262)			percent = (int)0;
            		}
HXLINE( 263)		if ((percent > (int)1)) {
HXLINE( 263)			percent = (int)1;
            		}
HXLINE( 265)		this->outline->set_alpha(percent);
HXLINE( 266)		this->progress->set_alpha(percent);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPreloader_obj,this_onEnterFrame,(void))

void DefaultPreloader_obj::this_onProgress( ::openfl::events::ProgressEvent event){
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_271_this_onProgress)
HXDLIN( 271)		int _hx_tmp = ::Std_obj::_hx_int(event->bytesLoaded);
HXDLIN( 271)		this->onUpdate(_hx_tmp,::Std_obj::_hx_int(event->bytesTotal));
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPreloader_obj,this_onProgress,(void))


hx::ObjectPtr< DefaultPreloader_obj > DefaultPreloader_obj::__new() {
	hx::ObjectPtr< DefaultPreloader_obj > __this = new DefaultPreloader_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< DefaultPreloader_obj > DefaultPreloader_obj::__alloc(hx::Ctx *_hx_ctx) {
	DefaultPreloader_obj *__this = (DefaultPreloader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DefaultPreloader_obj), true, "openfl.display.DefaultPreloader"));
	*(void **)__this = DefaultPreloader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DefaultPreloader_obj::DefaultPreloader_obj()
{
}

void DefaultPreloader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultPreloader);
	HX_MARK_MEMBER_NAME(endAnimation,"endAnimation");
	HX_MARK_MEMBER_NAME(outline,"outline");
	HX_MARK_MEMBER_NAME(progress,"progress");
	HX_MARK_MEMBER_NAME(startAnimation,"startAnimation");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DefaultPreloader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(endAnimation,"endAnimation");
	HX_VISIT_MEMBER_NAME(outline,"outline");
	HX_VISIT_MEMBER_NAME(progress,"progress");
	HX_VISIT_MEMBER_NAME(startAnimation,"startAnimation");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

hx::Val DefaultPreloader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"onInit") ) { return hx::Val( onInit_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { return hx::Val( outline ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { return hx::Val( progress ); }
		if (HX_FIELD_EQ(inName,"getWidth") ) { return hx::Val( getWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"onLoaded") ) { return hx::Val( onLoaded_dyn() ); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return hx::Val( onUpdate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHeight") ) { return hx::Val( getHeight_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endAnimation") ) { return hx::Val( endAnimation ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"startAnimation") ) { return hx::Val( startAnimation ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"this_onComplete") ) { return hx::Val( this_onComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"this_onProgress") ) { return hx::Val( this_onProgress_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"this_onEnterFrame") ) { return hx::Val( this_onEnterFrame_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getBackgroundColor") ) { return hx::Val( getBackgroundColor_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"this_onAddedToStage") ) { return hx::Val( this_onAddedToStage_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val DefaultPreloader_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { outline=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { progress=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endAnimation") ) { endAnimation=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"startAnimation") ) { startAnimation=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultPreloader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("endAnimation","\xa9","\xf7","\x36","\x5a"));
	outFields->push(HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"));
	outFields->push(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"));
	outFields->push(HX_HCSTRING("startAnimation","\x42","\xbe","\x6f","\x6a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo DefaultPreloader_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(DefaultPreloader_obj,endAnimation),HX_HCSTRING("endAnimation","\xa9","\xf7","\x36","\x5a")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(DefaultPreloader_obj,outline),HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(DefaultPreloader_obj,progress),HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86")},
	{hx::fsInt,(int)offsetof(DefaultPreloader_obj,startAnimation),HX_HCSTRING("startAnimation","\x42","\xbe","\x6f","\x6a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *DefaultPreloader_obj_sStaticStorageInfo = 0;
#endif

static ::String DefaultPreloader_obj_sMemberFields[] = {
	HX_HCSTRING("endAnimation","\xa9","\xf7","\x36","\x5a"),
	HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"),
	HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),
	HX_HCSTRING("startAnimation","\x42","\xbe","\x6f","\x6a"),
	HX_HCSTRING("getBackgroundColor","\x9f","\xee","\x0c","\xc0"),
	HX_HCSTRING("getHeight","\x1d","\x91","\xa2","\x7e"),
	HX_HCSTRING("getWidth","\x90","\xc5","\x39","\x2a"),
	HX_HCSTRING("onInit","\xcf","\x43","\x45","\xe8"),
	HX_HCSTRING("onLoaded","\x84","\x3e","\x1c","\x38"),
	HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"),
	HX_HCSTRING("this_onAddedToStage","\x23","\x9e","\xce","\x72"),
	HX_HCSTRING("this_onComplete","\x79","\x9c","\x68","\xed"),
	HX_HCSTRING("this_onEnterFrame","\xb5","\x0f","\x1f","\x8e"),
	HX_HCSTRING("this_onProgress","\x6d","\x93","\xcb","\xf3"),
	::String(null()) };

static void DefaultPreloader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultPreloader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DefaultPreloader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultPreloader_obj::__mClass,"__mClass");
};

#endif

hx::Class DefaultPreloader_obj::__mClass;

void DefaultPreloader_obj::__register()
{
	hx::Object *dummy = new DefaultPreloader_obj;
	DefaultPreloader_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.DefaultPreloader","\xdf","\x33","\x40","\x45");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DefaultPreloader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DefaultPreloader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DefaultPreloader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DefaultPreloader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DefaultPreloader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DefaultPreloader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DefaultPreloader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_109_boot)
HXDLIN( 109)		__mClass->__meta__ =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display