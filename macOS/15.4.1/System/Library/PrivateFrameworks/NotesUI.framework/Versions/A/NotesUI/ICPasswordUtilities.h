@class ICAccount;

@interface ICPasswordUtilities : NSObject

@property (class, readonly, nonatomic) ICAccount *defaultAccountForPasswordProtectedNotes;

@property (retain, nonatomic) id displayedSheet;

+ (id)sharedInstance;
+ (id)imageForCurrentDecryptedStatusForNote:(id)a0 imageType:(unsigned long long)a1;
+ (void)resetTimeoutTimer;
+ (void)rewrapCryptoKeyForObject:(id)a0 window:(id)a1;
+ (void)setTouchIDEnabledForSharedPassword:(BOOL)a0 account:(id)a1 displayWindow:(id)a2 completionHandler:(id /* block */)a3;
+ (void)showReauthenticateTouchIDSheetInWindow:(id)a0 completionHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (void)offerDevicePasswordOrResetPasswordForAccount:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)showPasswordChangeSheetForAccount:(id)a0 didAuthenticateWithBiometrics:(BOOL)a1 displayWindow:(id)a2 completionHandler:(id /* block */)a3;
- (void)showPasswordChangeSheetForAccount:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)showPasswordSetUpSheetForAccount:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)showReauthenticateTouchIDSheetInWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)showResetPasswordSheetForAccount:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;

@end
