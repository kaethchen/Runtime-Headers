@class NSString, SFAuthorizationView;
@protocol NSAdminPrefAuthenticator;

@interface NSAdminPreference : NSPreference {
    SFAuthorizationView *comboAuthButton;
    id<NSAdminPrefAuthenticator> authenticator;
    id<NSAdminPrefAuthenticator> _realAuthenticator;
    BOOL _ignoreShouldDeauthorize;
    BOOL _deauthenticatePending;
}

@property (copy) NSString *bundleID;

+ (BOOL)shouldDeauthenticate;
+ (void)updateAuthenticationStatus;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBundle:(id)a0;
- (void)setAuthenticator:(id)a0;
- (void)cancelAuthorization;
- (const struct { unsigned int x0; struct *x1; } *)authorizationRights;
- (void)authorizationViewDidAuthorize:(id)a0;
- (void)authorizationViewDidDeauthorize:(id)a0;
- (BOOL)authorizationViewShouldDeauthorize:(id)a0;
- (void)willSelect;
- (void)authorize;
- (id)comboAuthButton;
- (void)deauthenticate:(id)a0;
- (void)mainViewDidLoad;
- (BOOL)_isCurrentUserAdministrator;
- (BOOL)_requiresPasswordToUnlock;
- (void)appWillTerminate:(id)a0;
- (char *)authorizationString;
- (void)doCancelPaneSwitch:(id)a0;
- (void)doFinishPaneSwitch:(id)a0;
- (BOOL)shouldDeauthenticate:(id)a0;
- (void)updateAuthenticationStatus;
- (void)willDeauthenticate:(id)a0;

@end
