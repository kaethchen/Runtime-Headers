@interface ADMLoginPrefs : NSObject

+ (id)sharedLoginPrefs;

- (BOOL)_boolFromCFValue:(void *)a0;
- (BOOL)setAutomaticLoginUser:(id)a0 password:(id)a1;
- (BOOL)showListEnabled;
- (struct __CFBundle { } *)_loginFrameworkBundle;
- (int)_setAutoLoginPassword:(id)a0;
- (id)automaticLoginUser;
- (BOOL)disableRestartShutdown;
- (BOOL)isIMEnabled;
- (BOOL)isVOEnabled;
- (id)loginAuthenticator;
- (long long)numberOfRetriesBeforeHintIsDisplayed;
- (BOOL)otherUserEnabled;
- (void)setAutoLoginUser:(id)a0 password:(id)a1;
- (BOOL)setAutomaticLoginUser:(id)a0 uid:(long long)a1 password:(id)a2;
- (void)setDisableRestartShutdown:(BOOL)a0;
- (void)setGuestUserPassword:(id)a0 accountName:(id)a1;
- (void)setIMEnabled:(BOOL)a0;
- (void)setLoginAuthenticator:(id)a0;
- (void)setNumberOfRetriesBeforeHintIsDisplayed:(long long)a0;
- (void)setShowHostname:(BOOL)a0;
- (void)setVOEnabled:(BOOL)a0;
- (BOOL)showHostname;
- (void)showList:(BOOL)a0;
- (void)showOtherUser:(BOOL)a0;
- (void)syncLoginPrefs;

@end
