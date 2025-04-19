@class NSArray, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKNotificationListener : NSObject <APSConnectionDelegate, CKPKPushRegistryDelegate, CKPropertiesDescription> {
    NSMutableDictionary *_subscriptionInfos;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_apsConnections;
    unsigned long long _strategy;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSArray *notificationObservers;
@property (readonly, copy, nonatomic) NSString *machServiceName;
@property BOOL useOpportunisticPushTopics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;
- (id)redactedDescription;
- (void)connection:(id)a0 didChangeConnectedStatus:(BOOL)a1;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connectionDidReconnect:(id)a0;
- (void)registerForSubscriptionWithID:(id)a0 inDatabase:(id)a1 handler:(id /* block */)a2;
- (void)unregisterForSubscriptionWithID:(id)a0 inDatabase:(id)a1;
- (void)CKDescribePropertiesUsing:(id)a0;
- (void)_registerForSubscriptionWithID:(id)a0 inDatabase:(id)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)_unregisterForSubscriptionWithID:(id)a0 inDatabase:(id)a1 completionHandler:(id /* block */)a2;
- (id)apsConnectionForEnvironment:(id)a0;
- (void)didReceiveIncomingPushWithPayload:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)handlePushNotificationWithPayload:(id)a0 completionHandler:(id /* block */)a1;
- (void)handlePushNotificationWithPayload:(id)a0 environment:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)hasInitializedAPSConnection;
- (id)initWithStrategy:(unsigned long long)a0;
- (id)initWithStrategy:(unsigned long long)a0 machServiceName:(id)a1;
- (BOOL)isRegisteredForSubscriptionWithID:(id)a0 inDatabase:(id)a1;
- (id)uniqueKeyForSubscriptionID:(id)a0 inDatabase:(id)a1;

@end
