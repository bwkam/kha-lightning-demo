// Generated by Haxe 4.3.0+fa3f709
#ifndef INCLUDED_kha_netsync_Entity
#define INCLUDED_kha_netsync_Entity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(kha,netsync,Entity)

namespace kha{
namespace netsync{


class HXCPP_CLASS_ATTRIBUTES Entity_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		int (::hx::Object :: *_hx__id)(); 
		static inline int _id( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::kha::netsync::Entity_obj *>(_hx_.mPtr->_hx_getInterface(0x4b942fd7)))->_hx__id)();
		}
		int (::hx::Object :: *_hx__size)(); 
		static inline int _size( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::kha::netsync::Entity_obj *>(_hx_.mPtr->_hx_getInterface(0x4b942fd7)))->_hx__size)();
		}
		int (::hx::Object :: *_hx__send)(int offset, ::haxe::io::Bytes bytes); 
		static inline int _send( ::Dynamic _hx_,int offset, ::haxe::io::Bytes bytes) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::kha::netsync::Entity_obj *>(_hx_.mPtr->_hx_getInterface(0x4b942fd7)))->_hx__send)(offset,bytes);
		}
		int (::hx::Object :: *_hx__receive)(int offset, ::haxe::io::Bytes bytes); 
		static inline int _receive( ::Dynamic _hx_,int offset, ::haxe::io::Bytes bytes) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::kha::netsync::Entity_obj *>(_hx_.mPtr->_hx_getInterface(0x4b942fd7)))->_hx__receive)(offset,bytes);
		}
};

} // end namespace kha
} // end namespace netsync

#endif /* INCLUDED_kha_netsync_Entity */ 
