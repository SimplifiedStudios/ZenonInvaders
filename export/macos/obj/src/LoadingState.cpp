// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_AssetPaths
#include <AssetPaths.h>
#endif
#ifndef INCLUDED_LoadingState
#include <LoadingState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7b9d652bf7289928_8_new,"LoadingState","new",0x2bad3187,"LoadingState.new","LoadingState.hx",8,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_15_create,"LoadingState","create",0x65cff835,"LoadingState.create","LoadingState.hx",15,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_28_update,"LoadingState","update",0x70c61742,"LoadingState.update","LoadingState.hx",28,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_35_update,"LoadingState","update",0x70c61742,"LoadingState.update","LoadingState.hx",35,0x53ff9bc9)

void LoadingState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_8_new)
HXLINE(  10)		this->LoadingPercentage = 0;
HXLINE(   8)		super::__construct(MaxSize);
            	}

Dynamic LoadingState_obj::__CreateEmpty() { return new LoadingState_obj; }

void *LoadingState_obj::_hx_vtable = 0;

Dynamic LoadingState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LoadingState_obj > _hx_result = new LoadingState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool LoadingState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x2a8fb4d5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2a8fb4d5;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void LoadingState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_15_create)
HXLINE(  16)		this->super::create();
HXLINE(  18)		 ::flixel::FlxSprite background =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,::AssetPaths_obj::image(HX_("mainbg",3e,ce,7f,b4),HX_("jpeg",a8,f2,65,46)));
HXLINE(  19)		{
HXLINE(  19)			int axes = 17;
HXDLIN(  19)			bool _hx_tmp;
HXDLIN(  19)			if ((axes != 1)) {
HXLINE(  19)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  19)				_hx_tmp = true;
            			}
HXDLIN(  19)			if (_hx_tmp) {
HXLINE(  19)				int _hx_tmp1 = ::flixel::FlxG_obj::width;
HXDLIN(  19)				background->set_x(((( (Float)(_hx_tmp1) ) - background->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  19)			bool _hx_tmp2;
HXDLIN(  19)			if ((axes != 16)) {
HXLINE(  19)				_hx_tmp2 = (axes == 17);
            			}
            			else {
HXLINE(  19)				_hx_tmp2 = true;
            			}
HXDLIN(  19)			if (_hx_tmp2) {
HXLINE(  19)				int _hx_tmp3 = ::flixel::FlxG_obj::height;
HXDLIN(  19)				background->set_y(((( (Float)(_hx_tmp3) ) - background->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  20)		this->add(background);
HXLINE(  22)		this->text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,null(),HX_("Loading...",12,7b,0c,0d),16,null());
HXLINE(  23)		{
HXLINE(  23)			 ::flixel::text::FlxText _this = this->text;
HXDLIN(  23)			int axes1 = 17;
HXDLIN(  23)			bool _hx_tmp4;
HXDLIN(  23)			if ((axes1 != 1)) {
HXLINE(  23)				_hx_tmp4 = (axes1 == 17);
            			}
            			else {
HXLINE(  23)				_hx_tmp4 = true;
            			}
HXDLIN(  23)			if (_hx_tmp4) {
HXLINE(  23)				int _hx_tmp5 = ::flixel::FlxG_obj::width;
HXDLIN(  23)				_this->set_x(((( (Float)(_hx_tmp5) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  23)			bool _hx_tmp6;
HXDLIN(  23)			if ((axes1 != 16)) {
HXLINE(  23)				_hx_tmp6 = (axes1 == 17);
            			}
            			else {
HXLINE(  23)				_hx_tmp6 = true;
            			}
HXDLIN(  23)			if (_hx_tmp6) {
HXLINE(  23)				int _hx_tmp7 = ::flixel::FlxG_obj::height;
HXDLIN(  23)				_this->set_y(((( (Float)(_hx_tmp7) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  24)		this->add(this->text);
            	}


void LoadingState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_28_update)
HXLINE(  29)		this->super::update(elapsed);
HXLINE(  30)		this->text->set_text((HX_("Loading: ",02,78,f3,e7) + this->LoadingPercentage));
HXLINE(  31)		 ::LoadingState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  31)		_hx_tmp->LoadingPercentage = (_hx_tmp->LoadingPercentage + 1);
HXLINE(  33)		if ((this->LoadingPercentage == 100)) {
HXLINE(  35)			 ::flixel::FlxState nextState =  ::PlayState_obj::__alloc( HX_CTX ,null());
HXDLIN(  35)			 ::flixel::FlxState stateOnCall = ::flixel::FlxG_obj::game->_state;
HXDLIN(  35)			 ::Dynamic _hx_tmp1 = ::Reflect_obj::field(::flixel::FlxG_obj::game->_state,HX_("switchTo",8f,f8,d6,0d));
HXDLIN(  35)			if (( (bool)(_hx_tmp1(nextState)) )) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::flixel::FlxState,nextState, ::flixel::FlxState,stateOnCall) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_35_update)
HXLINE(  35)					if (::hx::IsInstanceEq( ::flixel::FlxG_obj::game->_state,stateOnCall )) {
HXLINE(  35)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE(  35)				::flixel::FlxG_obj::game->_state->startOutro( ::Dynamic(new _hx_Closure_0(nextState,stateOnCall)));
            			}
            		}
            	}



::hx::ObjectPtr< LoadingState_obj > LoadingState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< LoadingState_obj > __this = new LoadingState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< LoadingState_obj > LoadingState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	LoadingState_obj *__this = (LoadingState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LoadingState_obj), true, "LoadingState"));
	*(void **)__this = LoadingState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

LoadingState_obj::LoadingState_obj()
{
}

void LoadingState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LoadingState);
	HX_MARK_MEMBER_NAME(LoadingPercentage,"LoadingPercentage");
	HX_MARK_MEMBER_NAME(text,"text");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LoadingState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(LoadingPercentage,"LoadingPercentage");
	HX_VISIT_MEMBER_NAME(text,"text");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LoadingState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"LoadingPercentage") ) { return ::hx::Val( LoadingPercentage ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LoadingState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"LoadingPercentage") ) { LoadingPercentage=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LoadingState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("LoadingPercentage",96,98,df,55));
	outFields->push(HX_("text",ad,cc,f9,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LoadingState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(LoadingState_obj,LoadingPercentage),HX_("LoadingPercentage",96,98,df,55)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(LoadingState_obj,text),HX_("text",ad,cc,f9,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LoadingState_obj_sStaticStorageInfo = 0;
#endif

static ::String LoadingState_obj_sMemberFields[] = {
	HX_("LoadingPercentage",96,98,df,55),
	HX_("text",ad,cc,f9,4c),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class LoadingState_obj::__mClass;

void LoadingState_obj::__register()
{
	LoadingState_obj _hx_dummy;
	LoadingState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("LoadingState",15,62,ae,41);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LoadingState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LoadingState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LoadingState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LoadingState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

