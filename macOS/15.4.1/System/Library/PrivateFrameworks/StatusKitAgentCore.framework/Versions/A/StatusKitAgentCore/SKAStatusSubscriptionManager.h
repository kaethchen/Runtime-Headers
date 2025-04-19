@class NSString, NSMapTable, NSObject;
@protocol OS_dispatch_queue, SKADatabaseManaging, SKAPushManaging, SKAChannelManaging;

@interface SKAStatusSubscriptionManager : NSObject <SKAStatusSubscriptionManaging>

@property (retain, nonatomic) NSMapTable *activeTransientSubscriptionsByClient;
@property (retain, nonatomic) NSMapTable *activePresenceSubscriptionsByClient;
@property (retain, nonatomic) id<SKADatabaseManaging> databaseManager;
@property (retain, nonatomic) id<SKAChannelManaging> channelManager;
@property (retain, nonatomic) id<SKAPushManaging> pushManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalWorkQueue;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } transientSubscriptionsLock;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } presenceSubscriptionsLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;
+ (id)_tooManySubscriptionsError;

- (void).cxx_destruct;
- (void)releasePersistentSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 applicationIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)retainPersistentSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 applicationIdentifier:(id)a2 completion:(id /* block */)a3;
- (BOOL)_activeTransientAssertionsExist;
- (id)_recentlyReleasedTransientSubscriptionAssertionIdentifiersExcludingSubscriptionIdentifiers:(id)a0 count:(long long)a1 presenceCount:(long long)a2 databaseContext:(id)a3;
- (void)updateRegisteredSubscriptionsForActiveAssertionsWithCompletion:(id /* block */)a0;
- (BOOL)_activePresenceAssertionsExist;
- (id)_activePresenceSubscriptionsForClient:(id)a0;
- (id)_activeTransientSubscriptionsForClient:(id)a0;
- (BOOL)_addPresenceSubscriptionAssertionForClient:(id)a0 subscriptionIdentifier:(id)a1;
- (BOOL)_addTransientSubscriptionAssertionForClient:(id)a0 subscriptionIdentifier:(id)a1;
- (id)_allPersonalChannelIdentifiersRequiringSelfSubscriptionWithDatabaseContext:(id)a0;
- (id)_enforceSubscriptionsHardCapOnSubscriptionIdentifiers:(id)a0;
- (id)_fetchAllActivePresenceSubscriptions;
- (id)_fetchAllActiveSubscriptionAssertionsWithCache;
- (id)_fetchAllClientActiveSubscriptionAssertions;
- (id)_filterSubscriptionIdentifierToPresence:(id)a0;
- (id)_filterSubscriptionIdentifierToStatus:(id)a0;
- (long long)_hardMaxSubscriptionCount;
- (void)_markCacheSubscriptionDateForChannelIdentifier:(id)a0;
- (long long)_maxPresenceSubscriptionCacheCount;
- (long long)_maxSubscriptionCacheCount;
- (void)_removeActivePresenceSubscriptionsForClient:(id)a0;
- (void)_removeActiveTransientSubscriptionsForClient:(id)a0;
- (BOOL)_removePresenceSubscriptionAssertionForClient:(id)a0 subscriptionIdentifier:(id)a1;
- (BOOL)_removeTransientSubscriptionAssertionForClient:(id)a0 subscriptionIdentifier:(id)a1;
- (id)_sortAndDedupeSubscriptionIdentifiers:(id)a0;
- (id)_statusTypeIdentifiersRequiringSelfSubscription;
- (double)_subscriptionTTL;
- (BOOL)activePresenceSubscriptionAssertionsExistForChannelIdentifier:(id)a0;
- (void)allStatusSubscriptionIdentifiersWithActiveSubscriptionsWithCompletion:(id /* block */)a0;
- (void)allSubscriptionIdentifiersWithActiveAssertionsForStatusTypeIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)initWithDatabaseManager:(id)a0 channelManager:(id)a1 pushManager:(id)a2;
- (void)releaseAllPresenceSubscriptionAssertionsAssociatedWithClient:(id)a0 completion:(id /* block */)a1;
- (void)releaseAllTransientSubscriptionAssertionsAssociatedWithClient:(id)a0 completion:(id /* block */)a1;
- (void)releasePresenceSubscriptionAssertionForSubscriptionIdentifier:(id)a0 client:(id)a1 completion:(id /* block */)a2;
- (void)releaseTransientSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 client:(id)a2 completion:(id /* block */)a3;
- (void)retainPresenceSubscriptionAssertionForSubscriptionIdentifier:(id)a0 client:(id)a1 completion:(id /* block */)a2;
- (void)retainTransientSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 client:(id)a2 completion:(id /* block */)a3;

@end
