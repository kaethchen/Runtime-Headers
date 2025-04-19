@class NSString, NSData;

@interface SAIntentGroupSiriKitRemoteExecution : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *executionDeviceAssistantId;
@property (copy, nonatomic) NSString *invocationDeviceAssistantId;
@property (copy, nonatomic) NSString *personalDomainAuthenticationMode;
@property (copy, nonatomic) NSString *runLocation;
@property (copy, nonatomic) NSData *speechPackageData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)groupIdentifier;
- (id)encodedClassName;

@end
