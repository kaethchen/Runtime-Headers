@class POAgentAuthenticationProcess;

@interface SOAppSSOListener : SOAgentListener

@property (retain) POAgentAuthenticationProcess *process;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithAuthenticationProcess:(id)a0;

@end
