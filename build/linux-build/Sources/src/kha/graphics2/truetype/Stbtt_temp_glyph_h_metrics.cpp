// Generated by Haxe 4.3.0+fa3f709
#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_temp_glyph_h_metrics
#include <hxinc/kha/graphics2/truetype/Stbtt_temp_glyph_h_metrics.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4c2ac55ef2dd2b2a_30_new,"kha.graphics2.truetype.Stbtt_temp_glyph_h_metrics","new",0xac5e3c93,"kha.graphics2.truetype.Stbtt_temp_glyph_h_metrics.new","kha/graphics2/truetype/StbTruetype.hx",30,0x5d9e0de9)
namespace kha{
namespace graphics2{
namespace truetype{

void Stbtt_temp_glyph_h_metrics_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4c2ac55ef2dd2b2a_30_new)
            	}

Dynamic Stbtt_temp_glyph_h_metrics_obj::__CreateEmpty() { return new Stbtt_temp_glyph_h_metrics_obj; }

void *Stbtt_temp_glyph_h_metrics_obj::_hx_vtable = 0;

Dynamic Stbtt_temp_glyph_h_metrics_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Stbtt_temp_glyph_h_metrics_obj > _hx_result = new Stbtt_temp_glyph_h_metrics_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Stbtt_temp_glyph_h_metrics_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x698b5057;
}


Stbtt_temp_glyph_h_metrics_obj::Stbtt_temp_glyph_h_metrics_obj()
{
}

::hx::Val Stbtt_temp_glyph_h_metrics_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"advanceWidth") ) { return ::hx::Val( advanceWidth ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"leftSideBearing") ) { return ::hx::Val( leftSideBearing ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Stbtt_temp_glyph_h_metrics_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"advanceWidth") ) { advanceWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"leftSideBearing") ) { leftSideBearing=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stbtt_temp_glyph_h_metrics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("advanceWidth",24,06,4c,38));
	outFields->push(HX_("leftSideBearing",50,a6,f1,1b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Stbtt_temp_glyph_h_metrics_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Stbtt_temp_glyph_h_metrics_obj,advanceWidth),HX_("advanceWidth",24,06,4c,38)},
	{::hx::fsInt,(int)offsetof(Stbtt_temp_glyph_h_metrics_obj,leftSideBearing),HX_("leftSideBearing",50,a6,f1,1b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Stbtt_temp_glyph_h_metrics_obj_sStaticStorageInfo = 0;
#endif

static ::String Stbtt_temp_glyph_h_metrics_obj_sMemberFields[] = {
	HX_("advanceWidth",24,06,4c,38),
	HX_("leftSideBearing",50,a6,f1,1b),
	::String(null()) };

::hx::Class Stbtt_temp_glyph_h_metrics_obj::__mClass;

void Stbtt_temp_glyph_h_metrics_obj::__register()
{
	Stbtt_temp_glyph_h_metrics_obj _hx_dummy;
	Stbtt_temp_glyph_h_metrics_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kha.graphics2.truetype.Stbtt_temp_glyph_h_metrics",21,f7,a1,af);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Stbtt_temp_glyph_h_metrics_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Stbtt_temp_glyph_h_metrics_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stbtt_temp_glyph_h_metrics_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stbtt_temp_glyph_h_metrics_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype
