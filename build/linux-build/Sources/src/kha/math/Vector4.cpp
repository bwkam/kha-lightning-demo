// Generated by Haxe 4.3.0+fa3f709
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_kha_math_Vector4
#include <hxinc/kha/math/Vector4.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_083dbf959f079b5a_5_new,"kha.math.Vector4","new",0x4b69d747,"kha.math.Vector4.new","kha/math/Vector4.hx",5,0xe2398269)
HX_LOCAL_STACK_FRAME(_hx_pos_083dbf959f079b5a_26_get_length,"kha.math.Vector4","get_length",0x3e6ab8a8,"kha.math.Vector4.get_length","kha/math/Vector4.hx",26,0xe2398269)
HX_LOCAL_STACK_FRAME(_hx_pos_083dbf959f079b5a_29_set_length,"kha.math.Vector4","set_length",0x41e8571c,"kha.math.Vector4.set_length","kha/math/Vector4.hx",29,0xe2398269)
namespace kha{
namespace math{

void Vector4_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		Float z = __o_z.Default(0);
            		Float w = __o_w.Default(1);
            	HX_STACKFRAME(&_hx_pos_083dbf959f079b5a_5_new)
HXLINE(   6)		this->x = x;
HXLINE(   7)		this->y = y;
HXLINE(   8)		this->z = z;
HXLINE(   9)		this->w = w;
            	}

Dynamic Vector4_obj::__CreateEmpty() { return new Vector4_obj; }

void *Vector4_obj::_hx_vtable = 0;

Dynamic Vector4_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Vector4_obj > _hx_result = new Vector4_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Vector4_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x17b1c0c5;
}

Float Vector4_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_083dbf959f079b5a_26_get_length)
HXDLIN(  26)		return ::Math_obj::sqrt(((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)) + (this->w * this->w)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_length,return )

Float Vector4_obj::set_length(Float length){
            	HX_STACKFRAME(&_hx_pos_083dbf959f079b5a_29_set_length)
HXLINE(  30)		Float currentLength = ::Math_obj::sqrt(((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)) + (this->w * this->w)));
HXLINE(  31)		if ((currentLength == 0)) {
HXLINE(  32)			return ( (Float)(0) );
            		}
HXLINE(  33)		Float mul = (length / currentLength);
HXLINE(  34)		 ::kha::math::Vector4 _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  34)		_hx_tmp->x = (_hx_tmp->x * mul);
HXLINE(  35)		 ::kha::math::Vector4 _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  35)		_hx_tmp1->y = (_hx_tmp1->y * mul);
HXLINE(  36)		 ::kha::math::Vector4 _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  36)		_hx_tmp2->z = (_hx_tmp2->z * mul);
HXLINE(  37)		 ::kha::math::Vector4 _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  37)		_hx_tmp3->w = (_hx_tmp3->w * mul);
HXLINE(  38)		return length;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,set_length,return )


::hx::ObjectPtr< Vector4_obj > Vector4_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w) {
	::hx::ObjectPtr< Vector4_obj > __this = new Vector4_obj();
	__this->__construct(__o_x,__o_y,__o_z,__o_w);
	return __this;
}

::hx::ObjectPtr< Vector4_obj > Vector4_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w) {
	Vector4_obj *__this = (Vector4_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Vector4_obj), false, "kha.math.Vector4"));
	*(void **)__this = Vector4_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_z,__o_w);
	return __this;
}

Vector4_obj::Vector4_obj()
{
}

::hx::Val Vector4_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		if (HX_FIELD_EQ(inName,"z") ) { return ::hx::Val( z ); }
		if (HX_FIELD_EQ(inName,"w") ) { return ::hx::Val( w ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return ::hx::Val( set_length_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Vector4_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_length(inValue.Cast< Float >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vector4_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("z",7a,00,00,00));
	outFields->push(HX_("w",77,00,00,00));
	outFields->push(HX_("length",e6,94,07,9f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Vector4_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Vector4_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Vector4_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Vector4_obj,z),HX_("z",7a,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Vector4_obj,w),HX_("w",77,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Vector4_obj_sStaticStorageInfo = 0;
#endif

static ::String Vector4_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("z",7a,00,00,00),
	HX_("w",77,00,00,00),
	HX_("get_length",af,04,8f,8f),
	HX_("set_length",23,a3,0c,93),
	::String(null()) };

::hx::Class Vector4_obj::__mClass;

void Vector4_obj::__register()
{
	Vector4_obj _hx_dummy;
	Vector4_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kha.math.Vector4",d5,27,35,a9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Vector4_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Vector4_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Vector4_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Vector4_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace math
