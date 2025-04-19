@class _EXHostSessionDriver, NSViewController, NSView, _EXHostViewControllerSession, _EXExtensionProcess, _EXHostViewControllerConfiguration;
@protocol _EXHostViewControllerDelegate;

@interface _EXHostViewController : NSViewController <_EXHostViewControllerProtocol, _EXHostViewDelegateProtocol>

@property (retain) _EXHostSessionDriver *sessionDriver;
@property (retain) NSViewController *embededViewController;
@property (copy, nonatomic) _EXHostViewControllerConfiguration *innerConfiguration;
@property (weak, nonatomic) id<_EXHostViewControllerDelegate> delegate;
@property (retain, nonatomic) NSView *placeholderView;
@property (copy, nonatomic) _EXHostViewControllerConfiguration *configuration;
@property (retain, nonatomic) _EXHostViewControllerSession *session;
@property (retain, nonatomic) NSViewController<_EXHostViewControllerDelegate> *placeholderViewController;
@property (retain, nonatomic) _EXExtensionProcess *extensionProcess;
@property (readonly) NSView *view;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)configuration;
- (void)setConfiguration:(id)a0;
- (id)session;
- (id)initWithConfiguration:(id)a0;
- (void)loadView;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)setSession:(id)a0;
- (id)makeXPCConnectionWithError:(id *)a0;
- (void)embedViewController:(id)a0;
- (void)embedPlaceholder;

@end
