@class NSString, CKDContainerServerInfo;

@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest

@property (copy, nonatomic) CKDContainerServerInfo *containerServerInfo;
@property (nonatomic) BOOL requireUserIDs;
@property (copy, nonatomic) NSString *containerIdentifier;

- (void).cxx_destruct;
- (id)url;
- (long long)partitionType;
- (long long)serverType;
- (BOOL)allowsAnonymousAccount;
- (BOOL)allowsAuthedAccount;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (BOOL)hasRequestBody;
- (id)initWithOperation:(id)a0 containerIdentifier:(id)a1;
- (void)requestDidParseJSONObject:(id)a0;
- (BOOL)requiresConfiguration;
- (BOOL)requiresDeviceID;
- (BOOL)usesCloudKitAuthToken;
- (BOOL)usesiCloudAuthToken;

@end
