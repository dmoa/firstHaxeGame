// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_lime_system_JNIStaticField
#include <lime/system/JNIStaticField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_241b089bf20ccbef_232_new,"lime.system.JNIStaticField","new",0x799b0c1f,"lime.system.JNIStaticField.new","lime/system/JNI.hx",232,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_241b089bf20ccbef_240_get,"lime.system.JNIStaticField","get",0x7995bc55,"lime.system.JNIStaticField.get","lime/system/JNI.hx",240,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_241b089bf20ccbef_249_set,"lime.system.JNIStaticField","set",0x799ed761,"lime.system.JNIStaticField.set","lime/system/JNI.hx",249,0x21970b7f)
namespace lime{
namespace _hx_system{

void JNIStaticField_obj::__construct( ::Dynamic field){
            	HX_STACKFRAME(&_hx_pos_241b089bf20ccbef_232_new)
HXDLIN( 232)		this->field = field;
            	}

Dynamic JNIStaticField_obj::__CreateEmpty() { return new JNIStaticField_obj; }

void *JNIStaticField_obj::_hx_vtable = 0;

Dynamic JNIStaticField_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< JNIStaticField_obj > _hx_result = new JNIStaticField_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool JNIStaticField_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x33ff1773;
}

 ::Dynamic JNIStaticField_obj::get(){
            	HX_STACKFRAME(&_hx_pos_241b089bf20ccbef_240_get)
HXDLIN( 240)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(JNIStaticField_obj,get,return )

 ::Dynamic JNIStaticField_obj::set( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_241b089bf20ccbef_249_set)
HXDLIN( 249)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(JNIStaticField_obj,set,return )


JNIStaticField_obj::JNIStaticField_obj()
{
}

void JNIStaticField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JNIStaticField);
	HX_MARK_MEMBER_NAME(field,"field");
	HX_MARK_END_CLASS();
}

void JNIStaticField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(field,"field");
}

hx::Val JNIStaticField_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { return hx::Val( field ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val JNIStaticField_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { field=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JNIStaticField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("field","\xba","\x94","\x93","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo JNIStaticField_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(JNIStaticField_obj,field),HX_HCSTRING("field","\xba","\x94","\x93","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *JNIStaticField_obj_sStaticStorageInfo = 0;
#endif

static ::String JNIStaticField_obj_sMemberFields[] = {
	HX_HCSTRING("field","\xba","\x94","\x93","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void JNIStaticField_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JNIStaticField_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void JNIStaticField_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JNIStaticField_obj::__mClass,"__mClass");
};

#endif

hx::Class JNIStaticField_obj::__mClass;

void JNIStaticField_obj::__register()
{
	hx::Object *dummy = new JNIStaticField_obj;
	JNIStaticField_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.JNIStaticField","\xad","\x10","\xc5","\x0e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = JNIStaticField_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(JNIStaticField_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JNIStaticField_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = JNIStaticField_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JNIStaticField_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JNIStaticField_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace system
