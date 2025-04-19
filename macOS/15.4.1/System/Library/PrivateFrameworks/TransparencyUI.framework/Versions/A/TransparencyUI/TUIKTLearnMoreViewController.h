@class TUIKTLearnMoreRemoteViewControllerHost;

@interface TUIKTLearnMoreViewController : NSViewController {
    TUIKTLearnMoreRemoteViewControllerHost *_remoteViewControllerHost;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidAppear;
- (void)_connectToRemoteServiceWithCompletion:(id /* block */)a0;
- (void)_showRemoteServicePrivacySheet;
- (void)closeRemoteServiceConnection;
- (void)presentWithPresentingWindow:(id)a0;

@end
