// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED__List_ListNode
#include <_List/ListNode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ddfdb35c92fd9637_44_new,"List","new",0xed890070,"List.new","/usr/local/lib/haxe/std/List.hx",44,0xdb880ee3)
HX_LOCAL_STACK_FRAME(_hx_pos_ddfdb35c92fd9637_52_add,"List","add",0xed7f2231,"List.add","/usr/local/lib/haxe/std/List.hx",52,0xdb880ee3)
HX_LOCAL_STACK_FRAME(_hx_pos_ddfdb35c92fd9637_99_pop,"List","pop",0xed8a8da1,"List.pop","/usr/local/lib/haxe/std/List.hx",99,0xdb880ee3)
HX_LOCAL_STACK_FRAME(_hx_pos_ddfdb35c92fd9637_123_clear,"List","clear",0xd148c59d,"List.clear","/usr/local/lib/haxe/std/List.hx",123,0xdb880ee3)
HX_LOCAL_STACK_FRAME(_hx_pos_ddfdb35c92fd9637_137_remove,"List","remove",0x4b44d634,"List.remove","/usr/local/lib/haxe/std/List.hx",137,0xdb880ee3)
HX_LOCAL_STACK_FRAME(_hx_pos_ddfdb35c92fd9637_161_iterator,"List","iterator",0x2d4cdfde,"List.iterator","/usr/local/lib/haxe/std/List.hx",161,0xdb880ee3)

void List_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ddfdb35c92fd9637_44_new)
HXDLIN(  44)		this->length = (int)0;
            	}

Dynamic List_obj::__CreateEmpty() { return new List_obj; }

void *List_obj::_hx_vtable = 0;

Dynamic List_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< List_obj > _hx_result = new List_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool List_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x328c487e;
}

void List_obj::add( ::Dynamic item){
            	HX_GC_STACKFRAME(&_hx_pos_ddfdb35c92fd9637_52_add)
HXLINE(  53)		 ::_List::ListNode x =  ::_List::ListNode_obj::__alloc( HX_CTX ,item,null());
HXLINE(  54)		if (hx::IsNull( this->h )) {
HXLINE(  55)			this->h = x;
            		}
            		else {
HXLINE(  57)			this->q->next = x;
            		}
HXLINE(  58)		this->q = x;
HXLINE(  59)		this->length++;
            	}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,add,(void))

 ::Dynamic List_obj::pop(){
            	HX_STACKFRAME(&_hx_pos_ddfdb35c92fd9637_99_pop)
HXLINE( 100)		if (hx::IsNull( this->h )) {
HXLINE( 101)			return null();
            		}
HXLINE( 102)		 ::Dynamic x = this->h->item;
HXLINE( 103)		this->h = this->h->next;
HXLINE( 104)		if (hx::IsNull( this->h )) {
HXLINE( 105)			this->q = null();
            		}
HXLINE( 106)		this->length--;
HXLINE( 107)		return x;
            	}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,pop,return )

void List_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_ddfdb35c92fd9637_123_clear)
HXLINE( 124)		this->h = null();
HXLINE( 125)		this->q = null();
HXLINE( 126)		this->length = (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,clear,(void))

bool List_obj::remove( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_ddfdb35c92fd9637_137_remove)
HXLINE( 138)		 ::_List::ListNode prev = null();
HXLINE( 139)		 ::_List::ListNode l = this->h;
HXLINE( 140)		while(hx::IsNotNull( l )){
HXLINE( 141)			if (hx::IsEq( l->item,v )) {
HXLINE( 142)				if (hx::IsNull( prev )) {
HXLINE( 143)					this->h = l->next;
            				}
            				else {
HXLINE( 145)					prev->next = l->next;
            				}
HXLINE( 146)				if (hx::IsEq( this->q,l )) {
HXLINE( 147)					this->q = prev;
            				}
HXLINE( 148)				this->length--;
HXLINE( 149)				return true;
            			}
HXLINE( 151)			prev = l;
HXLINE( 152)			l = l->next;
            		}
HXLINE( 154)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,remove,return )

 ::_List::ListIterator List_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_ddfdb35c92fd9637_161_iterator)
HXDLIN( 161)		return  ::_List::ListIterator_obj::__alloc( HX_CTX ,this->h);
            	}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,iterator,return )


hx::ObjectPtr< List_obj > List_obj::__new() {
	hx::ObjectPtr< List_obj > __this = new List_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< List_obj > List_obj::__alloc(hx::Ctx *_hx_ctx) {
	List_obj *__this = (List_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(List_obj), true, "List"));
	*(void **)__this = List_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

List_obj::List_obj()
{
}

void List_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(List);
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_MEMBER_NAME(q,"q");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void List_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(h,"h");
	HX_VISIT_MEMBER_NAME(q,"q");
	HX_VISIT_MEMBER_NAME(length,"length");
}

hx::Val List_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { return hx::Val( h ); }
		if (HX_FIELD_EQ(inName,"q") ) { return hx::Val( q ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"pop") ) { return hx::Val( pop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return hx::Val( length ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return hx::Val( iterator_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val List_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast<  ::_List::ListNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"q") ) { q=inValue.Cast<  ::_List::ListNode >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void List_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("q","\x71","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo List_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::_List::ListNode*/ ,(int)offsetof(List_obj,h),HX_HCSTRING("h","\x68","\x00","\x00","\x00")},
	{hx::fsObject /*::_List::ListNode*/ ,(int)offsetof(List_obj,q),HX_HCSTRING("q","\x71","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(List_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *List_obj_sStaticStorageInfo = 0;
#endif

static ::String List_obj_sMemberFields[] = {
	HX_HCSTRING("h","\x68","\x00","\x00","\x00"),
	HX_HCSTRING("q","\x71","\x00","\x00","\x00"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	::String(null()) };

static void List_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(List_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void List_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(List_obj::__mClass,"__mClass");
};

#endif

hx::Class List_obj::__mClass;

void List_obj::__register()
{
	hx::Object *dummy = new List_obj;
	List_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("List","\x7e","\x48","\x8c","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = List_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(List_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< List_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = List_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = List_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = List_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

