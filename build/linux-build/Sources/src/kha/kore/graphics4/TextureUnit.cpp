// Generated by Haxe 4.3.0+fa3f709
#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_TextureUnit
#include <hxinc/kha/graphics4/TextureUnit.h>
#endif
#ifndef INCLUDED_kha_kore_graphics4_TextureUnit
#include <hxinc/kha/kore/graphics4/TextureUnit.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_501e9d4e790214df_8_new,"kha.kore.graphics4.TextureUnit","new",0x2314121f,"kha.kore.graphics4.TextureUnit.new","kha/kore/graphics4/TextureUnit.hx",8,0x2f8cf252)
namespace kha{
namespace kore{
namespace graphics4{

void TextureUnit_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_501e9d4e790214df_8_new)
            	}

Dynamic TextureUnit_obj::__CreateEmpty() { return new TextureUnit_obj; }

void *TextureUnit_obj::_hx_vtable = 0;

Dynamic TextureUnit_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextureUnit_obj > _hx_result = new TextureUnit_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextureUnit_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x232f90b1;
}

static ::kha::graphics4::TextureUnit_obj _hx_kha_kore_graphics4_TextureUnit__hx_kha_graphics4_TextureUnit= {
};

void *TextureUnit_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xdb63565a: return &_hx_kha_kore_graphics4_TextureUnit__hx_kha_graphics4_TextureUnit;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}


::hx::ObjectPtr< TextureUnit_obj > TextureUnit_obj::__new() {
	::hx::ObjectPtr< TextureUnit_obj > __this = new TextureUnit_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TextureUnit_obj > TextureUnit_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TextureUnit_obj *__this = (TextureUnit_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextureUnit_obj), false, "kha.kore.graphics4.TextureUnit"));
	*(void **)__this = TextureUnit_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TextureUnit_obj::TextureUnit_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TextureUnit_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TextureUnit_obj_sStaticStorageInfo = 0;
#endif

::hx::Class TextureUnit_obj::__mClass;

void TextureUnit_obj::__register()
{
	TextureUnit_obj _hx_dummy;
	TextureUnit_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kha.kore.graphics4.TextureUnit",ad,16,c3,f9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TextureUnit_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextureUnit_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextureUnit_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace kore
} // end namespace graphics4
