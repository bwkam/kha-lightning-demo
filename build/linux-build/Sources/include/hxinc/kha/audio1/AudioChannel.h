// Generated by Haxe 4.3.0+fa3f709
#ifndef INCLUDED_kha_audio1_AudioChannel
#define INCLUDED_kha_audio1_AudioChannel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,audio1,AudioChannel)

namespace kha{
namespace audio1{


class HXCPP_CLASS_ATTRIBUTES AudioChannel_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_play)(); 
		static inline void play( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::kha::audio1::AudioChannel_obj *>(_hx_.mPtr->_hx_getInterface(0x78040b2c)))->_hx_play)();
		}
		void (::hx::Object :: *_hx_pause)(); 
		static inline void pause( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::kha::audio1::AudioChannel_obj *>(_hx_.mPtr->_hx_getInterface(0x78040b2c)))->_hx_pause)();
		}
		void (::hx::Object :: *_hx_stop)(); 
		static inline void stop( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::kha::audio1::AudioChannel_obj *>(_hx_.mPtr->_hx_getInterface(0x78040b2c)))->_hx_stop)();
		}
		Float (::hx::Object :: *_hx_get_length)(); 
		static inline Float get_length( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::kha::audio1::AudioChannel_obj *>(_hx_.mPtr->_hx_getInterface(0x78040b2c)))->_hx_get_length)();
		}
		Float (::hx::Object :: *_hx_get_position)(); 
		static inline Float get_position( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::kha::audio1::AudioChannel_obj *>(_hx_.mPtr->_hx_getInterface(0x78040b2c)))->_hx_get_position)();
		}
		Float (::hx::Object :: *_hx_set_position)(Float value); 
		static inline Float set_position( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::kha::audio1::AudioChannel_obj *>(_hx_.mPtr->_hx_getInterface(0x78040b2c)))->_hx_set_position)(value);
		}
		Float (::hx::Object :: *_hx_get_volume)(); 
		static inline Float get_volume( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::kha::audio1::AudioChannel_obj *>(_hx_.mPtr->_hx_getInterface(0x78040b2c)))->_hx_get_volume)();
		}
		Float (::hx::Object :: *_hx_set_volume)(Float value); 
		static inline Float set_volume( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::kha::audio1::AudioChannel_obj *>(_hx_.mPtr->_hx_getInterface(0x78040b2c)))->_hx_set_volume)(value);
		}
		bool (::hx::Object :: *_hx_get_finished)(); 
		static inline bool get_finished( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::kha::audio1::AudioChannel_obj *>(_hx_.mPtr->_hx_getInterface(0x78040b2c)))->_hx_get_finished)();
		}
};

} // end namespace kha
} // end namespace audio1

#endif /* INCLUDED_kha_audio1_AudioChannel */ 
