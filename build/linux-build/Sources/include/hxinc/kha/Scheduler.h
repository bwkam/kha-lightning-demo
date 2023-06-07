// Generated by Haxe 4.3.0+fa3f709
#ifndef INCLUDED_kha_Scheduler
#define INCLUDED_kha_Scheduler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,FrameTask)
HX_DECLARE_CLASS1(kha,Scheduler)
HX_DECLARE_CLASS1(kha,TimeTask)

namespace kha{


class HXCPP_CLASS_ATTRIBUTES Scheduler_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Scheduler_obj OBJ_;
		Scheduler_obj();

	public:
		enum { _hx_ClassId = 0x15df80db };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.Scheduler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"kha.Scheduler"); }

		inline static ::hx::ObjectPtr< Scheduler_obj > __new() {
			::hx::ObjectPtr< Scheduler_obj > __this = new Scheduler_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Scheduler_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Scheduler_obj *__this = (Scheduler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Scheduler_obj), false, "kha.Scheduler"));
			*(void **)__this = Scheduler_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Scheduler_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Scheduler",1b,22,45,ab); }

		static void __boot();
		static ::Array< ::Dynamic> timeTasks;
		static ::Array< ::Dynamic> pausedTimeTasks;
		static ::Array< ::Dynamic> outdatedTimeTasks;
		static ::Array< ::Dynamic> timeTasksScratchpad;
		static Float timeWarpSaveTime;
		static ::Array< ::Dynamic> frameTasks;
		static ::Array< ::Dynamic> toDeleteFrame;
		static Float current;
		static Float lastTime;
		static Float lastFrameEnd;
		static bool frame_tasks_sorted;
		static bool stopped;
		static bool vsync;
		static Float onedifhz;
		static int currentFrameTaskId;
		static int currentTimeTaskId;
		static int currentGroupId;
		static int DIF_COUNT;
		static Float maxframetime;
		static ::Array< Float > deltas;
		static Float startTime;
		static  ::kha::TimeTask activeTimeTask;
		static void init();
		static ::Dynamic init_dyn();

		static void start(::hx::Null< bool >  restartTimers);
		static ::Dynamic start_dyn();

		static void stop();
		static ::Dynamic stop_dyn();

		static bool isStopped();
		static ::Dynamic isStopped_dyn();

		static void warpTimeTasksBack(Float time,::Array< ::Dynamic> tasks);
		static ::Dynamic warpTimeTasksBack_dyn();

		static void warp(Float time);
		static ::Dynamic warp_dyn();

		static void executeFrame();
		static ::Dynamic executeFrame_dyn();

		static void executeTimeTasks(Float until);
		static ::Dynamic executeTimeTasks_dyn();

		static void archiveTimeTask( ::kha::TimeTask timeTask,Float frameEnd);
		static ::Dynamic archiveTimeTask_dyn();

		static Float time();
		static ::Dynamic time_dyn();

		static Float realTime();
		static ::Dynamic realTime_dyn();

		static void resetTime();
		static ::Dynamic resetTime_dyn();

		static int addBreakableFrameTask( ::Dynamic task,int priority);
		static ::Dynamic addBreakableFrameTask_dyn();

		static int addFrameTask( ::Dynamic task,int priority);
		static ::Dynamic addFrameTask_dyn();

		static void pauseFrameTask(int id,bool paused);
		static ::Dynamic pauseFrameTask_dyn();

		static void removeFrameTask(int id);
		static ::Dynamic removeFrameTask_dyn();

		static int generateGroupId();
		static ::Dynamic generateGroupId_dyn();

		static int addBreakableTimeTaskToGroup(int groupId, ::Dynamic task,Float start,::hx::Null< Float >  period,::hx::Null< Float >  duration);
		static ::Dynamic addBreakableTimeTaskToGroup_dyn();

		static int addTimeTaskToGroup(int groupId, ::Dynamic task,Float start,::hx::Null< Float >  period,::hx::Null< Float >  duration);
		static ::Dynamic addTimeTaskToGroup_dyn();

		static int addBreakableTimeTask( ::Dynamic task,Float start,::hx::Null< Float >  period,::hx::Null< Float >  duration);
		static ::Dynamic addBreakableTimeTask_dyn();

		static int addTimeTask( ::Dynamic task,Float start,::hx::Null< Float >  period,::hx::Null< Float >  duration);
		static ::Dynamic addTimeTask_dyn();

		static  ::kha::TimeTask getTimeTask(int id);
		static ::Dynamic getTimeTask_dyn();

		static void pauseTimeTask(int id,bool paused);
		static ::Dynamic pauseTimeTask_dyn();

		static void pauseRunningTimeTask( ::kha::TimeTask timeTask,bool paused);
		static ::Dynamic pauseRunningTimeTask_dyn();

		static void pauseTimeTasks(int groupId,bool paused);
		static ::Dynamic pauseTimeTasks_dyn();

		static void removeTimeTask(int id);
		static ::Dynamic removeTimeTask_dyn();

		static void removeTimeTasks(int groupId);
		static ::Dynamic removeTimeTasks_dyn();

		static int numTasksInSchedule();
		static ::Dynamic numTasksInSchedule_dyn();

		static void insertSorted(::Array< ::Dynamic> list, ::kha::TimeTask task);
		static ::Dynamic insertSorted_dyn();

		static void sortFrameTasks();
		static ::Dynamic sortFrameTasks_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Scheduler */ 
