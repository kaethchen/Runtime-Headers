@class FTMessageDelivery, APSConnection, NSString, NSObject, SKASystemMonitor;
@protocol OS_dispatch_queue, SKAPushManagingDelegate;

@interface SKAPushManager : NSObject <APSConnectionDelegate, SKASystemMonitorListener, SKAPushManaging>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) SKASystemMonitor *systemMonitor;
@property (retain, nonatomic) APSConnection *connection;
@property (retain, nonatomic) FTMessageDelivery *messageDelivery;
@property (nonatomic) BOOL trafficModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKAPushManagingDelegate> delegate;

+ (id)logger;

- (void).cxx_destruct;
- (void)connection:(id)a0 channelSubscriptionsFailedWithFailures:(id)a1;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (id)serverTime;
- (id)pushToken;
- (void)systemDidLeaveFirstDataProtectionLock;
- (void)sendPresenceMessage:(id)a0 completion:(id /* block */)a1;
- (void)_switchFilterToEnabledForTopic:(id)a0;
- (void)switchPresenceFilterToNonwaking;
- (void)_initializeAPSConnection;
- (id)_pushEnvironment;
- (BOOL)_sharedChannelsIsDisabledByServer;
- (void)_subscribeToChannels:(id)a0 forTopic:(id)a1;
- (void)_subscribedChannelsForTopic:(id)a0 WithCompletion:(id /* block */)a1;
- (void)_switchFilterToNonwakingForTopic:(id)a0;
- (void)_unsubscribeFromChannels:(id)a0 forTopic:(id)a1;
- (void)createChannelWithProtoData:(id)a0 completion:(id /* block */)a1;
- (void)disableActivityTracking;
- (void)enableActivityTracking;
- (id)initWithQueue:(id)a0 systemMonitor:(id)a1 inTrafficMode:(BOOL)a2;
- (void)provisionPayload:(id)a0 completion:(id /* block */)a1;
- (void)publishStatus:(id)a0 completion:(id /* block */)a1;
- (void)subscribeToPresenceChannels:(id)a0;
- (void)subscribeToStatusChannels:(id)a0;
- (void)subscribedPresenceChannelsWithCompletion:(id /* block */)a0;
- (void)subscribedStatusChannelsWithCompletion:(id /* block */)a0;
- (void)switchPresenceFilterToEnabled;
- (void)switchStatusFilterToEnabled;
- (void)switchStatusFilterToNonwaking;
- (void)unsubscribeFromPresenceChannels:(id)a0;
- (void)unsubscribeFromStatusChannels:(id)a0;

@end
