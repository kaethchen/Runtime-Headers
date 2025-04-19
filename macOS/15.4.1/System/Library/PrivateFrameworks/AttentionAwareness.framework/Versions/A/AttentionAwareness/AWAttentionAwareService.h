@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWAttentionAwareService : NSObject <AWAttentionAwareService, AWSchedulerObserver, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_schedulers;
    int _supportedEventsNotify;
    unsigned long long _supportedEvents;
}

@property unsigned long long clientCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedAttentionService;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)LockScreenStateChanging:(BOOL)a0;
- (void)MotionStateChanging:(BOOL)a0;
- (void)crashWithReply:(id /* block */)a0;
- (void)_createUnitTestScheduler;
- (void)addClient:(id)a0 clientConfig:(id)a1 clientIndex:(int)a2 clientId:(id)a3 unitTestMode:(BOOL)a4 reply:(id /* block */)a5 subscribeForStreamingEvents:(BOOL)a6;
- (void)clientCountChangedFrom:(unsigned long long)a0 to:(unsigned long long)a1 forScheduler:(id)a2;
- (void)getDebugPreferences:(id /* block */)a0;
- (id)getFaceDetectScheduler;
- (id)getMotionDetectScheduler;
- (void)getSupportedEventsWithReply:(id /* block */)a0;
- (void)getUnitTestSamplerWithReply:(id /* block */)a0;
- (void)outputPowerLogWithReply:(id /* block */)a0;
- (void)processHIDEvent:(struct __IOHIDEvent { } *)a0 mask:(unsigned long long)a1 timestamp:(unsigned long long)a2 senderID:(unsigned long long)a3;
- (void)setDebugPreference:(id)a0 reply:(id /* block */)a1;
- (void)setSmartCoverClosed:(BOOL)a0;

@end
