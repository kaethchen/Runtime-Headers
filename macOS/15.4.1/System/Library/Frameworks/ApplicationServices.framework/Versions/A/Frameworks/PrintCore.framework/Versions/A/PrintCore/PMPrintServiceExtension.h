@class NSString, NSXPCConnection;

@interface PMPrintServiceExtension : NSObject <_EXPrincipalAdapting, PrintServiceExtension_com_apple_printing_PrintServiceExtensionProtocol>

@property (retain) NSXPCConnection *xpcConnection;
@property (retain) PMPrintServiceExtension *extensionImplementation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) id principalObject;

- (void).cxx_destruct;
- (void)fetchPrintersCompletionHandler:(id /* block */)a0;
- (id)principalObject;
- (void)authenticatedRequestForRequest:(id)a0 challengeResponse:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchChildrenOfBrowserNode:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithPrincipalObject:(id)a0;
- (id)printerDestinations;
- (void)prx_authenticatedRequestForRequest:(id)a0 challengeResponse:(id)a1 reply:(id /* block */)a2;
- (void)prx_fetchChildrenOfBrowserNode:(id)a0 completionHandler:(id /* block */)a1;
- (void)prx_printerInfoReply:(id /* block */)a0;
- (BOOL)shouldAcceptXPCConnection:(id)a0;

@end
