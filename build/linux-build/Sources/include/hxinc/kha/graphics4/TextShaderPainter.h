// Generated by Haxe 4.3.0+fa3f709
#ifndef INCLUDED_kha_graphics4_TextShaderPainter
#define INCLUDED_kha_graphics4_TextShaderPainter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,AlignedQuad)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Kravur)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,arrays,ByteArrayPrivate)
HX_DECLARE_CLASS2(kha,graphics4,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,IndexBuffer)
HX_DECLARE_CLASS2(kha,graphics4,PipelineCache)
HX_DECLARE_CLASS2(kha,graphics4,TextShaderPainter)
HX_DECLARE_CLASS2(kha,graphics4,VertexBuffer)
HX_DECLARE_CLASS2(kha,graphics4,VertexStructure)
HX_DECLARE_CLASS2(kha,math,FastMatrix3)
HX_DECLARE_CLASS2(kha,math,FastMatrix4)

namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES TextShaderPainter_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TextShaderPainter_obj OBJ_;
		TextShaderPainter_obj();

	public:
		enum { _hx_ClassId = 0x51f88ed4 };

		void __construct(::Dynamic g4);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.graphics4.TextShaderPainter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"kha.graphics4.TextShaderPainter"); }
		static ::hx::ObjectPtr< TextShaderPainter_obj > __new(::Dynamic g4);
		static ::hx::ObjectPtr< TextShaderPainter_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic g4);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextShaderPainter_obj();

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
		::String __ToString() const { return HX_("TextShaderPainter",d9,95,31,16); }

		static void __boot();
		static ::Dynamic standardTextPipeline;
		static  ::kha::graphics4::VertexStructure structure;
		static int bufferSize;
		static int bufferIndex;
		static  ::kha::graphics4::VertexBuffer rectVertexBuffer;
		static  ::kha::arrays::ByteArrayPrivate rectVertices;
		static  ::kha::graphics4::IndexBuffer indexBuffer;
		static  ::kha::Image lastTexture;
		static void initShaders();
		static ::Dynamic initShaders_dyn();

		static int findIndex(int charCode);
		static ::Dynamic findIndex_dyn();

		 ::kha::math::FastMatrix4 projectionMatrix;
		inline  ::kha::math::FastMatrix4 _hx_set_projectionMatrix(::hx::StackContext *_hx_ctx, ::kha::math::FastMatrix4 _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return projectionMatrix=_hx_v; }
		 ::kha::Kravur font;
		inline  ::kha::Kravur _hx_set_font(::hx::StackContext *_hx_ctx, ::kha::Kravur _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return font=_hx_v; }
		::Dynamic g;
		inline ::Dynamic _hx_set_g(::hx::StackContext *_hx_ctx,::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return g=_hx_v; }
		::Dynamic myPipeline;
		inline ::Dynamic _hx_set_myPipeline(::hx::StackContext *_hx_ctx,::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return myPipeline=_hx_v; }
		int fontSize;
		bool bilinear;
		::Dynamic get_pipeline();
		::Dynamic get_pipeline_dyn();

		::Dynamic set_pipeline(::Dynamic pipe);
		::Dynamic set_pipeline_dyn();

		void setProjection( ::kha::math::FastMatrix4 projectionMatrix);
		::Dynamic setProjection_dyn();

		void initBuffers();
		::Dynamic initBuffers_dyn();

		void setRectVertices(Float bottomleftx,Float bottomlefty,Float topleftx,Float toplefty,Float toprightx,Float toprighty,Float bottomrightx,Float bottomrighty);
		::Dynamic setRectVertices_dyn();

		void setRectTexCoords(Float left,Float top,Float right,Float bottom);
		::Dynamic setRectTexCoords_dyn();

		void setRectColors(float opacity,int color);
		::Dynamic setRectColors_dyn();

		void drawBuffer();
		::Dynamic drawBuffer_dyn();

		void setBilinearFilter(bool bilinear);
		::Dynamic setBilinearFilter_dyn();

		void setFont( ::kha::Kravur font);
		::Dynamic setFont_dyn();

		 ::kha::AlignedQuad bakedQuadCache;
		inline  ::kha::AlignedQuad _hx_set_bakedQuadCache(::hx::StackContext *_hx_ctx, ::kha::AlignedQuad _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return bakedQuadCache=_hx_v; }
		void drawString(::String text,float opacity,int color,Float x,Float y, ::kha::math::FastMatrix3 transformation);
		::Dynamic drawString_dyn();

		void drawCharacters(::Array< int > text,int start,int length,float opacity,int color,Float x,Float y, ::kha::math::FastMatrix3 transformation);
		::Dynamic drawCharacters_dyn();

		void end();
		::Dynamic end_dyn();

};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_TextShaderPainter */ 
