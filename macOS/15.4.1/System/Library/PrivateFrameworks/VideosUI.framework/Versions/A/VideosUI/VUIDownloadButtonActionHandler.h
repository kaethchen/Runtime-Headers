@class NSViewController, NSView, VUIDownloadButtonViewModel, VUIAlertController;

@interface VUIDownloadButtonActionHandler : NSObject

@property (retain, nonatomic) VUIAlertController *deleteConfirmationAlertController;
@property (readonly, nonatomic) VUIDownloadButtonViewModel *viewModel;
@property (weak, nonatomic) NSViewController *presentingViewController;
@property (weak, nonatomic) NSView *parentView;
@property (copy, nonatomic) id /* block */ acknowledgementDownloadDeletedBlock;
@property (copy, nonatomic) id /* block */ presentAlertBlock;
@property (copy, nonatomic) id /* block */ acknowledgementDownloadCancelledBlock;

- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)_askUserAndDeleteIfNeeded;
- (void)_checkForAccountSignInWithCompletionHandler:(id /* block */)a0;
- (void)_dismissConfirmationAlertController;
- (void)_handleAppDidEnterBackgroundNotification:(id)a0;
- (id)_localize:(id)a0 token:(id)a1 value:(id)a2;
- (id)_renewalAlertAction;
- (BOOL)_shouldShowRenewalOption;
- (void)_showDownloadingInfoDialog;
- (void)_startDownloadIfPossibleRemovingFromUIOnCancellationOrFailure:(BOOL)a0 prefer3DOrImmersiveDownload:(BOOL)a1;
- (BOOL)ignoreDownloadActionIfInRetailDemoMode;
- (void)performAction:(BOOL)a0 confirmBeforeStopDownloading:(BOOL)a1;
- (void)performAction:(BOOL)a0 confirmBeforeStopDownloading:(BOOL)a1 prefer3DOrImmersiveDownload:(BOOL)a2;
- (id)topPresentedViewController;

@end
