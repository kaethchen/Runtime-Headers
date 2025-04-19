@class NSArray;

@interface SAIntentGroupAppAuthorizationStatusRequest : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *appBundleIds;

+ (id)appAuthorizationStatusRequestWithDictionary:(id)a0 context:(id)a1;
+ (id)appAuthorizationStatusRequest;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
