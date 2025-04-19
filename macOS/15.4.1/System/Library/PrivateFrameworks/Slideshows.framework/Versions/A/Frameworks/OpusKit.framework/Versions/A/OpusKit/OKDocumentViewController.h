@interface OKDocumentViewController : OKDocumentViewControllerProxy

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)viewUpdateLayer;
- (void)_viewBeginGestureNotification:(id)a0;
- (void)_viewEndGestureNotification:(id)a0;
- (void)_viewFrameDidChangeNotification:(id)a0;
- (void)_windowDidChangeBackingPropertiesNotification:(id)a0;
- (void)_windowDidEndLiveResizeNotification:(id)a0;
- (void)_windowDidEnterFullScreenNotification:(id)a0;
- (void)_windowDidExitFullScreenNotification:(id)a0;
- (void)_windowWillStartLiveResizeNotification:(id)a0;
- (void)cleanCouchLabelHUDView;
- (void)setupCouchLabelHUDView:(id /* block */)a0;

@end
