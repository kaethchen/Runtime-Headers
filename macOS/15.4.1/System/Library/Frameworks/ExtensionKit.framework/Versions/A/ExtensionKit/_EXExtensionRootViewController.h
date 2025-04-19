@class _EXSceneWindow, NSView, NSViewController;

@interface _EXExtensionRootViewController : NSServiceViewController

@property (retain) _EXSceneWindow *window;
@property (retain, nonatomic) NSViewController *contentViewController;
@property (retain, nonatomic) NSView *contentView;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)embedViewController:(id)a0;

@end
