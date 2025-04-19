@class NSString, NSMutableDictionary, NSSet, RPCompanionLinkClient, NSObject, NSArray;
@protocol OS_dispatch_queue, COMessageChannelRapportTransportDelegate;

@interface COMessageChannelRapportTransport : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _activated;
}

@property (retain, nonatomic) RPCompanionLinkClient *companionLinkClient;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, retain, nonatomic) NSString *requestIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *activeMemberDevices;
@property (readonly, weak, nonatomic) id<COMessageChannelRapportTransportDelegate> delegate;
@property (readonly, retain, nonatomic) NSSet *groupHKIdentifiers;
@property (readonly, retain, nonatomic) NSArray *activeMembers;

- (void)dealloc;
- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)_onqueue_activeMemberWithIDSIdentifier:(id)a0;
- (BOOL)_onqueue_devicePresentInGroup:(id)a0;
- (void)_onqueue_handleDeviceFound:(id)a0;
- (void)_onqueue_handleDeviceLost:(id)a0;
- (void)_onqueue_handleDeviceUpdated:(id)a0;
- (void)_onqueue_handleIncomingRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (id)_onqueue_memberFromRPCompanionLinkDevice:(id)a0;
- (Class)_payloadClassFromType:(id)a0;
- (id)_payloadTypeFromClass:(Class)a0;
- (id)_serializeDataForResponse:(id)a0;
- (id)_serializedDataForRequest:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (void)addHomeKitGroupIdentifiers:(id)a0;
- (id)initWithIdentifier:(id)a0 delegate:(id)a1 companionLink:(id)a2 dispatchQueue:(id)a3;
- (id)initWithIdentifier:(id)a0 delegate:(id)a1 dispatchQueue:(id)a2;
- (void)removeHomeKitGroupIdentifiers:(id)a0;
- (void)sendRequest:(id)a0 to:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
