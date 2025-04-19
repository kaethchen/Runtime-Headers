@class MCMContainerIdentity;

@interface MCMCommandSetDataProtection : MCMCommand <MCMParametersSetDataProtection>

@property (readonly, nonatomic) BOOL skipIfUnchanged;
@property (readonly, nonatomic, getter=isThirdParty) BOOL thirdParty;
@property (readonly, nonatomic) int dataProtectionClass;
@property (readonly, nonatomic) BOOL retryIfLocked;
@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (void)execute;
- (BOOL)_updateMetadataForContainerIdentity:(id)a0 dataProtectionClass:(int)a1 error:(id *)a2;
- (id)initWithContainerIdentity:(id)a0 thirdParty:(BOOL)a1 dataProtectionClass:(int)a2 retryIfLocked:(BOOL)a3 skipIfUnchanged:(BOOL)a4 context:(id)a5 resultPromise:(id)a6;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;

@end
