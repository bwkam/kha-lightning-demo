// Generated by Haxe 4.3.0+fa3f709
#ifndef INCLUDED_kha_DisplayMode
#define INCLUDED_kha_DisplayMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_43ca94455628af2a_9_new)
HX_DECLARE_CLASS1(kha,DisplayMode)

namespace kha{


class HXCPP_CLASS_ATTRIBUTES DisplayMode_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DisplayMode_obj OBJ_;
		DisplayMode_obj();

	public:
		enum { _hx_ClassId = 0x2869b001 };

		void __construct(int width,int height,int frequency,int bitsPerPixel);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.DisplayMode")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"kha.DisplayMode"); }

		inline static ::hx::ObjectPtr< DisplayMode_obj > __new(int width,int height,int frequency,int bitsPerPixel) {
			::hx::ObjectPtr< DisplayMode_obj > __this = new DisplayMode_obj();
			__this->__construct(width,height,frequency,bitsPerPixel);
			return __this;
		}

		inline static ::hx::ObjectPtr< DisplayMode_obj > __alloc(::hx::Ctx *_hx_ctx,int width,int height,int frequency,int bitsPerPixel) {
			DisplayMode_obj *__this = (DisplayMode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DisplayMode_obj), false, "kha.DisplayMode"));
			*(void **)__this = DisplayMode_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_43ca94455628af2a_9_new)
HXLINE(  10)		( ( ::kha::DisplayMode)(__this) )->width = width;
HXLINE(  11)		( ( ::kha::DisplayMode)(__this) )->height = height;
HXLINE(  12)		( ( ::kha::DisplayMode)(__this) )->frequency = frequency;
HXLINE(  13)		( ( ::kha::DisplayMode)(__this) )->bitsPerPixel = bitsPerPixel;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DisplayMode_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DisplayMode",a5,0a,86,14); }

		int width;
		int height;
		int frequency;
		int bitsPerPixel;
};

} // end namespace kha

#endif /* INCLUDED_kha_DisplayMode */ 
