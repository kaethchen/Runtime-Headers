@class MCMContainerIdentity;

@interface MCMXPCMessageSetDataProtection : MCMXPCMessageWithContainerBase <MCMParametersSetDataProtection>

@property (readonly, nonatomic, getter=isThirdParty) BOOL thirdParty;
@property (readonly, nonatomic) int dataProtectionClass;
@property (readonly, nonatomic) BOOL retryIfLocked;
@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;

- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;

@end
