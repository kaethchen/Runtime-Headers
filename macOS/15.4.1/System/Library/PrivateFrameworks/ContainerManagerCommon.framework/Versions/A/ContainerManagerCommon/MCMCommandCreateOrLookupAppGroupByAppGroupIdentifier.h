@class MCMUserIdentity, MCMError, MCMContainerIdentity, NSString;
@protocol MCMContainerConfiguration;

@interface MCMCommandCreateOrLookupAppGroupByAppGroupIdentifier : MCMCommand <MCMParametersCreateOrLookupAppGroupByAppGroupIdentifier>

@property (readonly, nonatomic) BOOL alwaysReturnPath;
@property (readonly, nonatomic) BOOL clientIsAllowed;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;
@property (readonly, nonatomic) MCMError *error;
@property (readonly, nonatomic) id<MCMContainerConfiguration> containerConfig;
@property (readonly, nonatomic) NSString *appGroupIdentifier;
@property (readonly, nonatomic) unsigned int expectedPersonaKernelID;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;
+ (BOOL)secureRestrictedContainerIfNeededWithMetadata:(id)a0 entitlements:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (void)execute;
- (void)_commonInit:(id)a0;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;

@end
