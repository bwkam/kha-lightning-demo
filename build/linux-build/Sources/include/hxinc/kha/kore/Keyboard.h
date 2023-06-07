// Generated by Haxe 4.3.0+fa3f709
#ifndef INCLUDED_kha_kore_Keyboard
#define INCLUDED_kha_kore_Keyboard

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_input_Keyboard
#include <hxinc/kha/input/Keyboard.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(kha,input,Keyboard)
HX_DECLARE_CLASS2(kha,kore,Keyboard)
HX_DECLARE_CLASS2(kha,netsync,Controller)


#include <kinc/input/keyboard.h>

namespace kha{
namespace kore{


class HXCPP_CLASS_ATTRIBUTES Keyboard_obj : public  ::kha::input::Keyboard_obj
{
	public:
		typedef  ::kha::input::Keyboard_obj super;
		typedef Keyboard_obj OBJ_;
		Keyboard_obj();

	public:
		enum { _hx_ClassId = 0x3f7f06fa };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.kore.Keyboard")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"kha.kore.Keyboard"); }
		static ::hx::ObjectPtr< Keyboard_obj > __new();
		static ::hx::ObjectPtr< Keyboard_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Keyboard_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Keyboard",c7,78,db,41); }

		void show();

		void hide();

		void _receive( ::haxe::io::Bytes bytes);

};

} // end namespace kha
} // end namespace kore

#endif /* INCLUDED_kha_kore_Keyboard */ 