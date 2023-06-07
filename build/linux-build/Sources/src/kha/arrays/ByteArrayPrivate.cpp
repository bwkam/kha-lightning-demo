// Generated by Haxe 4.3.0+fa3f709
#include <hxcpp.h>

#ifndef INCLUDED_3fe8139d5204232b
#define INCLUDED_3fe8139d5204232b
#include "cpp_bytearray.h"
#endif
#ifndef INCLUDED_cpp_vm_Gc
#include <hxinc/cpp/vm/Gc.h>
#endif
#ifndef INCLUDED_kha_arrays_ByteArrayPrivate
#include <hxinc/kha/arrays/ByteArrayPrivate.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9a331e702027a106_10_new,"kha.arrays.ByteArrayPrivate","new",0xc98cfe8e,"kha.arrays.ByteArrayPrivate.new","kha/arrays/ByteArray.hx",10,0x855f5f17)
HX_LOCAL_STACK_FRAME(_hx_pos_9a331e702027a106_18_finalize,"kha.arrays.ByteArrayPrivate","finalize",0xec64f0b0,"kha.arrays.ByteArrayPrivate.finalize","kha/arrays/ByteArray.hx",18,0x855f5f17)
namespace kha{
namespace arrays{

void ByteArrayPrivate_obj::__construct(int offset,int length){
            	HX_STACKFRAME(&_hx_pos_9a331e702027a106_10_new)
HXLINE(  11)		this->byteArrayOffset = offset;
HXLINE(  12)		this->byteArrayLength = length;
HXLINE(  14)		__hxcpp_set_finalizer(::hx::ObjectPtr<OBJ_>(this),::cpp::Function< void ( ::kha::arrays::ByteArrayPrivate)>(::hx::AnyCast(&::kha::arrays::ByteArrayPrivate_obj::finalize )));
            	}

Dynamic ByteArrayPrivate_obj::__CreateEmpty() { return new ByteArrayPrivate_obj; }

void *ByteArrayPrivate_obj::_hx_vtable = 0;

Dynamic ByteArrayPrivate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ByteArrayPrivate_obj > _hx_result = new ByteArrayPrivate_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ByteArrayPrivate_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x41c982d0;
}

void ByteArrayPrivate_obj::finalize( ::kha::arrays::ByteArrayPrivate arr){
            	HX_STACKFRAME(&_hx_pos_9a331e702027a106_18_finalize)
HXDLIN(  18)		arr->self.subRef();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArrayPrivate_obj,finalize,(void))


::hx::ObjectPtr< ByteArrayPrivate_obj > ByteArrayPrivate_obj::__new(int offset,int length) {
	::hx::ObjectPtr< ByteArrayPrivate_obj > __this = new ByteArrayPrivate_obj();
	__this->__construct(offset,length);
	return __this;
}

::hx::ObjectPtr< ByteArrayPrivate_obj > ByteArrayPrivate_obj::__alloc(::hx::Ctx *_hx_ctx,int offset,int length) {
	ByteArrayPrivate_obj *__this = (ByteArrayPrivate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ByteArrayPrivate_obj), true, "kha.arrays.ByteArrayPrivate"));
	*(void **)__this = ByteArrayPrivate_obj::_hx_vtable;
	__this->__construct(offset,length);
	return __this;
}

ByteArrayPrivate_obj::ByteArrayPrivate_obj()
{
}

void ByteArrayPrivate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ByteArrayPrivate);
	HX_MARK_MEMBER_NAME(self,"self");
	HX_MARK_MEMBER_NAME(byteArrayOffset,"byteArrayOffset");
	HX_MARK_MEMBER_NAME(byteArrayLength,"byteArrayLength");
	HX_MARK_END_CLASS();
}

void ByteArrayPrivate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(self,"self");
	HX_VISIT_MEMBER_NAME(byteArrayOffset,"byteArrayOffset");
	HX_VISIT_MEMBER_NAME(byteArrayLength,"byteArrayLength");
}

::hx::Val ByteArrayPrivate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"byteArrayOffset") ) { return ::hx::Val( byteArrayOffset ); }
		if (HX_FIELD_EQ(inName,"byteArrayLength") ) { return ::hx::Val( byteArrayLength ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ByteArrayPrivate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"finalize") ) { outValue = finalize_dyn(); return true; }
	}
	return false;
}

::hx::Val ByteArrayPrivate_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"byteArrayOffset") ) { byteArrayOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"byteArrayLength") ) { byteArrayLength=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ByteArrayPrivate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("self",8c,8b,50,4c));
	outFields->push(HX_("byteArrayOffset",e4,77,b8,c9));
	outFields->push(HX_("byteArrayLength",37,75,80,08));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ByteArrayPrivate_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /*  bytearray */ ,(int)offsetof(ByteArrayPrivate_obj,self),HX_("self",8c,8b,50,4c)},
	{::hx::fsInt,(int)offsetof(ByteArrayPrivate_obj,byteArrayOffset),HX_("byteArrayOffset",e4,77,b8,c9)},
	{::hx::fsInt,(int)offsetof(ByteArrayPrivate_obj,byteArrayLength),HX_("byteArrayLength",37,75,80,08)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ByteArrayPrivate_obj_sStaticStorageInfo = 0;
#endif

static ::String ByteArrayPrivate_obj_sMemberFields[] = {
	HX_("byteArrayOffset",e4,77,b8,c9),
	HX_("byteArrayLength",37,75,80,08),
	::String(null()) };

::hx::Class ByteArrayPrivate_obj::__mClass;

static ::String ByteArrayPrivate_obj_sStaticFields[] = {
	HX_("finalize",9e,45,3a,f5),
	::String(null())
};

void ByteArrayPrivate_obj::__register()
{
	ByteArrayPrivate_obj _hx_dummy;
	ByteArrayPrivate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kha.arrays.ByteArrayPrivate",9c,5f,b3,71);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ByteArrayPrivate_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ByteArrayPrivate_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ByteArrayPrivate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ByteArrayPrivate_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ByteArrayPrivate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ByteArrayPrivate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace arrays
