@class NSString, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface MDSObject : NSObject {
    BOOL _deferShutdown;
    BOOL _shutDown;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unsigned long long _queueToken;
    NSString *_activityRegistrationObjectId;
    NSMutableDictionary *_registeredActivities;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _activityRegistrationLock;
    NSMutableSet *_darwinNotificationMembershipSet;
    BOOL _dealloced;
    BOOL _gotShutdown;
    BOOL _started;
}

+ (void)initialize;
+ (struct __asl_object_s { } *)messageTracer;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)queue;
- (void)performSelector:(SEL)a0 withObject:(id)a1 afterDelay:(double)a2;
- (void)_release;
- (id)_retain;
- (void)shutdown;
- (id)targetQueue;
- (unsigned int)qosClass;
- (id)activityRegistrationObjectId;
- (void)addRunLoopSources;
- (BOOL)blocksShutdown;
- (id)initWithDeferredShutdown:(BOOL)a0;
- (void)internalRegisterForDarwinNotification:(id)a0 forBlock:(id /* block */)a1;
- (void)internal_startup;
- (void)invalidateRunLoopSources;
- (void)postActionWithSelector:(SEL)a0 andObject:(id)a1;
- (const char *)queueDescription;
- (unsigned long long)queueToken;
- (void)registerForDarwinNotification:(id)a0 withBlock:(id /* block */)a1;
- (void)registerForDarwinNotification:(id)a0 withSelector:(SEL)a1 andObject:(id)a2;
- (void)registerForWakeUp:(id)a0 powerNap:(BOOL)a1 delay:(long long)a2 gracePeriod:(long long)a3 callbackBlock:(id /* block */)a4;
- (void)setActivityRegistrationObjectId:(id)a0;
- (void)shutdownNotification:(id)a0;
- (unsigned long long)startup:(id)a0;
- (void)startupAction:(id)a0;
- (unsigned long long)startupOnMain:(BOOL)a0 group:(id)a1;
- (BOOL)token:(int *)a0 forDarwinNotification:(id)a1;
- (void)unregisterForDarwinNotification:(id)a0;

@end
