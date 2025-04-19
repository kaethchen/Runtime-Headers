@class AKFidoAuthenticationResponse, NSString, NSError, AKFidoContext, NSDictionary, AKServerRequestConfiguration, AKAccountRecoveryContext, AKAppleIDAuthenticationContext, NSNumber, NSHTTPURLResponse;

@interface AKModernAppleIDAuthenticationContext : AKAppleIDAuthenticationContext <AKAppleIDAuthenticationUIProvider, AKAppleIDServerAuthenticationUIProvider, AKAppleIDAuthenticationLimitedUIProvider> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ signInModelModifier;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithContext:(id)a0;
- (void)dismissBasicLoginUIWithCompletion:(void (^)(BOOL, NSError *))a0;
- (void)dismissKeepUsingUIWithCompletion:(void (^)(BOOL, NSError *))a0;
- (void)dismissNativeRecoveryUIWithCompletion:(void (^)(BOOL, NSError *))a0;
- (void)dismissSecondFactorUIWithCompletion:(void (^)(BOOL, NSError *))a0;
- (void)dismissServerProvidedUIWithCompletion:(void (^)(BOOL, NSError *))a0;
- (id)initWithAuthenticatedServerRequestContext:(id)a0;
- (void)presentBasicLoginUIWithCompletion:(void (^)(NSString *, NSString *, NSDictionary *, NSError *))a0;
- (void)presentBiometricOrPasscodeValidationForAppleID:(NSString *)a0 completion:(void (^)(unsigned long long, NSError *))a1;
- (void)presentFidoAuthForContext:(AKAppleIDAuthenticationContext *)a0 fidoContext:(AKFidoContext *)a1 completion:(void (^)(AKFidoAuthenticationResponse *, NSError *))a2;
- (void)presentKeepUsingUIForAppleID:(NSString *)a0 completion:(void (^)(BOOL, NSError *))a1;
- (void)presentLoginAlertWithError:(NSError *)a0 title:(NSString *)a1 message:(NSString *)a2 completion:(void (^)(NSString *, NSString *, NSDictionary *, NSError *))a3;
- (void)presentNativeRecoveryUIWithContext:(AKAccountRecoveryContext *)a0 completion:(void (^)(NSDictionary *, NSError *))a1;
- (void)presentSecondFactorAlertWithError:(NSError *)a0 title:(NSString *)a1 message:(NSString *)a2 completion:(void (^)(NSNumber *, NSError *))a3;
- (void)presentSecondFactorUIWithCompletion:(void (^)(NSNumber *, NSError *))a0;
- (void)presentServerProvidedUIWithConfiguration:(AKServerRequestConfiguration *)a0 completion:(void (^)(NSHTTPURLResponse *, NSDictionary *, NSError *))a1;

@end
