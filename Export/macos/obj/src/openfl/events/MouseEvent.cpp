// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_93a9f8214e96e0e7_629_new,"openfl.events.MouseEvent","new",0x5c6da59e,"openfl.events.MouseEvent.new","openfl/events/MouseEvent.hx",629,0xd3783172)
HX_LOCAL_STACK_FRAME(_hx_pos_93a9f8214e96e0e7_650_clone,"openfl.events.MouseEvent","clone",0x3e8b341b,"openfl.events.MouseEvent.clone","openfl/events/MouseEvent.hx",650,0xd3783172)
HX_LOCAL_STACK_FRAME(_hx_pos_93a9f8214e96e0e7_661_toString,"openfl.events.MouseEvent","toString",0x2fb13aae,"openfl.events.MouseEvent.toString","openfl/events/MouseEvent.hx",661,0xd3783172)
static const ::String _hx_array_data_094f3eac_3[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("localX",8d,74,bf,59),HX_("localY",8e,74,bf,59),HX_("relatedObject",0a,bf,cb,e8),HX_("ctrlKey",b4,35,7d,61),HX_("altKey",f6,a7,ca,44),HX_("shiftKey",3d,92,9f,99),HX_("buttonDown",74,67,64,ac),HX_("delta",f8,e7,26,d7),
};
HX_LOCAL_STACK_FRAME(_hx_pos_93a9f8214e96e0e7_671_updateAfterEvent,"openfl.events.MouseEvent","updateAfterEvent",0xc76737c9,"openfl.events.MouseEvent.updateAfterEvent","openfl/events/MouseEvent.hx",671,0xd3783172)
HX_LOCAL_STACK_FRAME(_hx_pos_93a9f8214e96e0e7_675___create,"openfl.events.MouseEvent","__create",0x1b813c1e,"openfl.events.MouseEvent.__create","openfl/events/MouseEvent.hx",675,0xd3783172)
HX_LOCAL_STACK_FRAME(_hx_pos_93a9f8214e96e0e7_26_boot,"openfl.events.MouseEvent","boot",0x7b9c4534,"openfl.events.MouseEvent.boot","openfl/events/MouseEvent.hx",26,0xd3783172)
HX_LOCAL_STACK_FRAME(_hx_pos_93a9f8214e96e0e7_49_boot,"openfl.events.MouseEvent","boot",0x7b9c4534,"openfl.events.MouseEvent.boot","openfl/events/MouseEvent.hx",49,0xd3783172)
HX_LOCAL_STACK_FRAME(_hx_pos_93a9f8214e96e0e7_101_boot,"openfl.events.MouseEvent","boot",0x7b9c4534,"openfl.events.MouseEvent.boot","openfl/events/MouseEvent.hx",101,0xd3783172)
HX_LOCAL_STACK_FRAME(_hx_pos_93a9f8214e96e0e7_125_boot,"openfl.events.MouseEvent","boot",0x7b9c4534,"openfl.events.MouseEvent.boot","openfl/events/MouseEvent.hx",125,0xd3783172)
HX_LOCAL_STACK_FRAME(_hx_pos_93a9f8214e96e0e7_150_boot,"openfl.events.MouseEvent","boot",0x7b9c4534,"openfl.events.MouseEvent.boot","openfl/events/MouseEvent.hx",150,0xd3783172)
HX_LOCAL_STACK_FRAME(_hx_pos_93a9f8214e96e0e7_175_boot,"openfl.events.MouseEvent","boot",0x7b9c4534,"openfl.events.MouseEvent.boot","openfl/events/MouseEvent.hx",175,0xd3783172)
HX_LOCAL_STACK_FRAME(_hx_pos_93a9f8214e96e0e7_200_boot,"openfl.events.MouseEvent","boot",0x7b9c4534,"openfl.events.MouseEvent.boot","openfl/events/MouseEvent.hx",200,0xd3783172)
HX_LOCAL_STACK_FRAME(_hx_pos_93a9f8214e96e0e7_224_boot,"openfl.events.MouseEvent","boot",0x7b9c4534,"openfl.events.MouseEvent.boot","openfl/events/MouseEvent.hx",224,0xd3783172)
HX_LOCAL_STACK_FRAME(_hx_pos_93a9f8214e96e0e7_249_boot,"openfl.events.MouseEvent","boot",0x7b9c4534,"openfl.events.MouseEvent.boot","openfl/events/MouseEvent.hx",249,0xd3783172)
HX_LOCAL_STACK_FRAME(_hx_pos_93a9f8214e96e0e7_274_boot,"openfl.events.MouseEvent","boot",0x7b9c4534,"openfl.events.MouseEvent.boot","openfl/events/MouseEvent.hx",274,0xd3783172)
HX_LOCAL_STACK_FRAME(_hx_pos_93a9f8214e96e0e7_298_boot,"openfl.events.MouseEvent","boot",0x7b9c4534,"openfl.events.MouseEvent.boot","openfl/events/MouseEvent.hx",298,0xd3783172)
HX_LOCAL_STACK_FRAME(_hx_pos_93a9f8214e96e0e7_323_boot,"openfl.events.MouseEvent","boot",0x7b9c4534,"openfl.events.MouseEvent.boot","openfl/events/MouseEvent.hx",323,0xd3783172)
HX_LOCAL_STACK_FRAME(_hx_pos_93a9f8214e96e0e7_331_boot,"openfl.events.MouseEvent","boot",0x7b9c4534,"openfl.events.MouseEvent.boot","openfl/events/MouseEvent.hx",331,0xd3783172)
HX_LOCAL_STACK_FRAME(_hx_pos_93a9f8214e96e0e7_355_boot,"openfl.events.MouseEvent","boot",0x7b9c4534,"openfl.events.MouseEvent.boot","openfl/events/MouseEvent.hx",355,0xd3783172)
HX_LOCAL_STACK_FRAME(_hx_pos_93a9f8214e96e0e7_380_boot,"openfl.events.MouseEvent","boot",0x7b9c4534,"openfl.events.MouseEvent.boot","openfl/events/MouseEvent.hx",380,0xd3783172)
HX_LOCAL_STACK_FRAME(_hx_pos_93a9f8214e96e0e7_405_boot,"openfl.events.MouseEvent","boot",0x7b9c4534,"openfl.events.MouseEvent.boot","openfl/events/MouseEvent.hx",405,0xd3783172)
HX_LOCAL_STACK_FRAME(_hx_pos_93a9f8214e96e0e7_429_boot,"openfl.events.MouseEvent","boot",0x7b9c4534,"openfl.events.MouseEvent.boot","openfl/events/MouseEvent.hx",429,0xd3783172)
HX_LOCAL_STACK_FRAME(_hx_pos_93a9f8214e96e0e7_454_boot,"openfl.events.MouseEvent","boot",0x7b9c4534,"openfl.events.MouseEvent.boot","openfl/events/MouseEvent.hx",454,0xd3783172)
namespace openfl{
namespace events{

void MouseEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_localX,hx::Null< Float >  __o_localY, ::openfl::display::InteractiveObject relatedObject,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_buttonDown,hx::Null< int >  __o_delta,hx::Null< bool >  __o_commandKey,hx::Null< int >  __o_clickCount){
bool bubbles = __o_bubbles.Default(true);
bool cancelable = __o_cancelable.Default(false);
Float localX = __o_localX.Default(0);
Float localY = __o_localY.Default(0);
bool ctrlKey = __o_ctrlKey.Default(false);
bool altKey = __o_altKey.Default(false);
bool shiftKey = __o_shiftKey.Default(false);
bool buttonDown = __o_buttonDown.Default(false);
int delta = __o_delta.Default(0);
bool commandKey = __o_commandKey.Default(false);
int clickCount = __o_clickCount.Default(0);
            	HX_STACKFRAME(&_hx_pos_93a9f8214e96e0e7_629_new)
HXLINE( 630)		super::__construct(type,bubbles,cancelable);
HXLINE( 632)		this->shiftKey = shiftKey;
HXLINE( 633)		this->altKey = altKey;
HXLINE( 634)		this->ctrlKey = ctrlKey;
HXLINE( 635)		this->bubbles = bubbles;
HXLINE( 636)		this->relatedObject = relatedObject;
HXLINE( 637)		this->delta = delta;
HXLINE( 638)		this->localX = localX;
HXLINE( 639)		this->localY = localY;
HXLINE( 640)		this->buttonDown = buttonDown;
HXLINE( 641)		this->commandKey = commandKey;
HXLINE( 642)		this->clickCount = clickCount;
HXLINE( 644)		this->isRelatedObjectInaccessible = false;
HXLINE( 645)		this->stageX = ::Math_obj::NaN;
HXLINE( 646)		this->stageY = ::Math_obj::NaN;
            	}

Dynamic MouseEvent_obj::__CreateEmpty() { return new MouseEvent_obj; }

void *MouseEvent_obj::_hx_vtable = 0;

Dynamic MouseEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MouseEvent_obj > _hx_result = new MouseEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12]);
	return _hx_result;
}

bool MouseEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x05564ee2) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x05564ee2;
	} else {
		return inClassId==(int)0x3243040d;
	}
}

 ::openfl::events::Event MouseEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_93a9f8214e96e0e7_650_clone)
HXLINE( 651)		 ::openfl::events::MouseEvent event =  ::openfl::events::MouseEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable,this->localX,this->localY,this->relatedObject,this->ctrlKey,this->altKey,this->shiftKey,this->buttonDown,this->delta,this->commandKey,this->clickCount);
HXLINE( 653)		event->target = this->target;
HXLINE( 654)		event->currentTarget = this->currentTarget;
HXLINE( 655)		event->eventPhase = this->eventPhase;
HXLINE( 656)		return event;
            	}


::String MouseEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_93a9f8214e96e0e7_661_toString)
HXDLIN( 661)		return this->_hx___formatToString(HX_("MouseEvent",d5,bf,42,8a),::Array_obj< ::String >::fromData( _hx_array_data_094f3eac_3,11));
            	}


void MouseEvent_obj::updateAfterEvent(){
            	HX_STACKFRAME(&_hx_pos_93a9f8214e96e0e7_671_updateAfterEvent)
            	}


HX_DEFINE_DYNAMIC_FUNC0(MouseEvent_obj,updateAfterEvent,(void))

 ::lime::utils::ObjectPool MouseEvent_obj::_hx___pool;

::String MouseEvent_obj::CLICK;

::String MouseEvent_obj::DOUBLE_CLICK;

::String MouseEvent_obj::MIDDLE_CLICK;

::String MouseEvent_obj::MIDDLE_MOUSE_DOWN;

::String MouseEvent_obj::MIDDLE_MOUSE_UP;

::String MouseEvent_obj::MOUSE_DOWN;

::String MouseEvent_obj::MOUSE_MOVE;

::String MouseEvent_obj::MOUSE_OUT;

::String MouseEvent_obj::MOUSE_OVER;

::String MouseEvent_obj::MOUSE_UP;

::String MouseEvent_obj::MOUSE_WHEEL;

::String MouseEvent_obj::RELEASE_OUTSIDE;

::String MouseEvent_obj::RIGHT_CLICK;

::String MouseEvent_obj::RIGHT_MOUSE_DOWN;

::String MouseEvent_obj::RIGHT_MOUSE_UP;

::String MouseEvent_obj::ROLL_OUT;

::String MouseEvent_obj::ROLL_OVER;

bool MouseEvent_obj::_hx___altKey;

bool MouseEvent_obj::_hx___buttonDown;

bool MouseEvent_obj::_hx___commandKey;

bool MouseEvent_obj::_hx___ctrlKey;

bool MouseEvent_obj::_hx___shiftKey;

 ::openfl::events::MouseEvent MouseEvent_obj::_hx___create(::String type,int button,Float stageX,Float stageY, ::openfl::geom::Point local, ::openfl::display::InteractiveObject target,hx::Null< int >  __o_delta){
int delta = __o_delta.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_93a9f8214e96e0e7_675___create)
HXLINE( 676)		 ::openfl::events::MouseEvent event =  ::openfl::events::MouseEvent_obj::__alloc( HX_CTX ,type,true,false,local->x,local->y,null(),::openfl::events::MouseEvent_obj::_hx___ctrlKey,::openfl::events::MouseEvent_obj::_hx___altKey,::openfl::events::MouseEvent_obj::_hx___shiftKey,::openfl::events::MouseEvent_obj::_hx___buttonDown,delta,::openfl::events::MouseEvent_obj::_hx___commandKey,null());
HXLINE( 677)		event->stageX = stageX;
HXLINE( 678)		event->stageY = stageY;
HXLINE( 679)		event->target = target;
HXLINE( 681)		return event;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(MouseEvent_obj,_hx___create,return )


hx::ObjectPtr< MouseEvent_obj > MouseEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_localX,hx::Null< Float >  __o_localY, ::openfl::display::InteractiveObject relatedObject,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_buttonDown,hx::Null< int >  __o_delta,hx::Null< bool >  __o_commandKey,hx::Null< int >  __o_clickCount) {
	hx::ObjectPtr< MouseEvent_obj > __this = new MouseEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_localX,__o_localY,relatedObject,__o_ctrlKey,__o_altKey,__o_shiftKey,__o_buttonDown,__o_delta,__o_commandKey,__o_clickCount);
	return __this;
}

hx::ObjectPtr< MouseEvent_obj > MouseEvent_obj::__alloc(hx::Ctx *_hx_ctx,::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_localX,hx::Null< Float >  __o_localY, ::openfl::display::InteractiveObject relatedObject,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_buttonDown,hx::Null< int >  __o_delta,hx::Null< bool >  __o_commandKey,hx::Null< int >  __o_clickCount) {
	MouseEvent_obj *__this = (MouseEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MouseEvent_obj), true, "openfl.events.MouseEvent"));
	*(void **)__this = MouseEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_localX,__o_localY,relatedObject,__o_ctrlKey,__o_altKey,__o_shiftKey,__o_buttonDown,__o_delta,__o_commandKey,__o_clickCount);
	return __this;
}

MouseEvent_obj::MouseEvent_obj()
{
}

void MouseEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MouseEvent);
	HX_MARK_MEMBER_NAME(altKey,"altKey");
	HX_MARK_MEMBER_NAME(buttonDown,"buttonDown");
	HX_MARK_MEMBER_NAME(commandKey,"commandKey");
	HX_MARK_MEMBER_NAME(clickCount,"clickCount");
	HX_MARK_MEMBER_NAME(ctrlKey,"ctrlKey");
	HX_MARK_MEMBER_NAME(delta,"delta");
	HX_MARK_MEMBER_NAME(isRelatedObjectInaccessible,"isRelatedObjectInaccessible");
	HX_MARK_MEMBER_NAME(localX,"localX");
	HX_MARK_MEMBER_NAME(localY,"localY");
	HX_MARK_MEMBER_NAME(relatedObject,"relatedObject");
	HX_MARK_MEMBER_NAME(shiftKey,"shiftKey");
	HX_MARK_MEMBER_NAME(stageX,"stageX");
	HX_MARK_MEMBER_NAME(stageY,"stageY");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MouseEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(altKey,"altKey");
	HX_VISIT_MEMBER_NAME(buttonDown,"buttonDown");
	HX_VISIT_MEMBER_NAME(commandKey,"commandKey");
	HX_VISIT_MEMBER_NAME(clickCount,"clickCount");
	HX_VISIT_MEMBER_NAME(ctrlKey,"ctrlKey");
	HX_VISIT_MEMBER_NAME(delta,"delta");
	HX_VISIT_MEMBER_NAME(isRelatedObjectInaccessible,"isRelatedObjectInaccessible");
	HX_VISIT_MEMBER_NAME(localX,"localX");
	HX_VISIT_MEMBER_NAME(localY,"localY");
	HX_VISIT_MEMBER_NAME(relatedObject,"relatedObject");
	HX_VISIT_MEMBER_NAME(shiftKey,"shiftKey");
	HX_VISIT_MEMBER_NAME(stageX,"stageX");
	HX_VISIT_MEMBER_NAME(stageY,"stageY");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

hx::Val MouseEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delta") ) { return hx::Val( delta ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"altKey") ) { return hx::Val( altKey ); }
		if (HX_FIELD_EQ(inName,"localX") ) { return hx::Val( localX ); }
		if (HX_FIELD_EQ(inName,"localY") ) { return hx::Val( localY ); }
		if (HX_FIELD_EQ(inName,"stageX") ) { return hx::Val( stageX ); }
		if (HX_FIELD_EQ(inName,"stageY") ) { return hx::Val( stageY ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { return hx::Val( ctrlKey ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shiftKey") ) { return hx::Val( shiftKey ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonDown") ) { return hx::Val( buttonDown ); }
		if (HX_FIELD_EQ(inName,"commandKey") ) { return hx::Val( commandKey ); }
		if (HX_FIELD_EQ(inName,"clickCount") ) { return hx::Val( clickCount ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { return hx::Val( relatedObject ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateAfterEvent") ) { return hx::Val( updateAfterEvent_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"isRelatedObjectInaccessible") ) { return hx::Val( isRelatedObjectInaccessible ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MouseEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { outValue = ( _hx___pool ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__altKey") ) { outValue = ( _hx___altKey ); return true; }
		if (HX_FIELD_EQ(inName,"__create") ) { outValue = _hx___create_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__ctrlKey") ) { outValue = ( _hx___ctrlKey ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__shiftKey") ) { outValue = ( _hx___shiftKey ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__buttonDown") ) { outValue = ( _hx___buttonDown ); return true; }
		if (HX_FIELD_EQ(inName,"__commandKey") ) { outValue = ( _hx___commandKey ); return true; }
	}
	return false;
}

hx::Val MouseEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delta") ) { delta=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"altKey") ) { altKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localX") ) { localX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localY") ) { localY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageX") ) { stageX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageY") ) { stageY=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { ctrlKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shiftKey") ) { shiftKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonDown") ) { buttonDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"commandKey") ) { commandKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clickCount") ) { clickCount=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { relatedObject=inValue.Cast<  ::openfl::display::InteractiveObject >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"isRelatedObjectInaccessible") ) { isRelatedObjectInaccessible=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MouseEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { _hx___pool=ioValue.Cast<  ::lime::utils::ObjectPool >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__altKey") ) { _hx___altKey=ioValue.Cast< bool >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__ctrlKey") ) { _hx___ctrlKey=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__shiftKey") ) { _hx___shiftKey=ioValue.Cast< bool >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__buttonDown") ) { _hx___buttonDown=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"__commandKey") ) { _hx___commandKey=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void MouseEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("altKey","\xf6","\xa7","\xca","\x44"));
	outFields->push(HX_HCSTRING("buttonDown","\x74","\x67","\x64","\xac"));
	outFields->push(HX_HCSTRING("commandKey","\x14","\x71","\x9b","\x43"));
	outFields->push(HX_HCSTRING("clickCount","\x67","\xb3","\xe2","\x8a"));
	outFields->push(HX_HCSTRING("ctrlKey","\xb4","\x35","\x7d","\x61"));
	outFields->push(HX_HCSTRING("delta","\xf8","\xe7","\x26","\xd7"));
	outFields->push(HX_HCSTRING("isRelatedObjectInaccessible","\x3b","\xdb","\x9d","\xa0"));
	outFields->push(HX_HCSTRING("localX","\x8d","\x74","\xbf","\x59"));
	outFields->push(HX_HCSTRING("localY","\x8e","\x74","\xbf","\x59"));
	outFields->push(HX_HCSTRING("relatedObject","\x0a","\xbf","\xcb","\xe8"));
	outFields->push(HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99"));
	outFields->push(HX_HCSTRING("stageX","\xda","\xfb","\xf1","\x05"));
	outFields->push(HX_HCSTRING("stageY","\xdb","\xfb","\xf1","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MouseEvent_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(MouseEvent_obj,altKey),HX_HCSTRING("altKey","\xf6","\xa7","\xca","\x44")},
	{hx::fsBool,(int)offsetof(MouseEvent_obj,buttonDown),HX_HCSTRING("buttonDown","\x74","\x67","\x64","\xac")},
	{hx::fsBool,(int)offsetof(MouseEvent_obj,commandKey),HX_HCSTRING("commandKey","\x14","\x71","\x9b","\x43")},
	{hx::fsInt,(int)offsetof(MouseEvent_obj,clickCount),HX_HCSTRING("clickCount","\x67","\xb3","\xe2","\x8a")},
	{hx::fsBool,(int)offsetof(MouseEvent_obj,ctrlKey),HX_HCSTRING("ctrlKey","\xb4","\x35","\x7d","\x61")},
	{hx::fsInt,(int)offsetof(MouseEvent_obj,delta),HX_HCSTRING("delta","\xf8","\xe7","\x26","\xd7")},
	{hx::fsBool,(int)offsetof(MouseEvent_obj,isRelatedObjectInaccessible),HX_HCSTRING("isRelatedObjectInaccessible","\x3b","\xdb","\x9d","\xa0")},
	{hx::fsFloat,(int)offsetof(MouseEvent_obj,localX),HX_HCSTRING("localX","\x8d","\x74","\xbf","\x59")},
	{hx::fsFloat,(int)offsetof(MouseEvent_obj,localY),HX_HCSTRING("localY","\x8e","\x74","\xbf","\x59")},
	{hx::fsObject /*::openfl::display::InteractiveObject*/ ,(int)offsetof(MouseEvent_obj,relatedObject),HX_HCSTRING("relatedObject","\x0a","\xbf","\xcb","\xe8")},
	{hx::fsBool,(int)offsetof(MouseEvent_obj,shiftKey),HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99")},
	{hx::fsFloat,(int)offsetof(MouseEvent_obj,stageX),HX_HCSTRING("stageX","\xda","\xfb","\xf1","\x05")},
	{hx::fsFloat,(int)offsetof(MouseEvent_obj,stageY),HX_HCSTRING("stageY","\xdb","\xfb","\xf1","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo MouseEvent_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::utils::ObjectPool*/ ,(void *) &MouseEvent_obj::_hx___pool,HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9")},
	{hx::fsString,(void *) &MouseEvent_obj::CLICK,HX_HCSTRING("CLICK","\x28","\xb4","\x4c","\xc6")},
	{hx::fsString,(void *) &MouseEvent_obj::DOUBLE_CLICK,HX_HCSTRING("DOUBLE_CLICK","\x3a","\xf5","\xe9","\x68")},
	{hx::fsString,(void *) &MouseEvent_obj::MIDDLE_CLICK,HX_HCSTRING("MIDDLE_CLICK","\x7e","\x28","\x5f","\x94")},
	{hx::fsString,(void *) &MouseEvent_obj::MIDDLE_MOUSE_DOWN,HX_HCSTRING("MIDDLE_MOUSE_DOWN","\x06","\xb0","\x34","\x98")},
	{hx::fsString,(void *) &MouseEvent_obj::MIDDLE_MOUSE_UP,HX_HCSTRING("MIDDLE_MOUSE_UP","\xff","\x48","\x8e","\xac")},
	{hx::fsString,(void *) &MouseEvent_obj::MOUSE_DOWN,HX_HCSTRING("MOUSE_DOWN","\x1c","\x9c","\xfa","\xde")},
	{hx::fsString,(void *) &MouseEvent_obj::MOUSE_MOVE,HX_HCSTRING("MOUSE_MOVE","\xcb","\x86","\xed","\xe4")},
	{hx::fsString,(void *) &MouseEvent_obj::MOUSE_OUT,HX_HCSTRING("MOUSE_OUT","\xf4","\xb5","\x1a","\x11")},
	{hx::fsString,(void *) &MouseEvent_obj::MOUSE_OVER,HX_HCSTRING("MOUSE_OVER","\x0e","\x35","\x45","\xe6")},
	{hx::fsString,(void *) &MouseEvent_obj::MOUSE_UP,HX_HCSTRING("MOUSE_UP","\x95","\xe3","\xc7","\xfd")},
	{hx::fsString,(void *) &MouseEvent_obj::MOUSE_WHEEL,HX_HCSTRING("MOUSE_WHEEL","\x81","\xd3","\x3c","\x28")},
	{hx::fsString,(void *) &MouseEvent_obj::RELEASE_OUTSIDE,HX_HCSTRING("RELEASE_OUTSIDE","\x2d","\x93","\xa8","\x2a")},
	{hx::fsString,(void *) &MouseEvent_obj::RIGHT_CLICK,HX_HCSTRING("RIGHT_CLICK","\x25","\xb4","\xdd","\x1a")},
	{hx::fsString,(void *) &MouseEvent_obj::RIGHT_MOUSE_DOWN,HX_HCSTRING("RIGHT_MOUSE_DOWN","\xff","\x86","\xb7","\x29")},
	{hx::fsString,(void *) &MouseEvent_obj::RIGHT_MOUSE_UP,HX_HCSTRING("RIGHT_MOUSE_UP","\xb8","\x3f","\xdb","\x17")},
	{hx::fsString,(void *) &MouseEvent_obj::ROLL_OUT,HX_HCSTRING("ROLL_OUT","\x6c","\x37","\xe3","\x8b")},
	{hx::fsString,(void *) &MouseEvent_obj::ROLL_OVER,HX_HCSTRING("ROLL_OVER","\x96","\xfc","\xed","\xda")},
	{hx::fsBool,(void *) &MouseEvent_obj::_hx___altKey,HX_HCSTRING("__altKey","\x16","\x13","\xfa","\xec")},
	{hx::fsBool,(void *) &MouseEvent_obj::_hx___buttonDown,HX_HCSTRING("__buttonDown","\x94","\xe2","\xf7","\xe4")},
	{hx::fsBool,(void *) &MouseEvent_obj::_hx___commandKey,HX_HCSTRING("__commandKey","\x34","\xec","\x2e","\x7c")},
	{hx::fsBool,(void *) &MouseEvent_obj::_hx___ctrlKey,HX_HCSTRING("__ctrlKey","\x94","\x86","\xcb","\xe2")},
	{hx::fsBool,(void *) &MouseEvent_obj::_hx___shiftKey,HX_HCSTRING("__shiftKey","\x5d","\x05","\xd8","\x3c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String MouseEvent_obj_sMemberFields[] = {
	HX_HCSTRING("altKey","\xf6","\xa7","\xca","\x44"),
	HX_HCSTRING("buttonDown","\x74","\x67","\x64","\xac"),
	HX_HCSTRING("commandKey","\x14","\x71","\x9b","\x43"),
	HX_HCSTRING("clickCount","\x67","\xb3","\xe2","\x8a"),
	HX_HCSTRING("ctrlKey","\xb4","\x35","\x7d","\x61"),
	HX_HCSTRING("delta","\xf8","\xe7","\x26","\xd7"),
	HX_HCSTRING("isRelatedObjectInaccessible","\x3b","\xdb","\x9d","\xa0"),
	HX_HCSTRING("localX","\x8d","\x74","\xbf","\x59"),
	HX_HCSTRING("localY","\x8e","\x74","\xbf","\x59"),
	HX_HCSTRING("relatedObject","\x0a","\xbf","\xcb","\xe8"),
	HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99"),
	HX_HCSTRING("stageX","\xda","\xfb","\xf1","\x05"),
	HX_HCSTRING("stageY","\xdb","\xfb","\xf1","\x05"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("updateAfterEvent","\xc7","\xfb","\xc7","\x22"),
	::String(null()) };

static void MouseEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::_hx___pool,"__pool");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::CLICK,"CLICK");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::DOUBLE_CLICK,"DOUBLE_CLICK");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MIDDLE_CLICK,"MIDDLE_CLICK");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MIDDLE_MOUSE_DOWN,"MIDDLE_MOUSE_DOWN");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MIDDLE_MOUSE_UP,"MIDDLE_MOUSE_UP");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_DOWN,"MOUSE_DOWN");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_MOVE,"MOUSE_MOVE");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_OUT,"MOUSE_OUT");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_OVER,"MOUSE_OVER");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_UP,"MOUSE_UP");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_WHEEL,"MOUSE_WHEEL");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::RELEASE_OUTSIDE,"RELEASE_OUTSIDE");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::RIGHT_CLICK,"RIGHT_CLICK");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::RIGHT_MOUSE_DOWN,"RIGHT_MOUSE_DOWN");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::RIGHT_MOUSE_UP,"RIGHT_MOUSE_UP");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::ROLL_OUT,"ROLL_OUT");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::ROLL_OVER,"ROLL_OVER");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::_hx___altKey,"__altKey");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::_hx___buttonDown,"__buttonDown");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::_hx___commandKey,"__commandKey");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::_hx___ctrlKey,"__ctrlKey");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::_hx___shiftKey,"__shiftKey");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MouseEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::_hx___pool,"__pool");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::CLICK,"CLICK");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::DOUBLE_CLICK,"DOUBLE_CLICK");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MIDDLE_CLICK,"MIDDLE_CLICK");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MIDDLE_MOUSE_DOWN,"MIDDLE_MOUSE_DOWN");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MIDDLE_MOUSE_UP,"MIDDLE_MOUSE_UP");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_DOWN,"MOUSE_DOWN");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_MOVE,"MOUSE_MOVE");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_OUT,"MOUSE_OUT");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_OVER,"MOUSE_OVER");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_UP,"MOUSE_UP");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_WHEEL,"MOUSE_WHEEL");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::RELEASE_OUTSIDE,"RELEASE_OUTSIDE");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::RIGHT_CLICK,"RIGHT_CLICK");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::RIGHT_MOUSE_DOWN,"RIGHT_MOUSE_DOWN");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::RIGHT_MOUSE_UP,"RIGHT_MOUSE_UP");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::ROLL_OUT,"ROLL_OUT");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::ROLL_OVER,"ROLL_OVER");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::_hx___altKey,"__altKey");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::_hx___buttonDown,"__buttonDown");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::_hx___commandKey,"__commandKey");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::_hx___ctrlKey,"__ctrlKey");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::_hx___shiftKey,"__shiftKey");
};

#endif

hx::Class MouseEvent_obj::__mClass;

static ::String MouseEvent_obj_sStaticFields[] = {
	HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9"),
	HX_HCSTRING("CLICK","\x28","\xb4","\x4c","\xc6"),
	HX_HCSTRING("DOUBLE_CLICK","\x3a","\xf5","\xe9","\x68"),
	HX_HCSTRING("MIDDLE_CLICK","\x7e","\x28","\x5f","\x94"),
	HX_HCSTRING("MIDDLE_MOUSE_DOWN","\x06","\xb0","\x34","\x98"),
	HX_HCSTRING("MIDDLE_MOUSE_UP","\xff","\x48","\x8e","\xac"),
	HX_HCSTRING("MOUSE_DOWN","\x1c","\x9c","\xfa","\xde"),
	HX_HCSTRING("MOUSE_MOVE","\xcb","\x86","\xed","\xe4"),
	HX_HCSTRING("MOUSE_OUT","\xf4","\xb5","\x1a","\x11"),
	HX_HCSTRING("MOUSE_OVER","\x0e","\x35","\x45","\xe6"),
	HX_HCSTRING("MOUSE_UP","\x95","\xe3","\xc7","\xfd"),
	HX_HCSTRING("MOUSE_WHEEL","\x81","\xd3","\x3c","\x28"),
	HX_HCSTRING("RELEASE_OUTSIDE","\x2d","\x93","\xa8","\x2a"),
	HX_HCSTRING("RIGHT_CLICK","\x25","\xb4","\xdd","\x1a"),
	HX_HCSTRING("RIGHT_MOUSE_DOWN","\xff","\x86","\xb7","\x29"),
	HX_HCSTRING("RIGHT_MOUSE_UP","\xb8","\x3f","\xdb","\x17"),
	HX_HCSTRING("ROLL_OUT","\x6c","\x37","\xe3","\x8b"),
	HX_HCSTRING("ROLL_OVER","\x96","\xfc","\xed","\xda"),
	HX_HCSTRING("__altKey","\x16","\x13","\xfa","\xec"),
	HX_HCSTRING("__buttonDown","\x94","\xe2","\xf7","\xe4"),
	HX_HCSTRING("__commandKey","\x34","\xec","\x2e","\x7c"),
	HX_HCSTRING("__ctrlKey","\x94","\x86","\xcb","\xe2"),
	HX_HCSTRING("__shiftKey","\x5d","\x05","\xd8","\x3c"),
	HX_HCSTRING("__create","\x1c","\xd2","\x3e","\x24"),
	::String(null())
};

void MouseEvent_obj::__register()
{
	hx::Object *dummy = new MouseEvent_obj;
	MouseEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.MouseEvent","\xac","\x3e","\x4f","\x09");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MouseEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &MouseEvent_obj::__SetStatic;
	__mClass->mMarkFunc = MouseEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(MouseEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MouseEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MouseEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MouseEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MouseEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MouseEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MouseEvent_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_93a9f8214e96e0e7_26_boot)
HXDLIN(  26)		_hx___pool =  ::lime::utils::ObjectPool_obj::__alloc( HX_CTX ,null(),null(),(int)20);
            	}
{
            	HX_STACKFRAME(&_hx_pos_93a9f8214e96e0e7_49_boot)
HXDLIN(  49)		CLICK = HX_("click",48,7c,5e,48);
            	}
{
            	HX_STACKFRAME(&_hx_pos_93a9f8214e96e0e7_101_boot)
HXDLIN( 101)		DOUBLE_CLICK = HX_("doubleClick",77,03,76,cd);
            	}
{
            	HX_STACKFRAME(&_hx_pos_93a9f8214e96e0e7_125_boot)
HXDLIN( 125)		MIDDLE_CLICK = HX_("middleClick",b3,e4,e5,43);
            	}
{
            	HX_STACKFRAME(&_hx_pos_93a9f8214e96e0e7_150_boot)
HXDLIN( 150)		MIDDLE_MOUSE_DOWN = HX_("middleMouseDown",12,2b,fe,01);
            	}
{
            	HX_STACKFRAME(&_hx_pos_93a9f8214e96e0e7_175_boot)
HXDLIN( 175)		MIDDLE_MOUSE_UP = HX_("middleMouseUp",0b,8d,f5,3a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_93a9f8214e96e0e7_200_boot)
HXDLIN( 200)		MOUSE_DOWN = HX_("mouseDown",27,b1,c2,ee);
            	}
{
            	HX_STACKFRAME(&_hx_pos_93a9f8214e96e0e7_224_boot)
HXDLIN( 224)		MOUSE_MOVE = HX_("mouseMove",d6,9b,b5,f4);
            	}
{
            	HX_STACKFRAME(&_hx_pos_93a9f8214e96e0e7_249_boot)
HXDLIN( 249)		MOUSE_OUT = HX_("mouseOut",69,e7,1d,a4);
            	}
{
            	HX_STACKFRAME(&_hx_pos_93a9f8214e96e0e7_274_boot)
HXDLIN( 274)		MOUSE_OVER = HX_("mouseOver",19,4a,0d,f6);
            	}
{
            	HX_STACKFRAME(&_hx_pos_93a9f8214e96e0e7_298_boot)
HXDLIN( 298)		MOUSE_UP = HX_("mouseUp",e0,f3,72,c0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_93a9f8214e96e0e7_323_boot)
HXDLIN( 323)		MOUSE_WHEEL = HX_("mouseWheel",36,28,87,e7);
            	}
{
            	HX_STACKFRAME(&_hx_pos_93a9f8214e96e0e7_331_boot)
HXDLIN( 331)		RELEASE_OUTSIDE = HX_("releaseOutside",1e,86,e3,ad);
            	}
{
            	HX_STACKFRAME(&_hx_pos_93a9f8214e96e0e7_355_boot)
HXDLIN( 355)		RIGHT_CLICK = HX_("rightClick",cc,62,23,4b);
            	}
{
            	HX_STACKFRAME(&_hx_pos_93a9f8214e96e0e7_380_boot)
HXDLIN( 380)		RIGHT_MOUSE_DOWN = HX_("rightMouseDown",ab,29,d7,cd);
            	}
{
            	HX_STACKFRAME(&_hx_pos_93a9f8214e96e0e7_405_boot)
HXDLIN( 405)		RIGHT_MOUSE_UP = HX_("rightMouseUp",64,83,21,ab);
            	}
{
            	HX_STACKFRAME(&_hx_pos_93a9f8214e96e0e7_429_boot)
HXDLIN( 429)		ROLL_OUT = HX_("rollOut",11,f9,11,5d);
            	}
{
            	HX_STACKFRAME(&_hx_pos_93a9f8214e96e0e7_454_boot)
HXDLIN( 454)		ROLL_OVER = HX_("rollOver",71,ab,a8,12);
            	}
}

} // end namespace openfl
} // end namespace events
