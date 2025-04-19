@class HMFMessageDispatcher, NSString, HMDHome, NSUUID, NSNumber, NSObject;
@protocol OS_dispatch_queue, HMDResidentLocationProvider;

@interface HMDResidentLocationHandler : HMFObject <HMFLogging, HMFMessageReceiver>

@property (retain, nonatomic) NSNumber *residentLocationRawValue;
@property (weak, nonatomic) HMDHome *home;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMFMessageDispatcher *messageDispatcher;
@property (retain, nonatomic) id<HMDResidentLocationProvider> residentLocationProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (id)cachedResidentLocationPath;
+ (void)deleteCachedResidentLocation;

- (void).cxx_destruct;
- (void)configure;
- (id)logIdentifier;
- (void)_cacheResidentLocationRawValue:(id)a0;
- (id)_cachedResidentLocationRawValue;
- (void)_determineHomeOrAwayUsingElector:(id)a0 location:(id)a1 withCompletion:(id /* block */)a2;
- (void)_handleDetermineResidentLocationMessage:(id)a0;
- (unsigned long long)_residentLocationFromHomeLocation:(id)a0 location:(id)a1;
- (void)_sendResidentLocationMessageToElector:(id)a0 location:(id)a1 completion:(id /* block */)a2;
- (void)_updateToUnknownIfNoCachedLocation;
- (void)determineHomeOrAwayUsingElector:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithHome:(id)a0 queue:(id)a1 messageDispatcher:(id)a2;
- (id)initWithHome:(id)a0 queue:(id)a1 messageDispatcher:(id)a2 locationProvider:(id)a3;
- (void)requestResidentLocation;

@end
