@class NSString;
@protocol SKAChannelManagingDelegate, SKAAccountProviding, SKAPushManaging;

@interface SKAChannelManager : NSObject <SKAPushManagingDelegate, SKAChannelManaging>

@property (retain, nonatomic) id<SKAPushManaging> pushManager;
@property (retain, nonatomic) id<SKAAccountProviding> accountProvider;
@property (weak, nonatomic) id<SKAChannelManagingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;
+ (id)_jwtTokenNotFoundError;
+ (id)_serverResponseError;

- (void).cxx_destruct;
- (id)serverTime;
- (id)_createPayloadDataFromData:(id)a0;
- (id)_getNonce;
- (id)_getPresenceJWTToken;
- (id)_getStatusJWTToken;
- (void)_getStatusJWTTokenWithCompletion:(id /* block */)a0;
- (void)activePresenceChannelSubscriptionsWithCompletion:(id /* block */)a0;
- (void)activeStatusChannelSubscriptionsWithCompletion:(id /* block */)a0;
- (void)assertPresence:(id)a0 onChannel:(id)a1 membershipKey:(id)a2 serverKey:(id)a3 timestamp:(id)a4 withChannelToken:(id)a5 serviceIdentifier:(id)a6 isRefresh:(BOOL)a7 completion:(id /* block */)a8;
- (void)createChannelWithCompletion:(id /* block */)a0;
- (void)createPresenceChannelWithMembershipKey:(id)a0 serverKey:(id)a1 serviceIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)disableActivityTracking;
- (void)enableActivityTracking;
- (id)initWithPushManager:(id)a0 accountProvider:(id)a1 delegate:(id)a2;
- (void)pollActiveParticipantsForChannel:(id)a0 membershipKey:(id)a1 serverKey:(id)a2 withChannelToken:(id)a3 serviceIdentifier:(id)a4 completion:(id /* block */)a5;
- (void)publishData:(id)a0 onChannel:(id)a1 withChannelToken:(id)a2 publishInitiateTime:(id)a3 isPendingPublish:(BOOL)a4 isScheduledPublish:(BOOL)a5 retryCount:(unsigned long long)a6 completion:(id /* block */)a7;
- (void)publishProvisionPayloads:(id)a0 onChannel:(id)a1 withChannelToken:(id)a2 publishInitiateTime:(id)a3 retryCount:(unsigned long long)a4 completion:(id /* block */)a5;
- (void)pushManager:(id)a0 didReceiveData:(id)a1 onChannel:(id)a2 identifier:(unsigned long long)a3 dateReceived:(id)a4 dateExpired:(id)a5;
- (void)pushManager:(id)a0 failedToSubscribeToChannel:(id)a1 withError:(id)a2;
- (void)releasePresenceOnChannel:(id)a0 membershipKey:(id)a1 serverKey:(id)a2 timestamp:(id)a3 withChannelToken:(id)a4 serviceIdentifier:(id)a5 completion:(id /* block */)a6;
- (void)subscribeToPresenceChannels:(id)a0;
- (void)subscribeToStatusChannels:(id)a0;
- (void)unsubscribeFromPresenceChannels:(id)a0;
- (void)unsubscribeFromStatusChannels:(id)a0;

@end
