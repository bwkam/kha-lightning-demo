// Generated by Haxe 4.3.0+fa3f709
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_kha_math_Matrix4
#include <hxinc/kha/math/Matrix4.h>
#endif
#ifndef INCLUDED_kha_math_Quaternion
#include <hxinc/kha/math/Quaternion.h>
#endif
#ifndef INCLUDED_kha_math_Vector3
#include <hxinc/kha/math/Vector3.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_002fcb5d014f4211_10_new,"kha.math.Quaternion","new",0xc02c67cc,"kha.math.Quaternion.new","kha/math/Quaternion.hx",10,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_29_slerp,"kha.math.Quaternion","slerp",0x578312d6,"kha.math.Quaternion.slerp","kha/math/Quaternion.hx",29,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_58_rotated,"kha.math.Quaternion","rotated",0x2dd40715,"kha.math.Quaternion.rotated","kha/math/Quaternion.hx",58,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_69_scaled,"kha.math.Quaternion","scaled",0x09e8beae,"kha.math.Quaternion.scaled","kha/math/Quaternion.hx",69,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_72_scale,"kha.math.Quaternion","scale",0x518d18f6,"kha.math.Quaternion.scale","kha/math/Quaternion.hx",72,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_79_matrix,"kha.math.Quaternion","matrix",0x898b0a55,"kha.math.Quaternion.matrix","kha/math/Quaternion.hx",79,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_99_get,"kha.math.Quaternion","get",0xc0271802,"kha.math.Quaternion.get","kha/math/Quaternion.hx",99,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_103_set,"kha.math.Quaternion","set",0xc030330e,"kha.math.Quaternion.set","kha/math/Quaternion.hx",103,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_113_get_x,"kha.math.Quaternion","get_x",0x6a1eefbb,"kha.math.Quaternion.get_x","kha/math/Quaternion.hx",113,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_117_set_x,"kha.math.Quaternion","set_x",0x52ede5c7,"kha.math.Quaternion.set_x","kha/math/Quaternion.hx",117,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_121_get_y,"kha.math.Quaternion","get_y",0x6a1eefbc,"kha.math.Quaternion.get_y","kha/math/Quaternion.hx",121,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_125_set_y,"kha.math.Quaternion","set_y",0x52ede5c8,"kha.math.Quaternion.set_y","kha/math/Quaternion.hx",125,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_129_get_z,"kha.math.Quaternion","get_z",0x6a1eefbd,"kha.math.Quaternion.get_z","kha/math/Quaternion.hx",129,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_133_set_z,"kha.math.Quaternion","set_z",0x52ede5c9,"kha.math.Quaternion.set_z","kha/math/Quaternion.hx",133,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_137_get_w,"kha.math.Quaternion","get_w",0x6a1eefba,"kha.math.Quaternion.get_w","kha/math/Quaternion.hx",137,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_141_set_w,"kha.math.Quaternion","set_w",0x52ede5c6,"kha.math.Quaternion.set_w","kha/math/Quaternion.hx",141,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_146_get_length,"kha.math.Quaternion","get_length",0xdd4f72c3,"kha.math.Quaternion.get_length","kha/math/Quaternion.hx",146,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_149_set_length,"kha.math.Quaternion","set_length",0xe0cd1137,"kha.math.Quaternion.set_length","kha/math/Quaternion.hx",149,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_160_addVector,"kha.math.Quaternion","addVector",0x3573d630,"kha.math.Quaternion.addVector","kha/math/Quaternion.hx",160,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_174_add,"kha.math.Quaternion","add",0xc022898d,"kha.math.Quaternion.add","kha/math/Quaternion.hx",174,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_178_sub,"kha.math.Quaternion","sub",0xc03040ec,"kha.math.Quaternion.sub","kha/math/Quaternion.hx",178,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_182_mult,"kha.math.Quaternion","mult",0x66114f04,"kha.math.Quaternion.mult","kha/math/Quaternion.hx",182,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_192_normalize,"kha.math.Quaternion","normalize",0x919327f9,"kha.math.Quaternion.normalize","kha/math/Quaternion.hx",192,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_196_dot,"kha.math.Quaternion","dot",0xc024d9f5,"kha.math.Quaternion.dot","kha/math/Quaternion.hx",196,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_211_getEulerAngles,"kha.math.Quaternion","getEulerAngles",0xb1f632a7,"kha.math.Quaternion.getEulerAngles","kha/math/Quaternion.hx",211,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_19_fromAxisAngle,"kha.math.Quaternion","fromAxisAngle",0x7d600314,"kha.math.Quaternion.fromAxisAngle","kha/math/Quaternion.hx",19,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_207_boot,"kha.math.Quaternion","boot",0x5ec76b46,"kha.math.Quaternion.boot","kha/math/Quaternion.hx",207,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_208_boot,"kha.math.Quaternion","boot",0x5ec76b46,"kha.math.Quaternion.boot","kha/math/Quaternion.hx",208,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_209_boot,"kha.math.Quaternion","boot",0x5ec76b46,"kha.math.Quaternion.boot","kha/math/Quaternion.hx",209,0x3ed4fcc4)
namespace kha{
namespace math{

void Quaternion_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		Float z = __o_z.Default(0);
            		Float w = __o_w.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_002fcb5d014f4211_10_new)
HXLINE(  11)		this->_hx_set_values(HX_CTX, ::Array_obj< Float >::__new());
HXLINE(  12)		this->values->push(x);
HXLINE(  13)		this->values->push(y);
HXLINE(  14)		this->values->push(z);
HXLINE(  15)		this->values->push(w);
            	}

Dynamic Quaternion_obj::__CreateEmpty() { return new Quaternion_obj; }

void *Quaternion_obj::_hx_vtable = 0;

Dynamic Quaternion_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Quaternion_obj > _hx_result = new Quaternion_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Quaternion_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x29fe8722;
}

 ::kha::math::Quaternion Quaternion_obj::slerp(Float t, ::kha::math::Quaternion q){
            	HX_GC_STACKFRAME(&_hx_pos_002fcb5d014f4211_29_slerp)
HXLINE(  30)		Float epsilon = ((Float)0.0005);
HXLINE(  32)		Float dot = this->get_x();
HXDLIN(  32)		Float dot1 = (dot * q->get_x());
HXDLIN(  32)		Float dot2 = this->get_y();
HXDLIN(  32)		Float dot3 = (dot1 + (dot2 * q->get_y()));
HXDLIN(  32)		Float dot4 = this->get_z();
HXDLIN(  32)		Float dot5 = (dot3 + (dot4 * q->get_z()));
HXDLIN(  32)		Float dot6 = this->get_w();
HXDLIN(  32)		Float dot7 = (dot5 + (dot6 * q->get_w()));
HXLINE(  34)		if ((dot7 > (( (Float)(1) ) - epsilon))) {
HXLINE(  35)			Float _this = this->get_x();
HXDLIN(  35)			Float _this1 = (_this - q->get_x());
HXDLIN(  35)			Float _this2 = this->get_y();
HXDLIN(  35)			Float _this3 = (_this2 - q->get_y());
HXDLIN(  35)			Float _this4 = this->get_z();
HXDLIN(  35)			Float _this5 = (_this4 - q->get_z());
HXDLIN(  35)			Float _this6 = this->get_w();
HXDLIN(  35)			 ::kha::math::Quaternion _this7 =  ::kha::math::Quaternion_obj::__alloc( HX_CTX ,_this1,_this3,_this5,(_this6 - q->get_w()));
HXDLIN(  35)			Float q1 = (_this7->get_x() * t);
HXDLIN(  35)			Float q2 = (_this7->get_y() * t);
HXDLIN(  35)			Float q3 = (_this7->get_z() * t);
HXDLIN(  35)			 ::kha::math::Quaternion q4 =  ::kha::math::Quaternion_obj::__alloc( HX_CTX ,q1,q2,q3,(_this7->get_w() * t));
HXDLIN(  35)			Float result = q->get_x();
HXDLIN(  35)			Float result1 = (result + q4->get_x());
HXDLIN(  35)			Float result2 = q->get_y();
HXDLIN(  35)			Float result3 = (result2 + q4->get_y());
HXDLIN(  35)			Float result4 = q->get_z();
HXDLIN(  35)			Float result5 = (result4 + q4->get_z());
HXDLIN(  35)			Float result6 = q->get_w();
HXDLIN(  35)			 ::kha::math::Quaternion result7 =  ::kha::math::Quaternion_obj::__alloc( HX_CTX ,result1,result3,result5,(result6 + q4->get_w()));
HXLINE(  36)			{
HXLINE(  36)				Float scale = (((Float)1.0) / result7->get_length());
HXDLIN(  36)				result7->set_x((result7->get_x() * scale));
HXDLIN(  36)				result7->set_y((result7->get_y() * scale));
HXDLIN(  36)				result7->set_z((result7->get_z() * scale));
HXDLIN(  36)				result7->set_w((result7->get_w() * scale));
            			}
HXLINE(  37)			return result7;
            		}
HXLINE(  39)		if ((dot7 < 0)) {
HXLINE(  40)			dot7 = ( (Float)(0) );
            		}
HXLINE(  41)		if ((dot7 > 1)) {
HXLINE(  42)			dot7 = ( (Float)(1) );
            		}
HXLINE(  44)		Float theta0 = ::Math_obj::acos(dot7);
HXLINE(  45)		Float theta = (theta0 * t);
HXLINE(  47)		Float q5 = (this->get_x() * dot7);
HXDLIN(  47)		Float q6 = (this->get_y() * dot7);
HXDLIN(  47)		Float q7 = (this->get_z() * dot7);
HXDLIN(  47)		 ::kha::math::Quaternion q8 =  ::kha::math::Quaternion_obj::__alloc( HX_CTX ,q5,q6,q7,(this->get_w() * dot7));
HXDLIN(  47)		Float q21 = q->get_x();
HXDLIN(  47)		Float q22 = (q21 - q8->get_x());
HXDLIN(  47)		Float q23 = q->get_y();
HXDLIN(  47)		Float q24 = (q23 - q8->get_y());
HXDLIN(  47)		Float q25 = q->get_z();
HXDLIN(  47)		Float q26 = (q25 - q8->get_z());
HXDLIN(  47)		Float q27 = q->get_w();
HXDLIN(  47)		 ::kha::math::Quaternion q28 =  ::kha::math::Quaternion_obj::__alloc( HX_CTX ,q22,q24,q26,(q27 - q8->get_w()));
HXLINE(  48)		{
HXLINE(  48)			Float scale1 = (((Float)1.0) / q28->get_length());
HXDLIN(  48)			q28->set_x((q28->get_x() * scale1));
HXDLIN(  48)			q28->set_y((q28->get_y() * scale1));
HXDLIN(  48)			q28->set_z((q28->get_z() * scale1));
HXDLIN(  48)			q28->set_w((q28->get_w() * scale1));
            		}
HXLINE(  50)		Float scale2 = ::Math_obj::cos(theta);
HXDLIN(  50)		Float _this8 = (this->get_x() * scale2);
HXDLIN(  50)		Float _this9 = (this->get_y() * scale2);
HXDLIN(  50)		Float _this10 = (this->get_z() * scale2);
HXDLIN(  50)		 ::kha::math::Quaternion _this11 =  ::kha::math::Quaternion_obj::__alloc( HX_CTX ,_this8,_this9,_this10,(this->get_w() * scale2));
HXDLIN(  50)		Float scale3 = ::Math_obj::sin(theta);
HXDLIN(  50)		Float q9 = (q28->get_x() * scale3);
HXDLIN(  50)		Float q10 = (q28->get_y() * scale3);
HXDLIN(  50)		Float q11 = (q28->get_z() * scale3);
HXDLIN(  50)		 ::kha::math::Quaternion q12 =  ::kha::math::Quaternion_obj::__alloc( HX_CTX ,q9,q10,q11,(q28->get_w() * scale3));
HXDLIN(  50)		Float result8 = _this11->get_x();
HXDLIN(  50)		Float result9 = (result8 + q12->get_x());
HXDLIN(  50)		Float result10 = _this11->get_y();
HXDLIN(  50)		Float result11 = (result10 + q12->get_y());
HXDLIN(  50)		Float result12 = _this11->get_z();
HXDLIN(  50)		Float result13 = (result12 + q12->get_z());
HXDLIN(  50)		Float result14 = _this11->get_w();
HXDLIN(  50)		 ::kha::math::Quaternion result15 =  ::kha::math::Quaternion_obj::__alloc( HX_CTX ,result9,result11,result13,(result14 + q12->get_w()));
HXLINE(  52)		{
HXLINE(  52)			Float scale4 = (((Float)1.0) / result15->get_length());
HXDLIN(  52)			result15->set_x((result15->get_x() * scale4));
HXDLIN(  52)			result15->set_y((result15->get_y() * scale4));
HXDLIN(  52)			result15->set_z((result15->get_z() * scale4));
HXDLIN(  52)			result15->set_w((result15->get_w() * scale4));
            		}
HXLINE(  54)		return result15;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,slerp,return )

 ::kha::math::Quaternion Quaternion_obj::rotated( ::kha::math::Quaternion b){
            	HX_GC_STACKFRAME(&_hx_pos_002fcb5d014f4211_58_rotated)
HXLINE(  59)		 ::kha::math::Quaternion q =  ::kha::math::Quaternion_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  60)		Float _hx_tmp = this->get_w();
HXDLIN(  60)		Float _hx_tmp1 = (_hx_tmp * b->get_w());
HXDLIN(  60)		Float _hx_tmp2 = this->get_x();
HXDLIN(  60)		Float _hx_tmp3 = (_hx_tmp1 - (_hx_tmp2 * b->get_x()));
HXDLIN(  60)		Float _hx_tmp4 = this->get_y();
HXDLIN(  60)		Float _hx_tmp5 = (_hx_tmp3 - (_hx_tmp4 * b->get_y()));
HXDLIN(  60)		Float _hx_tmp6 = this->get_z();
HXDLIN(  60)		q->set_w((_hx_tmp5 - (_hx_tmp6 * b->get_z())));
HXLINE(  61)		Float _hx_tmp7 = this->get_w();
HXDLIN(  61)		Float _hx_tmp8 = (_hx_tmp7 * b->get_x());
HXDLIN(  61)		Float _hx_tmp9 = this->get_x();
HXDLIN(  61)		Float _hx_tmp10 = (_hx_tmp8 + (_hx_tmp9 * b->get_w()));
HXDLIN(  61)		Float _hx_tmp11 = this->get_y();
HXDLIN(  61)		Float _hx_tmp12 = (_hx_tmp10 + (_hx_tmp11 * b->get_z()));
HXDLIN(  61)		Float _hx_tmp13 = this->get_z();
HXDLIN(  61)		q->set_x((_hx_tmp12 - (_hx_tmp13 * b->get_y())));
HXLINE(  62)		Float _hx_tmp14 = this->get_w();
HXDLIN(  62)		Float _hx_tmp15 = (_hx_tmp14 * b->get_y());
HXDLIN(  62)		Float _hx_tmp16 = this->get_y();
HXDLIN(  62)		Float _hx_tmp17 = (_hx_tmp15 + (_hx_tmp16 * b->get_w()));
HXDLIN(  62)		Float _hx_tmp18 = this->get_z();
HXDLIN(  62)		Float _hx_tmp19 = (_hx_tmp17 + (_hx_tmp18 * b->get_x()));
HXDLIN(  62)		Float _hx_tmp20 = this->get_x();
HXDLIN(  62)		q->set_y((_hx_tmp19 - (_hx_tmp20 * b->get_z())));
HXLINE(  63)		Float _hx_tmp21 = this->get_w();
HXDLIN(  63)		Float _hx_tmp22 = (_hx_tmp21 * b->get_z());
HXDLIN(  63)		Float _hx_tmp23 = this->get_z();
HXDLIN(  63)		Float _hx_tmp24 = (_hx_tmp22 + (_hx_tmp23 * b->get_w()));
HXDLIN(  63)		Float _hx_tmp25 = this->get_x();
HXDLIN(  63)		Float _hx_tmp26 = (_hx_tmp24 + (_hx_tmp25 * b->get_y()));
HXDLIN(  63)		Float _hx_tmp27 = this->get_y();
HXDLIN(  63)		q->set_z((_hx_tmp26 - (_hx_tmp27 * b->get_x())));
HXLINE(  64)		{
HXLINE(  64)			Float scale = (((Float)1.0) / q->get_length());
HXDLIN(  64)			q->set_x((q->get_x() * scale));
HXDLIN(  64)			q->set_y((q->get_y() * scale));
HXDLIN(  64)			q->set_z((q->get_z() * scale));
HXDLIN(  64)			q->set_w((q->get_w() * scale));
            		}
HXLINE(  65)		return q;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,rotated,return )

 ::kha::math::Quaternion Quaternion_obj::scaled(Float scale){
            	HX_GC_STACKFRAME(&_hx_pos_002fcb5d014f4211_69_scaled)
HXDLIN(  69)		Float _hx_tmp = (this->get_x() * scale);
HXDLIN(  69)		Float _hx_tmp1 = (this->get_y() * scale);
HXDLIN(  69)		Float _hx_tmp2 = (this->get_z() * scale);
HXDLIN(  69)		return  ::kha::math::Quaternion_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,_hx_tmp2,(this->get_w() * scale));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,scaled,return )

void Quaternion_obj::scale(Float scale){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_72_scale)
HXLINE(  73)		this->set_x((this->get_x() * scale));
HXLINE(  74)		this->set_y((this->get_y() * scale));
HXLINE(  75)		this->set_z((this->get_z() * scale));
HXLINE(  76)		this->set_w((this->get_w() * scale));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,scale,(void))

 ::kha::math::Matrix4 Quaternion_obj::matrix(){
            	HX_GC_STACKFRAME(&_hx_pos_002fcb5d014f4211_79_matrix)
HXLINE(  80)		Float s = ((Float)2.0);
HXLINE(  82)		Float xs = (this->get_x() * s);
HXLINE(  83)		Float ys = (this->get_y() * s);
HXLINE(  84)		Float zs = (this->get_z() * s);
HXLINE(  85)		Float wx = (this->get_w() * xs);
HXLINE(  86)		Float wy = (this->get_w() * ys);
HXLINE(  87)		Float wz = (this->get_w() * zs);
HXLINE(  88)		Float xx = (this->get_x() * xs);
HXLINE(  89)		Float xy = (this->get_x() * ys);
HXLINE(  90)		Float xz = (this->get_x() * zs);
HXLINE(  91)		Float yy = (this->get_y() * ys);
HXLINE(  92)		Float yz = (this->get_y() * zs);
HXLINE(  93)		Float zz = (this->get_z() * zs);
HXLINE(  95)		return  ::kha::math::Matrix4_obj::__alloc( HX_CTX ,(( (Float)(1) ) - (yy + zz)),(xy - wz),(xz + wy),( (Float)(0) ),(xy + wz),(( (Float)(1) ) - (xx + zz)),(yz - wx),( (Float)(0) ),(xz - wy),(yz + wx),(( (Float)(1) ) - (xx + yy)),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(1) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,matrix,return )

Float Quaternion_obj::get(int index){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_99_get)
HXDLIN(  99)		return this->values->__get(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,get,return )

void Quaternion_obj::set(int index,Float value){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_103_set)
HXDLIN( 103)		this->values[index] = value;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,set,(void))

Float Quaternion_obj::get_x(){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_113_get_x)
HXDLIN( 113)		return this->values->__get(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_x,return )

Float Quaternion_obj::set_x(Float value){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_117_set_x)
HXDLIN( 117)		return (this->values[0] = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_x,return )

Float Quaternion_obj::get_y(){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_121_get_y)
HXDLIN( 121)		return this->values->__get(1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_y,return )

Float Quaternion_obj::set_y(Float value){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_125_set_y)
HXDLIN( 125)		return (this->values[1] = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_y,return )

Float Quaternion_obj::get_z(){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_129_get_z)
HXDLIN( 129)		return this->values->__get(2);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_z,return )

Float Quaternion_obj::set_z(Float value){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_133_set_z)
HXDLIN( 133)		return (this->values[2] = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_z,return )

Float Quaternion_obj::get_w(){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_137_get_w)
HXDLIN( 137)		return this->values->__get(3);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_w,return )

Float Quaternion_obj::set_w(Float value){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_141_set_w)
HXDLIN( 141)		return (this->values[3] = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_w,return )

Float Quaternion_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_146_get_length)
HXDLIN( 146)		Float _hx_tmp = this->get_x();
HXDLIN( 146)		Float _hx_tmp1 = (_hx_tmp * this->get_x());
HXDLIN( 146)		Float _hx_tmp2 = this->get_y();
HXDLIN( 146)		Float _hx_tmp3 = (_hx_tmp1 + (_hx_tmp2 * this->get_y()));
HXDLIN( 146)		Float _hx_tmp4 = this->get_z();
HXDLIN( 146)		Float _hx_tmp5 = (_hx_tmp3 + (_hx_tmp4 * this->get_z()));
HXDLIN( 146)		Float _hx_tmp6 = this->get_w();
HXDLIN( 146)		return ::Math_obj::sqrt((_hx_tmp5 + (_hx_tmp6 * this->get_w())));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_length,return )

Float Quaternion_obj::set_length(Float length){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_149_set_length)
HXLINE( 150)		if ((this->get_length() == 0)) {
HXLINE( 151)			return ( (Float)(0) );
            		}
HXLINE( 152)		Float mul = (length / this->get_length());
HXLINE( 153)		this->set_x((this->get_x() * mul));
HXLINE( 154)		this->set_y((this->get_y() * mul));
HXLINE( 155)		this->set_z((this->get_z() * mul));
HXLINE( 156)		return length;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_length,return )

 ::kha::math::Quaternion Quaternion_obj::addVector( ::kha::math::Vector3 vec){
            	HX_GC_STACKFRAME(&_hx_pos_002fcb5d014f4211_160_addVector)
HXLINE( 161)		Float result = this->get_x();
HXDLIN( 161)		Float result1 = this->get_y();
HXDLIN( 161)		Float result2 = this->get_z();
HXDLIN( 161)		 ::kha::math::Quaternion result3 =  ::kha::math::Quaternion_obj::__alloc( HX_CTX ,result,result1,result2,this->get_w());
HXLINE( 162)		 ::kha::math::Quaternion q1 =  ::kha::math::Quaternion_obj::__alloc( HX_CTX ,0,vec->x,vec->y,vec->z);
HXLINE( 164)		 ::kha::math::Quaternion q =  ::kha::math::Quaternion_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXDLIN( 164)		Float q11 = q1->get_w();
HXDLIN( 164)		Float q12 = (q11 * result3->get_x());
HXDLIN( 164)		Float q13 = q1->get_x();
HXDLIN( 164)		Float q14 = (q12 + (q13 * result3->get_w()));
HXDLIN( 164)		Float q15 = q1->get_y();
HXDLIN( 164)		Float q16 = (q14 + (q15 * result3->get_z()));
HXDLIN( 164)		Float q17 = q1->get_z();
HXDLIN( 164)		q->set_x((q16 - (q17 * result3->get_y())));
HXDLIN( 164)		Float q18 = q1->get_w();
HXDLIN( 164)		Float q19 = (q18 * result3->get_y());
HXDLIN( 164)		Float q110 = q1->get_x();
HXDLIN( 164)		Float q111 = (q19 - (q110 * result3->get_z()));
HXDLIN( 164)		Float q112 = q1->get_y();
HXDLIN( 164)		Float q113 = (q111 + (q112 * result3->get_w()));
HXDLIN( 164)		Float q114 = q1->get_z();
HXDLIN( 164)		q->set_y((q113 + (q114 * result3->get_x())));
HXDLIN( 164)		Float q115 = q1->get_w();
HXDLIN( 164)		Float q116 = (q115 * result3->get_z());
HXDLIN( 164)		Float q117 = q1->get_x();
HXDLIN( 164)		Float q118 = (q116 + (q117 * result3->get_y()));
HXDLIN( 164)		Float q119 = q1->get_y();
HXDLIN( 164)		Float q120 = (q118 - (q119 * result3->get_x()));
HXDLIN( 164)		Float q121 = q1->get_z();
HXDLIN( 164)		q->set_z((q120 + (q121 * result3->get_w())));
HXDLIN( 164)		Float q122 = q1->get_w();
HXDLIN( 164)		Float q123 = (q122 * result3->get_w());
HXDLIN( 164)		Float q124 = q1->get_x();
HXDLIN( 164)		Float q125 = (q123 - (q124 * result3->get_x()));
HXDLIN( 164)		Float q126 = q1->get_y();
HXDLIN( 164)		Float q127 = (q125 - (q126 * result3->get_y()));
HXDLIN( 164)		Float q128 = q1->get_z();
HXDLIN( 164)		q->set_w((q127 - (q128 * result3->get_z())));
HXDLIN( 164)		q1 = q;
HXLINE( 166)		Float _hx_tmp = result3->get_x();
HXDLIN( 166)		result3->set_x((_hx_tmp + (q1->get_x() * ((Float)0.5))));
HXLINE( 167)		Float _hx_tmp1 = result3->get_y();
HXDLIN( 167)		result3->set_y((_hx_tmp1 + (q1->get_y() * ((Float)0.5))));
HXLINE( 168)		Float _hx_tmp2 = result3->get_z();
HXDLIN( 168)		result3->set_z((_hx_tmp2 + (q1->get_z() * ((Float)0.5))));
HXLINE( 169)		Float _hx_tmp3 = result3->get_w();
HXDLIN( 169)		result3->set_w((_hx_tmp3 + (q1->get_w() * ((Float)0.5))));
HXLINE( 170)		return result3;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,addVector,return )

 ::kha::math::Quaternion Quaternion_obj::add( ::kha::math::Quaternion q){
            	HX_GC_STACKFRAME(&_hx_pos_002fcb5d014f4211_174_add)
HXDLIN( 174)		Float _hx_tmp = this->get_x();
HXDLIN( 174)		Float _hx_tmp1 = (_hx_tmp + q->get_x());
HXDLIN( 174)		Float _hx_tmp2 = this->get_y();
HXDLIN( 174)		Float _hx_tmp3 = (_hx_tmp2 + q->get_y());
HXDLIN( 174)		Float _hx_tmp4 = this->get_z();
HXDLIN( 174)		Float _hx_tmp5 = (_hx_tmp4 + q->get_z());
HXDLIN( 174)		Float _hx_tmp6 = this->get_w();
HXDLIN( 174)		return  ::kha::math::Quaternion_obj::__alloc( HX_CTX ,_hx_tmp1,_hx_tmp3,_hx_tmp5,(_hx_tmp6 + q->get_w()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,add,return )

 ::kha::math::Quaternion Quaternion_obj::sub( ::kha::math::Quaternion q){
            	HX_GC_STACKFRAME(&_hx_pos_002fcb5d014f4211_178_sub)
HXDLIN( 178)		Float _hx_tmp = this->get_x();
HXDLIN( 178)		Float _hx_tmp1 = (_hx_tmp - q->get_x());
HXDLIN( 178)		Float _hx_tmp2 = this->get_y();
HXDLIN( 178)		Float _hx_tmp3 = (_hx_tmp2 - q->get_y());
HXDLIN( 178)		Float _hx_tmp4 = this->get_z();
HXDLIN( 178)		Float _hx_tmp5 = (_hx_tmp4 - q->get_z());
HXDLIN( 178)		Float _hx_tmp6 = this->get_w();
HXDLIN( 178)		return  ::kha::math::Quaternion_obj::__alloc( HX_CTX ,_hx_tmp1,_hx_tmp3,_hx_tmp5,(_hx_tmp6 - q->get_w()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,sub,return )

 ::kha::math::Quaternion Quaternion_obj::mult( ::kha::math::Quaternion r){
            	HX_GC_STACKFRAME(&_hx_pos_002fcb5d014f4211_182_mult)
HXLINE( 183)		 ::kha::math::Quaternion q =  ::kha::math::Quaternion_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 184)		Float _hx_tmp = this->get_w();
HXDLIN( 184)		Float _hx_tmp1 = (_hx_tmp * r->get_x());
HXDLIN( 184)		Float _hx_tmp2 = this->get_x();
HXDLIN( 184)		Float _hx_tmp3 = (_hx_tmp1 + (_hx_tmp2 * r->get_w()));
HXDLIN( 184)		Float _hx_tmp4 = this->get_y();
HXDLIN( 184)		Float _hx_tmp5 = (_hx_tmp3 + (_hx_tmp4 * r->get_z()));
HXDLIN( 184)		Float _hx_tmp6 = this->get_z();
HXDLIN( 184)		q->set_x((_hx_tmp5 - (_hx_tmp6 * r->get_y())));
HXLINE( 185)		Float _hx_tmp7 = this->get_w();
HXDLIN( 185)		Float _hx_tmp8 = (_hx_tmp7 * r->get_y());
HXDLIN( 185)		Float _hx_tmp9 = this->get_x();
HXDLIN( 185)		Float _hx_tmp10 = (_hx_tmp8 - (_hx_tmp9 * r->get_z()));
HXDLIN( 185)		Float _hx_tmp11 = this->get_y();
HXDLIN( 185)		Float _hx_tmp12 = (_hx_tmp10 + (_hx_tmp11 * r->get_w()));
HXDLIN( 185)		Float _hx_tmp13 = this->get_z();
HXDLIN( 185)		q->set_y((_hx_tmp12 + (_hx_tmp13 * r->get_x())));
HXLINE( 186)		Float _hx_tmp14 = this->get_w();
HXDLIN( 186)		Float _hx_tmp15 = (_hx_tmp14 * r->get_z());
HXDLIN( 186)		Float _hx_tmp16 = this->get_x();
HXDLIN( 186)		Float _hx_tmp17 = (_hx_tmp15 + (_hx_tmp16 * r->get_y()));
HXDLIN( 186)		Float _hx_tmp18 = this->get_y();
HXDLIN( 186)		Float _hx_tmp19 = (_hx_tmp17 - (_hx_tmp18 * r->get_x()));
HXDLIN( 186)		Float _hx_tmp20 = this->get_z();
HXDLIN( 186)		q->set_z((_hx_tmp19 + (_hx_tmp20 * r->get_w())));
HXLINE( 187)		Float _hx_tmp21 = this->get_w();
HXDLIN( 187)		Float _hx_tmp22 = (_hx_tmp21 * r->get_w());
HXDLIN( 187)		Float _hx_tmp23 = this->get_x();
HXDLIN( 187)		Float _hx_tmp24 = (_hx_tmp22 - (_hx_tmp23 * r->get_x()));
HXDLIN( 187)		Float _hx_tmp25 = this->get_y();
HXDLIN( 187)		Float _hx_tmp26 = (_hx_tmp24 - (_hx_tmp25 * r->get_y()));
HXDLIN( 187)		Float _hx_tmp27 = this->get_z();
HXDLIN( 187)		q->set_w((_hx_tmp26 - (_hx_tmp27 * r->get_z())));
HXLINE( 188)		return q;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,mult,return )

void Quaternion_obj::normalize(){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_192_normalize)
HXDLIN( 192)		Float scale = (((Float)1.0) / this->get_length());
HXDLIN( 192)		this->set_x((this->get_x() * scale));
HXDLIN( 192)		this->set_y((this->get_y() * scale));
HXDLIN( 192)		this->set_z((this->get_z() * scale));
HXDLIN( 192)		this->set_w((this->get_w() * scale));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,normalize,(void))

Float Quaternion_obj::dot( ::kha::math::Quaternion q){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_196_dot)
HXDLIN( 196)		Float _hx_tmp = this->get_x();
HXDLIN( 196)		Float _hx_tmp1 = (_hx_tmp * q->get_x());
HXDLIN( 196)		Float _hx_tmp2 = this->get_y();
HXDLIN( 196)		Float _hx_tmp3 = (_hx_tmp1 + (_hx_tmp2 * q->get_y()));
HXDLIN( 196)		Float _hx_tmp4 = this->get_z();
HXDLIN( 196)		Float _hx_tmp5 = (_hx_tmp3 + (_hx_tmp4 * q->get_z()));
HXDLIN( 196)		Float _hx_tmp6 = this->get_w();
HXDLIN( 196)		return (_hx_tmp5 + (_hx_tmp6 * q->get_w()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,dot,return )

 ::kha::math::Vector3 Quaternion_obj::getEulerAngles(int A1,int A2,int A3,::hx::Null< int >  __o_S,::hx::Null< int >  __o_D){
            		int S = __o_S.Default(1);
            		int D = __o_D.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_002fcb5d014f4211_211_getEulerAngles)
HXLINE( 212)		 ::kha::math::Vector3 result =  ::kha::math::Vector3_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 214)		::Array< Float > Q = ::Array_obj< Float >::__new();
HXLINE( 215)		Q[0] = this->get_x();
HXLINE( 216)		Q[1] = this->get_y();
HXLINE( 217)		Q[2] = this->get_z();
HXLINE( 219)		Float ww = this->get_w();
HXDLIN( 219)		Float ww1 = (ww * this->get_w());
HXLINE( 221)		Float Q11 = (Q->__get(A1) * Q->__get(A1));
HXLINE( 222)		Float Q22 = (Q->__get(A2) * Q->__get(A2));
HXLINE( 223)		Float Q33 = (Q->__get(A3) * Q->__get(A3));
HXLINE( 225)		Float psign = ( (Float)(-1) );
HXLINE( 227)		Float SingularityRadius = ((Float)0.0000001);
HXLINE( 228)		Float PiOver2 = (::Math_obj::PI / ((Float)2.0));
HXLINE( 231)		bool _hx_tmp;
HXDLIN( 231)		if ((::hx::Mod((A1 + 1),3) == A2)) {
HXLINE( 231)			_hx_tmp = (::hx::Mod((A2 + 1),3) == A3);
            		}
            		else {
HXLINE( 231)			_hx_tmp = false;
            		}
HXDLIN( 231)		if (_hx_tmp) {
HXLINE( 232)			psign = ( (Float)(1) );
            		}
HXLINE( 235)		Float s2 = (psign * this->get_w());
HXDLIN( 235)		Float s21 = ((psign * ((Float)2.0)) * ((s2 * Q->__get(A2)) + (Q->__get(A1) * Q->__get(A3))));
HXLINE( 237)		if ((s21 < (-1 + SingularityRadius))) {
HXLINE( 238)			result->x = ( (Float)(0) );
HXLINE( 239)			result->y = (( (Float)((-(S) * D)) ) * PiOver2);
HXLINE( 240)			Float _hx_tmp1 = ((psign * Q->__get(A1)) * Q->__get(A2));
HXDLIN( 240)			Float _hx_tmp2 = this->get_w();
HXDLIN( 240)			result->z = (( (Float)((S * D)) ) * ::Math_obj::atan2((( (Float)(2) ) * (_hx_tmp1 + (_hx_tmp2 * Q->__get(A3)))),(((ww1 + Q22) - Q11) - Q33)));
            		}
            		else {
HXLINE( 242)			if ((s21 > (( (Float)(1) ) - SingularityRadius))) {
HXLINE( 243)				result->x = ( (Float)(0) );
HXLINE( 244)				result->y = (( (Float)((S * D)) ) * PiOver2);
HXLINE( 245)				Float _hx_tmp3 = ((psign * Q->__get(A1)) * Q->__get(A2));
HXDLIN( 245)				Float _hx_tmp4 = this->get_w();
HXDLIN( 245)				result->z = (( (Float)((S * D)) ) * ::Math_obj::atan2((( (Float)(2) ) * (_hx_tmp3 + (_hx_tmp4 * Q->__get(A3)))),(((ww1 + Q22) - Q11) - Q33)));
            			}
            			else {
HXLINE( 248)				Float _hx_tmp5 = this->get_w();
HXDLIN( 248)				result->x = (( (Float)((-(S) * D)) ) * ::Math_obj::atan2((( (Float)(-2) ) * ((_hx_tmp5 * Q->__get(A1)) - ((psign * Q->__get(A2)) * Q->__get(A3)))),(((ww1 + Q33) - Q11) - Q22)));
HXLINE( 249)				result->y = (( (Float)((S * D)) ) * ::Math_obj::asin(s21));
HXLINE( 250)				Float _hx_tmp6 = this->get_w();
HXDLIN( 250)				result->z = (( (Float)((S * D)) ) * ::Math_obj::atan2((( (Float)(2) ) * ((_hx_tmp6 * Q->__get(A3)) - ((psign * Q->__get(A1)) * Q->__get(A2)))),(((ww1 + Q11) - Q22) - Q33)));
            			}
            		}
HXLINE( 253)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC5(Quaternion_obj,getEulerAngles,return )

 ::kha::math::Quaternion Quaternion_obj::fromAxisAngle( ::kha::math::Vector3 axis,Float radians){
            	HX_GC_STACKFRAME(&_hx_pos_002fcb5d014f4211_19_fromAxisAngle)
HXLINE(  20)		 ::kha::math::Quaternion q =  ::kha::math::Quaternion_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  21)		q->set_w(::Math_obj::cos((radians / ((Float)2.0))));
HXLINE(  22)		q->set_x(q->set_y(q->set_z(::Math_obj::sin((radians / ((Float)2.0))))));
HXLINE(  23)		Float _hx_tmp = q->get_x();
HXDLIN(  23)		q->set_x((_hx_tmp * axis->x));
HXLINE(  24)		Float _hx_tmp1 = q->get_y();
HXDLIN(  24)		q->set_y((_hx_tmp1 * axis->y));
HXLINE(  25)		Float _hx_tmp2 = q->get_z();
HXDLIN(  25)		q->set_z((_hx_tmp2 * axis->z));
HXLINE(  26)		return q;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,fromAxisAngle,return )

int Quaternion_obj::AXIS_X;

int Quaternion_obj::AXIS_Y;

int Quaternion_obj::AXIS_Z;


::hx::ObjectPtr< Quaternion_obj > Quaternion_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w) {
	::hx::ObjectPtr< Quaternion_obj > __this = new Quaternion_obj();
	__this->__construct(__o_x,__o_y,__o_z,__o_w);
	return __this;
}

::hx::ObjectPtr< Quaternion_obj > Quaternion_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w) {
	Quaternion_obj *__this = (Quaternion_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Quaternion_obj), true, "kha.math.Quaternion"));
	*(void **)__this = Quaternion_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_z,__o_w);
	return __this;
}

Quaternion_obj::Quaternion_obj()
{
}

void Quaternion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Quaternion);
	HX_MARK_MEMBER_NAME(values,"values");
	HX_MARK_END_CLASS();
}

void Quaternion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(values,"values");
}

::hx::Val Quaternion_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_x() ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_y() ); }
		if (HX_FIELD_EQ(inName,"z") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_z() ); }
		if (HX_FIELD_EQ(inName,"w") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_w() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"sub") ) { return ::hx::Val( sub_dyn() ); }
		if (HX_FIELD_EQ(inName,"dot") ) { return ::hx::Val( dot_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { return ::hx::Val( mult_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"slerp") ) { return ::hx::Val( slerp_dyn() ); }
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return ::hx::Val( get_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return ::hx::Val( get_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_z") ) { return ::hx::Val( get_z_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_z") ) { return ::hx::Val( set_z_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_w") ) { return ::hx::Val( get_w_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_w") ) { return ::hx::Val( set_w_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { return ::hx::Val( values ); }
		if (HX_FIELD_EQ(inName,"scaled") ) { return ::hx::Val( scaled_dyn() ); }
		if (HX_FIELD_EQ(inName,"matrix") ) { return ::hx::Val( matrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rotated") ) { return ::hx::Val( rotated_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addVector") ) { return ::hx::Val( addVector_dyn() ); }
		if (HX_FIELD_EQ(inName,"normalize") ) { return ::hx::Val( normalize_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return ::hx::Val( set_length_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getEulerAngles") ) { return ::hx::Val( getEulerAngles_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Quaternion_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"fromAxisAngle") ) { outValue = fromAxisAngle_dyn(); return true; }
	}
	return false;
}

::hx::Val Quaternion_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_x(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_y(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"z") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_z(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"w") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_w(inValue.Cast< Float >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { _hx_set_values(HX_CTX_GET,inValue.Cast< ::Array< Float > >()); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_length(inValue.Cast< Float >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Quaternion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("values",e2,03,b7,4f));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("z",7a,00,00,00));
	outFields->push(HX_("w",77,00,00,00));
	outFields->push(HX_("length",e6,94,07,9f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Quaternion_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Quaternion_obj,values),HX_("values",e2,03,b7,4f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Quaternion_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Quaternion_obj::AXIS_X,HX_("AXIS_X",fa,61,f5,d8)},
	{::hx::fsInt,(void *) &Quaternion_obj::AXIS_Y,HX_("AXIS_Y",fb,61,f5,d8)},
	{::hx::fsInt,(void *) &Quaternion_obj::AXIS_Z,HX_("AXIS_Z",fc,61,f5,d8)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Quaternion_obj_sMemberFields[] = {
	HX_("values",e2,03,b7,4f),
	HX_("slerp",6a,c8,c4,7e),
	HX_("rotated",a9,49,1d,f1),
	HX_("scaled",9a,ea,25,3c),
	HX_("scale",8a,ce,ce,78),
	HX_("matrix",41,36,c8,bb),
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	HX_("get_x",4f,a5,60,91),
	HX_("set_x",5b,9b,2f,7a),
	HX_("get_y",50,a5,60,91),
	HX_("set_y",5c,9b,2f,7a),
	HX_("get_z",51,a5,60,91),
	HX_("set_z",5d,9b,2f,7a),
	HX_("get_w",4e,a5,60,91),
	HX_("set_w",5a,9b,2f,7a),
	HX_("get_length",af,04,8f,8f),
	HX_("set_length",23,a3,0c,93),
	HX_("addVector",c4,e5,81,4f),
	HX_("add",21,f2,49,00),
	HX_("sub",80,a9,57,00),
	HX_("mult",f0,67,65,48),
	HX_("normalize",8d,37,a1,ab),
	HX_("dot",89,42,4c,00),
	HX_("getEulerAngles",93,2a,63,ec),
	::String(null()) };

static void Quaternion_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Quaternion_obj::AXIS_X,"AXIS_X");
	HX_MARK_MEMBER_NAME(Quaternion_obj::AXIS_Y,"AXIS_Y");
	HX_MARK_MEMBER_NAME(Quaternion_obj::AXIS_Z,"AXIS_Z");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Quaternion_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Quaternion_obj::AXIS_X,"AXIS_X");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::AXIS_Y,"AXIS_Y");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::AXIS_Z,"AXIS_Z");
};

#endif

::hx::Class Quaternion_obj::__mClass;

static ::String Quaternion_obj_sStaticFields[] = {
	HX_("fromAxisAngle",a8,6c,6f,f0),
	HX_("AXIS_X",fa,61,f5,d8),
	HX_("AXIS_Y",fb,61,f5,d8),
	HX_("AXIS_Z",fc,61,f5,d8),
	::String(null())
};

void Quaternion_obj::__register()
{
	Quaternion_obj _hx_dummy;
	Quaternion_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kha.math.Quaternion",da,d1,59,bc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Quaternion_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Quaternion_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Quaternion_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Quaternion_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Quaternion_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Quaternion_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Quaternion_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Quaternion_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Quaternion_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_207_boot)
HXDLIN( 207)		AXIS_X = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_208_boot)
HXDLIN( 208)		AXIS_Y = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_209_boot)
HXDLIN( 209)		AXIS_Z = 2;
            	}
}

} // end namespace kha
} // end namespace math