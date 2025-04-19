@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NFBackgroundActivityScheduler : NSObject

@property (nonatomic) BOOL invalidated;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *activityMap;
@property (retain, nonatomic) NSMutableDictionary *callbackMap;

+ (id)sharedBackgroundActivityScheduler;

- (id)init;
- (void).cxx_destruct;
- (void)backgroundActivityScheduler:(id)a0 interval:(double)a1 tolerance:(double)a2 repeats:(BOOL)a3 qualityOfService:(long long)a4 delay:(double)a5 callback:(id /* block */)a6;
- (id)getActivity:(id)a0;
- (id)getCallbacks:(id)a0;
- (void)initCallbackArray:(id)a0;
- (void)registerActivity:(id)a0 identifier:(id)a1;
- (void)registerCallback:(id /* block */)a0 identifier:(id)a1;
- (void)schedulePreRegisteredActivity:(id)a0 callback:(id /* block */)a1;
- (void)unregisterActivity:(id)a0;

@end
