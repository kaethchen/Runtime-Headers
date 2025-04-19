@interface ScreenSharingKit.LocalAuthenticationManager : NSObject <LAUIAuthenticationViewControllerDelegate> {
    void /* unknown type, empty encoding */ currentAuthorizationContext;
    void /* unknown type, empty encoding */ approveByMacAuthenticationContext;
    void /* unknown type, empty encoding */ authorizationContinuation;
    void /* unknown type, empty encoding */ authByMacContinuation;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ authByMacAppName;
    void /* unknown type, empty encoding */ currentLocalAuthSubtitle;
    void /* unknown type, empty encoding */ currentNumberOfPasswordAttempts;
    void /* unknown type, empty encoding */ userName;
    void /* unknown type, empty encoding */ authAutomaticModeKey;
    void /* unknown type, empty encoding */ maxNumberOfPasswordAttempts;
    void /* unknown type, empty encoding */ aksKeybagHandle;
    void /* unknown type, empty encoding */ _isAutomaticAuthenticationEnabled;
}

- (id)init;
- (void).cxx_destruct;
- (id)localizedSubTitleForMechanisms:(unsigned long long)a0;
- (void)authAttemptFailed;
- (void)authenticationDidSuccceed;
- (void)isLocalAuthenticationRequiredWithCompletionHandler:(void (^)(BOOL))a0;

@end
