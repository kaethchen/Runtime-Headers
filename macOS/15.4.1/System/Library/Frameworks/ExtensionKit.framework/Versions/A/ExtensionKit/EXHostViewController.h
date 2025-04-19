@class _EXHostSessionDriver, NSViewController, NSView, _EXHostViewControllerConfiguration;
@protocol EXHostViewControllerDelegate;

@interface EXHostViewController : NSViewController <_EXHostViewControllerProtocol, _EXHostViewDelegateProtocol>

@property (retain) _EXHostSessionDriver *sessionDriver;
@property (retain) NSViewController *embededViewController;
@property (copy, nonatomic) _EXHostViewControllerConfiguration *configuration;
@property (weak, nonatomic) id<EXHostViewControllerDelegate> delegate;
@property (retain, nonatomic) NSView *placeholderView;
@property (readonly) NSView *view;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)configuration;
- (void)setConfiguration:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)setSession:(id)a0;
- (id)makeXPCConnectionWithError:(id *)a0;
- (void)embedViewController:(id)a0;

@end
