// Generated by Haxe 4.3.0+fa3f709
#include <hxcpp.h>

#ifndef INCLUDED_3fe8139d5204232b
#define INCLUDED_3fe8139d5204232b
#include "cpp_bytearray.h"
#endif
#ifndef INCLUDED_Std
#include <hxinc/Std.h>
#endif
#ifndef INCLUDED_kha_Shaders
#include <hxinc/kha/Shaders.h>
#endif
#ifndef INCLUDED_kha_arrays_ByteArrayPrivate
#include <hxinc/kha/arrays/ByteArrayPrivate.h>
#endif
#ifndef INCLUDED_kha_graphics4_ConstantLocation
#include <hxinc/kha/graphics4/ConstantLocation.h>
#endif
#ifndef INCLUDED_kha_graphics4_FragmentShader
#include <hxinc/kha/graphics4/FragmentShader.h>
#endif
#ifndef INCLUDED_kha_graphics4_Graphics
#include <hxinc/kha/graphics4/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics4_IndexBuffer
#include <hxinc/kha/graphics4/IndexBuffer.h>
#endif
#ifndef INCLUDED_kha_graphics4_PipelineState
#include <hxinc/kha/graphics4/PipelineState.h>
#endif
#ifndef INCLUDED_kha_graphics4_PipelineStateBase
#include <hxinc/kha/graphics4/PipelineStateBase.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexBuffer
#include <hxinc/kha/graphics4/VertexBuffer.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexShader
#include <hxinc/kha/graphics4/VertexShader.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexStructure
#include <hxinc/kha/graphics4/VertexStructure.h>
#endif
#ifndef INCLUDED_kha_math_FastMatrix4
#include <hxinc/kha/math/FastMatrix4.h>
#endif
#ifndef INCLUDED_pipelines_LightCubePipeline
#include <hxinc/pipelines/LightCubePipeline.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f09e8a686b5bc1c3_41_new,"pipelines.LightCubePipeline","new",0x04dd5762,"pipelines.LightCubePipeline.new","pipelines/LightCubePipeline.hx",41,0x3f7790cf)
HX_LOCAL_STACK_FRAME(_hx_pos_f09e8a686b5bc1c3_141_render,"pipelines.LightCubePipeline","render",0xf960b194,"pipelines.LightCubePipeline.render","pipelines/LightCubePipeline.hx",141,0x3f7790cf)
HX_LOCAL_STACK_FRAME(_hx_pos_f09e8a686b5bc1c3_42_boot,"pipelines.LightCubePipeline","boot",0x34e81ef0,"pipelines.LightCubePipeline.boot","pipelines/LightCubePipeline.hx",42,0x3f7790cf)
static const Float _hx_array_data_ce89be70_6[] = {
	-0.5,-0.5,-0.5,0.5,-0.5,-0.5,0.5,0.5,-0.5,0.5,0.5,-0.5,-0.5,0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,0.5,0.5,-0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,-0.5,0.5,0.5,-0.5,-0.5,0.5,-0.5,0.5,0.5,-0.5,0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,0.5,-0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,-0.5,0.5,-0.5,-0.5,0.5,-0.5,-0.5,0.5,-0.5,0.5,0.5,0.5,0.5,-0.5,-0.5,-0.5,0.5,-0.5,-0.5,0.5,-0.5,0.5,0.5,-0.5,0.5,-0.5,-0.5,0.5,-0.5,-0.5,-0.5,-0.5,0.5,-0.5,0.5,0.5,-0.5,0.5,0.5,0.5,0.5,0.5,0.5,-0.5,0.5,0.5,-0.5,0.5,-0.5,
};
namespace pipelines{

void LightCubePipeline_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_f09e8a686b5bc1c3_41_new)
HXLINE(  86)		 ::kha::graphics4::VertexStructure structure =  ::kha::graphics4::VertexStructure_obj::__alloc( HX_CTX );
HXLINE(  87)		structure->add(HX_("aPos",b3,c7,5a,40),2);
HXLINE(  89)		int structureLength = 3;
HXLINE(  91)		this->_hx_set_pipeline(HX_CTX,  ::kha::graphics4::PipelineState_obj::__alloc( HX_CTX ));
HXLINE(  92)		this->pipeline->_hx_set_inputLayout(HX_CTX, ::Array_obj< ::Dynamic>::__new(1)->init(0,structure));
HXLINE(  93)		this->pipeline->_hx_set_vertexShader(HX_CTX, ::kha::Shaders_obj::light_vert);
HXLINE(  94)		this->pipeline->_hx_set_fragmentShader(HX_CTX, ::kha::Shaders_obj::light_frag);
HXLINE(  96)		this->pipeline->depthWrite = true;
HXLINE(  97)		this->pipeline->depthMode = 4;
HXLINE(  98)		this->pipeline->colorAttachmentCount = 1;
HXLINE(  99)		this->pipeline->colorAttachments[0] = 0;
HXLINE( 100)		this->pipeline->depthStencilAttachment = 5;
HXLINE( 101)		this->pipeline->compile();
HXLINE( 104)		this->_hx_set_projID(HX_CTX, this->pipeline->getConstantLocation(HX_("proj",9d,c7,5e,4a)));
HXLINE( 105)		this->_hx_set_viewID(HX_CTX, this->pipeline->getConstantLocation(HX_("view",65,32,4f,4e)));
HXLINE( 106)		this->_hx_set_modelID(HX_CTX, this->pipeline->getConstantLocation(HX_("model",a9,23,58,0c)));
HXLINE( 109)		this->_hx_set_vertexBuffer(HX_CTX,  ::kha::graphics4::VertexBuffer_obj::__alloc( HX_CTX ,::Std_obj::_hx_int((( (Float)(::pipelines::LightCubePipeline_obj::new_vertices->length) ) / ( (Float)(3) ))),structure,0,null(),null()));
HXLINE( 114)		 ::kha::arrays::ByteArrayPrivate vbData = this->vertexBuffer->lock(null(),null());
HXLINE( 115)		{
HXLINE( 115)			int _g = 0;
HXDLIN( 115)			int _g1 = ::Std_obj::_hx_int((( (Float)((vbData->byteArrayLength >> 2)) ) / ( (Float)(structureLength) )));
HXDLIN( 115)			while((_g < _g1)){
HXLINE( 115)				_g = (_g + 1);
HXDLIN( 115)				int i = (_g - 1);
HXLINE( 116)				{
HXLINE( 116)					float v = ( (float)(::pipelines::LightCubePipeline_obj::new_vertices->__get((i * 3))) );
HXDLIN( 116)					*((float *)&vbData->self.data[vbData->byteArrayOffset + ((i * structureLength) * 4)]) = v;
            				}
HXLINE( 117)				{
HXLINE( 117)					float v1 = ( (float)(::pipelines::LightCubePipeline_obj::new_vertices->__get(((i * 3) + 1))) );
HXDLIN( 117)					*((float *)&vbData->self.data[vbData->byteArrayOffset + (((i * structureLength) + 1) * 4)]) = v1;
            				}
HXLINE( 118)				{
HXLINE( 118)					float v2 = ( (float)(::pipelines::LightCubePipeline_obj::new_vertices->__get(((i * 3) + 2))) );
HXDLIN( 118)					*((float *)&vbData->self.data[vbData->byteArrayOffset + (((i * structureLength) + 2) * 4)]) = v2;
            				}
            			}
            		}
HXLINE( 120)		this->vertexBuffer->unlock(null());
HXLINE( 123)		::Array< int > indices = ::Array_obj< int >::__new(0);
HXLINE( 124)		{
HXLINE( 124)			int _g2 = 0;
HXDLIN( 124)			int _g3 = ::Std_obj::_hx_int((( (Float)(::pipelines::LightCubePipeline_obj::new_vertices->length) ) / ( (Float)(3) )));
HXDLIN( 124)			while((_g2 < _g3)){
HXLINE( 124)				_g2 = (_g2 + 1);
HXDLIN( 124)				int i1 = (_g2 - 1);
HXLINE( 125)				indices->push(i1);
            			}
            		}
HXLINE( 129)		this->_hx_set_indexBuffer(HX_CTX,  ::kha::graphics4::IndexBuffer_obj::__alloc( HX_CTX ,indices->length,0,null()));
HXLINE( 134)		 ::kha::arrays::ByteArrayPrivate iData = this->indexBuffer->lock(null(),null());
HXLINE( 135)		{
HXLINE( 135)			int _g4 = 0;
HXDLIN( 135)			int _g5 = (iData->byteArrayLength >> 2);
HXDLIN( 135)			while((_g4 < _g5)){
HXLINE( 135)				_g4 = (_g4 + 1);
HXDLIN( 135)				int i2 = (_g4 - 1);
HXLINE( 136)				{
HXLINE( 136)					*((uint32_t *)&iData->self.data[iData->byteArrayOffset + (i2 * 4)]) = indices->__get(i2);
HXDLIN( 136)					*(uint32_t *)&iData->self.data[iData->byteArrayOffset + (i2 * 4)];
            				}
            			}
            		}
HXLINE( 138)		this->indexBuffer->unlock(null());
            	}

Dynamic LightCubePipeline_obj::__CreateEmpty() { return new LightCubePipeline_obj; }

void *LightCubePipeline_obj::_hx_vtable = 0;

Dynamic LightCubePipeline_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LightCubePipeline_obj > _hx_result = new LightCubePipeline_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LightCubePipeline_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x71340a9c;
}

void LightCubePipeline_obj::render(::Dynamic g, ::Dynamic params){
            	HX_STACKFRAME(&_hx_pos_f09e8a686b5bc1c3_141_render)
HXLINE( 143)		::kha::graphics4::Graphics_obj::setVertexBuffer(g,this->vertexBuffer);
HXLINE( 144)		::kha::graphics4::Graphics_obj::setIndexBuffer(g,this->indexBuffer);
HXLINE( 147)		::kha::graphics4::Graphics_obj::setPipeline(g,this->pipeline);
HXLINE( 150)		::kha::graphics4::Graphics_obj::setMatrix(g,this->projID, ::Dynamic(params->__Field(HX_("proj",9d,c7,5e,4a),::hx::paccDynamic)));
HXLINE( 151)		::kha::graphics4::Graphics_obj::setMatrix(g,this->modelID, ::Dynamic(params->__Field(HX_("model",a9,23,58,0c),::hx::paccDynamic)));
HXLINE( 152)		::kha::graphics4::Graphics_obj::setMatrix(g,this->viewID, ::Dynamic(params->__Field(HX_("view",65,32,4f,4e),::hx::paccDynamic)));
HXLINE( 155)		::kha::graphics4::Graphics_obj::drawIndexedVertices(g,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(LightCubePipeline_obj,render,(void))

::Array< Float > LightCubePipeline_obj::new_vertices;


::hx::ObjectPtr< LightCubePipeline_obj > LightCubePipeline_obj::__new() {
	::hx::ObjectPtr< LightCubePipeline_obj > __this = new LightCubePipeline_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LightCubePipeline_obj > LightCubePipeline_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LightCubePipeline_obj *__this = (LightCubePipeline_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LightCubePipeline_obj), true, "pipelines.LightCubePipeline"));
	*(void **)__this = LightCubePipeline_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LightCubePipeline_obj::LightCubePipeline_obj()
{
}

void LightCubePipeline_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LightCubePipeline);
	HX_MARK_MEMBER_NAME(pipeline,"pipeline");
	HX_MARK_MEMBER_NAME(mvpID,"mvpID");
	HX_MARK_MEMBER_NAME(projID,"projID");
	HX_MARK_MEMBER_NAME(viewID,"viewID");
	HX_MARK_MEMBER_NAME(modelID,"modelID");
	HX_MARK_MEMBER_NAME(vertexBuffer,"vertexBuffer");
	HX_MARK_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_MARK_END_CLASS();
}

void LightCubePipeline_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pipeline,"pipeline");
	HX_VISIT_MEMBER_NAME(mvpID,"mvpID");
	HX_VISIT_MEMBER_NAME(projID,"projID");
	HX_VISIT_MEMBER_NAME(viewID,"viewID");
	HX_VISIT_MEMBER_NAME(modelID,"modelID");
	HX_VISIT_MEMBER_NAME(vertexBuffer,"vertexBuffer");
	HX_VISIT_MEMBER_NAME(indexBuffer,"indexBuffer");
}

::hx::Val LightCubePipeline_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mvpID") ) { return ::hx::Val( mvpID ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"projID") ) { return ::hx::Val( projID ); }
		if (HX_FIELD_EQ(inName,"viewID") ) { return ::hx::Val( viewID ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"modelID") ) { return ::hx::Val( modelID ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pipeline") ) { return ::hx::Val( pipeline ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { return ::hx::Val( indexBuffer ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vertexBuffer") ) { return ::hx::Val( vertexBuffer ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LightCubePipeline_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"new_vertices") ) { outValue = ( new_vertices ); return true; }
	}
	return false;
}

::hx::Val LightCubePipeline_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mvpID") ) { _hx_set_mvpID(HX_CTX_GET,inValue.Cast< ::Dynamic >()); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"projID") ) { _hx_set_projID(HX_CTX_GET,inValue.Cast< ::Dynamic >()); return inValue; }
		if (HX_FIELD_EQ(inName,"viewID") ) { _hx_set_viewID(HX_CTX_GET,inValue.Cast< ::Dynamic >()); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"modelID") ) { _hx_set_modelID(HX_CTX_GET,inValue.Cast< ::Dynamic >()); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pipeline") ) { _hx_set_pipeline(HX_CTX_GET,inValue.Cast<  ::kha::graphics4::PipelineState >()); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { _hx_set_indexBuffer(HX_CTX_GET,inValue.Cast<  ::kha::graphics4::IndexBuffer >()); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vertexBuffer") ) { _hx_set_vertexBuffer(HX_CTX_GET,inValue.Cast<  ::kha::graphics4::VertexBuffer >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LightCubePipeline_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"new_vertices") ) { new_vertices=ioValue.Cast< ::Array< Float > >(); return true; }
	}
	return false;
}

void LightCubePipeline_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pipeline",22,bb,83,4b));
	outFields->push(HX_("mvpID",82,a4,01,11));
	outFields->push(HX_("projID",b8,e8,55,b5));
	outFields->push(HX_("viewID",80,95,4c,e6));
	outFields->push(HX_("modelID",c4,5f,67,ed));
	outFields->push(HX_("vertexBuffer",84,af,a9,70));
	outFields->push(HX_("indexBuffer",b2,65,a6,f5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LightCubePipeline_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::kha::graphics4::PipelineState */ ,(int)offsetof(LightCubePipeline_obj,pipeline),HX_("pipeline",22,bb,83,4b)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(LightCubePipeline_obj,mvpID),HX_("mvpID",82,a4,01,11)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(LightCubePipeline_obj,projID),HX_("projID",b8,e8,55,b5)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(LightCubePipeline_obj,viewID),HX_("viewID",80,95,4c,e6)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(LightCubePipeline_obj,modelID),HX_("modelID",c4,5f,67,ed)},
	{::hx::fsObject /*  ::kha::graphics4::VertexBuffer */ ,(int)offsetof(LightCubePipeline_obj,vertexBuffer),HX_("vertexBuffer",84,af,a9,70)},
	{::hx::fsObject /*  ::kha::graphics4::IndexBuffer */ ,(int)offsetof(LightCubePipeline_obj,indexBuffer),HX_("indexBuffer",b2,65,a6,f5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo LightCubePipeline_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< Float > */ ,(void *) &LightCubePipeline_obj::new_vertices,HX_("new_vertices",f8,da,4a,2c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String LightCubePipeline_obj_sMemberFields[] = {
	HX_("pipeline",22,bb,83,4b),
	HX_("mvpID",82,a4,01,11),
	HX_("projID",b8,e8,55,b5),
	HX_("viewID",80,95,4c,e6),
	HX_("modelID",c4,5f,67,ed),
	HX_("vertexBuffer",84,af,a9,70),
	HX_("indexBuffer",b2,65,a6,f5),
	HX_("render",56,6b,29,05),
	::String(null()) };

static void LightCubePipeline_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LightCubePipeline_obj::new_vertices,"new_vertices");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LightCubePipeline_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LightCubePipeline_obj::new_vertices,"new_vertices");
};

#endif

::hx::Class LightCubePipeline_obj::__mClass;

static ::String LightCubePipeline_obj_sStaticFields[] = {
	HX_("new_vertices",f8,da,4a,2c),
	::String(null())
};

void LightCubePipeline_obj::__register()
{
	LightCubePipeline_obj _hx_dummy;
	LightCubePipeline_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("pipelines.LightCubePipeline",70,be,89,ce);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LightCubePipeline_obj::__GetStatic;
	__mClass->mSetStaticField = &LightCubePipeline_obj::__SetStatic;
	__mClass->mMarkFunc = LightCubePipeline_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LightCubePipeline_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LightCubePipeline_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LightCubePipeline_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LightCubePipeline_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LightCubePipeline_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LightCubePipeline_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LightCubePipeline_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f09e8a686b5bc1c3_42_boot)
HXDLIN(  42)		new_vertices = ::Array_obj< Float >::fromData( _hx_array_data_ce89be70_6,108);
            	}
}

} // end namespace pipelines