// Generated by Haxe 4.3.0+fa3f709
#ifndef INCLUDED_kha_input_TouchDownEventBlockBehavior
#define INCLUDED_kha_input_TouchDownEventBlockBehavior

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,input,TouchDownEventBlockBehavior)
namespace kha{
namespace input{


class TouchDownEventBlockBehavior_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef TouchDownEventBlockBehavior_obj OBJ_;

	public:
		TouchDownEventBlockBehavior_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("kha.input.TouchDownEventBlockBehavior",58,51,df,43); }
		::String __ToString() const { return HX_("TouchDownEventBlockBehavior.",e8,56,00,e0) + _hx_tag; }

		static ::kha::input::TouchDownEventBlockBehavior Custom( ::Dynamic func);
		static ::Dynamic Custom_dyn();
		static ::kha::input::TouchDownEventBlockBehavior Full;
		static inline ::kha::input::TouchDownEventBlockBehavior Full_dyn() { return Full; }
		static ::kha::input::TouchDownEventBlockBehavior None;
		static inline ::kha::input::TouchDownEventBlockBehavior None_dyn() { return None; }
};

} // end namespace kha
} // end namespace input

#endif /* INCLUDED_kha_input_TouchDownEventBlockBehavior */ 
