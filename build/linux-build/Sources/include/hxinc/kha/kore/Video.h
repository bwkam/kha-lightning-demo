// Generated by Haxe 4.3.0+fa3f709
#ifndef INCLUDED_kha_kore_Video
#define INCLUDED_kha_kore_Video

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_Video
#include <hxinc/kha/Video.h>
#endif
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Video)
HX_DECLARE_CLASS2(kha,kore,Video)


#include <kinc/video.h>

namespace kha{
namespace kore{


class HXCPP_CLASS_ATTRIBUTES Video_obj : public  ::kha::Video_obj
{
	public:
		typedef  ::kha::Video_obj super;
		typedef Video_obj OBJ_;
		Video_obj();

	public:
		enum { _hx_ClassId = 0x38459580 };

		void __construct(::String filename);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.kore.Video")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"kha.kore.Video"); }
		static ::hx::ObjectPtr< Video_obj > __new(::String filename);
		static ::hx::ObjectPtr< Video_obj > __alloc(::hx::Ctx *_hx_ctx,::String filename);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Video_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Video",5b,84,29,ca); }

		void init(::String filename);
		::Dynamic init_dyn();

		void play(::hx::Null< bool >  loop);

		void pause();

		void stop();

		void update(Float time);

		int getLength();

		int getCurrentPos();

		int get_position();

		int set_position(int value);

		bool isFinished();

		int width();

		int height();

		void unload();

kinc_video_t video;
};

} // end namespace kha
} // end namespace kore

#endif /* INCLUDED_kha_kore_Video */ 
