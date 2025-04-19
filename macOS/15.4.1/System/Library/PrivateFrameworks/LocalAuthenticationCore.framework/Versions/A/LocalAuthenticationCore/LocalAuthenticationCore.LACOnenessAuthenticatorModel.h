@interface LocalAuthenticationCore.LACOnenessAuthenticatorModel : NSObject <LACOnenessAuthenticationProviderDelegate, LACDarwinNotificationCenterObserver, LACOnenessAuthenticating> {
    void /* unknown type, empty encoding */ authProvider;
    void /* unknown type, empty encoding */ clientInfoProvider;
    void /* unknown type, empty encoding */ replyQueue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mockedAuthProvider;
    void /* unknown type, empty encoding */ pendingSessions;
}

@property (nonatomic, readonly) BOOL isAvailable;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)notificationCenter:(id)a0 didReceiveNotification:(const struct __CFString { } *)a1;
- (void)cancelAuthenticationForRequest:(id)a0;
- (void)authenticateRequest:(id)a0 completion:(id /* block */)a1;
- (void)authenticationProvider:(id)a0 didCompleteAuthenticationWithID:(id)a1;
- (void)authenticationProvider:(id)a0 didFailAuthenticationWithID:(id)a1 error:(id)a2;
- (void)authenticationProvider:(id)a0 didStartAuthenticationWithID:(id)a1;
- (void)domainStateForRequest:(id)a0 completion:(id /* block */)a1;

@end
