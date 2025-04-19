@class QLPreviewPanelController;

@interface QLPanelPreviewView : QLPreviewView

@property (weak) QLPreviewPanelController *previewPanelController;

+ (Class)_dragGestureRecognizerClass;

- (void).cxx_destruct;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)wantsScrollEventsForSwipeTrackingOnAxis:(long long)a0;
- (BOOL)_shouldAdaptSizeToScreen;
- (void)startDragFromGesture:(id)a0 beganOrFailedHandler:(id /* block */)a1;

@end
