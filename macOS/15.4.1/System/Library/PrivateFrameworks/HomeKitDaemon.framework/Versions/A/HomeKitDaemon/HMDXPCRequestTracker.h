@class HMFTimer, NSMutableDictionary, NSSet, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDXPCRequestTracker : HMFObject <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableDictionary *pendingRequests;
@property (readonly, copy, nonatomic) HMFTimer *watchdogTimer;
@property (readonly, copy) NSSet *requestIdentifiers;
@property (copy) NSString *clientName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)cancelAllRequests;
- (void)timerDidFire:(id)a0;
- (void)_respondToRequest:(id)a0 withPayload:(id)a1 error:(id)a2;
- (void)addRequestWithIdentifier:(id)a0 name:(id)a1 qualityOfService:(long long)a2 isTimeoutDisabled:(BOOL)a3 responseHandler:(id /* block */)a4;
- (id)initWithQueue:(id)a0 watchdogTimer:(id)a1;
- (void)respondToRequestWithIdentifier:(id)a0 withPayload:(id)a1 error:(id)a2;

@end
