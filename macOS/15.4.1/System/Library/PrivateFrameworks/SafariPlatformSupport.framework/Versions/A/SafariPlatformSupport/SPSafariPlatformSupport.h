@class NSWindow, NSControl, SPOtherPasswordsRemoteViewController, SPAutoFillAuthorizationRemoteViewController, NSString, SPCompletionListRemoteViewController;

@interface SPSafariPlatformSupport : NSObject {
    id /* block */ _completionListCompletionHandler;
    id /* block */ _oneTimeCodeCompletionHandler;
    NSWindow *_completionListWindow;
    NSControl *_controlForEnsuringDismissalOfAutoFillWindowOnceDisabled;
    BOOL _isObservingEditablePropertyOfControl;
    id _textDidEndEditingObserver;
    id _textDidChangeObserver;
    id _windowDidResignKeyObserver;
    SPCompletionListRemoteViewController *_completionListViewController;
    SPOtherPasswordsRemoteViewController *_otherPasswordsViewController;
    SPAutoFillAuthorizationRemoteViewController *_autoFillAuthorizationViewController;
    NSString *_partialUsername;
    NSWindow *_currentSheetWindow;
    BOOL _isDisplayingForSecureTextField;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _positioningRect;
    id _positioningView;
    long long _positioningViewTextAlignment;
}

+ (id)sharedPlatformSupport;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dismissAutoFill;
- (void)_cleanUpAutoFillSession;
- (void)_dismissCompletionListWindowIfNecessary;
- (void)displayCompletionListRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1 matchingPartialUsername:(id)a2 completionHandler:(id /* block */)a3;
- (void)displayOTPAutoFillRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1 completionHandler:(id /* block */)a2;
- (void)displayOTPAutoFillRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1 oneTimeCodeMode:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)_addEnabledObserverToControl:(id)a0;
- (BOOL)_appCanSupportOneTimeCodeModeDeliveredCodesOnly;
- (void)updatePartialUsername:(id)a0 inWindow:(id)a1;
- (BOOL)_appCanSupportAutoFill;
- (void)_dismissCurrentSheetWindow;
- (void)_observeNotificationsForTextField:(id)a0 keyWindow:(id)a1 isForOneTimeCode:(BOOL)a2;
- (void)_removeEnabledObserverFromControl;
- (void)_setUpCompletionListViewControllerWithSetUpCompletionListViewController:(id /* block */)a0;
- (void)_showAutoFillAuthorizationControllerWithSetUpBlock:(id /* block */)a0;
- (long long)_textAlignmentOfPositioningView:(id)a0;
- (struct CGPoint { double x0; double x1; })_topLeftPointOfCompletionWindowInWindow:(id)a0 positioningRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2 textAlignment:(long long)a3;
- (void)_updatePasswordFieldContentLength:(unsigned long long)a0 inWindow:(id)a1;
- (void)_updateWindowVisibility:(BOOL)a0 inWindow:(id)a1;
- (void)completionListPreferredContentSizeDidUpdate;
- (void)credentialSelected:(id)a0;
- (void)displayCompletionListRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1 completionHandler:(id /* block */)a2;
- (void)displayCompletionListRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1 mode:(unsigned long long)a2 webViewURL:(id)a3 matchingPartialUsername:(id)a4 completionHandler:(id /* block */)a5;
- (void)displayCompletionListRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1 webViewURL:(id)a2 matchingPartialUsername:(id)a3 completionHandler:(id /* block */)a4;
- (void)oneTimeCodeSelected:(id)a0;
- (void)showAutoFillAuthorizationControllerForSelectedCredential;
- (void)showAutoFillAuthorizationControllerForSelectedOneTimeCode;
- (void)showExternalCredentialAuthenticationWithIdentifier:(id)a0;
- (void)showExternalCredentialListWithIdentifier:(id)a0;
- (void)showOtherPasswordsSelected:(id)a0;
- (void)updatePartialUsername:(id)a0;

@end
