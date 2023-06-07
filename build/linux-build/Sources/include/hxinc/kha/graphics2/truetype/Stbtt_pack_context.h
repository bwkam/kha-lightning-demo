// Generated by Haxe 4.3.0+fa3f709
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_pack_context
#define INCLUDED_kha_graphics2_truetype_Stbtt_pack_context

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt_pack_context)
HX_DECLARE_CLASS2(kha,internal,BytesBlob)

namespace kha{
namespace graphics2{
namespace truetype{


class HXCPP_CLASS_ATTRIBUTES Stbtt_pack_context_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Stbtt_pack_context_obj OBJ_;
		Stbtt_pack_context_obj();

	public:
		enum { _hx_ClassId = 0x7a325b3a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.graphics2.truetype.Stbtt_pack_context")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"kha.graphics2.truetype.Stbtt_pack_context"); }

		inline static ::hx::ObjectPtr< Stbtt_pack_context_obj > __new() {
			::hx::ObjectPtr< Stbtt_pack_context_obj > __this = new Stbtt_pack_context_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Stbtt_pack_context_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Stbtt_pack_context_obj *__this = (Stbtt_pack_context_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Stbtt_pack_context_obj), true, "kha.graphics2.truetype.Stbtt_pack_context"));
			*(void **)__this = Stbtt_pack_context_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Stbtt_pack_context_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Stbtt_pack_context",47,dd,37,9b); }

		int width;
		int height;
		int stride_in_bytes;
		int padding;
		int h_oversample;
		int v_oversample;
		 ::kha::internal::BytesBlob pixels;
		inline  ::kha::internal::BytesBlob _hx_set_pixels(::hx::StackContext *_hx_ctx, ::kha::internal::BytesBlob _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return pixels=_hx_v; }
};

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype

#endif /* INCLUDED_kha_graphics2_truetype_Stbtt_pack_context */ 