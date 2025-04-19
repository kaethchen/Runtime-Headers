@interface ConversationKit.ScreenSharingViewController : PlatformViewController <CNKScreenSharingViewControllerProtocol> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ shouldDisableZoom;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ sharedContentViewController;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (long long)viewType;
- (BOOL)canZoomIn;
- (BOOL)canZoomOut;
- (void)resetZoom;
- (void)zoomOut;
- (BOOL)canResetZoom;
- (void)zoomIn;

@end
