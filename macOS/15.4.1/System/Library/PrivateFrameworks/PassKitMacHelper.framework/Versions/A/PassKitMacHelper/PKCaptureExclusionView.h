@interface PKCaptureExclusionView : NSView

- (void)layout;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_updateWindowCaptureExcludeShape;
- (void)windowDidChangeID:(id)a0;

@end
