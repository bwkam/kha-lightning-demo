// Generated by Haxe 4.3.0+fa3f709
#ifndef INCLUDED_kha_math_Vector3
#define INCLUDED_kha_math_Vector3

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,math,Vector3)

namespace kha{
namespace math{


class HXCPP_CLASS_ATTRIBUTES Vector3_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Vector3_obj OBJ_;
		Vector3_obj();

	public:
		enum { _hx_ClassId = 0x17b1c0c4 };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.math.Vector3")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"kha.math.Vector3"); }
		static ::hx::ObjectPtr< Vector3_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z);
		static ::hx::ObjectPtr< Vector3_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Vector3_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Vector3",f0,21,ee,a7); }

		Float x;
		Float y;
		Float z;
		Float get_length();
		::Dynamic get_length_dyn();

		Float set_length(Float length);
		::Dynamic set_length_dyn();

};

} // end namespace kha
} // end namespace math

#endif /* INCLUDED_kha_math_Vector3 */ 
