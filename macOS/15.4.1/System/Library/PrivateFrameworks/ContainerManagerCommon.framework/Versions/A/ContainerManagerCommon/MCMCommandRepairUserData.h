@class NSURL;

@interface MCMCommandRepairUserData : MCMCommand <MCMParametersRepairUserData>

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) char *sandboxToken;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)dealloc;
- (void).cxx_destruct;
- (void)execute;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;

@end
