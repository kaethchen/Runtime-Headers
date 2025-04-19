@class HDXPCAlarmScheduler, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HDXPCAlarm : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) HDXPCAlarmScheduler *scheduler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *eventHandlerQueue;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (copy, nonatomic) id /* block */ unitTest_schedulerObserver;
@property (readonly, copy, nonatomic) NSString *eventName;

- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (void)unschedule;
- (void)beginReceivingEventsWithHandler:(id /* block */)a0;
- (void)eventDidFire:(id)a0;
- (id)initWithScheduler:(id)a0 eventName:(id)a1 eventHandlerQueue:(id)a2;
- (void)setNextFireDate:(id)a0 isUserVisible:(BOOL)a1;
- (id)initWithProfileIdentifier:(id)a0 scheduler:(id)a1 eventName:(id)a2 eventHandlerQueue:(id)a3;
- (void)unitTest_fireEventImmediatelyWithDate:(id)a0 isUserVisible:(BOOL)a1;

@end
