@class SOAuthorizationRequestParametersCore, SOClient, NSDictionary, NSObject;
@protocol OS_dispatch_queue, SOAuthorizationCoreDelegate;

@interface SOAuthorizationCore : NSObject {
    SOClient *_client;
    SOAuthorizationRequestParametersCore *_requestParametersCore;
}

@property (retain) SOAuthorizationRequestParametersCore *requestParametersCore;
@property (weak) id<SOAuthorizationCoreDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateDispatchQueue;
@property (retain, nonatomic) NSDictionary *authorizationOptions;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL enableUserInteraction;

+ (BOOL)_canPerformAuthorizationWithURL:(id)a0 responseCode:(long long)a1 callerBundleIdentifier:(id)a2 useInternalExtensions:(BOOL)a3;
+ (BOOL)_doAKshouldProcessURL:(id)a0;
+ (BOOL)canPerformAuthorizationWithURL:(id)a0 responseCode:(long long)a1;
+ (BOOL)canPerformAuthorizationWithURL:(id)a0 responseCode:(long long)a1 callerBundleIdentifier:(id)a2 useInternalExtensions:(BOOL)a3;
+ (BOOL)canPerformAuthorizationWithURL:(id)a0 responseCode:(long long)a1 useInternalExtensions:(BOOL)a2;
+ (void)isConfigurationActiveForExtensionIdentifier:(id)a0 completion:(id /* block */)a1;
+ (void)isExtensionProcessWithAuditToken:(struct { unsigned int x0[8]; })a0 completion:(id /* block */)a1;

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)finishAuthorization:(id)a0 completion:(id /* block */)a1;
- (void)_addNoUserInterfaceToAuthorizationOptionsInRequestParameters;
- (void)_cancelAuthorization;
- (void)_finishAuthorization:(id)a0 withCredential:(id)a1 error:(id)a2;
- (void)beginAuthorizationWithOperation:(id)a0 url:(id)a1 httpHeaders:(id)a2 httpBody:(id)a3;
- (void)beginAuthorizationWithParameters:(id)a0;
- (void)beginAuthorizationWithParameters:(id)a0 completion:(id /* block */)a1;
- (void)beginAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;
- (void)beginAuthorizationWithURL:(id)a0 httpHeaders:(id)a1 httpBody:(id)a2;
- (void)cancelAuthorization;
- (id)createSecKeysFromSecKeyProxyEndpoints:(id)a0 error:(id *)a1;
- (void)debugHintsWithCompletion:(id /* block */)a0;
- (void)getAuthorizationHintsWithURL:(id)a0 responseCode:(long long)a1 completion:(id /* block */)a2;
- (id)kerberosProfiles;
- (void)performBlockOnDelegateQueue:(id /* block */)a0;
- (id)realms;

@end
