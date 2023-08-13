// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_af23706db05c7feb_9_new,"PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",9,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_17_create,"PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",17,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_27_update,"PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",27,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_38_detectingMovement,"PlayState","detectingMovement",0xfa6b495d,"PlayState.detectingMovement","PlayState.hx",38,0xb30d7781)
static const int _hx_array_data_46c2835d_4[] = {
	(int)32,(int)38,
};
static const int _hx_array_data_46c2835d_5[] = {
	(int)65,(int)37,
};
static const int _hx_array_data_46c2835d_6[] = {
	(int)68,(int)39,
};

void PlayState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_9_new)
HXLINE(  12)		this->GroundedLevel = 700;
HXLINE(   9)		super::__construct(MaxSize);
            	}

Dynamic PlayState_obj::__CreateEmpty() { return new PlayState_obj; }

void *PlayState_obj::_hx_vtable = 0;

Dynamic PlayState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayState_obj > _hx_result = new PlayState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PlayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x0a05f89d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0a05f89d;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void PlayState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_17_create)
HXLINE(  18)		this->super::create();
HXLINE(  19)		this->Player =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  20)		this->Player->makeGraphic(50,50,-1,null(),null());
HXLINE(  21)		this->Player->set_x(( (Float)(0) ));
HXLINE(  22)		this->Player->set_y(( (Float)(700) ));
HXLINE(  23)		this->add(this->Player);
            	}


void PlayState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_27_update)
HXLINE(  28)		this->super::update(elapsed);
HXLINE(  29)		this->detectingMovement();
HXLINE(  31)		if ((this->Player->y != this->GroundedLevel)) {
HXLINE(  33)			 ::flixel::FlxSprite fh = this->Player;
HXDLIN(  33)			fh->set_y((fh->y + 1));
            		}
            	}


void PlayState_obj::detectingMovement(){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_38_detectingMovement)
HXLINE(  39)		if (::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_46c2835d_4,2),1)) {
HXLINE(  41)			if ((this->Player->y == this->GroundedLevel)) {
HXLINE(  44)				 ::flixel::FlxSprite fh = this->Player;
HXDLIN(  44)				fh->set_y((fh->y - ( (Float)(100) )));
            			}
            		}
HXLINE(  48)		if (::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_46c2835d_5,2),1)) {
HXLINE(  50)			if ((0 >= this->Player->x)) {
HXLINE(  52)				return;
            			}
            			else {
HXLINE(  56)				 ::flixel::FlxSprite fh1 = this->Player;
HXDLIN(  56)				fh1->set_x((fh1->x - ( (Float)(30) )));
            			}
            		}
HXLINE(  60)		if (::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_46c2835d_6,2),1)) {
HXLINE(  62)			if ((this->Player->x >= 1390)) {
HXLINE(  64)				return;
            			}
            			else {
HXLINE(  68)				 ::flixel::FlxSprite fh2 = this->Player;
HXDLIN(  68)				fh2->set_x((fh2->x + 30));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,detectingMovement,(void))


::hx::ObjectPtr< PlayState_obj > PlayState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< PlayState_obj > __this = new PlayState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< PlayState_obj > PlayState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	PlayState_obj *__this = (PlayState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayState_obj), true, "PlayState"));
	*(void **)__this = PlayState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(GroundedLevel,"GroundedLevel");
	HX_MARK_MEMBER_NAME(Player,"Player");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(GroundedLevel,"GroundedLevel");
	HX_VISIT_MEMBER_NAME(Player,"Player");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PlayState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"Player") ) { return ::hx::Val( Player ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"GroundedLevel") ) { return ::hx::Val( GroundedLevel ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"detectingMovement") ) { return ::hx::Val( detectingMovement_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PlayState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"Player") ) { Player=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"GroundedLevel") ) { GroundedLevel=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("GroundedLevel",de,10,c3,c6));
	outFields->push(HX_("Player",81,5f,4d,6c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PlayState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(PlayState_obj,GroundedLevel),HX_("GroundedLevel",de,10,c3,c6)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PlayState_obj,Player),HX_("Player",81,5f,4d,6c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PlayState_obj_sStaticStorageInfo = 0;
#endif

static ::String PlayState_obj_sMemberFields[] = {
	HX_("GroundedLevel",de,10,c3,c6),
	HX_("Player",81,5f,4d,6c),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("detectingMovement",ae,be,16,06),
	::String(null()) };

::hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	PlayState_obj _hx_dummy;
	PlayState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PlayState",5d,83,c2,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

