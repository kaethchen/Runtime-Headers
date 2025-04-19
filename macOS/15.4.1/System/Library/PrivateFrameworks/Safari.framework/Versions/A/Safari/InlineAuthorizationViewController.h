@class NSString, LAContext, NSObject, LAUIAuthenticationViewController;
@protocol InlineAuthorizationViewControllerDelegate;

@interface InlineAuthorizationViewController : NSViewController <LAUIAuthenticationViewControllerDelegate, PreferencesViewController> {
    LAUIAuthenticationViewController *_laViewController;
    NSString *_title;
    NSString *_subtitle;
    NSString *_subtitleNoTouchID;
    NSString *_dfrMessage;
}

@property (readonly, nonatomic) LAContext *localAuthenticationContext;
@property (weak, nonatomic) NSObject<InlineAuthorizationViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double minimumPaneHeight;

+ (id)viewControllerForCreditCardsAuthorization;
+ (id)viewControllerForPasswordsAuthorization;
+ (id)viewControllerForPrivateBrowsingAuthorization;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_windowDidBecomeKey:(id)a0;
- (void)loadView;
- (id)localizedSubTitleForMechanisms:(unsigned long long)a0;
- (void)cancelAuthentication;
- (void)focusDefaultViewWithHostWindow:(id)a0;
- (void)_processAuthenticationResult:(BOOL)a0 error:(id)a1;
- (void)_touchIDAvailabilityMayHaveChanged:(id)a0;
- (void)attemptAuthorization;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 subtitleNoTouchID:(id)a2 dfrMessage:(id)a3;

@end
