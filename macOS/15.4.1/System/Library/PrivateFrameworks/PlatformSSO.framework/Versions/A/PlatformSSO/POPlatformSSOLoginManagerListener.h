@class POAgentAuthenticationProcess;

@interface POPlatformSSOLoginManagerListener : POAgentListener

@property (retain) POAgentAuthenticationProcess *process;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithAuthenticationProcess:(id)a0;

@end
