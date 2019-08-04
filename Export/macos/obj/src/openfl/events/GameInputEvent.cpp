// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_GameInputEvent
#include <openfl/events/GameInputEvent.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputDevice
#include <openfl/ui/GameInputDevice.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a9944c00dfbe9396_36_new,"openfl.events.GameInputEvent","new",0x8065662b,"openfl.events.GameInputEvent.new","openfl/events/GameInputEvent.hx",36,0x5318f185)
HX_LOCAL_STACK_FRAME(_hx_pos_a9944c00dfbe9396_43_clone,"openfl.events.GameInputEvent","clone",0x205df1e8,"openfl.events.GameInputEvent.clone","openfl/events/GameInputEvent.hx",43,0x5318f185)
HX_LOCAL_STACK_FRAME(_hx_pos_a9944c00dfbe9396_53_toString,"openfl.events.GameInputEvent","toString",0x31f35b01,"openfl.events.GameInputEvent.toString","openfl/events/GameInputEvent.hx",53,0x5318f185)
static const ::String _hx_array_data_6a3e74b9_3[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("device",96,dc,77,71),
};
HX_LOCAL_STACK_FRAME(_hx_pos_a9944c00dfbe9396_18_boot,"openfl.events.GameInputEvent","boot",0xd06d0007,"openfl.events.GameInputEvent.boot","openfl/events/GameInputEvent.hx",18,0x5318f185)
HX_LOCAL_STACK_FRAME(_hx_pos_a9944c00dfbe9396_23_boot,"openfl.events.GameInputEvent","boot",0xd06d0007,"openfl.events.GameInputEvent.boot","openfl/events/GameInputEvent.hx",23,0x5318f185)
HX_LOCAL_STACK_FRAME(_hx_pos_a9944c00dfbe9396_28_boot,"openfl.events.GameInputEvent","boot",0xd06d0007,"openfl.events.GameInputEvent.boot","openfl/events/GameInputEvent.hx",28,0x5318f185)
namespace openfl{
namespace events{

void GameInputEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable, ::openfl::ui::GameInputDevice device){
bool bubbles = __o_bubbles.Default(true);
bool cancelable = __o_cancelable.Default(false);
            	HX_STACKFRAME(&_hx_pos_a9944c00dfbe9396_36_new)
HXLINE(  37)		super::__construct(type,bubbles,cancelable);
HXLINE(  39)		this->device = device;
            	}

Dynamic GameInputEvent_obj::__CreateEmpty() { return new GameInputEvent_obj; }

void *GameInputEvent_obj::_hx_vtable = 0;

Dynamic GameInputEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GameInputEvent_obj > _hx_result = new GameInputEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GameInputEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1db74753) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1db74753;
	} else {
		return inClassId==(int)0x3243040d;
	}
}

 ::openfl::events::Event GameInputEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_a9944c00dfbe9396_43_clone)
HXLINE(  44)		 ::openfl::events::GameInputEvent event =  ::openfl::events::GameInputEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable,this->device);
HXLINE(  45)		event->target = this->target;
HXLINE(  46)		event->currentTarget = this->currentTarget;
HXLINE(  47)		event->eventPhase = this->eventPhase;
HXLINE(  48)		return event;
            	}


::String GameInputEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_a9944c00dfbe9396_53_toString)
HXDLIN(  53)		return this->_hx___formatToString(HX_("GameInputEvent",62,3e,f4,2c),::Array_obj< ::String >::fromData( _hx_array_data_6a3e74b9_3,4));
            	}


::String GameInputEvent_obj::DEVICE_ADDED;

::String GameInputEvent_obj::DEVICE_REMOVED;

::String GameInputEvent_obj::DEVICE_UNUSABLE;


hx::ObjectPtr< GameInputEvent_obj > GameInputEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable, ::openfl::ui::GameInputDevice device) {
	hx::ObjectPtr< GameInputEvent_obj > __this = new GameInputEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,device);
	return __this;
}

hx::ObjectPtr< GameInputEvent_obj > GameInputEvent_obj::__alloc(hx::Ctx *_hx_ctx,::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable, ::openfl::ui::GameInputDevice device) {
	GameInputEvent_obj *__this = (GameInputEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GameInputEvent_obj), true, "openfl.events.GameInputEvent"));
	*(void **)__this = GameInputEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,device);
	return __this;
}

GameInputEvent_obj::GameInputEvent_obj()
{
}

void GameInputEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameInputEvent);
	HX_MARK_MEMBER_NAME(device,"device");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameInputEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(device,"device");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

hx::Val GameInputEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { return hx::Val( device ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GameInputEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { device=inValue.Cast<  ::openfl::ui::GameInputDevice >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameInputEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("device","\x96","\xdc","\x77","\x71"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GameInputEvent_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::ui::GameInputDevice*/ ,(int)offsetof(GameInputEvent_obj,device),HX_HCSTRING("device","\x96","\xdc","\x77","\x71")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo GameInputEvent_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &GameInputEvent_obj::DEVICE_ADDED,HX_HCSTRING("DEVICE_ADDED","\xf7","\x70","\x3d","\xb6")},
	{hx::fsString,(void *) &GameInputEvent_obj::DEVICE_REMOVED,HX_HCSTRING("DEVICE_REMOVED","\x97","\x5b","\xc2","\x33")},
	{hx::fsString,(void *) &GameInputEvent_obj::DEVICE_UNUSABLE,HX_HCSTRING("DEVICE_UNUSABLE","\x1a","\xc6","\xb7","\xaa")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String GameInputEvent_obj_sMemberFields[] = {
	HX_HCSTRING("device","\x96","\xdc","\x77","\x71"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void GameInputEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameInputEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GameInputEvent_obj::DEVICE_ADDED,"DEVICE_ADDED");
	HX_MARK_MEMBER_NAME(GameInputEvent_obj::DEVICE_REMOVED,"DEVICE_REMOVED");
	HX_MARK_MEMBER_NAME(GameInputEvent_obj::DEVICE_UNUSABLE,"DEVICE_UNUSABLE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GameInputEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameInputEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GameInputEvent_obj::DEVICE_ADDED,"DEVICE_ADDED");
	HX_VISIT_MEMBER_NAME(GameInputEvent_obj::DEVICE_REMOVED,"DEVICE_REMOVED");
	HX_VISIT_MEMBER_NAME(GameInputEvent_obj::DEVICE_UNUSABLE,"DEVICE_UNUSABLE");
};

#endif

hx::Class GameInputEvent_obj::__mClass;

static ::String GameInputEvent_obj_sStaticFields[] = {
	HX_HCSTRING("DEVICE_ADDED","\xf7","\x70","\x3d","\xb6"),
	HX_HCSTRING("DEVICE_REMOVED","\x97","\x5b","\xc2","\x33"),
	HX_HCSTRING("DEVICE_UNUSABLE","\x1a","\xc6","\xb7","\xaa"),
	::String(null())
};

void GameInputEvent_obj::__register()
{
	hx::Object *dummy = new GameInputEvent_obj;
	GameInputEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.GameInputEvent","\xb9","\x74","\x3e","\x6a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GameInputEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GameInputEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GameInputEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GameInputEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GameInputEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameInputEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameInputEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GameInputEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a9944c00dfbe9396_18_boot)
HXDLIN(  18)		DEVICE_ADDED = HX_("deviceAdded",4a,08,84,0b);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9944c00dfbe9396_23_boot)
HXDLIN(  23)		DEVICE_REMOVED = HX_("deviceRemoved",aa,c9,5b,59);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9944c00dfbe9396_28_boot)
HXDLIN(  28)		DEVICE_UNUSABLE = HX_("deviceUnusable",c7,a8,5e,6b);
            	}
}

} // end namespace openfl
} // end namespace events
