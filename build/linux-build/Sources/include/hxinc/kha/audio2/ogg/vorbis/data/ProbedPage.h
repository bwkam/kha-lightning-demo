// Generated by Haxe 4.3.0+fa3f709
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_ProbedPage
#define INCLUDED_kha_audio2_ogg_vorbis_data_ProbedPage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_07cd2fac8db508eb_16_new)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,ProbedPage)

namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{


class HXCPP_CLASS_ATTRIBUTES ProbedPage_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ProbedPage_obj OBJ_;
		ProbedPage_obj();

	public:
		enum { _hx_ClassId = 0x6f3ae797 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.audio2.ogg.vorbis.data.ProbedPage")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"kha.audio2.ogg.vorbis.data.ProbedPage"); }

		inline static ::hx::ObjectPtr< ProbedPage_obj > __new() {
			::hx::ObjectPtr< ProbedPage_obj > __this = new ProbedPage_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ProbedPage_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ProbedPage_obj *__this = (ProbedPage_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ProbedPage_obj), true, "kha.audio2.ogg.vorbis.data.ProbedPage"));
			*(void **)__this = ProbedPage_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_07cd2fac8db508eb_16_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ProbedPage_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ProbedPage",c3,a3,25,ea); }

		int pageStart;
		int pageEnd;
		int afterPreviousPageStart;
		 ::Dynamic firstDecodedSample;
		inline  ::Dynamic _hx_set_firstDecodedSample(::hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return firstDecodedSample=_hx_v; }
		 ::Dynamic lastDecodedSample;
		inline  ::Dynamic _hx_set_lastDecodedSample(::hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return lastDecodedSample=_hx_v; }
};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data

#endif /* INCLUDED_kha_audio2_ogg_vorbis_data_ProbedPage */ 
