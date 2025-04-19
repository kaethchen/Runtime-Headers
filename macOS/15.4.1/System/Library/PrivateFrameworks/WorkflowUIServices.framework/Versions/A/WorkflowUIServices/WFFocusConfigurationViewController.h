@class NSExtension, WFFocusConfigurationRemoteViewController, NSString, NSProgressIndicator, WFFocusConfigurationRequest, NSStackView;
@protocol WFFocusConfigurationViewControllerDelegate, NSCopying;

@interface WFFocusConfigurationViewController : NSViewController <WFFocusConfigurationRemoteViewControllerDelegate>

@property (retain, nonatomic) WFFocusConfigurationRequest *request;
@property (retain, nonatomic) WFFocusConfigurationRemoteViewController *remoteViewController;
@property (retain, nonatomic) NSProgressIndicator *activityIndicator;
@property (retain, nonatomic) NSStackView *errorStackView;
@property (nonatomic) BOOL didMakeFirstResponder;
@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) id<NSCopying> extensionRequest;
@property (weak, nonatomic) id<WFFocusConfigurationViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (void)loadView;
- (void)viewDidAppear;
- (id)initWithRequest:(id)a0;
- (void)clearAllViews;
- (void)embedRemoteViewController:(id)a0 withExtension:(id)a1 extensionRequest:(id)a2;
- (void)focusConfigurationRemoteViewController:(id)a0 configurationUIStateDidChange:(id)a1;
- (void)focusConfigurationRemoteViewController:(id)a0 didPressButtonWithIdentifier:(id)a1 cellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithContextualActionOptions:(id)a0;
- (void)installRemoteViewController:(id)a0;
- (void)loadFocusConfigurationRemoteViewController;
- (void)loadFocusConfigurationUI;
- (void)makeRemoteViewFirstResponderIfNeeded;
- (void)notifyDelegateWithPressedButtonIdentifier:(id)a0 cellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)notifyDelegateWithUIState:(id)a0;
- (void)showErrorMessage:(id)a0;

@end
