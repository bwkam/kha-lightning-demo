// Generated by Haxe 4.3.0+fa3f709
#ifndef INCLUDED_kha__Worker_Message
#define INCLUDED_kha__Worker_Message

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,_Worker,Message)

namespace kha{
namespace _Worker{


class HXCPP_CLASS_ATTRIBUTES Message_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Message_obj OBJ_;
		Message_obj();

	public:
		enum { _hx_ClassId = 0x0913164a };

		void __construct( ::Dynamic message);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha._Worker.Message")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"kha._Worker.Message"); }
		static ::hx::ObjectPtr< Message_obj > __new( ::Dynamic message);
		static ::hx::ObjectPtr< Message_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic message);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Message_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Message",a7,5d,62,67); }

		int threadId;
		 ::Dynamic message;
		inline  ::Dynamic _hx_set_message(::hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return message=_hx_v; }
};

} // end namespace kha
} // end namespace _Worker

#endif /* INCLUDED_kha__Worker_Message */ 
