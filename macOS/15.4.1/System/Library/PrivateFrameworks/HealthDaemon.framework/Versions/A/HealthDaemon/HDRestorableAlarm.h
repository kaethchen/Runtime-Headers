@class NSString, NSMutableSet, NSObject, HDXPCAlarm;
@protocol OS_dispatch_queue, HDRestorableAlarmSchedulerProtocol;

@interface HDRestorableAlarm : NSObject <HDDiagnosticObject> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<HDRestorableAlarmSchedulerProtocol> _scheduler;
    id /* block */ _eventsHandler;
    NSMutableSet *_outstandingEventIdentifiers;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *eventHandlerQueue;
@property (readonly, nonatomic) HDXPCAlarm *systemScheduler;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)removeEvents:(id)a0 error:(id *)a1;
- (id)diagnosticDescription;
- (void)beginReceivingEventsWithHandler:(id /* block */)a0;
- (id)allScheduledEventsWithError:(id *)a0;
- (void)checkForDueEventsWithCompletion:(id /* block */)a0;
- (id)eventWithIdentifier:(id)a0 dueDate:(id)a1 eventOptions:(unsigned long long)a2;
- (id)eventWithIdentifier:(id)a0 dueDate:(id)a1 eventOptions:(unsigned long long)a2 clientOptions:(unsigned long long)a3;
- (id)eventWithIdentifier:(id)a0 dueDateComponents:(id)a1 eventOptions:(unsigned long long)a2;
- (id)eventWithIdentifier:(id)a0 dueDateComponents:(id)a1 eventOptions:(unsigned long long)a2 clientOptions:(unsigned long long)a3;
- (void)eventsDidFire:(id)a0;
- (id)initWithProfile:(id)a0 clientIdentifier:(id)a1 eventHandlerQueue:(id)a2;
- (id)initWithScheduler:(id)a0 clientIdentifier:(id)a1 eventHandlerQueue:(id)a2;
- (BOOL)removeAllEventsWithError:(id *)a0;
- (id)replaceAllScheduledEventsWithEvents:(id)a0 error:(id *)a1;
- (BOOL)scheduleEvents:(id)a0 error:(id *)a1;

@end
