@class NSString, NSUUID;

@interface BlastDoorRelayReachabilityContext : NSObject {
    void /* unknown type, empty encoding */ relayReachabilityContext;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *chatIdentifier;
@property (nonatomic, readonly) long long chatStyle;
@property (nonatomic, readonly) NSString *senderLastAddressedHandle;
@property (nonatomic, readonly) NSUUID *senderLastAddressedSIMID;
@property (nonatomic, readonly) NSString *lastUsedServiceName;
@property (nonatomic, readonly) NSString *serviceOfLastMessage;
@property (nonatomic, readonly) BOOL conversationWasDowngraded;
@property (nonatomic, readonly) BOOL hasConversationHistory;
@property (nonatomic, readonly) BOOL shouldForceServerStatusRefresh;
@property (nonatomic, readonly) BOOL forceMMS;
@property (nonatomic, readonly) BOOL isForPendingConversation;
@property (nonatomic, readonly) BOOL requestPersistentMenu;
@property (nonatomic, readonly) BOOL requestBrandInfo;

- (id)init;
- (void).cxx_destruct;

@end
