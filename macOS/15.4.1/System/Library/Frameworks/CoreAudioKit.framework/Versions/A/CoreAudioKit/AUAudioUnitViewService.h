@class NSViewController, NSArray, AURemoteExtensionContext, NSWindow;

@interface AUAudioUnitViewService : NSServiceViewController {
    NSViewController *_auViewController;
    BOOL _auViewRetrieved;
    BOOL _preferredSizeSent;
    NSArray *_horizontal;
    NSArray *_vertical;
}

@property AURemoteExtensionContext *auRemoteExtensionContext;
@property (retain, nonatomic) NSWindow *_window;

- (void)dealloc;
- (void).cxx_destruct;
- (void)keyDown:(id)a0;
- (void)keyUp:(id)a0;
- (void)loadView;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (unsigned long long)awakeFromRemoteView;
- (id)remoteViewControllerInterface;
- (BOOL)remoteViewSizeChanged:(struct CGSize { double x0; double x1; })a0 transaction:(id)a1;
- (void)sendInitialSize;
- (void)connectChildView;
- (struct CGSize { double x0; double x1; })determineViewSize:(id)a0;
- (void)initializeBlankView;
- (void)markViewForRedraw:(id)a0;
- (void)resizeAUContainer:(struct CGSize { double x0; double x1; })a0;
- (void)resizeAUView:(struct CGSize { double x0; double x1; })a0;
- (void)resizeWindow:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)sendEventToHost:(id)a0;
- (void)setAUContainerViewConstraints:(id)a0 childView:(id)a1 auViewSize:(struct CGSize { double x0; double x1; })a2;

@end
