@class NSXPCConnection;

@interface SASetupOverrideClient : NSObject

@property (retain) NSXPCConnection *mbsaConnection;

- (id)init;
- (void).cxx_destruct;
- (void)changeProximityPasswordType:(int)a0 completionBlock:(id /* block */)a1;
- (void)displayProxmimityPinCode:(id)a0 completionBlock:(id /* block */)a1;
- (id)mbsaProxy;
- (void)overrideProximityHandlerWithCompletionHandler:(id /* block */)a0;
- (void)proximityServerIsActiveWithCompletionBlock:(id /* block */)a0;
- (void)proximitySessionLostWithCompletionBlock:(id /* block */)a0;
- (void)proximitySessionReadyWithCompletionBlock:(id /* block */)a0;
- (void)sendProximitySASInformation:(id)a0 completionBlock:(id /* block */)a1;

@end
