// Generated by Haxe 4.3.0+fa3f709
#include <hxcpp.h>

#ifndef INCLUDED_kha_Canvas
#include <hxinc/kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Image
#include <hxinc/kha/Image.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <hxinc/kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Video
#include <hxinc/kha/Video.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <hxinc/kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics4_Graphics2
#include <hxinc/kha/graphics4/Graphics2.h>
#endif
#ifndef INCLUDED_kha_kore_graphics4_Graphics2
#include <hxinc/kha/kore/graphics4/Graphics2.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8cde8af4ab986a20_3_new,"kha.kore.graphics4.Graphics2","new",0xb7f77ea7,"kha.kore.graphics4.Graphics2.new","kha/kore/graphics4/Graphics2.hx",3,0x0241748a)
HX_LOCAL_STACK_FRAME(_hx_pos_8cde8af4ab986a20_4_drawVideoInternal,"kha.kore.graphics4.Graphics2","drawVideoInternal",0xe72118bb,"kha.kore.graphics4.Graphics2.drawVideoInternal","kha/kore/graphics4/Graphics2.hx",4,0x0241748a)
namespace kha{
namespace kore{
namespace graphics4{

void Graphics2_obj::__construct(::Dynamic canvas){
            	HX_STACKFRAME(&_hx_pos_8cde8af4ab986a20_3_new)
HXDLIN(   3)		super::__construct(canvas);
            	}

Dynamic Graphics2_obj::__CreateEmpty() { return new Graphics2_obj; }

void *Graphics2_obj::_hx_vtable = 0;

Dynamic Graphics2_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Graphics2_obj > _hx_result = new Graphics2_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Graphics2_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x125ede32) {
		if (inClassId<=(int)0x12411755) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x12411755;
		} else {
			return inClassId==(int)0x125ede32;
		}
	} else {
		return inClassId==(int)0x146c9ee2;
	}
}

void Graphics2_obj::drawVideoInternal( ::kha::Video video,Float x,Float y,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_8cde8af4ab986a20_4_drawVideoInternal)
HXLINE(   8)		this->set_color(-1);
HXLINE(   9)		 ::kha::Image _hx_tmp = ::kha::Image_obj::fromVideo(video);
HXDLIN(   9)		int _hx_tmp1 = video->width();
HXDLIN(   9)		this->drawScaledSubImage(_hx_tmp,( (float)(0) ),( (float)(0) ),( (float)(_hx_tmp1) ),( (float)((( (Float)(video->height()) ) * ((Float)0.66))) ),( (float)(x) ),( (float)(y) ),( (float)(width) ),( (float)(height) ));
            	}



::hx::ObjectPtr< Graphics2_obj > Graphics2_obj::__new(::Dynamic canvas) {
	::hx::ObjectPtr< Graphics2_obj > __this = new Graphics2_obj();
	__this->__construct(canvas);
	return __this;
}

::hx::ObjectPtr< Graphics2_obj > Graphics2_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic canvas) {
	Graphics2_obj *__this = (Graphics2_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Graphics2_obj), true, "kha.kore.graphics4.Graphics2"));
	*(void **)__this = Graphics2_obj::_hx_vtable;
	__this->__construct(canvas);
	return __this;
}

Graphics2_obj::Graphics2_obj()
{
}

::hx::Val Graphics2_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"drawVideoInternal") ) { return ::hx::Val( drawVideoInternal_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Graphics2_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Graphics2_obj_sStaticStorageInfo = 0;
#endif

static ::String Graphics2_obj_sMemberFields[] = {
	HX_("drawVideoInternal",34,9c,df,df),
	::String(null()) };

::hx::Class Graphics2_obj::__mClass;

void Graphics2_obj::__register()
{
	Graphics2_obj _hx_dummy;
	Graphics2_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kha.kore.graphics4.Graphics2",35,9f,43,01);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Graphics2_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Graphics2_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Graphics2_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Graphics2_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace kore
} // end namespace graphics4