// Generated by Haxe 4.3.0+fa3f709
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <hxinc/haxe/Log.h>
#endif
#ifndef INCLUDED_kha_graphics4_ConstantLocation
#include <hxinc/kha/graphics4/ConstantLocation.h>
#endif
#ifndef INCLUDED_kha_graphics4_InternalPipeline
#include <hxinc/kha/graphics4/InternalPipeline.h>
#endif
#ifndef INCLUDED_kha_graphics4_PipelineCache
#include <hxinc/kha/graphics4/PipelineCache.h>
#endif
#ifndef INCLUDED_kha_graphics4_PipelineState
#include <hxinc/kha/graphics4/PipelineState.h>
#endif
#ifndef INCLUDED_kha_graphics4_PipelineStateBase
#include <hxinc/kha/graphics4/PipelineStateBase.h>
#endif
#ifndef INCLUDED_kha_graphics4_SimplePipelineCache
#include <hxinc/kha/graphics4/SimplePipelineCache.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureUnit
#include <hxinc/kha/graphics4/TextureUnit.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4cdfa10f63df90b1_52_new,"kha.graphics4.SimplePipelineCache","new",0x21bfaed1,"kha.graphics4.SimplePipelineCache.new","kha/graphics4/Graphics2.hx",52,0x0c1de808)
HX_LOCAL_STACK_FRAME(_hx_pos_4cdfa10f63df90b1_75_get,"kha.graphics4.SimplePipelineCache","get",0x21ba5f07,"kha.graphics4.SimplePipelineCache.get","kha/graphics4/Graphics2.hx",75,0x0c1de808)
namespace kha{
namespace graphics4{

void SimplePipelineCache_obj::__construct( ::kha::graphics4::PipelineState pipeline,bool texture){
            	HX_GC_STACKFRAME(&_hx_pos_4cdfa10f63df90b1_52_new)
HXLINE(  53)		::Dynamic projectionLocation = null();
HXLINE(  54)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  55)			projectionLocation = pipeline->getConstantLocation(HX_("projectionMatrix",30,88,bb,d0));
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  57)				{
HXLINE(  57)					null();
            				}
HXDLIN(  57)				 ::Dynamic x = _g;
HXLINE(  58)				::haxe::Log_obj::trace(x,::hx::SourceInfo(HX_("kha/graphics4/Graphics2.hx",08,e8,1d,0c),58,HX_("kha.graphics4.SimplePipelineCache",5f,f2,11,fb),HX_("new",60,d0,53,00)));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  61)		::Dynamic textureLocation = null();
HXLINE(  62)		if (texture) {
HXLINE(  63)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  64)				textureLocation = pipeline->getTextureUnit(HX_("tex",e7,5d,58,00));
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g1 = _hx_e;
HXLINE(  66)					{
HXLINE(  66)						null();
            					}
HXDLIN(  66)					 ::Dynamic x1 = _g1;
HXLINE(  67)					::haxe::Log_obj::trace(x1,::hx::SourceInfo(HX_("kha/graphics4/Graphics2.hx",08,e8,1d,0c),67,HX_("kha.graphics4.SimplePipelineCache",5f,f2,11,fb),HX_("new",60,d0,53,00)));
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
HXLINE(  71)		this->_hx_set_pipeline(HX_CTX,  ::kha::graphics4::InternalPipeline_obj::__alloc( HX_CTX ,pipeline,projectionLocation,textureLocation));
            	}

Dynamic SimplePipelineCache_obj::__CreateEmpty() { return new SimplePipelineCache_obj; }

void *SimplePipelineCache_obj::_hx_vtable = 0;

Dynamic SimplePipelineCache_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SimplePipelineCache_obj > _hx_result = new SimplePipelineCache_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool SimplePipelineCache_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3e44adc9;
}

static ::kha::graphics4::PipelineCache_obj _hx_kha_graphics4_SimplePipelineCache__hx_kha_graphics4_PipelineCache= {
	(  ::kha::graphics4::InternalPipeline (::hx::Object::*)(::Array< int >,int))&::kha::graphics4::SimplePipelineCache_obj::get,
};

void *SimplePipelineCache_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x47778ddb: return &_hx_kha_graphics4_SimplePipelineCache__hx_kha_graphics4_PipelineCache;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::kha::graphics4::InternalPipeline SimplePipelineCache_obj::get(::Array< int > colorFormats,int depthStencilFormat){
            	HX_STACKFRAME(&_hx_pos_4cdfa10f63df90b1_75_get)
HXDLIN(  75)		return this->pipeline;
            	}


HX_DEFINE_DYNAMIC_FUNC2(SimplePipelineCache_obj,get,return )


::hx::ObjectPtr< SimplePipelineCache_obj > SimplePipelineCache_obj::__new( ::kha::graphics4::PipelineState pipeline,bool texture) {
	::hx::ObjectPtr< SimplePipelineCache_obj > __this = new SimplePipelineCache_obj();
	__this->__construct(pipeline,texture);
	return __this;
}

::hx::ObjectPtr< SimplePipelineCache_obj > SimplePipelineCache_obj::__alloc(::hx::Ctx *_hx_ctx, ::kha::graphics4::PipelineState pipeline,bool texture) {
	SimplePipelineCache_obj *__this = (SimplePipelineCache_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SimplePipelineCache_obj), true, "kha.graphics4.SimplePipelineCache"));
	*(void **)__this = SimplePipelineCache_obj::_hx_vtable;
	__this->__construct(pipeline,texture);
	return __this;
}

SimplePipelineCache_obj::SimplePipelineCache_obj()
{
}

void SimplePipelineCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SimplePipelineCache);
	HX_MARK_MEMBER_NAME(pipeline,"pipeline");
	HX_MARK_END_CLASS();
}

void SimplePipelineCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pipeline,"pipeline");
}

::hx::Val SimplePipelineCache_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pipeline") ) { return ::hx::Val( pipeline ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SimplePipelineCache_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"pipeline") ) { _hx_set_pipeline(HX_CTX_GET,inValue.Cast<  ::kha::graphics4::InternalPipeline >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SimplePipelineCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pipeline",22,bb,83,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SimplePipelineCache_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::kha::graphics4::InternalPipeline */ ,(int)offsetof(SimplePipelineCache_obj,pipeline),HX_("pipeline",22,bb,83,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SimplePipelineCache_obj_sStaticStorageInfo = 0;
#endif

static ::String SimplePipelineCache_obj_sMemberFields[] = {
	HX_("pipeline",22,bb,83,4b),
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class SimplePipelineCache_obj::__mClass;

void SimplePipelineCache_obj::__register()
{
	SimplePipelineCache_obj _hx_dummy;
	SimplePipelineCache_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kha.graphics4.SimplePipelineCache",5f,f2,11,fb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SimplePipelineCache_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SimplePipelineCache_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SimplePipelineCache_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SimplePipelineCache_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics4
