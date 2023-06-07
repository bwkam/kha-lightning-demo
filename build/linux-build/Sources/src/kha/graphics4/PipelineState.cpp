// Generated by Haxe 4.3.0+fa3f709
#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_ConstantLocation
#include <hxinc/kha/graphics4/ConstantLocation.h>
#endif
#ifndef INCLUDED_kha_graphics4_FragmentShader
#include <hxinc/kha/graphics4/FragmentShader.h>
#endif
#ifndef INCLUDED_kha_graphics4_GeometryShader
#include <hxinc/kha/graphics4/GeometryShader.h>
#endif
#ifndef INCLUDED_kha_graphics4_PipelineState
#include <hxinc/kha/graphics4/PipelineState.h>
#endif
#ifndef INCLUDED_kha_graphics4_PipelineStateBase
#include <hxinc/kha/graphics4/PipelineStateBase.h>
#endif
#ifndef INCLUDED_kha_graphics4_StencilValue
#include <hxinc/kha/graphics4/StencilValue.h>
#endif
#ifndef INCLUDED_kha_graphics4_TessellationControlShader
#include <hxinc/kha/graphics4/TessellationControlShader.h>
#endif
#ifndef INCLUDED_kha_graphics4_TessellationEvaluationShader
#include <hxinc/kha/graphics4/TessellationEvaluationShader.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureUnit
#include <hxinc/kha/graphics4/TextureUnit.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexElement
#include <hxinc/kha/graphics4/VertexElement.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexShader
#include <hxinc/kha/graphics4/VertexShader.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexStructure
#include <hxinc/kha/graphics4/VertexStructure.h>
#endif
#ifndef INCLUDED_kha_kore_graphics4_ConstantLocation
#include <hxinc/kha/kore/graphics4/ConstantLocation.h>
#endif
#ifndef INCLUDED_kha_kore_graphics4_TextureUnit
#include <hxinc/kha/kore/graphics4/TextureUnit.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_24da384208e5bf4f_83_new,"kha.graphics4.PipelineState","new",0x339c2ff2,"kha.graphics4.PipelineState.new","kha/graphics4/PipelineState.hx",83,0x454a2300)
HX_LOCAL_STACK_FRAME(_hx_pos_24da384208e5bf4f_89_delete,"kha.graphics4.PipelineState","delete",0xa056e7d9,"kha.graphics4.PipelineState.delete","kha/graphics4/PipelineState.hx",89,0x454a2300)
HX_LOCAL_STACK_FRAME(_hx_pos_24da384208e5bf4f_116_linkWithStructures2,"kha.graphics4.PipelineState","linkWithStructures2",0x8868fba4,"kha.graphics4.PipelineState.linkWithStructures2","kha/graphics4/PipelineState.hx",116,0x454a2300)
HX_LOCAL_STACK_FRAME(_hx_pos_24da384208e5bf4f_140_compile,"kha.graphics4.PipelineState","compile",0x1c53b605,"kha.graphics4.PipelineState.compile","kha/graphics4/PipelineState.hx",140,0x454a2300)
HX_LOCAL_STACK_FRAME(_hx_pos_24da384208e5bf4f_153_getConstantLocation,"kha.graphics4.PipelineState","getConstantLocation",0x57767c01,"kha.graphics4.PipelineState.getConstantLocation","kha/graphics4/PipelineState.hx",153,0x454a2300)
HX_LOCAL_STACK_FRAME(_hx_pos_24da384208e5bf4f_160_initConstantLocation,"kha.graphics4.PipelineState","initConstantLocation",0x84c02317,"kha.graphics4.PipelineState.initConstantLocation","kha/graphics4/PipelineState.hx",160,0x454a2300)
HX_LOCAL_STACK_FRAME(_hx_pos_24da384208e5bf4f_162_getTextureUnit,"kha.graphics4.PipelineState","getTextureUnit",0x9659a1b7,"kha.graphics4.PipelineState.getTextureUnit","kha/graphics4/PipelineState.hx",162,0x454a2300)
HX_LOCAL_STACK_FRAME(_hx_pos_24da384208e5bf4f_169_initTextureUnit,"kha.graphics4.PipelineState","initTextureUnit",0x465d5261,"kha.graphics4.PipelineState.initTextureUnit","kha/graphics4/PipelineState.hx",169,0x454a2300)
HX_LOCAL_STACK_FRAME(_hx_pos_24da384208e5bf4f_270_setStates,"kha.graphics4.PipelineState","setStates",0x6d3aa796,"kha.graphics4.PipelineState.setStates","kha/graphics4/PipelineState.hx",270,0x454a2300)
HX_LOCAL_STACK_FRAME(_hx_pos_24da384208e5bf4f_273_set2,"kha.graphics4.PipelineState","set2",0xf85bd27e,"kha.graphics4.PipelineState.set2","kha/graphics4/PipelineState.hx",273,0x454a2300)
HX_LOCAL_STACK_FRAME(_hx_pos_24da384208e5bf4f_276_set,"kha.graphics4.PipelineState","set",0x339ffb34,"kha.graphics4.PipelineState.set","kha/graphics4/PipelineState.hx",276,0x454a2300)
HX_LOCAL_STACK_FRAME(_hx_pos_24da384208e5bf4f_119_getDepthBufferBits,"kha.graphics4.PipelineState","getDepthBufferBits",0x1c0c6fc1,"kha.graphics4.PipelineState.getDepthBufferBits","kha/graphics4/PipelineState.hx",119,0x454a2300)
HX_LOCAL_STACK_FRAME(_hx_pos_24da384208e5bf4f_130_getStencilBufferBits,"kha.graphics4.PipelineState","getStencilBufferBits",0xb08c2bfa,"kha.graphics4.PipelineState.getStencilBufferBits","kha/graphics4/PipelineState.hx",130,0x454a2300)
HX_LOCAL_STACK_FRAME(_hx_pos_24da384208e5bf4f_172_getBlendFactor,"kha.graphics4.PipelineState","getBlendFactor",0x2ab060b8,"kha.graphics4.PipelineState.getBlendFactor","kha/graphics4/PipelineState.hx",172,0x454a2300)
HX_LOCAL_STACK_FRAME(_hx_pos_24da384208e5bf4f_199_getBlendOperation,"kha.graphics4.PipelineState","getBlendOperation",0xce56d3de,"kha.graphics4.PipelineState.getBlendOperation","kha/graphics4/PipelineState.hx",199,0x454a2300)
HX_LOCAL_STACK_FRAME(_hx_pos_24da384208e5bf4f_281__unused1,"kha.graphics4.PipelineState","_unused1",0x0f95a30a,"kha.graphics4.PipelineState._unused1","kha/graphics4/PipelineState.hx",281,0x454a2300)
HX_LOCAL_STACK_FRAME(_hx_pos_24da384208e5bf4f_286__unused2,"kha.graphics4.PipelineState","_unused2",0x0f95a30b,"kha.graphics4.PipelineState._unused2","kha/graphics4/PipelineState.hx",286,0x454a2300)
HX_LOCAL_STACK_FRAME(_hx_pos_24da384208e5bf4f_291__unused3,"kha.graphics4.PipelineState","_unused3",0x0f95a30c,"kha.graphics4.PipelineState._unused3","kha/graphics4/PipelineState.hx",291,0x454a2300)
HX_LOCAL_STACK_FRAME(_hx_pos_24da384208e5bf4f_296__unused4,"kha.graphics4.PipelineState","_unused4",0x0f95a30d,"kha.graphics4.PipelineState._unused4","kha/graphics4/PipelineState.hx",296,0x454a2300)
HX_LOCAL_STACK_FRAME(_hx_pos_24da384208e5bf4f_301__unused5,"kha.graphics4.PipelineState","_unused5",0x0f95a30e,"kha.graphics4.PipelineState._unused5","kha/graphics4/PipelineState.hx",301,0x454a2300)
HX_LOCAL_STACK_FRAME(_hx_pos_24da384208e5bf4f_306__unused6,"kha.graphics4.PipelineState","_unused6",0x0f95a30f,"kha.graphics4.PipelineState._unused6","kha/graphics4/PipelineState.hx",306,0x454a2300)
HX_LOCAL_STACK_FRAME(_hx_pos_24da384208e5bf4f_311__unused7,"kha.graphics4.PipelineState","_unused7",0x0f95a310,"kha.graphics4.PipelineState._unused7","kha/graphics4/PipelineState.hx",311,0x454a2300)

static kinc_g4_compare_mode_t convertCompareMode(int mode) {
	switch (mode) {
	case 0:
		return KINC_G4_COMPARE_ALWAYS;
	case 1:
		return KINC_G4_COMPARE_NEVER;
	case 2:
		return KINC_G4_COMPARE_EQUAL;
	case 3:
		return KINC_G4_COMPARE_NOT_EQUAL;
	case 4:
		return KINC_G4_COMPARE_LESS;
	case 5:
		return KINC_G4_COMPARE_LESS_EQUAL;
	case 6:
		return KINC_G4_COMPARE_GREATER;
	case 7:
	default:
		return KINC_G4_COMPARE_GREATER_EQUAL;
	}
}

static kinc_g4_stencil_action_t convertStencilAction(int action) {
	switch (action) {
	case 0:
		return KINC_G4_STENCIL_KEEP;
	case 1:
		return KINC_G4_STENCIL_ZERO;
	case 2:
		return KINC_G4_STENCIL_REPLACE;
	case 3:
		return KINC_G4_STENCIL_INCREMENT;
	case 4:
		return KINC_G4_STENCIL_INCREMENT_WRAP;
	case 5:
		return KINC_G4_STENCIL_DECREMENT;
	case 6:
		return KINC_G4_STENCIL_DECREMENT_WRAP;
	case 7:
	default:
		return KINC_G4_STENCIL_INVERT;
	}
}

static kinc_g4_render_target_format_t convertColorAttachment(int format) {
	switch (format) {
	case 0:
		return KINC_G4_RENDER_TARGET_FORMAT_32BIT;
	case 1:
		return KINC_G4_RENDER_TARGET_FORMAT_8BIT_RED;
	case 2:
		return KINC_G4_RENDER_TARGET_FORMAT_128BIT_FLOAT;
	case 3:
		return KINC_G4_RENDER_TARGET_FORMAT_16BIT_DEPTH;
	case 4:
		return KINC_G4_RENDER_TARGET_FORMAT_64BIT_FLOAT;
	case 5:
		return KINC_G4_RENDER_TARGET_FORMAT_32BIT_RED_FLOAT;
	case 6:
	default:
		return KINC_G4_RENDER_TARGET_FORMAT_16BIT_RED_FLOAT;
	}
}

namespace kha{
namespace graphics4{

void PipelineState_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_24da384208e5bf4f_83_new)
HXLINE(  84)		super::__construct();
HXLINE(  85)		kinc_g4_pipeline_init(&pipeline);;
            	}

Dynamic PipelineState_obj::__CreateEmpty() { return new PipelineState_obj; }

void *PipelineState_obj::_hx_vtable = 0;

Dynamic PipelineState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PipelineState_obj > _hx_result = new PipelineState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PipelineState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3e68d01b) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3e68d01b;
	} else {
		return inClassId==(int)0x61e3feea;
	}
}

void PipelineState_obj::_hx_delete(){
            	HX_STACKFRAME(&_hx_pos_24da384208e5bf4f_89_delete)
HXDLIN(  89)		kinc_g4_pipeline_destroy(&pipeline);;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PipelineState_obj,_hx_delete,(void))

void PipelineState_obj::linkWithStructures2( ::kha::graphics4::VertexStructure structure0, ::kha::graphics4::VertexStructure structure1, ::kha::graphics4::VertexStructure structure2, ::kha::graphics4::VertexStructure structure3,int size){
            	HX_STACKFRAME(&_hx_pos_24da384208e5bf4f_116_linkWithStructures2)
            	
		pipeline.vertex_shader = &vertexShader->shader;
		pipeline.fragment_shader = &fragmentShader->shader;
		if (geometryShader != null()) pipeline.geometry_shader = &geometryShader->shader;
		if (tessellationControlShader != null()) pipeline.tessellation_control_shader = &tessellationControlShader->shader;
		if (tessellationEvaluationShader != null()) pipeline.tessellation_evaluation_shader = &tessellationEvaluationShader->shader;
		kinc_g4_vertex_structure_t s0, s1, s2, s3;
		kinc_g4_vertex_structure_t* structures2[4] = { &s0, &s1, &s2, &s3 };
		::kha::graphics4::VertexStructure* structures[4] = { &structure0, &structure1, &structure2, &structure3 };
		for (int i1 = 0; i1 < size; ++i1) {
			kinc_g4_vertex_structure_init(structures2[i1]);
			structures2[i1]->instanced = (*structures[i1])->instanced;
			for (int i2 = 0; i2 < (*structures[i1])->size(); ++i2) {
				kinc_g4_vertex_data_t data = kha_convert_vertex_data((*structures[i1])->get(i2)->data);
				pipeline.input_layout[i1] = structures2[i1];
				kinc_g4_vertex_structure_add(pipeline.input_layout[i1], (*structures[i1])->get(i2)->name, data);
			}
		}
		for (int i = size; i < 16; ++i) {
			pipeline.input_layout[i] = nullptr;
		}
		kinc_g4_pipeline_compile(&pipeline);
	

            	}


HX_DEFINE_DYNAMIC_FUNC5(PipelineState_obj,linkWithStructures2,(void))

void PipelineState_obj::compile(){
            	HX_STACKFRAME(&_hx_pos_24da384208e5bf4f_140_compile)
HXLINE( 141)		int stencilReferenceValue;
HXDLIN( 141)		 ::kha::graphics4::StencilValue _g = this->stencilReferenceValue;
HXDLIN( 141)		if ((_g->_hx_getIndex() == 1)) {
HXLINE( 142)			int value = _g->_hx_getInt(0);
HXLINE( 141)			stencilReferenceValue = value;
            		}
            		else {
HXLINE( 141)			stencilReferenceValue = 0;
            		}
HXLINE( 145)		int _hx_tmp = this->cullMode;
HXDLIN( 145)		int _hx_tmp1 = this->depthMode;
HXDLIN( 145)		int _hx_tmp2 = this->stencilFrontMode;
HXDLIN( 145)		int _hx_tmp3 = this->stencilFrontBothPass;
HXDLIN( 145)		int _hx_tmp4 = this->stencilFrontDepthFail;
HXDLIN( 145)		int _hx_tmp5 = this->stencilFrontFail;
HXDLIN( 145)		int _hx_tmp6 = this->stencilBackMode;
HXDLIN( 145)		int _hx_tmp7 = this->stencilBackBothPass;
HXLINE( 146)		int _hx_tmp8 = this->stencilBackDepthFail;
HXDLIN( 146)		int _hx_tmp9 = this->stencilBackFail;
HXDLIN( 146)		bool _hx_tmp10 = this->depthWrite;
HXDLIN( 146)		int _hx_tmp11 = ::kha::graphics4::PipelineState_obj::getBlendFactor(this->blendSource);
HXDLIN( 146)		int _hx_tmp12 = ::kha::graphics4::PipelineState_obj::getBlendFactor(this->blendDestination);
HXLINE( 147)		int _hx_tmp13 = ::kha::graphics4::PipelineState_obj::getBlendOperation(this->blendOperation);
HXDLIN( 147)		int _hx_tmp14 = ::kha::graphics4::PipelineState_obj::getBlendFactor(this->alphaBlendSource);
HXDLIN( 147)		int _hx_tmp15 = ::kha::graphics4::PipelineState_obj::getBlendFactor(this->alphaBlendDestination);
HXLINE( 148)		int _hx_tmp16 = ::kha::graphics4::PipelineState_obj::getBlendOperation(this->alphaBlendOperation);
HXDLIN( 148)		int _hx_tmp17 = ::kha::graphics4::PipelineState_obj::getDepthBufferBits(this->depthStencilAttachment);
HXLINE( 145)		this->setStates(_hx_tmp,_hx_tmp1,_hx_tmp2,_hx_tmp3,_hx_tmp4,_hx_tmp5,_hx_tmp6,_hx_tmp7,_hx_tmp8,_hx_tmp9,_hx_tmp10,stencilReferenceValue,_hx_tmp11,_hx_tmp12,_hx_tmp13,_hx_tmp14,_hx_tmp15,_hx_tmp16,_hx_tmp17,::kha::graphics4::PipelineState_obj::getStencilBufferBits(this->depthStencilAttachment));
HXLINE( 149)		 ::kha::graphics4::VertexStructure _hx_tmp18;
HXDLIN( 149)		if ((this->inputLayout->length > 0)) {
HXLINE( 149)			_hx_tmp18 = this->inputLayout->__get(0).StaticCast<  ::kha::graphics4::VertexStructure >();
            		}
            		else {
HXLINE( 149)			_hx_tmp18 = null();
            		}
HXDLIN( 149)		 ::kha::graphics4::VertexStructure _hx_tmp19;
HXDLIN( 149)		if ((this->inputLayout->length > 1)) {
HXLINE( 149)			_hx_tmp19 = this->inputLayout->__get(1).StaticCast<  ::kha::graphics4::VertexStructure >();
            		}
            		else {
HXLINE( 149)			_hx_tmp19 = null();
            		}
HXLINE( 150)		 ::kha::graphics4::VertexStructure _hx_tmp20;
HXDLIN( 150)		if ((this->inputLayout->length > 2)) {
HXLINE( 150)			_hx_tmp20 = this->inputLayout->__get(2).StaticCast<  ::kha::graphics4::VertexStructure >();
            		}
            		else {
HXLINE( 150)			_hx_tmp20 = null();
            		}
HXDLIN( 150)		 ::kha::graphics4::VertexStructure _hx_tmp21;
HXDLIN( 150)		if ((this->inputLayout->length > 3)) {
HXLINE( 150)			_hx_tmp21 = this->inputLayout->__get(3).StaticCast<  ::kha::graphics4::VertexStructure >();
            		}
            		else {
HXLINE( 150)			_hx_tmp21 = null();
            		}
HXLINE( 149)		this->linkWithStructures2(_hx_tmp18,_hx_tmp19,_hx_tmp20,_hx_tmp21,this->inputLayout->length);
            	}


HX_DEFINE_DYNAMIC_FUNC0(PipelineState_obj,compile,(void))

::Dynamic PipelineState_obj::getConstantLocation(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_24da384208e5bf4f_153_getConstantLocation)
HXLINE( 154)		 ::kha::kore::graphics4::ConstantLocation location =  ::kha::kore::graphics4::ConstantLocation_obj::__alloc( HX_CTX );
HXLINE( 155)		this->initConstantLocation(location,name);
HXLINE( 156)		return location;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PipelineState_obj,getConstantLocation,return )

void PipelineState_obj::initConstantLocation( ::kha::kore::graphics4::ConstantLocation location,::String name){
            	HX_STACKFRAME(&_hx_pos_24da384208e5bf4f_160_initConstantLocation)
            	location->location = kinc_g4_pipeline_get_constant_location(&pipeline, name.c_str());

            	}


HX_DEFINE_DYNAMIC_FUNC2(PipelineState_obj,initConstantLocation,(void))

::Dynamic PipelineState_obj::getTextureUnit(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_24da384208e5bf4f_162_getTextureUnit)
HXLINE( 163)		 ::kha::kore::graphics4::TextureUnit unit =  ::kha::kore::graphics4::TextureUnit_obj::__alloc( HX_CTX );
HXLINE( 164)		this->initTextureUnit(unit,name);
HXLINE( 165)		return unit;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PipelineState_obj,getTextureUnit,return )

void PipelineState_obj::initTextureUnit( ::kha::kore::graphics4::TextureUnit unit,::String name){
            	HX_STACKFRAME(&_hx_pos_24da384208e5bf4f_169_initTextureUnit)
            	unit->unit = kinc_g4_pipeline_get_texture_unit(&pipeline, name.c_str());

            	}


HX_DEFINE_DYNAMIC_FUNC2(PipelineState_obj,initTextureUnit,(void))

void PipelineState_obj::setStates(int cullMode,int depthMode,int stencilFrontMode,int stencilFrontBothPass,int stencilFrontDepthFail,int stencilFrontFail,int stencilBackMode,int stencilBackBothPass,int stencilBackDepthFail,int stencilBackFail,bool depthWrite,int stencilReferenceValue,int blendSource,int blendDestination,int blendOperation,int alphaBlendSource,int alphaBlendDestination,int alphaBlendOperation,int depthAttachmentBits,int stencilAttachmentBits){
            	HX_STACKFRAME(&_hx_pos_24da384208e5bf4f_270_setStates)
            	
		switch (cullMode) {
		case 0:
			pipeline.cull_mode = KINC_G4_CULL_CLOCKWISE;
			break;
		case 1:
			pipeline.cull_mode = KINC_G4_CULL_COUNTER_CLOCKWISE;
			break;
		case 2:
			pipeline.cull_mode = KINC_G4_CULL_NOTHING;
			break;
		}

		pipeline.depth_mode = convertCompareMode(depthMode);
		pipeline.depth_write = depthWrite;

		pipeline.stencil_front_mode = convertCompareMode(stencilFrontMode);
		pipeline.stencil_front_both_pass = convertStencilAction(stencilFrontBothPass);
		pipeline.stencil_front_depth_fail = convertStencilAction(stencilFrontDepthFail);
		pipeline.stencil_front_fail = convertStencilAction(stencilFrontFail);
		pipeline.stencil_back_mode = convertCompareMode(stencilBackMode);
		pipeline.stencil_back_both_pass = convertStencilAction(stencilBackBothPass);
		pipeline.stencil_back_depth_fail = convertStencilAction(stencilBackDepthFail);
		pipeline.stencil_back_fail = convertStencilAction(stencilBackFail);
		pipeline.stencil_reference_value = stencilReferenceValue;
		pipeline.stencil_read_mask = stencilReadMask;
		pipeline.stencil_write_mask = stencilWriteMask;

		pipeline.blend_source = (kinc_g4_blending_factor_t)blendSource;
		pipeline.blend_destination = (kinc_g4_blending_factor_t)blendDestination;
		pipeline.blend_operation = (kinc_g4_blending_operation_t)blendOperation;
		pipeline.alpha_blend_source = (kinc_g4_blending_factor_t)alphaBlendSource;
		pipeline.alpha_blend_destination = (kinc_g4_blending_factor_t)alphaBlendDestination;
		pipeline.alpha_blend_operation = (kinc_g4_blending_operation_t)alphaBlendOperation;

		for (int i = 0; i < 8; ++i) {
			pipeline.color_write_mask_red[i] = colorWriteMasksRed[i];
			pipeline.color_write_mask_green[i] = colorWriteMasksGreen[i];
			pipeline.color_write_mask_blue[i] = colorWriteMasksBlue[i];
			pipeline.color_write_mask_alpha[i] = colorWriteMasksAlpha[i];
		}

		pipeline.color_attachment_count = colorAttachmentCount;
		for (int i = 0; i < 8; ++i) {
			pipeline.color_attachment[i] = convertColorAttachment(colorAttachments[i]);
		}

		pipeline.depth_attachment_bits = depthAttachmentBits;
		pipeline.stencil_attachment_bits = stencilAttachmentBits;

		pipeline.conservative_rasterization = conservativeRasterization;
	

            	}


HX_DEFINE_DYNAMIC_FUNC20(PipelineState_obj,setStates,(void))

void PipelineState_obj::set2(){
            	HX_STACKFRAME(&_hx_pos_24da384208e5bf4f_273_set2)
            	kinc_g4_set_pipeline(&pipeline);

            	}


HX_DEFINE_DYNAMIC_FUNC0(PipelineState_obj,set2,(void))

void PipelineState_obj::set(){
            	HX_STACKFRAME(&_hx_pos_24da384208e5bf4f_276_set)
HXDLIN( 276)		this->set2();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PipelineState_obj,set,(void))

int PipelineState_obj::getDepthBufferBits(int depthAndStencil){
            	HX_STACKFRAME(&_hx_pos_24da384208e5bf4f_119_getDepthBufferBits)
HXDLIN( 119)		switch((int)(depthAndStencil)){
            			case (int)0: {
HXLINE( 120)				return 0;
            			}
            			break;
            			case (int)1: {
HXLINE( 121)				return 24;
            			}
            			break;
            			case (int)2: {
HXLINE( 122)				return 24;
            			}
            			break;
            			case (int)3: {
HXLINE( 123)				return 24;
            			}
            			break;
            			case (int)4: {
HXLINE( 124)				return 32;
            			}
            			break;
            			case (int)5: {
HXLINE( 125)				return 16;
            			}
            			break;
            		}
HXLINE( 119)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PipelineState_obj,getDepthBufferBits,return )

int PipelineState_obj::getStencilBufferBits(int depthAndStencil){
            	HX_STACKFRAME(&_hx_pos_24da384208e5bf4f_130_getStencilBufferBits)
HXDLIN( 130)		switch((int)(depthAndStencil)){
            			case (int)0: {
HXLINE( 131)				return 0;
            			}
            			break;
            			case (int)1: {
HXLINE( 132)				return 0;
            			}
            			break;
            			case (int)2: {
HXLINE( 133)				return 8;
            			}
            			break;
            			case (int)3: {
HXLINE( 134)				return 8;
            			}
            			break;
            			case (int)4: {
HXLINE( 135)				return 8;
            			}
            			break;
            			case (int)5: {
HXLINE( 136)				return 0;
            			}
            			break;
            		}
HXLINE( 130)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PipelineState_obj,getStencilBufferBits,return )

int PipelineState_obj::getBlendFactor(int factor){
            	HX_STACKFRAME(&_hx_pos_24da384208e5bf4f_172_getBlendFactor)
HXDLIN( 172)		switch((int)(factor)){
            			case (int)0: case (int)1: {
HXLINE( 174)				return 0;
            			}
            			break;
            			case (int)2: {
HXLINE( 176)				return 1;
            			}
            			break;
            			case (int)3: {
HXLINE( 178)				return 2;
            			}
            			break;
            			case (int)4: {
HXLINE( 180)				return 3;
            			}
            			break;
            			case (int)5: {
HXLINE( 182)				return 4;
            			}
            			break;
            			case (int)6: {
HXLINE( 184)				return 5;
            			}
            			break;
            			case (int)7: {
HXLINE( 186)				return 6;
            			}
            			break;
            			case (int)8: {
HXLINE( 188)				return 7;
            			}
            			break;
            			case (int)9: {
HXLINE( 190)				return 8;
            			}
            			break;
            			case (int)10: {
HXLINE( 192)				return 9;
            			}
            			break;
            			default:{
HXLINE( 194)				return 0;
            			}
            		}
HXLINE( 172)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PipelineState_obj,getBlendFactor,return )

int PipelineState_obj::getBlendOperation(int factor){
            	HX_STACKFRAME(&_hx_pos_24da384208e5bf4f_199_getBlendOperation)
HXDLIN( 199)		switch((int)(factor)){
            			case (int)0: {
HXLINE( 201)				return 0;
            			}
            			break;
            			case (int)1: {
HXLINE( 203)				return 1;
            			}
            			break;
            			case (int)2: {
HXLINE( 205)				return 2;
            			}
            			break;
            			case (int)3: {
HXLINE( 207)				return 3;
            			}
            			break;
            			case (int)4: {
HXLINE( 209)				return 4;
            			}
            			break;
            			default:{
HXLINE( 211)				return 0;
            			}
            		}
HXLINE( 199)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PipelineState_obj,getBlendOperation,return )

 ::kha::graphics4::VertexElement PipelineState_obj::_unused1(){
            	HX_STACKFRAME(&_hx_pos_24da384208e5bf4f_281__unused1)
HXDLIN( 281)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PipelineState_obj,_unused1,return )

int PipelineState_obj::_unused2(){
            	HX_STACKFRAME(&_hx_pos_24da384208e5bf4f_286__unused2)
HXDLIN( 286)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PipelineState_obj,_unused2,return )

 ::kha::graphics4::VertexShader PipelineState_obj::_unused3(){
            	HX_STACKFRAME(&_hx_pos_24da384208e5bf4f_291__unused3)
HXDLIN( 291)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PipelineState_obj,_unused3,return )

 ::kha::graphics4::FragmentShader PipelineState_obj::_unused4(){
            	HX_STACKFRAME(&_hx_pos_24da384208e5bf4f_296__unused4)
HXDLIN( 296)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PipelineState_obj,_unused4,return )

 ::kha::graphics4::GeometryShader PipelineState_obj::_unused5(){
            	HX_STACKFRAME(&_hx_pos_24da384208e5bf4f_301__unused5)
HXDLIN( 301)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PipelineState_obj,_unused5,return )

 ::kha::graphics4::TessellationControlShader PipelineState_obj::_unused6(){
            	HX_STACKFRAME(&_hx_pos_24da384208e5bf4f_306__unused6)
HXDLIN( 306)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PipelineState_obj,_unused6,return )

 ::kha::graphics4::TessellationEvaluationShader PipelineState_obj::_unused7(){
            	HX_STACKFRAME(&_hx_pos_24da384208e5bf4f_311__unused7)
HXDLIN( 311)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PipelineState_obj,_unused7,return )


::hx::ObjectPtr< PipelineState_obj > PipelineState_obj::__new() {
	::hx::ObjectPtr< PipelineState_obj > __this = new PipelineState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PipelineState_obj > PipelineState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PipelineState_obj *__this = (PipelineState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PipelineState_obj), true, "kha.graphics4.PipelineState"));
	*(void **)__this = PipelineState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PipelineState_obj::PipelineState_obj()
{
}

::hx::Val PipelineState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"set2") ) { return ::hx::Val( set2_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"delete") ) { return ::hx::Val( _hx_delete_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compile") ) { return ::hx::Val( compile_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setStates") ) { return ::hx::Val( setStates_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getTextureUnit") ) { return ::hx::Val( getTextureUnit_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"initTextureUnit") ) { return ::hx::Val( initTextureUnit_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"linkWithStructures2") ) { return ::hx::Val( linkWithStructures2_dyn() ); }
		if (HX_FIELD_EQ(inName,"getConstantLocation") ) { return ::hx::Val( getConstantLocation_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"initConstantLocation") ) { return ::hx::Val( initConstantLocation_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool PipelineState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_unused1") ) { outValue = _unused1_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"_unused2") ) { outValue = _unused2_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"_unused3") ) { outValue = _unused3_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"_unused4") ) { outValue = _unused4_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"_unused5") ) { outValue = _unused5_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"_unused6") ) { outValue = _unused6_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"_unused7") ) { outValue = _unused7_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getBlendFactor") ) { outValue = getBlendFactor_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getBlendOperation") ) { outValue = getBlendOperation_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getDepthBufferBits") ) { outValue = getDepthBufferBits_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getStencilBufferBits") ) { outValue = getStencilBufferBits_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PipelineState_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PipelineState_obj_sStaticStorageInfo = 0;
#endif

static ::String PipelineState_obj_sMemberFields[] = {
	HX_("delete",2b,c0,d8,6a),
	HX_("linkWithStructures2",12,d8,24,1b),
	HX_("compile",73,25,6f,83),
	HX_("getConstantLocation",6f,58,32,ea),
	HX_("initConstantLocation",e9,26,65,56),
	HX_("getTextureUnit",09,1c,c7,8b),
	HX_("initTextureUnit",cf,df,ba,10),
	HX_("setStates",84,4e,a3,65),
	HX_("set2",50,92,50,4c),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class PipelineState_obj::__mClass;

static ::String PipelineState_obj_sStaticFields[] = {
	HX_("getDepthBufferBits",13,7b,9a,e5),
	HX_("getStencilBufferBits",cc,2f,31,82),
	HX_("getBlendFactor",0a,db,1d,20),
	HX_("getBlendOperation",cc,18,45,15),
	HX_("_unused1",dc,b3,7b,e0),
	HX_("_unused2",dd,b3,7b,e0),
	HX_("_unused3",de,b3,7b,e0),
	HX_("_unused4",df,b3,7b,e0),
	HX_("_unused5",e0,b3,7b,e0),
	HX_("_unused6",e1,b3,7b,e0),
	HX_("_unused7",e2,b3,7b,e0),
	::String(null())
};

void PipelineState_obj::__register()
{
	PipelineState_obj _hx_dummy;
	PipelineState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kha.graphics4.PipelineState",00,0f,ad,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PipelineState_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PipelineState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PipelineState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PipelineState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PipelineState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PipelineState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics4