// Generated by Haxe 4.3.0+fa3f709
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt__buf
#define INCLUDED_kha_graphics2_truetype_Stbtt__buf

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_afb1a02a96ca6bd5_51_new)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt__buf)
HX_DECLARE_CLASS2(kha,internal,BytesBlob)

namespace kha{
namespace graphics2{
namespace truetype{


class HXCPP_CLASS_ATTRIBUTES Stbtt__buf_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Stbtt__buf_obj OBJ_;
		Stbtt__buf_obj();

	public:
		enum { _hx_ClassId = 0x50f64fc1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.graphics2.truetype.Stbtt__buf")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"kha.graphics2.truetype.Stbtt__buf"); }

		inline static ::hx::ObjectPtr< Stbtt__buf_obj > __new() {
			::hx::ObjectPtr< Stbtt__buf_obj > __this = new Stbtt__buf_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Stbtt__buf_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Stbtt__buf_obj *__this = (Stbtt__buf_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Stbtt__buf_obj), true, "kha.graphics2.truetype.Stbtt__buf"));
			*(void **)__this = Stbtt__buf_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_afb1a02a96ca6bd5_51_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Stbtt__buf_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Stbtt__buf",32,f0,1e,fe); }

		 ::kha::internal::BytesBlob data;
		inline  ::kha::internal::BytesBlob _hx_set_data(::hx::StackContext *_hx_ctx, ::kha::internal::BytesBlob _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return data=_hx_v; }
		int cursor;
};

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype

#endif /* INCLUDED_kha_graphics2_truetype_Stbtt__buf */ 
