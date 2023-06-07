// Generated by Haxe 4.3.0+fa3f709
#ifndef INCLUDED_kha_kore_graphics4_Graphics
#define INCLUDED_kha_kore_graphics4_Graphics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_graphics4_Graphics
#include <hxinc/kha/graphics4/Graphics.h>
#endif
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Video)
HX_DECLARE_CLASS2(kha,arrays,ByteArrayPrivate)
HX_DECLARE_CLASS2(kha,graphics4,ConstantLocation)
HX_DECLARE_CLASS2(kha,graphics4,CubeMap)
HX_DECLARE_CLASS2(kha,graphics4,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,IndexBuffer)
HX_DECLARE_CLASS2(kha,graphics4,PipelineState)
HX_DECLARE_CLASS2(kha,graphics4,PipelineStateBase)
HX_DECLARE_CLASS2(kha,graphics4,TextureUnit)
HX_DECLARE_CLASS2(kha,graphics4,VertexBuffer)
HX_DECLARE_CLASS3(kha,kore,graphics4,ConstantLocation)
HX_DECLARE_CLASS3(kha,kore,graphics4,Graphics)
HX_DECLARE_CLASS3(kha,kore,graphics4,TextureUnit)
HX_DECLARE_CLASS2(kha,math,FastMatrix3)
HX_DECLARE_CLASS2(kha,math,FastMatrix4)
HX_DECLARE_CLASS2(kha,math,FastVector2)
HX_DECLARE_CLASS2(kha,math,FastVector3)
HX_DECLARE_CLASS2(kha,math,FastVector4)


#include <kinc/display.h>
#include <kinc/graphics4/graphics.h>
#include <kinc/graphics4/rendertarget.h>
#include <kinc/window.h>

namespace kha{
namespace kore{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES Graphics_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Graphics_obj OBJ_;
		Graphics_obj();

	public:
		enum { _hx_ClassId = 0x53097f05 };

		void __construct(::Dynamic target);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.kore.graphics4.Graphics")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"kha.kore.graphics4.Graphics"); }
		static ::hx::ObjectPtr< Graphics_obj > __new(::Dynamic target);
		static ::hx::ObjectPtr< Graphics_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic target);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Graphics_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Graphics",eb,b4,19,ec); }

		static void __boot();
		static int lastWindow;
		static  ::kha::kore::graphics4::Graphics current;
		::Dynamic target;
		inline ::Dynamic _hx_set_target(::hx::StackContext *_hx_ctx,::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return target=_hx_v; }
		 ::Dynamic window;
		inline  ::Dynamic _hx_set_window(::hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return window=_hx_v; }
		void init();
		::Dynamic init_dyn();

		bool vsynced();
		::Dynamic vsynced_dyn();

		int refreshRate();
		::Dynamic refreshRate_dyn();

		void clear( ::Dynamic color, ::Dynamic z, ::Dynamic stencil);
		::Dynamic clear_dyn();

		void viewport(int x,int y,int width,int height);
		::Dynamic viewport_dyn();

		void clear2(int flags,int color,Float z,int stencil);
		::Dynamic clear2_dyn();

		void setVertexBuffer( ::kha::graphics4::VertexBuffer vertexBuffer);
		::Dynamic setVertexBuffer_dyn();

		void setVertexBuffersInternal( ::kha::graphics4::VertexBuffer vb0, ::kha::graphics4::VertexBuffer vb1, ::kha::graphics4::VertexBuffer vb2, ::kha::graphics4::VertexBuffer vb3,int count);
		::Dynamic setVertexBuffersInternal_dyn();

		void setVertexBuffers(::Array< ::Dynamic> vertexBuffers);
		::Dynamic setVertexBuffers_dyn();

		void setIndexBuffer( ::kha::graphics4::IndexBuffer indexBuffer);
		::Dynamic setIndexBuffer_dyn();

		int maxTextureSize();
		::Dynamic maxTextureSize_dyn();

		bool supportsNonPow2Textures();
		::Dynamic supportsNonPow2Textures_dyn();

		void setCubeMap(::Dynamic unit, ::kha::graphics4::CubeMap cubeMap);
		::Dynamic setCubeMap_dyn();

		void setCubeMapDepth(::Dynamic unit, ::kha::graphics4::CubeMap cubeMap);
		::Dynamic setCubeMapDepth_dyn();

		void scissor(int x,int y,int width,int height);
		::Dynamic scissor_dyn();

		void disableScissor();
		::Dynamic disableScissor_dyn();

		bool instancedRenderingAvailable();
		::Dynamic instancedRenderingAvailable_dyn();

		void setTextureWrapNative( ::kha::kore::graphics4::TextureUnit unit,int uWrap,int vWrap);
		::Dynamic setTextureWrapNative_dyn();

		void setTexture3DWrapNative( ::kha::kore::graphics4::TextureUnit unit,int uWrap,int vWrap,int wWrap);
		::Dynamic setTexture3DWrapNative_dyn();

		void setTextureFiltersNative( ::kha::kore::graphics4::TextureUnit unit,int minificationFilter,int magnificationFilter,int mipMapFilter);
		::Dynamic setTextureFiltersNative_dyn();

		void setTexture3DFiltersNative( ::kha::kore::graphics4::TextureUnit unit,int minificationFilter,int magnificationFilter,int mipMapFilter);
		::Dynamic setTexture3DFiltersNative_dyn();

		void setTextureParameters(::Dynamic texunit,int uAddressing,int vAddressing,int minificationFilter,int magnificationFilter,int mipmapFilter);
		::Dynamic setTextureParameters_dyn();

		void setTexture3DParameters(::Dynamic texunit,int uAddressing,int vAddressing,int wAddressing,int minificationFilter,int magnificationFilter,int mipmapFilter);
		::Dynamic setTexture3DParameters_dyn();

		void setTextureCompareMode(::Dynamic texunit,bool enabled);
		::Dynamic setTextureCompareMode_dyn();

		void setCubeMapCompareMode(::Dynamic texunit,bool enabled);
		::Dynamic setCubeMapCompareMode_dyn();

		void setTextureInternal( ::kha::kore::graphics4::TextureUnit unit, ::kha::Image texture);
		::Dynamic setTextureInternal_dyn();

		void setTexture(::Dynamic unit, ::kha::Image texture);
		::Dynamic setTexture_dyn();

		void setTextureDepth(::Dynamic unit, ::kha::Image texture);
		::Dynamic setTextureDepth_dyn();

		void setTextureArray(::Dynamic unit, ::kha::Image texture);
		::Dynamic setTextureArray_dyn();

		void setVideoTexture(::Dynamic unit, ::kha::Video texture);
		::Dynamic setVideoTexture_dyn();

		void setImageTextureInternal( ::kha::kore::graphics4::TextureUnit unit, ::kha::Image texture);
		::Dynamic setImageTextureInternal_dyn();

		void setImageTexture(::Dynamic unit, ::kha::Image texture);
		::Dynamic setImageTexture_dyn();

		int maxBoundTextures();
		::Dynamic maxBoundTextures_dyn();

		void setPipeline( ::kha::graphics4::PipelineState pipe);
		::Dynamic setPipeline_dyn();

		void setStencilReferenceValue(int value);
		::Dynamic setStencilReferenceValue_dyn();

		void setBool(::Dynamic location,bool value);
		::Dynamic setBool_dyn();

		void setBoolPrivate( ::kha::kore::graphics4::ConstantLocation location,bool value);
		::Dynamic setBoolPrivate_dyn();

		void setInt(::Dynamic location,int value);
		::Dynamic setInt_dyn();

		void setIntPrivate( ::kha::kore::graphics4::ConstantLocation location,int value);
		::Dynamic setIntPrivate_dyn();

		void setInt2(::Dynamic location,int value1,int value2);
		::Dynamic setInt2_dyn();

		void setInt2Private( ::kha::kore::graphics4::ConstantLocation location,int value1,int value2);
		::Dynamic setInt2Private_dyn();

		void setInt3(::Dynamic location,int value1,int value2,int value3);
		::Dynamic setInt3_dyn();

		void setInt3Private( ::kha::kore::graphics4::ConstantLocation location,int value1,int value2,int value3);
		::Dynamic setInt3Private_dyn();

		void setInt4(::Dynamic location,int value1,int value2,int value3,int value4);
		::Dynamic setInt4_dyn();

		void setInt4Private( ::kha::kore::graphics4::ConstantLocation location,int value1,int value2,int value3,int value4);
		::Dynamic setInt4Private_dyn();

		void setInts(::Dynamic location, ::kha::arrays::ByteArrayPrivate values);
		::Dynamic setInts_dyn();

		void setIntsPrivate( ::kha::kore::graphics4::ConstantLocation location, ::kha::arrays::ByteArrayPrivate values);
		::Dynamic setIntsPrivate_dyn();

		void setFloat(::Dynamic location,float value);
		::Dynamic setFloat_dyn();

		void setFloatPrivate( ::kha::kore::graphics4::ConstantLocation location,float value);
		::Dynamic setFloatPrivate_dyn();

		void setFloat2(::Dynamic location,float value1,float value2);
		::Dynamic setFloat2_dyn();

		void setFloat2Private( ::kha::kore::graphics4::ConstantLocation location,float value1,float value2);
		::Dynamic setFloat2Private_dyn();

		void setFloat3(::Dynamic location,float value1,float value2,float value3);
		::Dynamic setFloat3_dyn();

		void setFloat3Private( ::kha::kore::graphics4::ConstantLocation location,float value1,float value2,float value3);
		::Dynamic setFloat3Private_dyn();

		void setFloat4(::Dynamic location,float value1,float value2,float value3,float value4);
		::Dynamic setFloat4_dyn();

		void setFloat4Private( ::kha::kore::graphics4::ConstantLocation location,float value1,float value2,float value3,float value4);
		::Dynamic setFloat4Private_dyn();

		void setVector2(::Dynamic location, ::kha::math::FastVector2 value);
		::Dynamic setVector2_dyn();

		void setVector2Private( ::kha::kore::graphics4::ConstantLocation location,float x,float y);
		::Dynamic setVector2Private_dyn();

		void setVector3(::Dynamic location, ::kha::math::FastVector3 value);
		::Dynamic setVector3_dyn();

		void setVector3Private( ::kha::kore::graphics4::ConstantLocation location,float x,float y,float z);
		::Dynamic setVector3Private_dyn();

		void setVector4(::Dynamic location, ::kha::math::FastVector4 value);
		::Dynamic setVector4_dyn();

		void setVector4Private( ::kha::kore::graphics4::ConstantLocation location,float x,float y,float z,float w);
		::Dynamic setVector4Private_dyn();

		void setFloats(::Dynamic location, ::kha::arrays::ByteArrayPrivate values);
		::Dynamic setFloats_dyn();

		void setFloatsPrivate( ::kha::kore::graphics4::ConstantLocation location, ::kha::arrays::ByteArrayPrivate values);
		::Dynamic setFloatsPrivate_dyn();

		void setMatrix(::Dynamic location, ::kha::math::FastMatrix4 matrix);
		::Dynamic setMatrix_dyn();

		void setMatrixPrivate( ::kha::kore::graphics4::ConstantLocation location, ::kha::math::FastMatrix4 matrix);
		::Dynamic setMatrixPrivate_dyn();

		void setMatrix3(::Dynamic location, ::kha::math::FastMatrix3 matrix);
		::Dynamic setMatrix3_dyn();

		void setMatrix3Private( ::kha::kore::graphics4::ConstantLocation location, ::kha::math::FastMatrix3 matrix);
		::Dynamic setMatrix3Private_dyn();

		void drawIndexedVertices(::hx::Null< int >  start,::hx::Null< int >  count);
		::Dynamic drawIndexedVertices_dyn();

		void drawAllIndexedVertices();
		::Dynamic drawAllIndexedVertices_dyn();

		void drawSomeIndexedVertices(int start,int count);
		::Dynamic drawSomeIndexedVertices_dyn();

		void drawIndexedVerticesInstanced(int instanceCount,::hx::Null< int >  start,::hx::Null< int >  count);
		::Dynamic drawIndexedVerticesInstanced_dyn();

		void drawAllIndexedVerticesInstanced(int instanceCount);
		::Dynamic drawAllIndexedVerticesInstanced_dyn();

		void drawSomeIndexedVerticesInstanced(int instanceCount,int start,int count);
		::Dynamic drawSomeIndexedVerticesInstanced_dyn();

		void renderToTexture(::Array< ::Dynamic> additionalRenderTargets);
		::Dynamic renderToTexture_dyn();

		void renderToBackbuffer();
		::Dynamic renderToBackbuffer_dyn();

		void begin(::Array< ::Dynamic> additionalRenderTargets);
		::Dynamic begin_dyn();

		void beginFace(int face);
		::Dynamic beginFace_dyn();

		void beginEye(int eye);
		::Dynamic beginEye_dyn();

		void end();
		::Dynamic end_dyn();

		void flush();
		::Dynamic flush_dyn();

kinc_g4_render_target_t *renderTarget = nullptr;
};

} // end namespace kha
} // end namespace kore
} // end namespace graphics4

#endif /* INCLUDED_kha_kore_graphics4_Graphics */ 
