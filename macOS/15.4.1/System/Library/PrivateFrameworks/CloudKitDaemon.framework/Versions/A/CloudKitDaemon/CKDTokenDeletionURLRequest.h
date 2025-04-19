@class NSData, NSString;

@interface CKDTokenDeletionURLRequest : CKDURLRequest

@property (retain, nonatomic) NSData *apsToken;
@property (retain, nonatomic) NSString *apsEnvironmentString;
@property (retain, nonatomic) NSString *bundleID;

- (void).cxx_destruct;
- (id)applicationBundleIdentifierForContainerAccess;
- (id)sourceApplicationSecondaryIdentifier;
- (id)applicationBundleIdentifierForNetworkAttribution;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)a0 apsToken:(id)a1 apsEnvironmentString:(id)a2 bundleID:(id)a3;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (BOOL)requiresTokenRegistration;

@end
