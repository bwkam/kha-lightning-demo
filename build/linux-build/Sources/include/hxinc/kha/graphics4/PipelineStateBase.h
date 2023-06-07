// Generated by Haxe 4.3.0+fa3f709
#ifndef INCLUDED_kha_graphics4_PipelineStateBase
#define INCLUDED_kha_graphics4_PipelineStateBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics4,FragmentShader)
HX_DECLARE_CLASS2(kha,graphics4,GeometryShader)
HX_DECLARE_CLASS2(kha,graphics4,PipelineStateBase)
HX_DECLARE_CLASS2(kha,graphics4,StencilValue)
HX_DECLARE_CLASS2(kha,graphics4,TessellationControlShader)
HX_DECLARE_CLASS2(kha,graphics4,TessellationEvaluationShader)
HX_DECLARE_CLASS2(kha,graphics4,VertexShader)
HX_DECLARE_CLASS2(kha,graphics4,VertexStructure)

namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES PipelineStateBase_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PipelineStateBase_obj OBJ_;
		PipelineStateBase_obj();

	public:
		enum { _hx_ClassId = 0x3e68d01b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.graphics4.PipelineStateBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"kha.graphics4.PipelineStateBase"); }
		static ::hx::ObjectPtr< PipelineStateBase_obj > __new();
		static ::hx::ObjectPtr< PipelineStateBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PipelineStateBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PipelineStateBase",20,d7,a1,02); }

		::Array< ::Dynamic> inputLayout;
		inline ::Array< ::Dynamic> _hx_set_inputLayout(::hx::StackContext *_hx_ctx,::Array< ::Dynamic> _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return inputLayout=_hx_v; }
		 ::kha::graphics4::VertexShader vertexShader;
		inline  ::kha::graphics4::VertexShader _hx_set_vertexShader(::hx::StackContext *_hx_ctx, ::kha::graphics4::VertexShader _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return vertexShader=_hx_v; }
		 ::kha::graphics4::FragmentShader fragmentShader;
		inline  ::kha::graphics4::FragmentShader _hx_set_fragmentShader(::hx::StackContext *_hx_ctx, ::kha::graphics4::FragmentShader _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return fragmentShader=_hx_v; }
		 ::kha::graphics4::GeometryShader geometryShader;
		inline  ::kha::graphics4::GeometryShader _hx_set_geometryShader(::hx::StackContext *_hx_ctx, ::kha::graphics4::GeometryShader _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return geometryShader=_hx_v; }
		 ::kha::graphics4::TessellationControlShader tessellationControlShader;
		inline  ::kha::graphics4::TessellationControlShader _hx_set_tessellationControlShader(::hx::StackContext *_hx_ctx, ::kha::graphics4::TessellationControlShader _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return tessellationControlShader=_hx_v; }
		 ::kha::graphics4::TessellationEvaluationShader tessellationEvaluationShader;
		inline  ::kha::graphics4::TessellationEvaluationShader _hx_set_tessellationEvaluationShader(::hx::StackContext *_hx_ctx, ::kha::graphics4::TessellationEvaluationShader _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return tessellationEvaluationShader=_hx_v; }
		int cullMode;
		bool depthWrite;
		int depthMode;
		int stencilFrontMode;
		int stencilFrontBothPass;
		int stencilFrontDepthFail;
		int stencilFrontFail;
		int stencilBackMode;
		int stencilBackBothPass;
		int stencilBackDepthFail;
		int stencilBackFail;
		 ::kha::graphics4::StencilValue stencilReferenceValue;
		inline  ::kha::graphics4::StencilValue _hx_set_stencilReferenceValue(::hx::StackContext *_hx_ctx, ::kha::graphics4::StencilValue _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return stencilReferenceValue=_hx_v; }
		int stencilReadMask;
		int stencilWriteMask;
		int blendSource;
		int blendDestination;
		int blendOperation;
		int alphaBlendSource;
		int alphaBlendDestination;
		int alphaBlendOperation;
		::Array< bool > colorWriteMasksRed;
		inline ::Array< bool > _hx_set_colorWriteMasksRed(::hx::StackContext *_hx_ctx,::Array< bool > _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return colorWriteMasksRed=_hx_v; }
		::Array< bool > colorWriteMasksGreen;
		inline ::Array< bool > _hx_set_colorWriteMasksGreen(::hx::StackContext *_hx_ctx,::Array< bool > _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return colorWriteMasksGreen=_hx_v; }
		::Array< bool > colorWriteMasksBlue;
		inline ::Array< bool > _hx_set_colorWriteMasksBlue(::hx::StackContext *_hx_ctx,::Array< bool > _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return colorWriteMasksBlue=_hx_v; }
		::Array< bool > colorWriteMasksAlpha;
		inline ::Array< bool > _hx_set_colorWriteMasksAlpha(::hx::StackContext *_hx_ctx,::Array< bool > _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return colorWriteMasksAlpha=_hx_v; }
		int colorAttachmentCount;
		::Array< int > colorAttachments;
		inline ::Array< int > _hx_set_colorAttachments(::hx::StackContext *_hx_ctx,::Array< int > _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return colorAttachments=_hx_v; }
		int depthStencilAttachment;
		bool set_colorWriteMask(bool value);
		::Dynamic set_colorWriteMask_dyn();

		bool get_colorWriteMaskRed();
		::Dynamic get_colorWriteMaskRed_dyn();

		bool set_colorWriteMaskRed(bool value);
		::Dynamic set_colorWriteMaskRed_dyn();

		bool get_colorWriteMaskGreen();
		::Dynamic get_colorWriteMaskGreen_dyn();

		bool set_colorWriteMaskGreen(bool value);
		::Dynamic set_colorWriteMaskGreen_dyn();

		bool get_colorWriteMaskBlue();
		::Dynamic get_colorWriteMaskBlue_dyn();

		bool set_colorWriteMaskBlue(bool value);
		::Dynamic set_colorWriteMaskBlue_dyn();

		bool get_colorWriteMaskAlpha();
		::Dynamic get_colorWriteMaskAlpha_dyn();

		bool set_colorWriteMaskAlpha(bool value);
		::Dynamic set_colorWriteMaskAlpha_dyn();

		bool conservativeRasterization;
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_PipelineStateBase */ 
