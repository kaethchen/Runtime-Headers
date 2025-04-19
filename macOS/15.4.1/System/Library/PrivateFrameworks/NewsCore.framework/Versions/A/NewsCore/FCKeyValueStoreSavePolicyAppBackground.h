@class NSString, NSObject;
@protocol OS_dispatch_queue, FCBackgroundTaskable;

@interface FCKeyValueStoreSavePolicyAppBackground : FCKeyValueStoreSavePolicy <FCAppActivityObserving> {
    id<FCBackgroundTaskable> _backgroundTaskable;
    BOOL _inBackground;
    NSObject<OS_dispatch_queue> *_targetQueue;
    id /* block */ _pendingSaveHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_saveIfNeeded;
- (void)activityObservingApplicationDidBecomeActive;
- (void)activityObservingApplicationDidEnterBackground;
- (void)activityObservingApplicationWillResignActiveWithSceneID:(id)a0;
- (void)activityObservingApplicationWillTerminate;
- (id)initWithActivityMonitor:(id)a0 backgroundTaskable:(id)a1;
- (void)scheduleSaveOnQueue:(id)a0 handler:(id /* block */)a1;

@end
