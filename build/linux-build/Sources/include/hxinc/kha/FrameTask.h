// Generated by Haxe 4.3.0+fa3f709
#ifndef INCLUDED_kha_FrameTask
#define INCLUDED_kha_FrameTask

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_9b936b371410e5a9_26_new)
HX_DECLARE_CLASS1(kha,FrameTask)

namespace kha{


class HXCPP_CLASS_ATTRIBUTES FrameTask_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FrameTask_obj OBJ_;
		FrameTask_obj();

	public:
		enum { _hx_ClassId = 0x1fa6b44e };

		void __construct( ::Dynamic task,int priority,int id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.FrameTask")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"kha.FrameTask"); }

		inline static ::hx::ObjectPtr< FrameTask_obj > __new( ::Dynamic task,int priority,int id) {
			::hx::ObjectPtr< FrameTask_obj > __this = new FrameTask_obj();
			__this->__construct(task,priority,id);
			return __this;
		}

		inline static ::hx::ObjectPtr< FrameTask_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic task,int priority,int id) {
			FrameTask_obj *__this = (FrameTask_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FrameTask_obj), true, "kha.FrameTask"));
			*(void **)__this = FrameTask_obj::_hx_vtable;
{
            	HX_GC_STACKFRAME(&_hx_pos_9b936b371410e5a9_26_new)
HXLINE(  27)		( ( ::kha::FrameTask)(__this) )->_hx_set_task(HX_CTX, task);
HXLINE(  28)		( ( ::kha::FrameTask)(__this) )->priority = priority;
HXLINE(  29)		( ( ::kha::FrameTask)(__this) )->id = id;
HXLINE(  30)		( ( ::kha::FrameTask)(__this) )->active = true;
HXLINE(  31)		( ( ::kha::FrameTask)(__this) )->paused = false;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FrameTask_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FrameTask",f2,5d,4a,dc); }

		 ::Dynamic task;
		inline  ::Dynamic _hx_set_task(::hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return task=_hx_v; }
		Dynamic task_dyn() { return task;}
		int priority;
		int id;
		bool active;
		bool paused;
};

} // end namespace kha

#endif /* INCLUDED_kha_FrameTask */ 
