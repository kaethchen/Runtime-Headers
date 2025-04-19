@class HMFTimer, NSString, NSObject;
@protocol OS_dispatch_queue, OS_nw_connection;

@interface HAPNameResolver : HMFObject <HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_nw_connection> *connection;
@property (retain, nonatomic) HMFTimer *timer;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *serviceType;
@property (retain, nonatomic) NSString *domain;
@property (readonly) long long resolutionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedWorkQueue;

- (void).cxx_destruct;
- (void)invalidate;
- (id)shortDescription;
- (void)_cancelTimer;
- (void)timerDidFire:(id)a0;
- (void)setResolutionState:(long long)a0;
- (void)_doCompletionWithErrorCode:(long long)a0 socketInfo:(id)a1 state:(long long)a2;
- (void)_doCompletionWithErrorCode:(long long)a0 state:(long long)a1;
- (void)_nwConnectionStart;
- (id)_nwCreateConnection;
- (void)_setStateChangedHandler;
- (void)_startTimerWithTimeout:(double)a0;
- (void)_updateSocketInfo:(id)a0;
- (id)initWithDeviceName:(id)a0 serviceType:(id)a1 domain:(id)a2;
- (void)resolveWithTimeout:(double)a0 completion:(id /* block */)a1;

@end
