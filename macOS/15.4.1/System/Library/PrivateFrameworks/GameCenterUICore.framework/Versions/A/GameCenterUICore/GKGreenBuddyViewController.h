@class GKAccountViewController, NSView, NSButton, NSWindow;
@protocol GKGreenBuddyViewControllerDelegate;

@interface GKGreenBuddyViewController : NSViewController

@property (nonatomic) BOOL loadingURL;
@property (weak) id<GKGreenBuddyViewControllerDelegate> delegate;
@property (retain) NSWindow *window;
@property (retain) NSView *mainView;
@property (retain) NSButton *innerRightButton;
@property (retain) NSButton *outerRightButton;
@property (retain) NSButton *innerLeftButton;
@property (retain) NSButton *outerLeftButton;
@property (retain) GKAccountViewController *webViewController;
@property (copy, nonatomic) id /* block */ completionHandler;
@property long long mode;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)a0;
- (void)viewWillAppear;
- (void)startLoadingURLForLocalPlayer:(id)a0;

@end
