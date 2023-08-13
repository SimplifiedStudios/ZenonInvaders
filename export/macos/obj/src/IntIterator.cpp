// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_IntIterator
#include <IntIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1e00ac5834491b49_45_new,"IntIterator","new",0x5692054f,"IntIterator.new","/usr/local/lib/haxe/std/IntIterator.hx",45,0x6ce8797e)
HX_LOCAL_STACK_FRAME(_hx_pos_1e00ac5834491b49_54_hasNext,"IntIterator","hasNext",0xd8737ddc,"IntIterator.hasNext","/usr/local/lib/haxe/std/IntIterator.hx",54,0x6ce8797e)
HX_LOCAL_STACK_FRAME(_hx_pos_1e00ac5834491b49_63_next,"IntIterator","next",0x6932a124,"IntIterator.next","/usr/local/lib/haxe/std/IntIterator.hx",63,0x6ce8797e)

void IntIterator_obj::__construct(int min,int max){
            	HX_STACKFRAME(&_hx_pos_1e00ac5834491b49_45_new)
HXLINE(  46)		this->min = min;
HXLINE(  47)		this->max = max;
            	}

Dynamic IntIterator_obj::__CreateEmpty() { return new IntIterator_obj; }

void *IntIterator_obj::_hx_vtable = 0;

Dynamic IntIterator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IntIterator_obj > _hx_result = new IntIterator_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool IntIterator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1516f71d;
}

bool IntIterator_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_1e00ac5834491b49_54_hasNext)
HXDLIN(  54)		return (this->min < this->max);
            	}


HX_DEFINE_DYNAMIC_FUNC0(IntIterator_obj,hasNext,return )

int IntIterator_obj::next(){
            	HX_STACKFRAME(&_hx_pos_1e00ac5834491b49_63_next)
HXDLIN(  63)		return this->min++;
            	}


HX_DEFINE_DYNAMIC_FUNC0(IntIterator_obj,next,return )


IntIterator_obj::IntIterator_obj()
{
}

::hx::Val IntIterator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return ::hx::Val( min ); }
		if (HX_FIELD_EQ(inName,"max") ) { return ::hx::Val( max ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return ::hx::Val( hasNext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val IntIterator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { min=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("min",92,11,53,00));
	outFields->push(HX_("max",a4,0a,53,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo IntIterator_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(IntIterator_obj,min),HX_("min",92,11,53,00)},
	{::hx::fsInt,(int)offsetof(IntIterator_obj,max),HX_("max",a4,0a,53,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *IntIterator_obj_sStaticStorageInfo = 0;
#endif

static ::String IntIterator_obj_sMemberFields[] = {
	HX_("min",92,11,53,00),
	HX_("max",a4,0a,53,00),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class IntIterator_obj::__mClass;

void IntIterator_obj::__register()
{
	IntIterator_obj _hx_dummy;
	IntIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("IntIterator",dd,b1,1b,62);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IntIterator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< IntIterator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IntIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IntIterator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

