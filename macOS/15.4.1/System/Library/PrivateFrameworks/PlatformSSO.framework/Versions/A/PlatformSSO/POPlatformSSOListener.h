@class POAgentAuthenticationProcess;

@interface POPlatformSSOListener : POAgentListener

@property (retain) POAgentAuthenticationProcess *process;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initForLogin:(BOOL)a0 authenticationProcess:(id)a1;

@end
