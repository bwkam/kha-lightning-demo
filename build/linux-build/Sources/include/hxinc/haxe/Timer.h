// Generated by Haxe 4.3.0+fa3f709
#ifndef INCLUDED_haxe_Timer
#define INCLUDED_haxe_Timer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,Timer)

namespace haxe{


class HXCPP_CLASS_ATTRIBUTES Timer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Timer_obj OBJ_;
		Timer_obj();

	public:
		enum { _hx_ClassId = 0x04eaa0bb };

		void __construct(int time_ms);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.Timer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.Timer"); }
		static ::hx::ObjectPtr< Timer_obj > __new(int time_ms);
		static ::hx::ObjectPtr< Timer_obj > __alloc(::hx::Ctx *_hx_ctx,int time_ms);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		static void __alloc_dynamic_functions(::hx::Ctx *_hx_alloc,Timer_obj *_hx_obj);
		//~Timer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Timer",a5,2f,63,a3); }

		static  ::haxe::Timer delay( ::Dynamic f,int time_ms);
		static ::Dynamic delay_dyn();

		static  ::Dynamic measure( ::Dynamic f, ::Dynamic pos);
		static ::Dynamic measure_dyn();

		static Float stamp();
		static ::Dynamic stamp_dyn();

		 ::Dynamic id;
		inline  ::Dynamic _hx_set_id(::hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return id=_hx_v; }
		void stop();
		::Dynamic stop_dyn();

		::Dynamic run;
		inline ::Dynamic _hx_set_run(::hx::StackContext *_hx_ctx,::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return run=_hx_v; }
		inline ::Dynamic &run_dyn() {return run; }

};

} // end namespace haxe

#endif /* INCLUDED_haxe_Timer */ 
