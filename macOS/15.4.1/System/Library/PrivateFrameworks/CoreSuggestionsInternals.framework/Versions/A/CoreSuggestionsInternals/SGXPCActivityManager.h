@class NSMutableArray, NSMutableDictionary;

@interface SGXPCActivityManager : NSObject <SGXPCActivityManagerProtocol> {
    NSMutableArray *_activities;
    NSMutableArray *_lastCriteria;
    NSMutableArray *_handlers;
    NSMutableDictionary *_currentTasks;
    BOOL _registered;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

+ (id)sharedInstance;
+ (id)nameForActivityId:(int)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)getState:(id)a0;
- (BOOL)setState:(id)a0 state:(long long)a1;
- (id)_taskForActivity:(id)a0;
- (id)activityForActivityId:(int)a0;
- (id)copyCriteria:(id)a0;
- (void)registerActivitiesWithSystem;
- (void)registerForActivity:(int)a0 handler:(id /* block */)a1;
- (void)setCriteria:(id)a0 criteria:(id)a1 forActivity:(int)a2;
- (BOOL)shouldDefer:(id)a0;

@end
