@class HAP2SerializedOperationQueue, NSString, HAP2PropertyLock, HMFTimer, HAPDeviceID;
@protocol HAPAccessoryReachabilityDelegate, HAPAccessoryReachabilityProfile;

@interface HAPAccessoryReachabilityClient : HMFObject <HMFLogging, HMFTimerDelegate, HAPAccessoryReachabilityClient> {
    HAP2SerializedOperationQueue *_operationQueue;
    HAP2PropertyLock *_propertyLock;
    HAPDeviceID *_identifier;
    HMFTimer *_activityTimer;
}

@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HAPAccessoryReachabilityDelegate> delegate;
@property (copy, nonatomic) id<HAPAccessoryReachabilityProfile> profile;
@property (readonly, nonatomic) double confirmInterval;

+ (id)new;
+ (void)initialize;
+ (id)shortDescription;
+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isRunning;
- (id)shortDescription;
- (void)_stop;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)stopWithCompletionHandler:(id /* block */)a0;
- (void)confirm;
- (void)_enterState:(long long)a0;
- (void)_timerDidFire:(id)a0;
- (void)kick;
- (void)timerDidFire:(id)a0;
- (void)_processProfile;
- (void)_poll;
- (void)_runStateMachine;
- (void)_wait;
- (id)initWithIdentifier:(id)a0 profile:(id)a1 operationQueue:(id)a2;

@end
