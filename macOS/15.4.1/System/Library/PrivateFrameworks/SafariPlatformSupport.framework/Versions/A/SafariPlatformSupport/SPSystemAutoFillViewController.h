@class NSString, SPSystemAutoFillRemoteViewController, NSProgressIndicator, NSArray;
@protocol SPSystemAutoFillViewControllerDelegate;

@interface SPSystemAutoFillViewController : NSViewController <SPSystemAutoFillRemoteViewControllerDelegate> {
    SPSystemAutoFillRemoteViewController *_remoteSystemAutoFillController;
    NSProgressIndicator *_loadingIndicator;
    NSString *_remoteAppID;
    NSString *_remoteLocalizedAppName;
    NSString *_remoteUnlocalizedAppName;
    NSArray *_associatedDomains;
    unsigned long long _autoFillMode;
    BOOL _explicitAutoFillMode;
    NSArray *_sizeConstraints;
}

@property (weak, nonatomic) id<SPSystemAutoFillViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)setExplicitAutoFillMode:(BOOL)a0;
- (void)viewDidLoad;
- (void)setRemoteAppID:(id)a0;
- (void)_hideLoadingIndicator;
- (void)_setUpSystemAutoFillViewControllerWithCompletion:(id /* block */)a0;
- (void)_showLoadingIndicator;
- (void)_showSystemAutoFill;
- (void)passwordsRemoteViewController:(id)a0 fillPassword:(id)a1;
- (void)passwordsRemoteViewController:(id)a0 fillText:(id)a1;
- (void)passwordsRemoteViewController:(id)a0 fillUsername:(id)a1;
- (void)passwordsRemoteViewController:(id)a0 fillVerificationCode:(id)a1;
- (void)passwordsRemoteViewController:(id)a0 selectedCredential:(id)a1;
- (void)passwordsRemoteViewControllerDidCancel:(id)a0;
- (void)setAutoFillMode:(unsigned long long)a0;
- (void)setExternallyVerifiedAndApprovedSharedWebCredentialsDomains:(id)a0;
- (void)setRemoteLocalizedAppName:(id)a0;
- (void)setRemoteUnlocalizedAppName:(id)a0;

@end
