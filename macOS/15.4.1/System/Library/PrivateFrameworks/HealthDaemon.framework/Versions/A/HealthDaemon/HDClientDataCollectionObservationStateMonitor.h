@class NSString, HDProfile, NSLock, HDHealthStoreClient;
@protocol HDClientDataCollectionObservationStateMonitorDelegate;

@interface HDClientDataCollectionObservationStateMonitor : NSObject <HDProcessStateObserver> {
    NSLock *_lock;
    _Atomic BOOL _invalidated;
}

@property (readonly, nonatomic) HDHealthStoreClient *client;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic) id<HDClientDataCollectionObservationStateMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithClient:(id)a0 delegate:(id)a1;
- (id)currentObserverState;
- (void)processDidEnterBackground:(id)a0;
- (void)processDidEnterForeground:(id)a0;
- (void)workoutManagerDidChangeState:(id)a0;

@end
