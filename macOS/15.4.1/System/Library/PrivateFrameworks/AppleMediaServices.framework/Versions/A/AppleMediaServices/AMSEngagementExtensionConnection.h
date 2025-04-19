@interface AMSEngagementExtensionConnection : NSObject <_EXMainConnectionHandler>

@property (readonly) id principalObject;

- (void).cxx_destruct;
- (id)initWithPrincipalObject:(id)a0;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (void)performRequestWithObject:(id)a0 completion:(id /* block */)a1;

@end
