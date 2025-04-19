@class NSWindow;

@interface AAUICDPHelper : NSObject

@property (nonatomic) BOOL forceInline;
@property (readonly, weak, nonatomic) NSWindow *presentingWindow;

+ (BOOL)isWalrusEnabled;
+ (id)cdpContextForPrimaryAccount;
+ (id)cdpContextForPrimaryAccountWithAuthenticationResults:(id)a0;
+ (id)helperWithPresenter:(id)a0;
+ (BOOL)isEDPEligible;

- (void).cxx_destruct;
- (id)cdpStateControllerForPrimaryAccount;
- (id)cdpStateControllerWithContext:(id)a0;

@end
