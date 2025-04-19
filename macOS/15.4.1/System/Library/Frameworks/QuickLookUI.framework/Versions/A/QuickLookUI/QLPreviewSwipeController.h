@class NSWindow, QLPreviewView;

@interface QLPreviewSwipeController : NSObject {
    QLPreviewView *_transitionPreviewView;
    NSWindow *_transitionWindow;
    int _swipeStatus;
    BOOL _validateSwipe;
}

@property int status;
@property (weak) QLPreviewView *previewView;
@property (readonly) BOOL forwardSwipe;
@property (copy) id /* block */ completionBlock;

- (void).cxx_destruct;
- (void)_swipeEndedAndCompleted:(BOOL)a0;
- (void)abortSwipe;
- (void)swipeWithEvent:(id)a0 containingView:(id)a1 options:(int)a2 beginBlock:(id /* block */)a3 previewFrameBlock:(id /* block */)a4 progressBlock:(id /* block */)a5 completionBlock:(id /* block */)a6;

@end
