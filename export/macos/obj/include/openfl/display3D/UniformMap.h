// Generated by Haxe 4.3.1
#ifndef INCLUDED_openfl_display3D_UniformMap
#define INCLUDED_openfl_display3D_UniformMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,display3D,Uniform)
HX_DECLARE_CLASS2(openfl,display3D,UniformMap)

namespace openfl{
namespace display3D{


class HXCPP_CLASS_ATTRIBUTES UniformMap_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef UniformMap_obj OBJ_;
		UniformMap_obj();

	public:
		enum { _hx_ClassId = 0x6d1a258b };

		void __construct(::Array< ::Dynamic> list);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.UniformMap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display3D.UniformMap"); }
		static ::hx::ObjectPtr< UniformMap_obj > __new(::Array< ::Dynamic> list);
		static ::hx::ObjectPtr< UniformMap_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> list);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~UniformMap_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("UniformMap",e8,3d,45,d1); }

		static void __boot();
		static  ::Dynamic __meta__;
		bool _hx___allDirty;
		bool _hx___anyDirty;
		 ::openfl::_Vector::ObjectVector _hx___registerLookup;
		::Array< ::Dynamic> _hx___uniforms;
		void flush();
		::Dynamic flush_dyn();

		void markAllDirty();
		::Dynamic markAllDirty_dyn();

		void markDirty(int start,int count);
		::Dynamic markDirty_dyn();

};

} // end namespace openfl
} // end namespace display3D

#endif /* INCLUDED_openfl_display3D_UniformMap */ 
