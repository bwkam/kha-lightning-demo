// Generated by Haxe 4.3.0+fa3f709
#ifndef INCLUDED_kha_graphics4_PipelineState
#define INCLUDED_kha_graphics4_PipelineState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_graphics4_PipelineStateBase
#include <hxinc/kha/graphics4/PipelineStateBase.h>
#endif
HX_DECLARE_CLASS2(kha,graphics4,ConstantLocation)
HX_DECLARE_CLASS2(kha,graphics4,FragmentShader)
HX_DECLARE_CLASS2(kha,graphics4,GeometryShader)
HX_DECLARE_CLASS2(kha,graphics4,PipelineState)
HX_DECLARE_CLASS2(kha,graphics4,PipelineStateBase)
HX_DECLARE_CLASS2(kha,graphics4,TessellationControlShader)
HX_DECLARE_CLASS2(kha,graphics4,TessellationEvaluationShader)
HX_DECLARE_CLASS2(kha,graphics4,TextureUnit)
HX_DECLARE_CLASS2(kha,graphics4,VertexElement)
HX_DECLARE_CLASS2(kha,graphics4,VertexShader)
HX_DECLARE_CLASS2(kha,graphics4,VertexStructure)
HX_DECLARE_CLASS3(kha,kore,graphics4,ConstantLocation)
HX_DECLARE_CLASS3(kha,kore,graphics4,TextureUnit)


#include <kinc/graphics4/graphics.h>
#include <kinc/graphics4/pipeline.h>
#include <kinc/graphics4/vertexstructure.h>
#include <khalib/g4.h>

namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES PipelineState_obj : public  ::kha::graphics4::PipelineStateBase_obj
{
	public:
		typedef  ::kha::graphics4::PipelineStateBase_obj super;
		typedef PipelineState_obj OBJ_;
		PipelineState_obj();

	public:
		enum { _hx_ClassId = 0x61e3feea };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.graphics4.PipelineState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"kha.graphics4.PipelineState"); }
		static ::hx::ObjectPtr< PipelineState_obj > __new();
		static ::hx::ObjectPtr< PipelineState_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PipelineState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PipelineState",6f,df,61,cd); }

		static int getDepthBufferBits(int depthAndStencil);
		static ::Dynamic getDepthBufferBits_dyn();

		static int getStencilBufferBits(int depthAndStencil);
		static ::Dynamic getStencilBufferBits_dyn();

		static int getBlendFactor(int factor);
		static ::Dynamic getBlendFactor_dyn();

		static int getBlendOperation(int factor);
		static ::Dynamic getBlendOperation_dyn();

		static  ::kha::graphics4::VertexElement _unused1();
		static ::Dynamic _unused1_dyn();

		static int _unused2();
		static ::Dynamic _unused2_dyn();

		static  ::kha::graphics4::VertexShader _unused3();
		static ::Dynamic _unused3_dyn();

		static  ::kha::graphics4::FragmentShader _unused4();
		static ::Dynamic _unused4_dyn();

		static  ::kha::graphics4::GeometryShader _unused5();
		static ::Dynamic _unused5_dyn();

		static  ::kha::graphics4::TessellationControlShader _unused6();
		static ::Dynamic _unused6_dyn();

		static  ::kha::graphics4::TessellationEvaluationShader _unused7();
		static ::Dynamic _unused7_dyn();

		void _hx_delete();
		::Dynamic _hx_delete_dyn();

		void linkWithStructures2( ::kha::graphics4::VertexStructure structure0, ::kha::graphics4::VertexStructure structure1, ::kha::graphics4::VertexStructure structure2, ::kha::graphics4::VertexStructure structure3,int size);
		::Dynamic linkWithStructures2_dyn();

		void compile();
		::Dynamic compile_dyn();

		::Dynamic getConstantLocation(::String name);
		::Dynamic getConstantLocation_dyn();

		void initConstantLocation( ::kha::kore::graphics4::ConstantLocation location,::String name);
		::Dynamic initConstantLocation_dyn();

		::Dynamic getTextureUnit(::String name);
		::Dynamic getTextureUnit_dyn();

		void initTextureUnit( ::kha::kore::graphics4::TextureUnit unit,::String name);
		::Dynamic initTextureUnit_dyn();

		void setStates(int cullMode,int depthMode,int stencilFrontMode,int stencilFrontBothPass,int stencilFrontDepthFail,int stencilFrontFail,int stencilBackMode,int stencilBackBothPass,int stencilBackDepthFail,int stencilBackFail,bool depthWrite,int stencilReferenceValue,int blendSource,int blendDestination,int blendOperation,int alphaBlendSource,int alphaBlendDestination,int alphaBlendOperation,int depthAttachmentBits,int stencilAttachmentBits);
		::Dynamic setStates_dyn();

		void set2();
		::Dynamic set2_dyn();

		void set();
		::Dynamic set_dyn();

kinc_g4_pipeline_t pipeline;
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_PipelineState */ 
