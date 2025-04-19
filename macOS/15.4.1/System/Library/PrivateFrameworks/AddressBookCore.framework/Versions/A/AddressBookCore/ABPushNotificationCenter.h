@class NSString, NSMutableDictionary, APSConnection, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface ABPushNotificationCenter : NSObject <APSConnectionDelegate> {
    NSMutableDictionary *_subscriptionURLBySourceIdentifier;
    NSMutableDictionary *_sourcesByPushKey;
    APSConnection *_pushServiceConnection;
    NSMutableSet *_productionSources;
    NSMutableSet *_enabledProductionTopics;
    APSConnection *_pushServiceConnectionDev;
    NSMutableSet *_developmentSources;
    NSMutableSet *_enabledDevelopmentTopics;
    NSObject<OS_dispatch_queue> *_pushWorkQueue;
}

@property BOOL unitTestOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (id)sharedPushNotificationCenter;

- (void)dealloc;
- (id)init;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (id)pushConnection;
- (void)configurePushConnectionForTransports:(id)a0 source:(id)a1;
- (id)connectionForPushTransports:(id)a0;
- (void)consumeOutstandingPushes;
- (id)pushConnectionDev;
- (void)refreshAllPushSubscriptionsForConnection:(id)a0;
- (void)registerSource:(id)a0 withPushTransports:(id)a1 forPushKey:(id)a2;
- (void)runWithLock:(id /* block */)a0;
- (void)sendSubscriptionRequestForKey:(id)a0 source:(id)a1 usingToken:(id)a2;
- (void)setPushConnectionDev:(id)a0;
- (BOOL)shouldHandleIncomingMessages;
- (BOOL)shouldUpdatePushConfiguration;
- (id)sourcesForPushKey:(id)a0;
- (id)stringFromTokenData:(id)a0;
- (void)unregisterSource:(id)a0;

@end
