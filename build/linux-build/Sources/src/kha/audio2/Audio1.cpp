// Generated by Haxe 4.3.0+fa3f709
#include <hxcpp.h>

#ifndef INCLUDED_3fe8139d5204232b
#define INCLUDED_3fe8139d5204232b
#include "cpp_bytearray.h"
#endif
#ifndef INCLUDED_haxe_Log
#include <hxinc/haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <hxinc/haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <hxinc/kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Sound
#include <hxinc/kha/Sound.h>
#endif
#ifndef INCLUDED_kha_arrays_ByteArrayPrivate
#include <hxinc/kha/arrays/ByteArrayPrivate.h>
#endif
#ifndef INCLUDED_kha_arrays__Float32Array_Float32Array_Impl_
#include <hxinc/kha/arrays/_Float32Array/Float32Array_Impl_.h>
#endif
#ifndef INCLUDED_kha_audio1_AudioChannel
#include <hxinc/kha/audio1/AudioChannel.h>
#endif
#ifndef INCLUDED_kha_audio2_Audio
#include <hxinc/kha/audio2/Audio.h>
#endif
#ifndef INCLUDED_kha_audio2_Audio1
#include <hxinc/kha/audio2/Audio1.h>
#endif
#ifndef INCLUDED_kha_audio2_AudioChannel
#include <hxinc/kha/audio2/AudioChannel.h>
#endif
#ifndef INCLUDED_kha_audio2_Buffer
#include <hxinc/kha/audio2/Buffer.h>
#endif
#ifndef INCLUDED_kha_audio2_ResamplingAudioChannel
#include <hxinc/kha/audio2/ResamplingAudioChannel.h>
#endif
#ifndef INCLUDED_kha_audio2_StreamChannel
#include <hxinc/kha/audio2/StreamChannel.h>
#endif
#ifndef INCLUDED_kha_internal_IntBox
#include <hxinc/kha/internal/IntBox.h>
#endif
#ifndef INCLUDED_sys_thread_Mutex
#include <hxinc/sys/thread/Mutex.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_54e6e67d0b7cf5ea_24__init,"kha.audio2.Audio1","_init",0x394948c4,"kha.audio2.Audio1._init","kha/audio2/Audio1.hx",24,0x063d6bfb)
HX_LOCAL_STACK_FRAME(_hx_pos_54e6e67d0b7cf5ea_39_max,"kha.audio2.Audio1","max",0xdc426d39,"kha.audio2.Audio1.max","kha/audio2/Audio1.hx",39,0x063d6bfb)
HX_LOCAL_STACK_FRAME(_hx_pos_54e6e67d0b7cf5ea_43_min,"kha.audio2.Audio1","min",0xdc427427,"kha.audio2.Audio1.min","kha/audio2/Audio1.hx",43,0x063d6bfb)
HX_LOCAL_STACK_FRAME(_hx_pos_54e6e67d0b7cf5ea_46_mix,"kha.audio2.Audio1","mix",0xdc427431,"kha.audio2.Audio1.mix","kha/audio2/Audio1.hx",46,0x063d6bfb)
HX_LOCAL_STACK_FRAME(_hx_pos_54e6e67d0b7cf5ea_118_play,"kha.audio2.Audio1","play",0xdfe10dbf,"kha.audio2.Audio1.play","kha/audio2/Audio1.hx",118,0x063d6bfb)
HX_LOCAL_STACK_FRAME(_hx_pos_54e6e67d0b7cf5ea_150__playAgain,"kha.audio2.Audio1","_playAgain",0x44c12898,"kha.audio2.Audio1._playAgain","kha/audio2/Audio1.hx",150,0x063d6bfb)
HX_LOCAL_STACK_FRAME(_hx_pos_54e6e67d0b7cf5ea_170_stream,"kha.audio2.Audio1","stream",0x3e03bd0b,"kha.audio2.Audio1.stream","kha/audio2/Audio1.hx",170,0x063d6bfb)
HX_LOCAL_STACK_FRAME(_hx_pos_54e6e67d0b7cf5ea_9_boot,"kha.audio2.Audio1","boot",0xd6a263fd,"kha.audio2.Audio1.boot","kha/audio2/Audio1.hx",9,0x063d6bfb)
HX_LOCAL_STACK_FRAME(_hx_pos_54e6e67d0b7cf5ea_17_boot,"kha.audio2.Audio1","boot",0xd6a263fd,"kha.audio2.Audio1.boot","kha/audio2/Audio1.hx",17,0x063d6bfb)
namespace kha{
namespace audio2{

void Audio1_obj::__construct() { }

Dynamic Audio1_obj::__CreateEmpty() { return new Audio1_obj; }

void *Audio1_obj::_hx_vtable = 0;

Dynamic Audio1_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Audio1_obj > _hx_result = new Audio1_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Audio1_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x49e0d43b;
}

int Audio1_obj::channelCount;

::Array< ::Dynamic> Audio1_obj::soundChannels;

::Array< ::Dynamic> Audio1_obj::streamChannels;

::Array< ::Dynamic> Audio1_obj::internalSoundChannels;

::Array< ::Dynamic> Audio1_obj::internalStreamChannels;

 ::kha::arrays::ByteArrayPrivate Audio1_obj::sampleCache1;

 ::kha::arrays::ByteArrayPrivate Audio1_obj::sampleCache2;

int Audio1_obj::lastAllocationCount;

 ::sys::thread::Mutex Audio1_obj::mutex;

void Audio1_obj::_init(){
            	HX_GC_STACKFRAME(&_hx_pos_54e6e67d0b7cf5ea_24__init)
HXLINE(  26)		::kha::audio2::Audio1_obj::mutex =  ::sys::thread::Mutex_obj::__alloc( HX_CTX );
HXLINE(  28)		::kha::audio2::Audio1_obj::soundChannels = ::Array_obj< ::Dynamic>::__new(32);
HXLINE(  29)		::kha::audio2::Audio1_obj::streamChannels = ::Array_obj< ::Dynamic>::__new(32);
HXLINE(  30)		::kha::audio2::Audio1_obj::internalSoundChannels = ::Array_obj< ::Dynamic>::__new(32);
HXLINE(  31)		::kha::audio2::Audio1_obj::internalStreamChannels = ::Array_obj< ::Dynamic>::__new(32);
HXLINE(  32)		::kha::audio2::Audio1_obj::sampleCache1 = ::kha::arrays::_Float32Array::Float32Array_Impl__obj::_new(512);
HXLINE(  33)		::kha::audio2::Audio1_obj::sampleCache2 = ::kha::arrays::_Float32Array::Float32Array_Impl__obj::_new(512);
HXLINE(  34)		::kha::audio2::Audio1_obj::lastAllocationCount = 0;
HXLINE(  35)		::kha::audio2::Audio_obj::audioCallback = ::kha::audio2::Audio1_obj::mix_dyn();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Audio1_obj,_init,(void))

Float Audio1_obj::max(Float a,Float b){
            	HX_STACKFRAME(&_hx_pos_54e6e67d0b7cf5ea_39_max)
HXDLIN(  39)		if ((a > b)) {
HXDLIN(  39)			return a;
            		}
            		else {
HXDLIN(  39)			return b;
            		}
HXDLIN(  39)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Audio1_obj,max,return )

Float Audio1_obj::min(Float a,Float b){
            	HX_STACKFRAME(&_hx_pos_54e6e67d0b7cf5ea_43_min)
HXDLIN(  43)		if ((a < b)) {
HXDLIN(  43)			return a;
            		}
            		else {
HXDLIN(  43)			return b;
            		}
HXDLIN(  43)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Audio1_obj,min,return )

void Audio1_obj::mix( ::kha::internal::IntBox samplesBox, ::kha::audio2::Buffer buffer){
            	HX_STACKFRAME(&_hx_pos_54e6e67d0b7cf5ea_46_mix)
HXLINE(  47)		int samples = samplesBox->value;
HXLINE(  48)		if (((::kha::audio2::Audio1_obj::sampleCache1->byteArrayLength >> 2) < samples)) {
HXLINE(  49)			if (::kha::audio2::Audio_obj::disableGcInteractions) {
HXLINE(  50)				::haxe::Log_obj::trace(HX_("Unexpected allocation request in audio thread.",a1,f3,23,1f),::hx::SourceInfo(HX_("kha/audio2/Audio1.hx",fb,6b,3d,06),50,HX_("kha.audio2.Audio1",83,94,af,7e),HX_("mix",9c,11,53,00)));
HXLINE(  51)				{
HXLINE(  51)					int _g = 0;
HXDLIN(  51)					int _g1 = samples;
HXDLIN(  51)					while((_g < _g1)){
HXLINE(  51)						_g = (_g + 1);
HXDLIN(  51)						int i = (_g - 1);
HXLINE(  52)						{
HXLINE(  52)							 ::kha::arrays::ByteArrayPrivate this1 = buffer->data;
HXDLIN(  52)							int k = buffer->writeLocation;
HXDLIN(  52)							*((float *)&this1->self.data[this1->byteArrayOffset + (k * 4)]) = 0;
            						}
HXLINE(  53)						 ::kha::audio2::Buffer buffer1 = buffer;
HXDLIN(  53)						buffer1->writeLocation = (buffer1->writeLocation + 1);
HXLINE(  54)						if ((buffer->writeLocation >= buffer->size)) {
HXLINE(  55)							buffer->writeLocation = 0;
            						}
            					}
            				}
HXLINE(  58)				::kha::audio2::Audio1_obj::lastAllocationCount = 0;
HXLINE(  59)				::kha::audio2::Audio_obj::disableGcInteractions = false;
HXLINE(  60)				return;
            			}
HXLINE(  62)			::kha::audio2::Audio1_obj::sampleCache1 = ::kha::arrays::_Float32Array::Float32Array_Impl__obj::_new((samples * 2));
HXLINE(  63)			::kha::audio2::Audio1_obj::sampleCache2 = ::kha::arrays::_Float32Array::Float32Array_Impl__obj::_new((samples * 2));
HXLINE(  64)			::kha::audio2::Audio1_obj::lastAllocationCount = 0;
            		}
            		else {
HXLINE(  67)			if ((::kha::audio2::Audio1_obj::lastAllocationCount > 100)) {
HXLINE(  68)				::kha::audio2::Audio_obj::disableGcInteractions = true;
            			}
            			else {
HXLINE(  71)				 ::Dynamic _hx_tmp = ::hx::ClassOf< ::kha::audio2::Audio1 >();
HXDLIN(  71)				::kha::audio2::Audio1_obj::lastAllocationCount = (::kha::audio2::Audio1_obj::lastAllocationCount + 1);
            			}
            		}
HXLINE(  75)		{
HXLINE(  75)			int _g2 = 0;
HXDLIN(  75)			int _g3 = samples;
HXDLIN(  75)			while((_g2 < _g3)){
HXLINE(  75)				_g2 = (_g2 + 1);
HXDLIN(  75)				int i1 = (_g2 - 1);
HXLINE(  76)				{
HXLINE(  76)					 ::kha::arrays::ByteArrayPrivate this2 = ::kha::audio2::Audio1_obj::sampleCache2;
HXDLIN(  76)					*((float *)&this2->self.data[this2->byteArrayOffset + (i1 * 4)]) = 0;
            				}
            			}
            		}
HXLINE(  80)		::kha::audio2::Audio1_obj::mutex->acquire();
HXLINE(  82)		{
HXLINE(  82)			int _g4 = 0;
HXDLIN(  82)			while((_g4 < 32)){
HXLINE(  82)				_g4 = (_g4 + 1);
HXDLIN(  82)				int i2 = (_g4 - 1);
HXLINE(  83)				{
HXLINE(  83)					::Array< ::Dynamic> this3 = ::kha::audio2::Audio1_obj::internalSoundChannels;
HXDLIN(  83)					 ::kha::audio2::AudioChannel val = ( ( ::kha::audio2::AudioChannel)(_hx_array_unsafe_get(::kha::audio2::Audio1_obj::soundChannels,i2)) );
HXDLIN(  83)					this3->__unsafe_set(i2,val);
            				}
            			}
            		}
HXLINE(  85)		{
HXLINE(  85)			int _g5 = 0;
HXDLIN(  85)			while((_g5 < 32)){
HXLINE(  85)				_g5 = (_g5 + 1);
HXDLIN(  85)				int i3 = (_g5 - 1);
HXLINE(  86)				{
HXLINE(  86)					::Array< ::Dynamic> this4 = ::kha::audio2::Audio1_obj::internalStreamChannels;
HXDLIN(  86)					 ::kha::audio2::StreamChannel val1 = ( ( ::kha::audio2::StreamChannel)(_hx_array_unsafe_get(::kha::audio2::Audio1_obj::streamChannels,i3)) );
HXDLIN(  86)					this4->__unsafe_set(i3,val1);
            				}
            			}
            		}
HXLINE(  89)		::kha::audio2::Audio1_obj::mutex->release();
HXLINE(  92)		{
HXLINE(  92)			int _g6 = 0;
HXDLIN(  92)			::Array< ::Dynamic> _g7 = ::kha::audio2::Audio1_obj::internalSoundChannels;
HXDLIN(  92)			while((_g6 < _g7->length)){
HXLINE(  92)				 ::kha::audio2::AudioChannel channel = ( ( ::kha::audio2::AudioChannel)(_hx_array_unsafe_get(_g7,_g6)) );
HXDLIN(  92)				_g6 = (_g6 + 1);
HXLINE(  93)				bool _hx_tmp1;
HXDLIN(  93)				if (::hx::IsNotNull( channel )) {
HXLINE(  93)					_hx_tmp1 = channel->get_finished();
            				}
            				else {
HXLINE(  93)					_hx_tmp1 = true;
            				}
HXDLIN(  93)				if (_hx_tmp1) {
HXLINE(  94)					continue;
            				}
HXLINE(  95)				channel->nextSamples(::kha::audio2::Audio1_obj::sampleCache1,samples,buffer->samplesPerSecond);
HXLINE(  96)				{
HXLINE(  96)					int _g8 = 0;
HXDLIN(  96)					int _g9 = samples;
HXDLIN(  96)					while((_g8 < _g9)){
HXLINE(  96)						_g8 = (_g8 + 1);
HXDLIN(  96)						int i4 = (_g8 - 1);
HXLINE(  97)						{
HXLINE(  97)							int _g10 = i4;
HXDLIN(  97)							 ::kha::arrays::ByteArrayPrivate _g11 = ::kha::audio2::Audio1_obj::sampleCache2;
HXDLIN(  97)							{
HXLINE(  97)								float v = *(float *)&_g11->self.data[_g11->byteArrayOffset + (_g10 * 4)];
HXDLIN(  97)								 ::kha::arrays::ByteArrayPrivate this5 = ::kha::audio2::Audio1_obj::sampleCache1;
HXDLIN(  97)								float v1 = *(float *)&this5->self.data[this5->byteArrayOffset + (i4 * 4)];
HXDLIN(  97)								float v2 = ( (float)((v + (( (Float)(v1) ) * channel->get_volume()))) );
HXDLIN(  97)								*((float *)&_g11->self.data[_g11->byteArrayOffset + (_g10 * 4)]) = v2;
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 100)		{
HXLINE( 100)			int _g12 = 0;
HXDLIN( 100)			::Array< ::Dynamic> _g13 = ::kha::audio2::Audio1_obj::internalStreamChannels;
HXDLIN( 100)			while((_g12 < _g13->length)){
HXLINE( 100)				 ::kha::audio2::StreamChannel channel1 = ( ( ::kha::audio2::StreamChannel)(_hx_array_unsafe_get(_g13,_g12)) );
HXDLIN( 100)				_g12 = (_g12 + 1);
HXLINE( 101)				bool _hx_tmp2;
HXDLIN( 101)				if (::hx::IsNotNull( channel1 )) {
HXLINE( 101)					_hx_tmp2 = channel1->get_finished();
            				}
            				else {
HXLINE( 101)					_hx_tmp2 = true;
            				}
HXDLIN( 101)				if (_hx_tmp2) {
HXLINE( 102)					continue;
            				}
HXLINE( 103)				channel1->nextSamples(::kha::audio2::Audio1_obj::sampleCache1,samples,buffer->samplesPerSecond);
HXLINE( 104)				{
HXLINE( 104)					int _g14 = 0;
HXDLIN( 104)					int _g15 = samples;
HXDLIN( 104)					while((_g14 < _g15)){
HXLINE( 104)						_g14 = (_g14 + 1);
HXDLIN( 104)						int i5 = (_g14 - 1);
HXLINE( 105)						{
HXLINE( 105)							int _g16 = i5;
HXDLIN( 105)							 ::kha::arrays::ByteArrayPrivate _g17 = ::kha::audio2::Audio1_obj::sampleCache2;
HXDLIN( 105)							{
HXLINE( 105)								float v3 = *(float *)&_g17->self.data[_g17->byteArrayOffset + (_g16 * 4)];
HXDLIN( 105)								 ::kha::arrays::ByteArrayPrivate this6 = ::kha::audio2::Audio1_obj::sampleCache1;
HXDLIN( 105)								float v4 = *(float *)&this6->self.data[this6->byteArrayOffset + (i5 * 4)];
HXDLIN( 105)								float v5 = ( (float)((v3 + (( (Float)(v4) ) * channel1->get_volume()))) );
HXDLIN( 105)								*((float *)&_g17->self.data[_g17->byteArrayOffset + (_g16 * 4)]) = v5;
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 109)		{
HXLINE( 109)			int _g18 = 0;
HXDLIN( 109)			int _g19 = samples;
HXDLIN( 109)			while((_g18 < _g19)){
HXLINE( 109)				_g18 = (_g18 + 1);
HXDLIN( 109)				int i6 = (_g18 - 1);
HXLINE( 110)				{
HXLINE( 110)					 ::kha::arrays::ByteArrayPrivate this7 = buffer->data;
HXDLIN( 110)					int k1 = buffer->writeLocation;
HXDLIN( 110)					 ::kha::arrays::ByteArrayPrivate this8 = ::kha::audio2::Audio1_obj::sampleCache2;
HXDLIN( 110)					Float a = *(float *)&this8->self.data[this8->byteArrayOffset + (i6 * 4)];
HXDLIN( 110)					Float a1;
HXDLIN( 110)					if ((a < ((Float)1.0))) {
HXLINE( 110)						a1 = a;
            					}
            					else {
HXLINE( 110)						a1 = ((Float)1.0);
            					}
HXDLIN( 110)					float v6;
HXDLIN( 110)					if ((a1 > ((Float)-1.0))) {
HXLINE( 110)						v6 = ( (float)(a1) );
            					}
            					else {
HXLINE( 110)						v6 = ( (float)(((Float)-1.0)) );
            					}
HXDLIN( 110)					*((float *)&this7->self.data[this7->byteArrayOffset + (k1 * 4)]) = v6;
            				}
HXLINE( 111)				 ::kha::audio2::Buffer buffer2 = buffer;
HXDLIN( 111)				buffer2->writeLocation = (buffer2->writeLocation + 1);
HXLINE( 112)				if ((buffer->writeLocation >= buffer->size)) {
HXLINE( 113)					buffer->writeLocation = 0;
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Audio1_obj,mix,(void))

::Dynamic Audio1_obj::play( ::kha::Sound sound,::hx::Null< bool >  __o_loop){
            		bool loop = __o_loop.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_54e6e67d0b7cf5ea_118_play)
HXLINE( 119)		 ::kha::audio2::AudioChannel channel = null();
HXLINE( 120)		if ((::kha::audio2::Audio_obj::samplesPerSecond != sound->sampleRate)) {
HXLINE( 121)			channel =  ::kha::audio2::ResamplingAudioChannel_obj::__alloc( HX_CTX ,loop,sound->sampleRate);
            		}
            		else {
HXLINE( 127)			channel =  ::kha::audio2::AudioChannel_obj::__alloc( HX_CTX ,loop);
            		}
HXLINE( 130)		channel->_hx_set_data(HX_CTX, sound->uncompressedData);
HXLINE( 131)		bool foundChannel = false;
HXLINE( 134)		::kha::audio2::Audio1_obj::mutex->acquire();
HXLINE( 136)		{
HXLINE( 136)			int _g = 0;
HXDLIN( 136)			while((_g < 32)){
HXLINE( 136)				_g = (_g + 1);
HXDLIN( 136)				int i = (_g - 1);
HXLINE( 137)				bool _hx_tmp;
HXDLIN( 137)				if (::hx::IsNotNull( _hx_array_unsafe_get(::kha::audio2::Audio1_obj::soundChannels,i) )) {
HXLINE( 137)					_hx_tmp = ( ( ::kha::audio2::AudioChannel)(_hx_array_unsafe_get(::kha::audio2::Audio1_obj::soundChannels,i)) )->get_finished();
            				}
            				else {
HXLINE( 137)					_hx_tmp = true;
            				}
HXDLIN( 137)				if (_hx_tmp) {
HXLINE( 138)					::kha::audio2::Audio1_obj::soundChannels->__unsafe_set(i,channel);
HXLINE( 139)					foundChannel = true;
HXLINE( 140)					goto _hx_goto_13;
            				}
            			}
            			_hx_goto_13:;
            		}
HXLINE( 144)		::kha::audio2::Audio1_obj::mutex->release();
HXLINE( 147)		if (foundChannel) {
HXLINE( 147)			return channel;
            		}
            		else {
HXLINE( 147)			return null();
            		}
HXDLIN( 147)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Audio1_obj,play,return )

void Audio1_obj::_playAgain( ::kha::audio2::AudioChannel channel){
            	HX_STACKFRAME(&_hx_pos_54e6e67d0b7cf5ea_150__playAgain)
HXLINE( 152)		::kha::audio2::Audio1_obj::mutex->acquire();
HXLINE( 154)		{
HXLINE( 154)			int _g = 0;
HXDLIN( 154)			while((_g < 32)){
HXLINE( 154)				_g = (_g + 1);
HXDLIN( 154)				int i = (_g - 1);
HXLINE( 155)				if (::hx::IsInstanceEq( _hx_array_unsafe_get(::kha::audio2::Audio1_obj::soundChannels,i),channel )) {
HXLINE( 156)					 ::kha::audio2::AudioChannel val = null();
HXDLIN( 156)					::kha::audio2::Audio1_obj::soundChannels->__unsafe_set(i,val);
            				}
            			}
            		}
HXLINE( 159)		{
HXLINE( 159)			int _g1 = 0;
HXDLIN( 159)			while((_g1 < 32)){
HXLINE( 159)				_g1 = (_g1 + 1);
HXDLIN( 159)				int i1 = (_g1 - 1);
HXLINE( 160)				bool _hx_tmp;
HXDLIN( 160)				bool _hx_tmp1;
HXDLIN( 160)				if (::hx::IsNotNull( _hx_array_unsafe_get(::kha::audio2::Audio1_obj::soundChannels,i1) )) {
HXLINE( 160)					_hx_tmp1 = ( ( ::kha::audio2::AudioChannel)(_hx_array_unsafe_get(::kha::audio2::Audio1_obj::soundChannels,i1)) )->get_finished();
            				}
            				else {
HXLINE( 160)					_hx_tmp1 = true;
            				}
HXDLIN( 160)				if (!(_hx_tmp1)) {
HXLINE( 160)					_hx_tmp = ::hx::IsInstanceEq( _hx_array_unsafe_get(::kha::audio2::Audio1_obj::soundChannels,i1),channel );
            				}
            				else {
HXLINE( 160)					_hx_tmp = true;
            				}
HXDLIN( 160)				if (_hx_tmp) {
HXLINE( 161)					::kha::audio2::Audio1_obj::soundChannels->__unsafe_set(i1,channel);
HXLINE( 162)					goto _hx_goto_16;
            				}
            			}
            			_hx_goto_16:;
            		}
HXLINE( 166)		::kha::audio2::Audio1_obj::mutex->release();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Audio1_obj,_playAgain,(void))

::Dynamic Audio1_obj::stream( ::kha::Sound sound,::hx::Null< bool >  __o_loop){
            		bool loop = __o_loop.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_54e6e67d0b7cf5ea_170_stream)
HXLINE( 171)		{
HXLINE( 173)			::Dynamic hardwareChannel = ::kha::audio2::Audio_obj::stream(sound,loop);
HXLINE( 174)			if (::hx::IsNotNull( hardwareChannel )) {
HXLINE( 175)				return hardwareChannel;
            			}
            		}
HXLINE( 178)		 ::kha::audio2::StreamChannel channel =  ::kha::audio2::StreamChannel_obj::__alloc( HX_CTX ,sound->compressedData,loop);
HXLINE( 179)		bool foundChannel = false;
HXLINE( 182)		::kha::audio2::Audio1_obj::mutex->acquire();
HXLINE( 184)		{
HXLINE( 184)			int _g = 0;
HXDLIN( 184)			while((_g < 32)){
HXLINE( 184)				_g = (_g + 1);
HXDLIN( 184)				int i = (_g - 1);
HXLINE( 185)				bool _hx_tmp;
HXDLIN( 185)				if (::hx::IsNotNull( _hx_array_unsafe_get(::kha::audio2::Audio1_obj::streamChannels,i) )) {
HXLINE( 185)					_hx_tmp = ( ( ::kha::audio2::StreamChannel)(_hx_array_unsafe_get(::kha::audio2::Audio1_obj::streamChannels,i)) )->get_finished();
            				}
            				else {
HXLINE( 185)					_hx_tmp = true;
            				}
HXDLIN( 185)				if (_hx_tmp) {
HXLINE( 186)					::kha::audio2::Audio1_obj::streamChannels->__unsafe_set(i,channel);
HXLINE( 187)					foundChannel = true;
HXLINE( 188)					goto _hx_goto_18;
            				}
            			}
            			_hx_goto_18:;
            		}
HXLINE( 192)		::kha::audio2::Audio1_obj::mutex->release();
HXLINE( 195)		if (foundChannel) {
HXLINE( 195)			return channel;
            		}
            		else {
HXLINE( 195)			return null();
            		}
HXDLIN( 195)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Audio1_obj,stream,return )


Audio1_obj::Audio1_obj()
{
}

bool Audio1_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"max") ) { outValue = max_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"min") ) { outValue = min_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"mix") ) { outValue = mix_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { outValue = play_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mutex") ) { outValue = ( mutex ); return true; }
		if (HX_FIELD_EQ(inName,"_init") ) { outValue = _init_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stream") ) { outValue = stream_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_playAgain") ) { outValue = _playAgain_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sampleCache1") ) { outValue = ( sampleCache1 ); return true; }
		if (HX_FIELD_EQ(inName,"sampleCache2") ) { outValue = ( sampleCache2 ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"soundChannels") ) { outValue = ( soundChannels ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"streamChannels") ) { outValue = ( streamChannels ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lastAllocationCount") ) { outValue = ( lastAllocationCount ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"internalSoundChannels") ) { outValue = ( internalSoundChannels ); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"internalStreamChannels") ) { outValue = ( internalStreamChannels ); return true; }
	}
	return false;
}

bool Audio1_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mutex") ) { mutex=ioValue.Cast<  ::sys::thread::Mutex >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sampleCache1") ) { sampleCache1=ioValue.Cast<  ::kha::arrays::ByteArrayPrivate >(); return true; }
		if (HX_FIELD_EQ(inName,"sampleCache2") ) { sampleCache2=ioValue.Cast<  ::kha::arrays::ByteArrayPrivate >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"soundChannels") ) { soundChannels=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"streamChannels") ) { streamChannels=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lastAllocationCount") ) { lastAllocationCount=ioValue.Cast< int >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"internalSoundChannels") ) { internalSoundChannels=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"internalStreamChannels") ) { internalStreamChannels=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Audio1_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Audio1_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Audio1_obj::channelCount,HX_("channelCount",0c,11,16,4f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Audio1_obj::soundChannels,HX_("soundChannels",3f,da,0c,08)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Audio1_obj::streamChannels,HX_("streamChannels",f0,fa,b5,1f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Audio1_obj::internalSoundChannels,HX_("internalSoundChannels",c2,40,9f,b5)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Audio1_obj::internalStreamChannels,HX_("internalStreamChannels",0d,47,3d,52)},
	{::hx::fsObject /*  ::kha::arrays::ByteArrayPrivate */ ,(void *) &Audio1_obj::sampleCache1,HX_("sampleCache1",79,af,5e,f5)},
	{::hx::fsObject /*  ::kha::arrays::ByteArrayPrivate */ ,(void *) &Audio1_obj::sampleCache2,HX_("sampleCache2",7a,af,5e,f5)},
	{::hx::fsInt,(void *) &Audio1_obj::lastAllocationCount,HX_("lastAllocationCount",d9,68,e4,b0)},
	{::hx::fsObject /*  ::sys::thread::Mutex */ ,(void *) &Audio1_obj::mutex,HX_("mutex",7f,8f,5b,10)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Audio1_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Audio1_obj::channelCount,"channelCount");
	HX_MARK_MEMBER_NAME(Audio1_obj::soundChannels,"soundChannels");
	HX_MARK_MEMBER_NAME(Audio1_obj::streamChannels,"streamChannels");
	HX_MARK_MEMBER_NAME(Audio1_obj::internalSoundChannels,"internalSoundChannels");
	HX_MARK_MEMBER_NAME(Audio1_obj::internalStreamChannels,"internalStreamChannels");
	HX_MARK_MEMBER_NAME(Audio1_obj::sampleCache1,"sampleCache1");
	HX_MARK_MEMBER_NAME(Audio1_obj::sampleCache2,"sampleCache2");
	HX_MARK_MEMBER_NAME(Audio1_obj::lastAllocationCount,"lastAllocationCount");
	HX_MARK_MEMBER_NAME(Audio1_obj::mutex,"mutex");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Audio1_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Audio1_obj::channelCount,"channelCount");
	HX_VISIT_MEMBER_NAME(Audio1_obj::soundChannels,"soundChannels");
	HX_VISIT_MEMBER_NAME(Audio1_obj::streamChannels,"streamChannels");
	HX_VISIT_MEMBER_NAME(Audio1_obj::internalSoundChannels,"internalSoundChannels");
	HX_VISIT_MEMBER_NAME(Audio1_obj::internalStreamChannels,"internalStreamChannels");
	HX_VISIT_MEMBER_NAME(Audio1_obj::sampleCache1,"sampleCache1");
	HX_VISIT_MEMBER_NAME(Audio1_obj::sampleCache2,"sampleCache2");
	HX_VISIT_MEMBER_NAME(Audio1_obj::lastAllocationCount,"lastAllocationCount");
	HX_VISIT_MEMBER_NAME(Audio1_obj::mutex,"mutex");
};

#endif

::hx::Class Audio1_obj::__mClass;

static ::String Audio1_obj_sStaticFields[] = {
	HX_("channelCount",0c,11,16,4f),
	HX_("soundChannels",3f,da,0c,08),
	HX_("streamChannels",f0,fa,b5,1f),
	HX_("internalSoundChannels",c2,40,9f,b5),
	HX_("internalStreamChannels",0d,47,3d,52),
	HX_("sampleCache1",79,af,5e,f5),
	HX_("sampleCache2",7a,af,5e,f5),
	HX_("lastAllocationCount",d9,68,e4,b0),
	HX_("mutex",7f,8f,5b,10),
	HX_("_init",ef,56,cc,f8),
	HX_("max",a4,0a,53,00),
	HX_("min",92,11,53,00),
	HX_("mix",9c,11,53,00),
	HX_("play",f4,2d,5a,4a),
	HX_("_playAgain",8d,de,c3,9a),
	HX_("stream",80,14,2d,11),
	::String(null())
};

void Audio1_obj::__register()
{
	Audio1_obj _hx_dummy;
	Audio1_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kha.audio2.Audio1",83,94,af,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Audio1_obj::__GetStatic;
	__mClass->mSetStaticField = &Audio1_obj::__SetStatic;
	__mClass->mMarkFunc = Audio1_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Audio1_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Audio1_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Audio1_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Audio1_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Audio1_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Audio1_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_54e6e67d0b7cf5ea_9_boot)
HXDLIN(   9)		channelCount = 32;
            	}
{
            	HX_STACKFRAME(&_hx_pos_54e6e67d0b7cf5ea_17_boot)
HXDLIN(  17)		lastAllocationCount = 0;
            	}
}

} // end namespace kha
} // end namespace audio2