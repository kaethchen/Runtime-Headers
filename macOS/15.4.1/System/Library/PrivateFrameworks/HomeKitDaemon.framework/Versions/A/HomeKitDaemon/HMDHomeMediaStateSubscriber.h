@class NSUUID, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, HMDHomeMediaStateSubscriberDataSource, HMESubscriptionProviding;

@interface HMDHomeMediaStateSubscriber : HMFObject <HMEEventConsumer, HMFLogging>

@property (readonly, weak, nonatomic) id<HMDHomeMediaStateSubscriberDataSource> dataSource;
@property (readonly, copy, nonatomic) NSUUID *homeUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) id<HMESubscriptionProviding> remoteSubscriptionProvider;
@property (readonly, nonatomic) id<HMESubscriptionProviding> localSubscriptionProvider;
@property (readonly, nonatomic) NSMutableDictionary *subscribedAccessoriesToTokenMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)didReceiveCachedEvent:(id)a0 topic:(id)a1 source:(id)a2;
- (void)didReceiveEvent:(id)a0 topic:(id)a1;
- (id)initWithHomeUUID:(id)a0 workQueue:(id)a1 dataSource:(id)a2 remoteSubscriptionProvider:(id)a3 localSubscriptionProvider:(id)a4;
- (void)localSubscribeForAppleMediaState;
- (void)localSubscribeForAppleMediaStateForAccessory:(id)a0;
- (void)localUnsubscribeForAppleMediaState;
- (void)localUnsubscribeForAppleMediaStateForAccessory:(id)a0;
- (void)subscribeForAppleMediaStateForAccessory:(id)a0 subscriptionToken:(id)a1;
- (void)subscribeForAppleMediaStateWithSubscriptionToken:(id)a0;
- (void)unsubscribeForAppleMediaStateForAccessory:(id)a0 subscriptionToken:(id)a1;
- (void)unsubscribeForAppleMediaStateWithSubscriptionToken:(id)a0;

@end
