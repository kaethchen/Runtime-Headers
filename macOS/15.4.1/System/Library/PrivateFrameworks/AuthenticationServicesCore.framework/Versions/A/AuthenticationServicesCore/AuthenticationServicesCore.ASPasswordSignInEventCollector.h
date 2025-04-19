@class NSString, _TtC26AuthenticationServicesCore22ASCPasswordSignInEvent;

@interface AuthenticationServicesCore.ASPasswordSignInEventCollector : SwiftNativeNSObject {
    void /* unknown type, empty encoding */ bundleIdentifierToSignInEvents;
}

- (id)init;
- (void)didUseCredentialForUsername:(id)a0 forHost:(id)a1 fromProviderWithBundleIdentifier:(id)a2 inAppWithBundleIdentifier:(id)a3 listenerEndpoint:(id)a4;
- (void)didUseCredentialForUsername:(id)a0 forURL:(id)a1 fromProviderWithBundleIdentifier:(id)a2 inBrowserWithBundleIdentifier:(id)a3 listenerEndpoint:(id)a4;
- (void)signInEventForRecentlyFilledCredentialWithUsername:(NSString *)a0 forAppWithBundleIdentifier:(NSString *)a1 completionHandler:(void (^)(_TtC26AuthenticationServicesCore22ASCPasswordSignInEvent *))a2;
- (void)signInEventForRecentlyFilledCredentialWithUsername:(NSString *)a0 forRelyingPartyIdentifier:(NSString *)a1 inAppWithBundleIdentifier:(NSString *)a2 completionHandler:(void (^)(_TtC26AuthenticationServicesCore22ASCPasswordSignInEvent *))a3;

@end
