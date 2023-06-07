// Generated by Haxe 4.3.0+fa3f709
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <hxinc/Std.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_VorbisDecodeState
#include <hxinc/kha/audio2/ogg/vorbis/VorbisDecodeState.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Codebook
#include <hxinc/kha/audio2/ogg/vorbis/data/Codebook.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Header
#include <hxinc/kha/audio2/ogg/vorbis/data/Header.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_ReaderError
#include <hxinc/kha/audio2/ogg/vorbis/data/ReaderError.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_ReaderErrorType
#include <hxinc/kha/audio2/ogg/vorbis/data/ReaderErrorType.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Residue
#include <hxinc/kha/audio2/ogg/vorbis/data/Residue.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7f2028beab98c670_21_new,"kha.audio2.ogg.vorbis.data.Residue","new",0x389109ed,"kha.audio2.ogg.vorbis.data.Residue.new","kha/audio2/ogg/vorbis/data/Residue.hx",21,0xcd2d4964)
HX_LOCAL_STACK_FRAME(_hx_pos_7f2028beab98c670_84_decode,"kha.audio2.ogg.vorbis.data.Residue","decode",0x3b2cd9c1,"kha.audio2.ogg.vorbis.data.Residue.decode","kha/audio2/ogg/vorbis/data/Residue.hx",84,0xcd2d4964)
HX_LOCAL_STACK_FRAME(_hx_pos_7f2028beab98c670_25_read,"kha.audio2.ogg.vorbis.data.Residue","read",0x48fc6d29,"kha.audio2.ogg.vorbis.data.Residue.read","kha/audio2/ogg/vorbis/data/Residue.hx",25,0xcd2d4964)
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{

void Residue_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7f2028beab98c670_21_new)
            	}

Dynamic Residue_obj::__CreateEmpty() { return new Residue_obj; }

void *Residue_obj::_hx_vtable = 0;

Dynamic Residue_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Residue_obj > _hx_result = new Residue_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Residue_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6e31ecbb;
}

void Residue_obj::decode( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState, ::kha::audio2::ogg::vorbis::data::Header header,::Array< ::Dynamic> residueBuffers,int ch,int n,::Array< bool > doNotDecode,::Array< ::Dynamic> channelBuffers){
            	HX_STACKFRAME(&_hx_pos_7f2028beab98c670_84_decode)
HXLINE(  86)		::Array< ::Dynamic> codebooks = header->codebooks;
HXLINE(  87)		int classwords = ( ( ::kha::audio2::ogg::vorbis::data::Codebook)(_hx_array_unsafe_get(codebooks,this->classbook)) )->dimensions;
HXLINE(  88)		int nRead = (this->end - this->begin);
HXLINE(  89)		int partSize = this->partSize;
HXLINE(  90)		int _hx_int = nRead;
HXDLIN(  90)		Float partRead;
HXDLIN(  90)		if ((_hx_int < 0)) {
HXLINE(  90)			partRead = (((Float)4294967296.0) + _hx_int);
            		}
            		else {
HXLINE(  90)			partRead = (_hx_int + ((Float)0.0));
            		}
HXDLIN(  90)		int int1 = partSize;
HXDLIN(  90)		Float partRead1;
HXDLIN(  90)		if ((int1 < 0)) {
HXLINE(  90)			partRead1 = (((Float)4294967296.0) + int1);
            		}
            		else {
HXLINE(  90)			partRead1 = (int1 + ((Float)0.0));
            		}
HXDLIN(  90)		int partRead2 = ::Std_obj::_hx_int((partRead / partRead1));
HXLINE(  91)		::Array< int > classifications = ::Array_obj< int >::__new(((header->channel * partRead2) + 1));
HXLINE(  94)		{
HXLINE(  94)			int _g = 0;
HXDLIN(  94)			int _g1 = ch;
HXDLIN(  94)			while((_g < _g1)){
HXLINE(  94)				_g = (_g + 1);
HXDLIN(  94)				int i = (_g - 1);
HXLINE(  95)				if (!(( (bool)(_hx_array_unsafe_get(doNotDecode,i)) ))) {
HXLINE(  96)					::Array< Float > buffer = ( (::Array< Float >)(_hx_array_unsafe_get(residueBuffers,i)) );
HXLINE(  97)					{
HXLINE(  97)						int _g2 = 0;
HXDLIN(  97)						int _g3 = buffer->length;
HXDLIN(  97)						while((_g2 < _g3)){
HXLINE(  97)							_g2 = (_g2 + 1);
HXDLIN(  97)							int j = (_g2 - 1);
HXLINE(  98)							buffer->__unsafe_set(j,0);
            						}
            					}
            				}
            			}
            		}
HXLINE( 103)		bool _hx_tmp;
HXDLIN( 103)		if ((this->type == 2)) {
HXLINE( 103)			_hx_tmp = (ch != 1);
            		}
            		else {
HXLINE( 103)			_hx_tmp = false;
            		}
HXDLIN( 103)		if (_hx_tmp) {
HXLINE( 104)			{
HXLINE( 104)				int _g4 = 0;
HXDLIN( 104)				int _g5 = ch;
HXDLIN( 104)				while((_g4 < _g5)){
HXLINE( 104)					_g4 = (_g4 + 1);
HXDLIN( 104)					int j1 = (_g4 - 1);
HXLINE( 105)					if (!(( (bool)(_hx_array_unsafe_get(doNotDecode,j1)) ))) {
HXLINE( 106)						goto _hx_goto_3;
            					}
            					else {
HXLINE( 107)						if ((j1 == (ch - 1))) {
HXLINE( 108)							return;
            						}
            					}
            				}
            				_hx_goto_3:;
            			}
HXLINE( 113)			{
HXLINE( 113)				int _g6 = 0;
HXDLIN( 113)				while((_g6 < 8)){
HXLINE( 113)					_g6 = (_g6 + 1);
HXDLIN( 113)					int pass = (_g6 - 1);
HXLINE( 114)					int pcount = 0;
HXDLIN( 114)					int classSet = 0;
HXLINE( 115)					if ((ch == 2)) {
HXLINE( 117)						while((pcount < partRead2)){
HXLINE( 118)							int z = (this->begin + (pcount * partSize));
HXLINE( 119)							int cInter = (z & 1);
HXLINE( 120)							int pInter = ::hx::UShr(z,1);
HXLINE( 121)							if ((pass == 0)) {
HXLINE( 122)								 ::kha::audio2::ogg::vorbis::data::Codebook c = ( ( ::kha::audio2::ogg::vorbis::data::Codebook)(_hx_array_unsafe_get(codebooks,this->classbook)) );
HXLINE( 123)								if ((decodeState->validBits < 10)) {
HXLINE( 123)									decodeState->prepHuffman();
            								}
HXDLIN( 123)								int i1 = ( (int)(_hx_array_unsafe_get(c->fastHuffman,(decodeState->acc & 1023))) );
HXDLIN( 123)								int val;
HXDLIN( 123)								if ((i1 >= 0)) {
HXLINE( 123)									int l = ( (int)(_hx_array_unsafe_get(c->codewordLengths,i1)) );
HXDLIN( 123)									decodeState->acc = ::hx::UShr(decodeState->acc,l);
HXDLIN( 123)									 ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState1 = decodeState;
HXDLIN( 123)									decodeState1->validBits = (decodeState1->validBits - l);
HXDLIN( 123)									if ((decodeState->validBits < 0)) {
HXLINE( 123)										decodeState->validBits = 0;
HXDLIN( 123)										val = -1;
            									}
            									else {
HXLINE( 123)										val = i1;
            									}
            								}
            								else {
HXLINE( 123)									val = decodeState->decodeScalarRaw(c);
            								}
HXDLIN( 123)								if (c->sparse) {
HXLINE( 123)									val = ( (int)(_hx_array_unsafe_get(c->sortedValues,val)) );
            								}
HXDLIN( 123)								int q = val;
HXLINE( 124)								if ((q == -1)) {
HXLINE( 125)									return;
            								}
HXLINE( 127)								int i2 = classwords;
HXLINE( 128)								while(true){
HXLINE( 128)									i2 = (i2 - 1);
HXDLIN( 128)									if (!((i2 >= 0))) {
HXLINE( 128)										goto _hx_goto_6;
            									}
HXLINE( 129)									classifications->__unsafe_set((i2 + pcount),::hx::Mod(q,this->classifications));
HXLINE( 130)									q = ::Std_obj::_hx_int((( (Float)(q) ) / ( (Float)(this->classifications) )));
            								}
            								_hx_goto_6:;
            							}
HXLINE( 134)							{
HXLINE( 134)								int _g7 = 0;
HXDLIN( 134)								int _g8 = classwords;
HXDLIN( 134)								while((_g7 < _g8)){
HXLINE( 134)									_g7 = (_g7 + 1);
HXDLIN( 134)									int i3 = (_g7 - 1);
HXLINE( 135)									if ((pcount >= partRead2)) {
HXLINE( 136)										goto _hx_goto_7;
            									}
HXLINE( 138)									int z1 = (this->begin + (pcount * partSize));
HXLINE( 139)									int c1 = ( (int)(_hx_array_unsafe_get(classifications,pcount)) );
HXLINE( 140)									int b = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this->residueBooks,c1)) ),pass)) );
HXLINE( 141)									if ((b >= 0)) {
HXLINE( 142)										 ::kha::audio2::ogg::vorbis::data::Codebook book = ( ( ::kha::audio2::ogg::vorbis::data::Codebook)(_hx_array_unsafe_get(codebooks,b)) );
HXLINE( 144)										 ::Dynamic result = book->decodeDeinterleaveRepeat(decodeState,residueBuffers,ch,cInter,pInter,n,partSize);
HXLINE( 145)										if (::hx::IsNull( result )) {
HXLINE( 146)											return;
            										}
            										else {
HXLINE( 148)											cInter = ( (int)(result->__Field(HX_("cInter",b9,e7,a2,e6),::hx::paccDynamic)) );
HXLINE( 149)											pInter = ( (int)(result->__Field(HX_("pInter",8c,98,46,19),::hx::paccDynamic)) );
            										}
            									}
            									else {
HXLINE( 153)										z1 = (z1 + partSize);
HXLINE( 154)										cInter = (z1 & 1);
HXLINE( 155)										pInter = ::hx::UShr(z1,1);
            									}
HXLINE( 157)									pcount = (pcount + 1);
            								}
            								_hx_goto_7:;
            							}
            						}
            					}
            					else {
HXLINE( 161)						if ((ch == 1)) {
HXLINE( 162)							while((pcount < partRead2)){
HXLINE( 163)								int z2 = (this->begin + (pcount * partSize));
HXLINE( 164)								int cInter1 = 0;
HXLINE( 165)								int pInter1 = z2;
HXLINE( 166)								if ((pass == 0)) {
HXLINE( 167)									 ::kha::audio2::ogg::vorbis::data::Codebook c2 = ( ( ::kha::audio2::ogg::vorbis::data::Codebook)(_hx_array_unsafe_get(codebooks,this->classbook)) );
HXLINE( 168)									if ((decodeState->validBits < 10)) {
HXLINE( 168)										decodeState->prepHuffman();
            									}
HXDLIN( 168)									int i4 = ( (int)(_hx_array_unsafe_get(c2->fastHuffman,(decodeState->acc & 1023))) );
HXDLIN( 168)									int val1;
HXDLIN( 168)									if ((i4 >= 0)) {
HXLINE( 168)										int l1 = ( (int)(_hx_array_unsafe_get(c2->codewordLengths,i4)) );
HXDLIN( 168)										decodeState->acc = ::hx::UShr(decodeState->acc,l1);
HXDLIN( 168)										 ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState2 = decodeState;
HXDLIN( 168)										decodeState2->validBits = (decodeState2->validBits - l1);
HXDLIN( 168)										if ((decodeState->validBits < 0)) {
HXLINE( 168)											decodeState->validBits = 0;
HXDLIN( 168)											val1 = -1;
            										}
            										else {
HXLINE( 168)											val1 = i4;
            										}
            									}
            									else {
HXLINE( 168)										val1 = decodeState->decodeScalarRaw(c2);
            									}
HXDLIN( 168)									if (c2->sparse) {
HXLINE( 168)										val1 = ( (int)(_hx_array_unsafe_get(c2->sortedValues,val1)) );
            									}
HXDLIN( 168)									int q1 = val1;
HXLINE( 169)									if ((q1 == -1)) {
HXLINE( 169)										return;
            									}
HXLINE( 171)									int i5 = classwords;
HXLINE( 172)									while(true){
HXLINE( 172)										i5 = (i5 - 1);
HXDLIN( 172)										if (!((i5 >= 0))) {
HXLINE( 172)											goto _hx_goto_9;
            										}
HXLINE( 173)										classifications->__unsafe_set((i5 + pcount),::hx::Mod(q1,this->classifications));
HXLINE( 174)										q1 = ::Std_obj::_hx_int((( (Float)(q1) ) / ( (Float)(this->classifications) )));
            									}
            									_hx_goto_9:;
            								}
HXLINE( 178)								{
HXLINE( 178)									int _g9 = 0;
HXDLIN( 178)									int _g10 = classwords;
HXDLIN( 178)									while((_g9 < _g10)){
HXLINE( 178)										_g9 = (_g9 + 1);
HXDLIN( 178)										int i6 = (_g9 - 1);
HXLINE( 179)										if ((pcount >= partRead2)) {
HXLINE( 180)											goto _hx_goto_10;
            										}
HXLINE( 182)										int z3 = (this->begin + (pcount * partSize));
HXLINE( 183)										::Array< ::Dynamic> this1 = this->residueBooks;
HXDLIN( 183)										int b1 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,( (int)(_hx_array_unsafe_get(classifications,pcount)) ))) ),pass)) );
HXLINE( 184)										if ((b1 >= 0)) {
HXLINE( 185)											 ::kha::audio2::ogg::vorbis::data::Codebook book1 = ( ( ::kha::audio2::ogg::vorbis::data::Codebook)(_hx_array_unsafe_get(codebooks,b1)) );
HXLINE( 187)											 ::Dynamic result1 = book1->decodeDeinterleaveRepeat(decodeState,residueBuffers,ch,cInter1,pInter1,n,partSize);
HXLINE( 188)											if (::hx::IsNull( result1 )) {
HXLINE( 189)												return;
            											}
            											else {
HXLINE( 191)												cInter1 = ( (int)(result1->__Field(HX_("cInter",b9,e7,a2,e6),::hx::paccDynamic)) );
HXLINE( 192)												pInter1 = ( (int)(result1->__Field(HX_("pInter",8c,98,46,19),::hx::paccDynamic)) );
            											}
            										}
            										else {
HXLINE( 196)											z3 = (z3 + partSize);
HXLINE( 197)											cInter1 = 0;
HXLINE( 198)											pInter1 = z3;
            										}
HXLINE( 200)										pcount = (pcount + 1);
            									}
            									_hx_goto_10:;
            								}
            							}
            						}
            						else {
HXLINE( 204)							while((pcount < partRead2)){
HXLINE( 205)								int z4 = (this->begin + (pcount * partSize));
HXLINE( 206)								int int2 = z4;
HXDLIN( 206)								Float cInter2;
HXDLIN( 206)								if ((int2 < 0)) {
HXLINE( 206)									cInter2 = (((Float)4294967296.0) + int2);
            								}
            								else {
HXLINE( 206)									cInter2 = (int2 + ((Float)0.0));
            								}
HXDLIN( 206)								int int3 = ch;
HXDLIN( 206)								Float cInter3;
HXDLIN( 206)								if ((int3 < 0)) {
HXLINE( 206)									cInter3 = (((Float)4294967296.0) + int3);
            								}
            								else {
HXLINE( 206)									cInter3 = (int3 + ((Float)0.0));
            								}
HXDLIN( 206)								int cInter4 = ::Std_obj::_hx_int(::hx::Mod(cInter2,cInter3));
HXLINE( 207)								int int4 = z4;
HXDLIN( 207)								Float pInter2;
HXDLIN( 207)								if ((int4 < 0)) {
HXLINE( 207)									pInter2 = (((Float)4294967296.0) + int4);
            								}
            								else {
HXLINE( 207)									pInter2 = (int4 + ((Float)0.0));
            								}
HXDLIN( 207)								int int5 = ch;
HXDLIN( 207)								Float pInter3;
HXDLIN( 207)								if ((int5 < 0)) {
HXLINE( 207)									pInter3 = (((Float)4294967296.0) + int5);
            								}
            								else {
HXLINE( 207)									pInter3 = (int5 + ((Float)0.0));
            								}
HXDLIN( 207)								int pInter4 = ::Std_obj::_hx_int((pInter2 / pInter3));
HXLINE( 209)								if ((pass == 0)) {
HXLINE( 210)									 ::kha::audio2::ogg::vorbis::data::Codebook c3 = ( ( ::kha::audio2::ogg::vorbis::data::Codebook)(_hx_array_unsafe_get(codebooks,this->classbook)) );
HXLINE( 211)									if ((decodeState->validBits < 10)) {
HXLINE( 211)										decodeState->prepHuffman();
            									}
HXDLIN( 211)									int i7 = ( (int)(_hx_array_unsafe_get(c3->fastHuffman,(decodeState->acc & 1023))) );
HXDLIN( 211)									int val2;
HXDLIN( 211)									if ((i7 >= 0)) {
HXLINE( 211)										int l2 = ( (int)(_hx_array_unsafe_get(c3->codewordLengths,i7)) );
HXDLIN( 211)										decodeState->acc = ::hx::UShr(decodeState->acc,l2);
HXDLIN( 211)										 ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState3 = decodeState;
HXDLIN( 211)										decodeState3->validBits = (decodeState3->validBits - l2);
HXDLIN( 211)										if ((decodeState->validBits < 0)) {
HXLINE( 211)											decodeState->validBits = 0;
HXDLIN( 211)											val2 = -1;
            										}
            										else {
HXLINE( 211)											val2 = i7;
            										}
            									}
            									else {
HXLINE( 211)										val2 = decodeState->decodeScalarRaw(c3);
            									}
HXDLIN( 211)									if (c3->sparse) {
HXLINE( 211)										val2 = ( (int)(_hx_array_unsafe_get(c3->sortedValues,val2)) );
            									}
HXDLIN( 211)									int q2 = val2;
HXLINE( 212)									if ((q2 == -1)) {
HXLINE( 213)										return;
            									}
HXLINE( 216)									int i8 = classwords;
HXLINE( 217)									while(true){
HXLINE( 217)										i8 = (i8 - 1);
HXDLIN( 217)										if (!((i8 >= 0))) {
HXLINE( 217)											goto _hx_goto_12;
            										}
HXLINE( 218)										classifications->__unsafe_set((i8 + pcount),::hx::Mod(q2,this->classifications));
HXLINE( 219)										q2 = ::Std_obj::_hx_int((( (Float)(q2) ) / ( (Float)(this->classifications) )));
            									}
            									_hx_goto_12:;
            								}
HXLINE( 223)								{
HXLINE( 223)									int _g11 = 0;
HXDLIN( 223)									int _g12 = classwords;
HXDLIN( 223)									while((_g11 < _g12)){
HXLINE( 223)										_g11 = (_g11 + 1);
HXDLIN( 223)										int i9 = (_g11 - 1);
HXLINE( 224)										if ((pcount >= partRead2)) {
HXLINE( 225)											goto _hx_goto_13;
            										}
HXLINE( 227)										int z5 = (this->begin + (pcount * partSize));
HXLINE( 228)										::Array< ::Dynamic> this2 = this->residueBooks;
HXDLIN( 228)										int b2 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this2,( (int)(_hx_array_unsafe_get(classifications,pcount)) ))) ),pass)) );
HXLINE( 229)										if ((b2 >= 0)) {
HXLINE( 230)											 ::kha::audio2::ogg::vorbis::data::Codebook book2 = ( ( ::kha::audio2::ogg::vorbis::data::Codebook)(_hx_array_unsafe_get(codebooks,b2)) );
HXLINE( 232)											 ::Dynamic result2 = book2->decodeDeinterleaveRepeat(decodeState,residueBuffers,ch,cInter4,pInter4,n,partSize);
HXLINE( 233)											if (::hx::IsNull( result2 )) {
HXLINE( 234)												return;
            											}
            											else {
HXLINE( 236)												cInter4 = ( (int)(result2->__Field(HX_("cInter",b9,e7,a2,e6),::hx::paccDynamic)) );
HXLINE( 237)												pInter4 = ( (int)(result2->__Field(HX_("pInter",8c,98,46,19),::hx::paccDynamic)) );
            											}
            										}
            										else {
HXLINE( 241)											z5 = (z5 + partSize);
HXLINE( 242)											int int6 = z5;
HXDLIN( 242)											Float cInter5;
HXDLIN( 242)											if ((int6 < 0)) {
HXLINE( 242)												cInter5 = (((Float)4294967296.0) + int6);
            											}
            											else {
HXLINE( 242)												cInter5 = (int6 + ((Float)0.0));
            											}
HXDLIN( 242)											int int7 = ch;
HXDLIN( 242)											Float cInter6;
HXDLIN( 242)											if ((int7 < 0)) {
HXLINE( 242)												cInter6 = (((Float)4294967296.0) + int7);
            											}
            											else {
HXLINE( 242)												cInter6 = (int7 + ((Float)0.0));
            											}
HXDLIN( 242)											cInter4 = ::Std_obj::_hx_int(::hx::Mod(cInter5,cInter6));
HXLINE( 243)											int int8 = z5;
HXDLIN( 243)											Float pInter5;
HXDLIN( 243)											if ((int8 < 0)) {
HXLINE( 243)												pInter5 = (((Float)4294967296.0) + int8);
            											}
            											else {
HXLINE( 243)												pInter5 = (int8 + ((Float)0.0));
            											}
HXDLIN( 243)											int int9 = ch;
HXDLIN( 243)											Float pInter6;
HXDLIN( 243)											if ((int9 < 0)) {
HXLINE( 243)												pInter6 = (((Float)4294967296.0) + int9);
            											}
            											else {
HXLINE( 243)												pInter6 = (int9 + ((Float)0.0));
            											}
HXDLIN( 243)											pInter4 = ::Std_obj::_hx_int((pInter5 / pInter6));
            										}
HXLINE( 245)										pcount = (pcount + 1);
            									}
            									_hx_goto_13:;
            								}
            							}
            						}
            					}
            				}
            			}
HXLINE( 250)			return;
            		}
HXLINE( 254)		{
HXLINE( 254)			int _g13 = 0;
HXDLIN( 254)			while((_g13 < 8)){
HXLINE( 254)				_g13 = (_g13 + 1);
HXDLIN( 254)				int pass1 = (_g13 - 1);
HXLINE( 255)				int pcount1 = 0;
HXLINE( 256)				int classSet1 = 0;
HXLINE( 257)				while((pcount1 < partRead2)){
HXLINE( 258)					if ((pass1 == 0)) {
HXLINE( 259)						int _g14 = 0;
HXDLIN( 259)						int _g15 = ch;
HXDLIN( 259)						while((_g14 < _g15)){
HXLINE( 259)							_g14 = (_g14 + 1);
HXDLIN( 259)							int j2 = (_g14 - 1);
HXLINE( 260)							if (!(( (bool)(_hx_array_unsafe_get(doNotDecode,j2)) ))) {
HXLINE( 261)								 ::kha::audio2::ogg::vorbis::data::Codebook c4 = ( ( ::kha::audio2::ogg::vorbis::data::Codebook)(_hx_array_unsafe_get(codebooks,this->classbook)) );
HXLINE( 262)								if ((decodeState->validBits < 10)) {
HXLINE( 262)									decodeState->prepHuffman();
            								}
HXDLIN( 262)								int i10 = ( (int)(_hx_array_unsafe_get(c4->fastHuffman,(decodeState->acc & 1023))) );
HXDLIN( 262)								int val3;
HXDLIN( 262)								if ((i10 >= 0)) {
HXLINE( 262)									int l3 = ( (int)(_hx_array_unsafe_get(c4->codewordLengths,i10)) );
HXDLIN( 262)									decodeState->acc = ::hx::UShr(decodeState->acc,l3);
HXDLIN( 262)									 ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState4 = decodeState;
HXDLIN( 262)									decodeState4->validBits = (decodeState4->validBits - l3);
HXDLIN( 262)									if ((decodeState->validBits < 0)) {
HXLINE( 262)										decodeState->validBits = 0;
HXDLIN( 262)										val3 = -1;
            									}
            									else {
HXLINE( 262)										val3 = i10;
            									}
            								}
            								else {
HXLINE( 262)									val3 = decodeState->decodeScalarRaw(c4);
            								}
HXDLIN( 262)								if (c4->sparse) {
HXLINE( 262)									val3 = ( (int)(_hx_array_unsafe_get(c4->sortedValues,val3)) );
            								}
HXDLIN( 262)								int temp = val3;
HXLINE( 263)								if ((temp == -1)) {
HXLINE( 264)									return;
            								}
HXLINE( 266)								int i11 = classwords;
HXLINE( 267)								while(true){
HXLINE( 267)									i11 = (i11 - 1);
HXDLIN( 267)									if (!((i11 >= 0))) {
HXLINE( 267)										goto _hx_goto_17;
            									}
HXLINE( 268)									classifications->__unsafe_set((((j2 * partRead2) + i11) + pcount1),::hx::Mod(temp,this->classifications));
HXLINE( 269)									temp = ::Std_obj::_hx_int((( (Float)(temp) ) / ( (Float)(this->classifications) )));
            								}
            								_hx_goto_17:;
            							}
            						}
            					}
HXLINE( 274)					{
HXLINE( 274)						int _g16 = 0;
HXDLIN( 274)						int _g17 = classwords;
HXDLIN( 274)						while((_g16 < _g17)){
HXLINE( 274)							_g16 = (_g16 + 1);
HXDLIN( 274)							int i12 = (_g16 - 1);
HXLINE( 275)							if ((pcount1 >= partRead2)) {
HXLINE( 276)								goto _hx_goto_18;
            							}
HXLINE( 278)							{
HXLINE( 278)								int _g18 = 0;
HXDLIN( 278)								int _g19 = ch;
HXDLIN( 278)								while((_g18 < _g19)){
HXLINE( 278)									_g18 = (_g18 + 1);
HXDLIN( 278)									int j3 = (_g18 - 1);
HXLINE( 279)									if (!(( (bool)(_hx_array_unsafe_get(doNotDecode,j3)) ))) {
HXLINE( 280)										int c5 = ( (int)(_hx_array_unsafe_get(classifications,((j3 * partRead2) + pcount1))) );
HXLINE( 281)										int b3 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this->residueBooks,c5)) ),pass1)) );
HXLINE( 282)										if ((b3 >= 0)) {
HXLINE( 283)											::Array< Float > target = ( (::Array< Float >)(_hx_array_unsafe_get(residueBuffers,j3)) );
HXLINE( 284)											int offset = (this->begin + (pcount1 * partSize));
HXLINE( 285)											int n1 = partSize;
HXLINE( 286)											 ::kha::audio2::ogg::vorbis::data::Codebook book3 = ( ( ::kha::audio2::ogg::vorbis::data::Codebook)(_hx_array_unsafe_get(codebooks,b3)) );
HXLINE( 287)											if (!(book3->residueDecode(decodeState,target,offset,n1,this->type))) {
HXLINE( 288)												return;
            											}
            										}
            									}
            								}
            							}
HXLINE( 293)							pcount1 = (pcount1 + 1);
            						}
            						_hx_goto_18:;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC7(Residue_obj,decode,(void))

 ::kha::audio2::ogg::vorbis::data::Residue Residue_obj::read( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState,::Array< ::Dynamic> codebooks){
            	HX_GC_STACKFRAME(&_hx_pos_7f2028beab98c670_25_read)
HXLINE(  26)		 ::kha::audio2::ogg::vorbis::data::Residue r =  ::kha::audio2::ogg::vorbis::data::Residue_obj::__alloc( HX_CTX );
HXLINE(  27)		r->type = decodeState->readBits(16);
HXLINE(  28)		if ((r->type > 2)) {
HXLINE(  29)			HX_STACK_DO_THROW( ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__alloc( HX_CTX ,::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP_dyn(),null(),::hx::SourceInfo(HX_("kha/audio2/ogg/vorbis/data/Residue.hx",64,49,2d,cd),29,HX_("kha.audio2.ogg.vorbis.data.Residue",7b,8f,98,ce),HX_("read",56,4b,a7,4b))));
            		}
HXLINE(  32)		::Array< int > residueCascade = ::Array_obj< int >::__new(64);
HXLINE(  33)		r->begin = decodeState->readBits(24);
HXLINE(  34)		r->end = decodeState->readBits(24);
HXLINE(  35)		r->partSize = (decodeState->readBits(24) + 1);
HXLINE(  36)		int classifications = (r->classifications = (decodeState->readBits(6) + 1));
HXLINE(  37)		r->classbook = decodeState->readBits(8);
HXLINE(  39)		{
HXLINE(  39)			int _g = 0;
HXDLIN(  39)			int _g1 = r->classifications;
HXDLIN(  39)			while((_g < _g1)){
HXLINE(  39)				_g = (_g + 1);
HXDLIN(  39)				int j = (_g - 1);
HXLINE(  40)				int highBits = 0;
HXLINE(  41)				int lowBits = decodeState->readBits(3);
HXLINE(  42)				if ((decodeState->readBits(1) != 0)) {
HXLINE(  43)					highBits = decodeState->readBits(5);
            				}
HXLINE(  45)				residueCascade->__unsafe_set(j,((highBits * 8) + lowBits));
            			}
            		}
HXLINE(  48)		r->_hx_set_residueBooks(HX_CTX, ::Array_obj< ::Dynamic>::__new(r->classifications));
HXLINE(  49)		{
HXLINE(  49)			int _g2 = 0;
HXDLIN(  49)			int _g3 = r->classifications;
HXDLIN(  49)			while((_g2 < _g3)){
HXLINE(  49)				_g2 = (_g2 + 1);
HXDLIN(  49)				int j1 = (_g2 - 1);
HXLINE(  50)				{
HXLINE(  50)					::Array< ::Dynamic> this1 = r->residueBooks;
HXDLIN(  50)					::Array< int > this2 = ::Array_obj< int >::__new(8);
HXDLIN(  50)					this1->__unsafe_set(j1,this2);
            				}
HXLINE(  51)				{
HXLINE(  51)					int _g4 = 0;
HXDLIN(  51)					while((_g4 < 8)){
HXLINE(  51)						_g4 = (_g4 + 1);
HXDLIN(  51)						int k = (_g4 - 1);
HXLINE(  52)						if (((( (int)(_hx_array_unsafe_get(residueCascade,j1)) ) & (1 << k)) != 0)) {
HXLINE(  53)							{
HXLINE(  53)								::Array< int > this3 = ( (::Array< int >)(_hx_array_unsafe_get(r->residueBooks,j1)) );
HXDLIN(  53)								int val = decodeState->readBits(8);
HXDLIN(  53)								this3->__unsafe_set(k,val);
            							}
HXLINE(  54)							int _hx_tmp = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(r->residueBooks,j1)) ),k)) );
HXDLIN(  54)							if ((_hx_tmp >= codebooks->length)) {
HXLINE(  55)								HX_STACK_DO_THROW( ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__alloc( HX_CTX ,::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP_dyn(),null(),::hx::SourceInfo(HX_("kha/audio2/ogg/vorbis/data/Residue.hx",64,49,2d,cd),55,HX_("kha.audio2.ogg.vorbis.data.Residue",7b,8f,98,ce),HX_("read",56,4b,a7,4b))));
            							}
            						}
            						else {
HXLINE(  58)							( (::Array< int >)(_hx_array_unsafe_get(r->residueBooks,j1)) )->__unsafe_set(k,-1);
            						}
            					}
            				}
            			}
            		}
HXLINE(  65)		int el = ( ( ::kha::audio2::ogg::vorbis::data::Codebook)(_hx_array_unsafe_get(codebooks,r->classbook)) )->entries;
HXLINE(  66)		int classwords = ( ( ::kha::audio2::ogg::vorbis::data::Codebook)(_hx_array_unsafe_get(codebooks,r->classbook)) )->dimensions;
HXLINE(  67)		r->_hx_set_classdata(HX_CTX, ::Array_obj< ::Dynamic>::__new(el));
HXLINE(  69)		{
HXLINE(  69)			int _g5 = 0;
HXDLIN(  69)			int _g6 = el;
HXDLIN(  69)			while((_g5 < _g6)){
HXLINE(  69)				_g5 = (_g5 + 1);
HXDLIN(  69)				int j2 = (_g5 - 1);
HXLINE(  70)				int temp = j2;
HXLINE(  71)				int k1 = classwords;
HXLINE(  72)				::Array< ::Dynamic> this4 = r->classdata;
HXDLIN(  72)				::Array< int > this5 = ::Array_obj< int >::__new(classwords);
HXDLIN(  72)				::Array< int > cd = this4->__unsafe_set(j2,this5).StaticCast< ::Array< int > >();
HXLINE(  73)				while(true){
HXLINE(  73)					k1 = (k1 - 1);
HXDLIN(  73)					if (!((k1 >= 0))) {
HXLINE(  73)						goto _hx_goto_25;
            					}
HXLINE(  74)					cd->__unsafe_set(k1,::hx::Mod(temp,classifications));
HXLINE(  75)					temp = ::Std_obj::_hx_int((( (Float)(temp) ) / ( (Float)(classifications) )));
            				}
            				_hx_goto_25:;
            			}
            		}
HXLINE(  79)		return r;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Residue_obj,read,return )


::hx::ObjectPtr< Residue_obj > Residue_obj::__new() {
	::hx::ObjectPtr< Residue_obj > __this = new Residue_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Residue_obj > Residue_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Residue_obj *__this = (Residue_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Residue_obj), true, "kha.audio2.ogg.vorbis.data.Residue"));
	*(void **)__this = Residue_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Residue_obj::Residue_obj()
{
}

void Residue_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Residue);
	HX_MARK_MEMBER_NAME(begin,"begin");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(partSize,"partSize");
	HX_MARK_MEMBER_NAME(classifications,"classifications");
	HX_MARK_MEMBER_NAME(classbook,"classbook");
	HX_MARK_MEMBER_NAME(classdata,"classdata");
	HX_MARK_MEMBER_NAME(residueBooks,"residueBooks");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void Residue_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(begin,"begin");
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(partSize,"partSize");
	HX_VISIT_MEMBER_NAME(classifications,"classifications");
	HX_VISIT_MEMBER_NAME(classbook,"classbook");
	HX_VISIT_MEMBER_NAME(classdata,"classdata");
	HX_VISIT_MEMBER_NAME(residueBooks,"residueBooks");
	HX_VISIT_MEMBER_NAME(type,"type");
}

::hx::Val Residue_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return ::hx::Val( end ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return ::hx::Val( begin ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"decode") ) { return ::hx::Val( decode_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"partSize") ) { return ::hx::Val( partSize ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"classbook") ) { return ::hx::Val( classbook ); }
		if (HX_FIELD_EQ(inName,"classdata") ) { return ::hx::Val( classdata ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"residueBooks") ) { return ::hx::Val( residueBooks ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"classifications") ) { return ::hx::Val( classifications ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Residue_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { outValue = read_dyn(); return true; }
	}
	return false;
}

::hx::Val Residue_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { begin=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"partSize") ) { partSize=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"classbook") ) { classbook=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"classdata") ) { _hx_set_classdata(HX_CTX_GET,inValue.Cast< ::Array< ::Dynamic> >()); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"residueBooks") ) { _hx_set_residueBooks(HX_CTX_GET,inValue.Cast< ::Array< ::Dynamic> >()); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"classifications") ) { classifications=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Residue_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("begin",29,ea,55,b0));
	outFields->push(HX_("end",db,03,4d,00));
	outFields->push(HX_("partSize",54,26,0b,5e));
	outFields->push(HX_("classifications",8d,f6,53,e7));
	outFields->push(HX_("classbook",61,78,80,e9));
	outFields->push(HX_("classdata",62,4a,c8,ea));
	outFields->push(HX_("residueBooks",df,e7,ab,0a));
	outFields->push(HX_("type",ba,f2,08,4d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Residue_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Residue_obj,begin),HX_("begin",29,ea,55,b0)},
	{::hx::fsInt,(int)offsetof(Residue_obj,end),HX_("end",db,03,4d,00)},
	{::hx::fsInt,(int)offsetof(Residue_obj,partSize),HX_("partSize",54,26,0b,5e)},
	{::hx::fsInt,(int)offsetof(Residue_obj,classifications),HX_("classifications",8d,f6,53,e7)},
	{::hx::fsInt,(int)offsetof(Residue_obj,classbook),HX_("classbook",61,78,80,e9)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Residue_obj,classdata),HX_("classdata",62,4a,c8,ea)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Residue_obj,residueBooks),HX_("residueBooks",df,e7,ab,0a)},
	{::hx::fsInt,(int)offsetof(Residue_obj,type),HX_("type",ba,f2,08,4d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Residue_obj_sStaticStorageInfo = 0;
#endif

static ::String Residue_obj_sMemberFields[] = {
	HX_("begin",29,ea,55,b0),
	HX_("end",db,03,4d,00),
	HX_("partSize",54,26,0b,5e),
	HX_("classifications",8d,f6,53,e7),
	HX_("classbook",61,78,80,e9),
	HX_("classdata",62,4a,c8,ea),
	HX_("residueBooks",df,e7,ab,0a),
	HX_("type",ba,f2,08,4d),
	HX_("decode",2e,5d,ed,64),
	::String(null()) };

::hx::Class Residue_obj::__mClass;

static ::String Residue_obj_sStaticFields[] = {
	HX_("read",56,4b,a7,4b),
	::String(null())
};

void Residue_obj::__register()
{
	Residue_obj _hx_dummy;
	Residue_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kha.audio2.ogg.vorbis.data.Residue",7b,8f,98,ce);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Residue_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Residue_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Residue_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Residue_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Residue_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Residue_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data