// Generated by Haxe 4.3.0+fa3f709
#ifndef INCLUDED_kha_Image
#define INCLUDED_kha_Image

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
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Video)
HX_DECLARE_CLASS2(kha,graphics1,Graphics)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,Graphics)
HX_DECLARE_CLASS2(kha,kore,Video)


#include <kinc/graphics4/rendertarget.h>
#include <kinc/graphics4/texture.h>
#include <kinc/graphics4/texturearray.h>
#include <kinc/video.h>

#include <assert.h>

enum KhaImageType {
	KhaImageTypeNone,
	KhaImageTypeTexture,
	KhaImageTypeRenderTarget,
	KhaImageTypeTextureArray
};

namespace kha{


class HXCPP_CLASS_ATTRIBUTES Image_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Image_obj OBJ_;
		Image_obj();

	public:
		enum { _hx_ClassId = 0x016a8dfb };

		void __construct(bool readable, ::Dynamic __o_dispose);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.Image")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"kha.Image"); }
		static ::hx::ObjectPtr< Image_obj > __new(bool readable, ::Dynamic __o_dispose);
		static ::hx::ObjectPtr< Image_obj > __alloc(::hx::Ctx *_hx_ctx,bool readable, ::Dynamic __o_dispose);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Image_obj();

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
		::String __ToString() const { return HX_("Image",3b,8f,96,50); }

		static  ::kha::Image fromVideo( ::kha::Video video);
		static ::Dynamic fromVideo_dyn();

		static  ::kha::Image create(int width,int height, ::Dynamic format, ::Dynamic usage,::hx::Null< bool >  readable);
		static ::Dynamic create_dyn();

		static  ::kha::Image create3D(int width,int height,int depth, ::Dynamic format, ::Dynamic usage,::hx::Null< bool >  readable);
		static ::Dynamic create3D_dyn();

		static  ::kha::Image createRenderTarget(int width,int height, ::Dynamic format,::hx::Null< int >  depthStencil,::hx::Null< int >  antiAliasingSamples);
		static ::Dynamic createRenderTarget_dyn();

		static  ::kha::Image createArray(::Array< ::Dynamic> images, ::Dynamic format);
		static ::Dynamic createArray_dyn();

		static void initArrayTexture( ::kha::Image source,::Array< ::Dynamic> images);
		static ::Dynamic initArrayTexture_dyn();

		static  ::kha::Image fromBytes( ::haxe::io::Bytes bytes,int width,int height, ::Dynamic format, ::Dynamic usage,::hx::Null< bool >  readable);
		static ::Dynamic fromBytes_dyn();

		static  ::kha::Image fromBytes3D( ::haxe::io::Bytes bytes,int width,int height,int depth, ::Dynamic format, ::Dynamic usage,::hx::Null< bool >  readable);
		static ::Dynamic fromBytes3D_dyn();

		static void fromEncodedBytes( ::haxe::io::Bytes bytes,::String format, ::Dynamic doneCallback, ::Dynamic errorCallback,::hx::Null< bool >  readable);
		static ::Dynamic fromEncodedBytes_dyn();

		static void finalize( ::kha::Image image);
		static ::Dynamic finalize_dyn();

		static int getRenderTargetFormat(int format);
		static ::Dynamic getRenderTargetFormat_dyn();

		static int getDepthBufferBits(int depthAndStencil);
		static ::Dynamic getDepthBufferBits_dyn();

		static int getStencilBufferBits(int depthAndStencil);
		static ::Dynamic getStencilBufferBits_dyn();

		static int getTextureFormat(int format);
		static ::Dynamic getTextureFormat_dyn();

		static  ::kha::Image _create2(int width,int height,int format,bool readable,bool renderTarget,int depthStencil,int samplesPerPixel);
		static ::Dynamic _create2_dyn();

		static  ::kha::Image _create3(int width,int height,int depth,int format,bool readable,int contextId);
		static ::Dynamic _create3_dyn();

		static  ::kha::Image createEmpty(bool readable,bool floatFormat);
		static ::Dynamic createEmpty_dyn();

		static int get_maxSize();
		static ::Dynamic get_maxSize_dyn();

		static bool get_nonPow2Supported();
		static ::Dynamic get_nonPow2Supported_dyn();

		static bool renderTargetsInvertedY();
		static ::Dynamic renderTargetsInvertedY_dyn();

		static int formatByteSize(int format);
		static ::Dynamic formatByteSize_dyn();

		int myFormat;
		bool readable;
		::Dynamic graphics1;
		inline ::Dynamic _hx_set_graphics1(::hx::StackContext *_hx_ctx,::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return graphics1=_hx_v; }
		 ::kha::graphics2::Graphics graphics2;
		inline  ::kha::graphics2::Graphics _hx_set_graphics2(::hx::StackContext *_hx_ctx, ::kha::graphics2::Graphics _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return graphics2=_hx_v; }
		::Dynamic graphics4;
		inline ::Dynamic _hx_set_graphics4(::hx::StackContext *_hx_ctx,::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return graphics4=_hx_v; }
		void initFromBytes(::Array< unsigned char > bytes,int width,int height,int format);
		::Dynamic initFromBytes_dyn();

		void initFromBytes3D(::Array< unsigned char > bytes,int width,int height,int depth,int format);
		::Dynamic initFromBytes3D_dyn();

		void initFromEncodedBytes(::Array< unsigned char > bytes,::String format);
		::Dynamic initFromEncodedBytes_dyn();

		void nullify();
		::Dynamic nullify_dyn();

		void initRenderTarget(int width,int height,int format,int depthBufferBits,int stencilBufferBits,int samplesPerPixel);
		::Dynamic initRenderTarget_dyn();

		void init(int width,int height,int format);
		::Dynamic init_dyn();

		void init3D(int width,int height,int depth,int format);
		::Dynamic init3D_dyn();

		void initVideo( ::kha::kore::Video video);
		::Dynamic initVideo_dyn();

		::Dynamic get_g1();
		::Dynamic get_g1_dyn();

		 ::kha::graphics2::Graphics get_g2();
		::Dynamic get_g2_dyn();

		::Dynamic get_g4();
		::Dynamic get_g4_dyn();

		int get_width();
		::Dynamic get_width_dyn();

		int get_height();
		::Dynamic get_height_dyn();

		int get_depth();
		::Dynamic get_depth_dyn();

		int get_format();
		::Dynamic get_format_dyn();

		int get_realWidth();
		::Dynamic get_realWidth_dyn();

		int get_realHeight();
		::Dynamic get_realHeight_dyn();

		bool isOpaque(int x,int y);
		::Dynamic isOpaque_dyn();

		bool isOpaqueInternal(int x,int y,int format);
		::Dynamic isOpaqueInternal_dyn();

		int at(int x,int y);
		::Dynamic at_dyn();

		int atInternal(int x,int y,int format);
		::Dynamic atInternal_dyn();

		void unload();
		::Dynamic unload_dyn();

		 ::haxe::io::Bytes bytes;
		inline  ::haxe::io::Bytes _hx_set_bytes(::hx::StackContext *_hx_ctx, ::haxe::io::Bytes _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return bytes=_hx_v; }
		 ::haxe::io::Bytes lock(::hx::Null< int >  level);
		::Dynamic lock_dyn();

		void unlock();
		::Dynamic unlock_dyn();

		 ::haxe::io::Bytes pixels;
		inline  ::haxe::io::Bytes _hx_set_pixels(::hx::StackContext *_hx_ctx, ::haxe::io::Bytes _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return pixels=_hx_v; }
		bool pixelsAllocated;
		 ::haxe::io::Bytes getPixelsInternal(int formatSize);
		::Dynamic getPixelsInternal_dyn();

		 ::haxe::io::Bytes getPixels();
		::Dynamic getPixels_dyn();

		void generateMipmaps(int levels);
		::Dynamic generateMipmaps_dyn();

		void setMipmaps(::Array< ::Dynamic> mipmaps);
		::Dynamic setMipmaps_dyn();

		void setDepthStencilFrom( ::kha::Image image);
		::Dynamic setDepthStencilFrom_dyn();

		void clear(int x,int y,int z,int width,int height,int depth,int color);
		::Dynamic clear_dyn();

		int get_stride();
		::Dynamic get_stride_dyn();


	KhaImageType imageType;
	int originalWidth;
	int originalHeight;
	uint8_t *imageData;
	bool ownsImageData;
	kinc_g4_texture_t texture;
	kinc_g4_render_target_t renderTarget;
	kinc_g4_texture_array_t textureArray;

};

} // end namespace kha

#endif /* INCLUDED_kha_Image */ 