@class NSTextField;

@interface HomepageServiceViewController : NSServiceViewController <HomepageServiceViewController>

@property (weak, nonatomic) NSTextField *homepageField;

- (void).cxx_destruct;
- (id)exportedInterface;
- (id)nibBundle;
- (void)viewDidLoad;
- (id)remoteViewControllerInterface;
- (BOOL)_canHostReadFileAtURL:(id)a0;
- (BOOL)_homepageFieldIsFirstResponder;
- (id)_readOnlySandboxFileExtensionTokenForURL:(id)a0;
- (id)_sharedSandboxBroker;
- (void)_updateHomepageField;
- (void)makeFieldFirstResponder;
- (void)performHomepageUpdateOnlyIfFieldIsFirstResponder:(BOOL)a0 handlerToUnblockUserInteraction:(id /* block */)a1;
- (void)setFieldIsEnabled:(BOOL)a0;
- (void)setFieldToolTip:(id)a0;
- (void)takeHomepageFrom:(id)a0;
- (void)updateHomepageURL:(id)a0 completionHandler:(id /* block */)a1;

@end
