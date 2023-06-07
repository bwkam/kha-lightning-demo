// Generated by Haxe 4.3.0+fa3f709
#ifndef INCLUDED_kha_graphics4__VertexData_VertexData_Impl_
#define INCLUDED_kha_graphics4__VertexData_VertexData_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(kha,graphics4,_VertexData,VertexData_Impl_)

namespace kha{
namespace graphics4{
namespace _VertexData{


class HXCPP_CLASS_ATTRIBUTES VertexData_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef VertexData_Impl__obj OBJ_;
		VertexData_Impl__obj();

	public:
		enum { _hx_ClassId = 0x36c61756 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.graphics4._VertexData.VertexData_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"kha.graphics4._VertexData.VertexData_Impl_"); }

		inline static ::hx::ObjectPtr< VertexData_Impl__obj > __new() {
			::hx::ObjectPtr< VertexData_Impl__obj > __this = new VertexData_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< VertexData_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			VertexData_Impl__obj *__this = (VertexData_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VertexData_Impl__obj), false, "kha.graphics4._VertexData.VertexData_Impl_"));
			*(void **)__this = VertexData_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VertexData_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VertexData_Impl_",ee,ee,eb,50); }

		static void __boot();
		static int Float32_1X;
		static int Float32_2X;
		static int Float32_3X;
		static int Float32_4X;
		static int Float32_4X4;
		static int Int8_1X;
		static int UInt8_1X;
		static int Int8_1X_Normalized;
		static int UInt8_1X_Normalized;
		static int Int8_2X;
		static int UInt8_2X;
		static int Int8_2X_Normalized;
		static int UInt8_2X_Normalized;
		static int Int8_4X;
		static int UInt8_4X;
		static int Int8_4X_Normalized;
		static int UInt8_4X_Normalized;
		static int Int16_1X;
		static int UInt16_1X;
		static int Int16_1X_Normalized;
		static int UInt16_1X_Normalized;
		static int Int16_2X;
		static int UInt16_2X;
		static int Int16_2X_Normalized;
		static int UInt16_2X_Normalized;
		static int Int16_4X;
		static int UInt16_4X;
		static int Int16_4X_Normalized;
		static int UInt16_4X_Normalized;
		static int Int32_1X;
		static int UInt32_1X;
		static int Int32_2X;
		static int UInt32_2X;
		static int Int32_3X;
		static int UInt32_3X;
		static int Int32_4X;
		static int UInt32_4X;
		static int Float1;
		static int Float2;
		static int Float3;
		static int Float4;
		static int Float4x4;
		static int Short2Norm;
		static int Short4Norm;
		static int getStride(int vertexData);
		static ::Dynamic getStride_dyn();

};

} // end namespace kha
} // end namespace graphics4
} // end namespace _VertexData

#endif /* INCLUDED_kha_graphics4__VertexData_VertexData_Impl_ */ 
