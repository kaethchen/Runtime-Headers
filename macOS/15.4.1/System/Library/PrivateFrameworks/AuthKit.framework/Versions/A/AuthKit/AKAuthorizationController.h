@class AKAuthorizationDaemonConnection, AKAuthorizationClientImpl;
@protocol AKAuthorizationUIProvider;

@interface AKAuthorizationController : NSObject {
    AKAuthorizationClientImpl *_clientImpl;
    AKAuthorizationDaemonConnection *_daemonConnection;
}

@property (retain) id<AKAuthorizationUIProvider> uiProvider;

+ (id)sharedController;
+ (BOOL)_matchURLProcessingSet:(id)a0 url:(id)a1;
+ (unsigned long long)appSSORequestTypeForURL:(id)a0;
+ (id)appleOwnedDomains;
+ (BOOL)canPerformAuthorization;
+ (BOOL)isURLFromAppleOwnedDomain:(id)a0;
+ (BOOL)shouldProcessURL:(id)a0;
+ (void)shouldProcessURL:(id)a0 completion:(id /* block */)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_appleOwnedDomains;
- (void)_nativeTakeoverEndpointsWithCompletionHandler:(id /* block */)a0;
- (id)_nativeTakeoverURLs;
- (BOOL)_shouldOverrideProxiedBundleIDForContext:(id)a0;
- (void)beginAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (void)cancelAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (void)continueAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (void)continueFetchingIconForRequestContext:(id)a0 completion:(id /* block */)a1;
- (void)establishConnectionWithNotificationHandlerEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)establishConnectionWithStateBroadcastHandlerEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)fetchAppleIDAuthorizeHTMLResponseTemplateWithCompletion:(id /* block */)a0;
- (void)getCredentialStateForClientID:(id)a0 completion:(id /* block */)a1;
- (void)getCredentialStateForRequest:(id)a0 completion:(id /* block */)a1;
- (void)getPresentationContextForRequestContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithDaemonXPCEndpoint:(id)a0;
- (void)performAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (void)performAuthorizationWithContext:(id)a0 withUserProvidedInformation:(id)a1 completion:(id /* block */)a2;
- (id)primaryApplicationInformationForWebServiceWithInfo:(id)a0 error:(id *)a1;
- (void)revokeAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (void)storeAuthorization:(id)a0 forProxiedRequest:(id)a1 completion:(id /* block */)a2;

@end
