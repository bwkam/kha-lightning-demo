// Generated by Haxe 4.3.0+fa3f709
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <hxinc/Reflect.h>
#endif
#ifndef INCLUDED_kha_Scheduler
#include <hxinc/kha/Scheduler.h>
#endif
#ifndef INCLUDED_kha_Worker
#include <hxinc/kha/Worker.h>
#endif
#ifndef INCLUDED_kha__Worker_Message
#include <hxinc/kha/_Worker/Message.h>
#endif
#ifndef INCLUDED_sys_thread_Deque
#include <hxinc/sys/thread/Deque.h>
#endif
#ifndef INCLUDED_sys_thread_Tls
#include <hxinc/sys/thread/Tls.h>
#endif
#ifndef INCLUDED_sys_thread__Thread_HaxeThread
#include <hxinc/sys/thread/_Thread/HaxeThread.h>
#endif
#ifndef INCLUDED_sys_thread__Thread_Thread_Impl_
#include <hxinc/sys/thread/_Thread/Thread_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1bb5df79bd9b0825_102_new,"kha.Worker","new",0x9484909a,"kha.Worker.new","kha/Worker.hx",102,0x3bca77f5)
HX_LOCAL_STACK_FRAME(_hx_pos_1bb5df79bd9b0825_119_notify,"kha.Worker","notify",0x6ad67acf,"kha.Worker.notify","kha/Worker.hx",119,0x3bca77f5)
HX_LOCAL_STACK_FRAME(_hx_pos_1bb5df79bd9b0825_115_notify,"kha.Worker","notify",0x6ad67acf,"kha.Worker.notify","kha/Worker.hx",115,0x3bca77f5)
HX_LOCAL_STACK_FRAME(_hx_pos_1bb5df79bd9b0825_129_post,"kha.Worker","post",0x60d3f6e6,"kha.Worker.post","kha/Worker.hx",129,0x3bca77f5)
HX_LOCAL_STACK_FRAME(_hx_pos_1bb5df79bd9b0825_109_create,"kha.Worker","create",0xb52d0702,"kha.Worker.create","kha/Worker.hx",109,0x3bca77f5)
HX_LOCAL_STACK_FRAME(_hx_pos_1bb5df79bd9b0825_107_create,"kha.Worker","create",0xb52d0702,"kha.Worker.create","kha/Worker.hx",107,0x3bca77f5)
HX_LOCAL_STACK_FRAME(_hx_pos_1bb5df79bd9b0825_133_notifyWorker,"kha.Worker","notifyWorker",0x07fba4ad,"kha.Worker.notifyWorker","kha/Worker.hx",133,0x3bca77f5)
HX_LOCAL_STACK_FRAME(_hx_pos_1bb5df79bd9b0825_142_postFromWorker,"kha.Worker","postFromWorker",0x4d0b0c0e,"kha.Worker.postFromWorker","kha/Worker.hx",142,0x3bca77f5)
HX_LOCAL_STACK_FRAME(_hx_pos_1bb5df79bd9b0825_94_boot,"kha.Worker","boot",0x5792f6b8,"kha.Worker.boot","kha/Worker.hx",94,0x3bca77f5)
HX_LOCAL_STACK_FRAME(_hx_pos_1bb5df79bd9b0825_95_boot,"kha.Worker","boot",0x5792f6b8,"kha.Worker.boot","kha/Worker.hx",95,0x3bca77f5)
HX_LOCAL_STACK_FRAME(_hx_pos_1bb5df79bd9b0825_96_boot,"kha.Worker","boot",0x5792f6b8,"kha.Worker.boot","kha/Worker.hx",96,0x3bca77f5)
HX_LOCAL_STACK_FRAME(_hx_pos_1bb5df79bd9b0825_97_boot,"kha.Worker","boot",0x5792f6b8,"kha.Worker.boot","kha/Worker.hx",97,0x3bca77f5)
namespace kha{

void Worker_obj::__construct( ::sys::thread::_Thread::HaxeThread thread,int id){
            	HX_GC_STACKFRAME(&_hx_pos_1bb5df79bd9b0825_102_new)
HXLINE( 103)		this->_hx_set_thread(HX_CTX, thread);
HXLINE( 104)		this->id = id;
            	}

Dynamic Worker_obj::__CreateEmpty() { return new Worker_obj; }

void *Worker_obj::_hx_vtable = 0;

Dynamic Worker_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Worker_obj > _hx_result = new Worker_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Worker_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x06dd8dde;
}

void Worker_obj::notify( ::Dynamic func){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_1bb5df79bd9b0825_119_notify)
HXLINE( 120)			 ::kha::_Worker::Message message = ( ( ::kha::_Worker::Message)(::sys::thread::_Thread::Thread_Impl__obj::readMessage(false)) );
HXLINE( 121)			if (::hx::IsNotNull( message )) {
HXLINE( 122)				 ::Dynamic func = ::kha::Worker_obj::notifyFuncs->__get(message->threadId);
HXLINE( 123)				func(message->message);
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_1bb5df79bd9b0825_115_notify)
HXLINE( 116)		::kha::Worker_obj::notifyFuncs->setCtx( HX_CTX, this->id,func);
HXLINE( 117)		if ((::kha::Worker_obj::taskId != -1)) {
HXLINE( 118)			return;
            		}
HXLINE( 119)		::kha::Worker_obj::taskId = ::kha::Scheduler_obj::addFrameTask( ::Dynamic(new _hx_Closure_0()),0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Worker_obj,notify,(void))

void Worker_obj::post( ::Dynamic message){
            	HX_STACKFRAME(&_hx_pos_1bb5df79bd9b0825_129_post)
HXDLIN( 129)		this->thread->messages->add(message);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Worker_obj,post,(void))

 ::sys::thread::_Thread::HaxeThread Worker_obj::_mainThread;

::Array< ::Dynamic> Worker_obj::notifyFuncs;

int Worker_obj::taskId;

int Worker_obj::nextThreadId;

 ::sys::thread::Tls Worker_obj::threadId;

 ::kha::Worker Worker_obj::create(::hx::Class clazz){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,int,id,::hx::Class,clazz) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_1bb5df79bd9b0825_109_create)
HXLINE( 110)			::kha::Worker_obj::threadId->set_value(id);
HXLINE( 111)			::Reflect_obj::field(clazz,HX_("main",39,38,56,48))();
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_1bb5df79bd9b0825_107_create)
HXLINE( 108)		int id = ::kha::Worker_obj::nextThreadId++;
HXLINE( 109)		 ::sys::thread::_Thread::HaxeThread _hx_tmp = ::sys::thread::_Thread::HaxeThread_obj::create( ::Dynamic(new _hx_Closure_0(id,clazz)),false);
HXDLIN( 109)		return  ::kha::Worker_obj::__alloc( HX_CTX ,_hx_tmp,id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Worker_obj,create,return )

void Worker_obj::notifyWorker( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_1bb5df79bd9b0825_133_notifyWorker)
HXDLIN( 133)		while(true){
HXLINE( 134)			 ::Dynamic message = ::sys::thread::_Thread::Thread_Impl__obj::readMessage(true);
HXLINE( 135)			if (::hx::IsNotNull( message )) {
HXLINE( 136)				func(message);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Worker_obj,notifyWorker,(void))

void Worker_obj::postFromWorker( ::Dynamic message){
            	HX_GC_STACKFRAME(&_hx_pos_1bb5df79bd9b0825_142_postFromWorker)
HXDLIN( 142)		 ::sys::thread::_Thread::HaxeThread this1 = ::kha::Worker_obj::_mainThread;
HXDLIN( 142)		 ::Dynamic msg =  ::kha::_Worker::Message_obj::__alloc( HX_CTX ,message);
HXDLIN( 142)		this1->messages->add(msg);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Worker_obj,postFromWorker,(void))


::hx::ObjectPtr< Worker_obj > Worker_obj::__new( ::sys::thread::_Thread::HaxeThread thread,int id) {
	::hx::ObjectPtr< Worker_obj > __this = new Worker_obj();
	__this->__construct(thread,id);
	return __this;
}

::hx::ObjectPtr< Worker_obj > Worker_obj::__alloc(::hx::Ctx *_hx_ctx, ::sys::thread::_Thread::HaxeThread thread,int id) {
	Worker_obj *__this = (Worker_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Worker_obj), true, "kha.Worker"));
	*(void **)__this = Worker_obj::_hx_vtable;
	__this->__construct(thread,id);
	return __this;
}

Worker_obj::Worker_obj()
{
}

void Worker_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Worker);
	HX_MARK_MEMBER_NAME(thread,"thread");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void Worker_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(thread,"thread");
	HX_VISIT_MEMBER_NAME(id,"id");
}

::hx::Val Worker_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"post") ) { return ::hx::Val( post_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"thread") ) { return ::hx::Val( thread ); }
		if (HX_FIELD_EQ(inName,"notify") ) { return ::hx::Val( notify_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Worker_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"taskId") ) { outValue = ( taskId ); return true; }
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"threadId") ) { outValue = ( threadId ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_mainThread") ) { outValue = ( _mainThread ); return true; }
		if (HX_FIELD_EQ(inName,"notifyFuncs") ) { outValue = ( notifyFuncs ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"nextThreadId") ) { outValue = ( nextThreadId ); return true; }
		if (HX_FIELD_EQ(inName,"notifyWorker") ) { outValue = notifyWorker_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"postFromWorker") ) { outValue = postFromWorker_dyn(); return true; }
	}
	return false;
}

::hx::Val Worker_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"thread") ) { _hx_set_thread(HX_CTX_GET,inValue.Cast<  ::sys::thread::_Thread::HaxeThread >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Worker_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"taskId") ) { taskId=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"threadId") ) { threadId=ioValue.Cast<  ::sys::thread::Tls >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_mainThread") ) { _mainThread=ioValue.Cast<  ::sys::thread::_Thread::HaxeThread >(); return true; }
		if (HX_FIELD_EQ(inName,"notifyFuncs") ) { notifyFuncs=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"nextThreadId") ) { nextThreadId=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Worker_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("thread",ca,7a,b9,8e));
	outFields->push(HX_("id",db,5b,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Worker_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::sys::thread::_Thread::HaxeThread */ ,(int)offsetof(Worker_obj,thread),HX_("thread",ca,7a,b9,8e)},
	{::hx::fsInt,(int)offsetof(Worker_obj,id),HX_("id",db,5b,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Worker_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::sys::thread::_Thread::HaxeThread */ ,(void *) &Worker_obj::_mainThread,HX_("_mainThread",02,65,ef,b6)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Worker_obj::notifyFuncs,HX_("notifyFuncs",26,cd,62,59)},
	{::hx::fsInt,(void *) &Worker_obj::taskId,HX_("taskId",80,1a,99,87)},
	{::hx::fsInt,(void *) &Worker_obj::nextThreadId,HX_("nextThreadId",58,6d,24,76)},
	{::hx::fsObject /*  ::sys::thread::Tls */ ,(void *) &Worker_obj::threadId,HX_("threadId",45,81,25,cc)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Worker_obj_sMemberFields[] = {
	HX_("thread",ca,7a,b9,8e),
	HX_("id",db,5b,00,00),
	HX_("notify",c9,da,b8,31),
	HX_("post",60,84,5c,4a),
	::String(null()) };

static void Worker_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Worker_obj::_mainThread,"_mainThread");
	HX_MARK_MEMBER_NAME(Worker_obj::notifyFuncs,"notifyFuncs");
	HX_MARK_MEMBER_NAME(Worker_obj::taskId,"taskId");
	HX_MARK_MEMBER_NAME(Worker_obj::nextThreadId,"nextThreadId");
	HX_MARK_MEMBER_NAME(Worker_obj::threadId,"threadId");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Worker_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Worker_obj::_mainThread,"_mainThread");
	HX_VISIT_MEMBER_NAME(Worker_obj::notifyFuncs,"notifyFuncs");
	HX_VISIT_MEMBER_NAME(Worker_obj::taskId,"taskId");
	HX_VISIT_MEMBER_NAME(Worker_obj::nextThreadId,"nextThreadId");
	HX_VISIT_MEMBER_NAME(Worker_obj::threadId,"threadId");
};

#endif

::hx::Class Worker_obj::__mClass;

static ::String Worker_obj_sStaticFields[] = {
	HX_("_mainThread",02,65,ef,b6),
	HX_("notifyFuncs",26,cd,62,59),
	HX_("taskId",80,1a,99,87),
	HX_("nextThreadId",58,6d,24,76),
	HX_("threadId",45,81,25,cc),
	HX_("create",fc,66,0f,7c),
	HX_("notifyWorker",27,3c,65,37),
	HX_("postFromWorker",08,f6,a4,5b),
	::String(null())
};

void Worker_obj::__register()
{
	Worker_obj _hx_dummy;
	Worker_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kha.Worker",a8,fb,5d,34);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Worker_obj::__GetStatic;
	__mClass->mSetStaticField = &Worker_obj::__SetStatic;
	__mClass->mMarkFunc = Worker_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Worker_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Worker_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Worker_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Worker_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Worker_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Worker_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Worker_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1bb5df79bd9b0825_94_boot)
HXDLIN(  94)		notifyFuncs = ::Array_obj< ::Dynamic>::__new(0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_1bb5df79bd9b0825_95_boot)
HXDLIN(  95)		taskId = -1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1bb5df79bd9b0825_96_boot)
HXDLIN(  96)		nextThreadId = 0;
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_1bb5df79bd9b0825_97_boot)
HXDLIN(  97)		threadId =  ::sys::thread::Tls_obj::__alloc( HX_CTX );
            	}
}

} // end namespace kha
