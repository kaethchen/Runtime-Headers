@class NSString;

@interface WFLinkActionWorkflowRunnerClient : WFWorkflowRunnerClient

@property (readonly, nonatomic) long long linkRunnerClientRunSource;
@property (readonly, copy, nonatomic) NSString *linkRunnerClientRunSourceOverride;

- (void).cxx_destruct;
- (void)start;
- (void)finishWithError:(id)a0;
- (id)initWithLinkAction:(id)a0 appBundleIdentifier:(id)a1 extensionBundleIdentifier:(id)a2 runSource:(long long)a3 runSourceOverride:(id)a4 authenticationPolicy:(long long)a5;
- (id)initWithLinkAction:(id)a0 appBundleIdentifier:(id)a1 extensionBundleIdentifier:(id)a2 runSource:(long long)a3 authenticationPolicy:(long long)a4;
- (id)initWithLinkAction:(id)a0 bundleIdentifier:(id)a1 runSource:(long long)a2;
- (BOOL)shouldUseRunnerInfrastructureForRequest:(id)a0 action:(id)a1;
- (unsigned short)transcriptActionSourceForSurface:(unsigned long long)a0;

@end
