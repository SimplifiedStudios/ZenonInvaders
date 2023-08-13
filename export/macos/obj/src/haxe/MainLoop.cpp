// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_haxe_MainEvent
#include <haxe/MainEvent.h>
#endif
#ifndef INCLUDED_haxe_MainLoop
#include <haxe/MainLoop.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c09dd4c76a148f98_71_hasEvents,"haxe.MainLoop","hasEvents",0xbbf2790a,"haxe.MainLoop.hasEvents","/usr/local/lib/haxe/std/haxe/MainLoop.hx",71,0x4a7d9295)
HX_LOCAL_STACK_FRAME(_hx_pos_c09dd4c76a148f98_104_sortEvents,"haxe.MainLoop","sortEvents",0x1a386640,"haxe.MainLoop.sortEvents","/usr/local/lib/haxe/std/haxe/MainLoop.hx",104,0x4a7d9295)
HX_LOCAL_STACK_FRAME(_hx_pos_c09dd4c76a148f98_169_tick,"haxe.MainLoop","tick",0x9d5eafc6,"haxe.MainLoop.tick","/usr/local/lib/haxe/std/haxe/MainLoop.hx",169,0x4a7d9295)
namespace haxe{

void MainLoop_obj::__construct() { }

Dynamic MainLoop_obj::__CreateEmpty() { return new MainLoop_obj; }

void *MainLoop_obj::_hx_vtable = 0;

Dynamic MainLoop_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MainLoop_obj > _hx_result = new MainLoop_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MainLoop_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0c7b74e7;
}

 ::haxe::MainEvent MainLoop_obj::pending;

bool MainLoop_obj::hasEvents(){
            	HX_STACKFRAME(&_hx_pos_c09dd4c76a148f98_71_hasEvents)
HXLINE(  72)		 ::haxe::MainEvent p = ::haxe::MainLoop_obj::pending;
HXLINE(  73)		while(::hx::IsNotNull( p )){
HXLINE(  74)			if (p->isBlocking) {
HXLINE(  75)				return true;
            			}
HXLINE(  76)			p = p->next;
            		}
HXLINE(  78)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MainLoop_obj,hasEvents,return )

void MainLoop_obj::sortEvents(){
            	HX_STACKFRAME(&_hx_pos_c09dd4c76a148f98_104_sortEvents)
HXLINE( 108)		 ::haxe::MainEvent list = ::haxe::MainLoop_obj::pending;
HXLINE( 110)		if (::hx::IsNull( list )) {
HXLINE( 111)			return;
            		}
HXLINE( 113)		int insize = 1;
HXDLIN( 113)		int nmerges;
HXDLIN( 113)		int psize = 0;
HXDLIN( 113)		int qsize = 0;
HXLINE( 114)		 ::haxe::MainEvent p;
HXDLIN( 114)		 ::haxe::MainEvent q;
HXDLIN( 114)		 ::haxe::MainEvent e;
HXDLIN( 114)		 ::haxe::MainEvent tail;
HXLINE( 116)		while(true){
HXLINE( 117)			p = list;
HXLINE( 118)			list = null();
HXLINE( 119)			tail = null();
HXLINE( 120)			nmerges = 0;
HXLINE( 121)			while(::hx::IsNotNull( p )){
HXLINE( 122)				nmerges = (nmerges + 1);
HXLINE( 123)				q = p;
HXLINE( 124)				psize = 0;
HXLINE( 125)				{
HXLINE( 125)					int _g = 0;
HXDLIN( 125)					int _g1 = insize;
HXDLIN( 125)					while((_g < _g1)){
HXLINE( 125)						_g = (_g + 1);
HXDLIN( 125)						int i = (_g - 1);
HXLINE( 126)						psize = (psize + 1);
HXLINE( 127)						q = q->next;
HXLINE( 128)						if (::hx::IsNull( q )) {
HXLINE( 129)							goto _hx_goto_4;
            						}
            					}
            					_hx_goto_4:;
            				}
HXLINE( 131)				qsize = insize;
HXLINE( 132)				while(true){
HXLINE( 132)					bool _hx_tmp;
HXDLIN( 132)					if ((psize <= 0)) {
HXLINE( 132)						if ((qsize > 0)) {
HXLINE( 132)							_hx_tmp = ::hx::IsNotNull( q );
            						}
            						else {
HXLINE( 132)							_hx_tmp = false;
            						}
            					}
            					else {
HXLINE( 132)						_hx_tmp = true;
            					}
HXDLIN( 132)					if (!(_hx_tmp)) {
HXLINE( 132)						goto _hx_goto_5;
            					}
HXLINE( 133)					if ((psize == 0)) {
HXLINE( 134)						e = q;
HXLINE( 135)						q = q->next;
HXLINE( 136)						qsize = (qsize - 1);
            					}
            					else {
HXLINE( 137)						bool _hx_tmp1;
HXDLIN( 137)						bool _hx_tmp2;
HXDLIN( 137)						if ((qsize != 0)) {
HXLINE( 137)							_hx_tmp2 = ::hx::IsNull( q );
            						}
            						else {
HXLINE( 137)							_hx_tmp2 = true;
            						}
HXDLIN( 137)						if (!(_hx_tmp2)) {
HXLINE( 139)							if ((p->priority <= q->priority)) {
HXLINE( 139)								if ((p->priority == q->priority)) {
HXLINE( 137)									_hx_tmp1 = (p->nextRun <= q->nextRun);
            								}
            								else {
HXLINE( 137)									_hx_tmp1 = false;
            								}
            							}
            							else {
HXLINE( 137)								_hx_tmp1 = true;
            							}
            						}
            						else {
HXLINE( 137)							_hx_tmp1 = true;
            						}
HXDLIN( 137)						if (_hx_tmp1) {
HXLINE( 140)							e = p;
HXLINE( 141)							p = p->next;
HXLINE( 142)							psize = (psize - 1);
            						}
            						else {
HXLINE( 144)							e = q;
HXLINE( 145)							q = q->next;
HXLINE( 146)							qsize = (qsize - 1);
            						}
            					}
HXLINE( 148)					if (::hx::IsNotNull( tail )) {
HXLINE( 149)						tail->next = e;
            					}
            					else {
HXLINE( 151)						list = e;
            					}
HXLINE( 152)					e->prev = tail;
HXLINE( 153)					tail = e;
            				}
            				_hx_goto_5:;
HXLINE( 155)				p = q;
            			}
HXLINE( 157)			tail->next = null();
HXLINE( 158)			if ((nmerges <= 1)) {
HXLINE( 159)				goto _hx_goto_2;
            			}
HXLINE( 160)			insize = (insize * 2);
            		}
            		_hx_goto_2:;
HXLINE( 162)		list->prev = null();
HXLINE( 163)		::haxe::MainLoop_obj::pending = list;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MainLoop_obj,sortEvents,(void))

Float MainLoop_obj::tick(){
            	HX_STACKFRAME(&_hx_pos_c09dd4c76a148f98_169_tick)
HXLINE( 170)		::haxe::MainLoop_obj::sortEvents();
HXLINE( 171)		 ::haxe::MainEvent e = ::haxe::MainLoop_obj::pending;
HXLINE( 172)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 172)		Float now;
HXDLIN( 172)		if ((timer > 0)) {
HXLINE( 172)			now = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE( 172)			now = ( (Float)(0) );
            		}
HXLINE( 173)		Float wait = ((Float)1e9);
HXLINE( 174)		while(::hx::IsNotNull( e )){
HXLINE( 175)			 ::haxe::MainEvent next = e->next;
HXLINE( 176)			Float wt = (e->nextRun - now);
HXLINE( 177)			if ((wt <= 0)) {
HXLINE( 178)				wait = ( (Float)(0) );
HXLINE( 179)				if (::hx::IsNotNull( e->f )) {
HXLINE( 179)					e->f();
            				}
            			}
            			else {
HXLINE( 180)				if ((wait > wt)) {
HXLINE( 181)					wait = wt;
            				}
            			}
HXLINE( 182)			e = next;
            		}
HXLINE( 184)		return wait;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MainLoop_obj,tick,return )


MainLoop_obj::MainLoop_obj()
{
}

bool MainLoop_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tick") ) { outValue = tick_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pending") ) { outValue = ( pending ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasEvents") ) { outValue = hasEvents_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sortEvents") ) { outValue = sortEvents_dyn(); return true; }
	}
	return false;
}

bool MainLoop_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"pending") ) { pending=ioValue.Cast<  ::haxe::MainEvent >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MainLoop_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo MainLoop_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::MainEvent */ ,(void *) &MainLoop_obj::pending,HX_("pending",57,98,ec,2b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void MainLoop_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainLoop_obj::pending,"pending");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MainLoop_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainLoop_obj::pending,"pending");
};

#endif

::hx::Class MainLoop_obj::__mClass;

static ::String MainLoop_obj_sStaticFields[] = {
	HX_("pending",57,98,ec,2b),
	HX_("hasEvents",13,02,53,d7),
	HX_("sortEvents",17,c5,4f,f3),
	HX_("tick",5d,c3,fc,4c),
	::String(null())
};

void MainLoop_obj::__register()
{
	MainLoop_obj _hx_dummy;
	MainLoop_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.MainLoop",a5,cc,ab,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MainLoop_obj::__GetStatic;
	__mClass->mSetStaticField = &MainLoop_obj::__SetStatic;
	__mClass->mMarkFunc = MainLoop_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MainLoop_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< MainLoop_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MainLoop_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainLoop_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainLoop_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
