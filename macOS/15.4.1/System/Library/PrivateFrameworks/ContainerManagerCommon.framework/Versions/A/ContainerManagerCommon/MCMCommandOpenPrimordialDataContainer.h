@class MCMError, MCMContainerIdentity;

@interface MCMCommandOpenPrimordialDataContainer : MCMCommand

@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;
@property (readonly, nonatomic) MCMError *error;
@property (readonly, nonatomic) BOOL testMode;
@property (readonly, nonatomic) BOOL extension;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;

@end
