// Generated by Haxe 4.3.0+fa3f709
#ifndef INCLUDED_kha_graphics4_CubeMap
#define INCLUDED_kha_graphics4_CubeMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_Resource
#include <hxinc/kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <hxinc/kha/Canvas.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,graphics1,Graphics)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,CubeMap)
HX_DECLARE_CLASS2(kha,graphics4,Graphics)


#include <kinc/graphics4/rendertarget.h>

namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES CubeMap_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CubeMap_obj OBJ_;
		CubeMap_obj();

	public:
		enum { _hx_ClassId = 0x1afa75c2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.graphics4.CubeMap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"kha.graphics4.CubeMap"); }
		static ::hx::ObjectPtr< CubeMap_obj > __new();
		static ::hx::ObjectPtr< CubeMap_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CubeMap_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("CubeMap",87,74,21,5a); }

		static  ::kha::graphics4::CubeMap createRenderTarget(int size, ::Dynamic format, ::Dynamic depthStencil);
		static ::Dynamic createRenderTarget_dyn();

		static  ::kha::graphics4::CubeMap create2(int size,int format,bool readable,bool renderTarget,int depthStencil);
		static ::Dynamic create2_dyn();

		static int getRenderTargetFormat(int format);
		static ::Dynamic getRenderTargetFormat_dyn();

		static int getDepthBufferBits(int depthAndStencil);
		static ::Dynamic getDepthBufferBits_dyn();

		static int getStencilBufferBits(int depthAndStencil);
		static ::Dynamic getStencilBufferBits_dyn();

		static int getTextureFormat(int format);
		static ::Dynamic getTextureFormat_dyn();

		int format;
		::Dynamic graphics4;
		inline ::Dynamic _hx_set_graphics4(::hx::StackContext *_hx_ctx,::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return graphics4=_hx_v; }
		void initRenderTarget(int cubeMapSize,int format,int depthBufferBits,int stencilBufferBits);
		::Dynamic initRenderTarget_dyn();

		void unload();
		::Dynamic unload_dyn();

		 ::haxe::io::Bytes lock(::hx::Null< int >  level);
		::Dynamic lock_dyn();

		void unlock();
		::Dynamic unlock_dyn();

		int get_width();
		::Dynamic get_width_dyn();

		int get_height();
		::Dynamic get_height_dyn();

		::Dynamic get_g1();
		::Dynamic get_g1_dyn();

		 ::kha::graphics2::Graphics get_g2();
		::Dynamic get_g2_dyn();

		::Dynamic get_g4();
		::Dynamic get_g4_dyn();

kinc_g4_render_target_t renderTarget;
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_CubeMap */ 
