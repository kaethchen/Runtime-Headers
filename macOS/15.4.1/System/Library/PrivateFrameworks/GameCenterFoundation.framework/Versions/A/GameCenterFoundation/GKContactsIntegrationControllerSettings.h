@interface GKContactsIntegrationControllerSettings : GKInternalRepresentation

@property (nonatomic) double idsExpirationTimeOptedIn;
@property (nonatomic) double idsExpirationTimeNotUpgraded;
@property (nonatomic) double idsExpirationTimeNonAppleUser;
@property (nonatomic) double idsExpirationTimeOptedOut;
@property (nonatomic) double idsExpirationTimeNotSet;
@property (nonatomic) double idsExpirationTimeUnknown;
@property (readonly, nonatomic) unsigned long long idsV2FetchSize;
@property (readonly, nonatomic) unsigned long long idsV2BatchFetchSize;
@property (readonly, nonatomic) unsigned long long localSyncLimit;
@property (readonly, nonatomic) unsigned long long localBatchFetchSize;
@property (readonly, nonatomic) double idsUpdateInterval;
@property (readonly, nonatomic) double idsBatchFetchJitterInterval;
@property (readonly, nonatomic) double idsBatchFetchDelayInterval;
@property (readonly, nonatomic) double notificationCoalescingWaitTime;
@property (readonly, nonatomic) BOOL allowUpdates;
@property (readonly, nonatomic) BOOL allowUpdatesWithoutFriends;

+ (id)allBagKeys;
+ (id)secureCodedPropertyKeys;

- (id)init;
- (double)expirationTimeForCohort:(int)a0;
- (id)initWithBagValues:(id)a0;

@end
