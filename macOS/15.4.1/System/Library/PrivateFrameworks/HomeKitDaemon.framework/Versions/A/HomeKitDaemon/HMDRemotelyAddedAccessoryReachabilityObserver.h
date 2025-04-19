@class HMFTimer, NSString, HMDAccessory, NSNotificationCenter, NSObject, HMFMessage;
@protocol OS_dispatch_queue, NSObject;

@interface HMDRemotelyAddedAccessoryReachabilityObserver : HMFObject <HMFLogging, HMFTimerDelegate>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (retain) HMFTimer *timer;
@property (retain) id<NSObject> notificationToken;
@property (readonly) HMDAccessory *accessory;
@property (readonly) HMFMessage *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)start;
- (id)logIdentifier;
- (void)timerDidFire:(id)a0;
- (void)_respondToMessage;
- (id)initWithAccessory:(id)a0 message:(id)a1 workQueue:(id)a2;
- (id)initWithAccessory:(id)a0 message:(id)a1 workQueue:(id)a2 timer:(id)a3 notificationCenter:(id)a4;

@end
