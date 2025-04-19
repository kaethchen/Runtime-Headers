@class NSString;

@interface WDProtocolAutomationVirtualAuthenticatorCredential : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *credentialId;
@property (nonatomic) BOOL isResidentCredential;
@property (copy, nonatomic) NSString *rpId;
@property (copy, nonatomic) NSString *privateKey;
@property (nonatomic) int signCount;
@property (copy, nonatomic) NSString *userHandle;
@property (copy, nonatomic) NSString *largeBlob;

- (id)initWithPayload:(id)a0;
- (id)initWithCredentialId:(id)a0 isResidentCredential:(BOOL)a1 rpId:(id)a2 privateKey:(id)a3 signCount:(int)a4;
- (id)initWithProtocolObject:(id)a0;

@end
