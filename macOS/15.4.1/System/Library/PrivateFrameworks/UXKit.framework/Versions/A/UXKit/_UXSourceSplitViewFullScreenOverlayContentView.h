@class NSView;
@protocol _UXSourceSplitViewCursorProvider;

@interface _UXSourceSplitViewFullScreenOverlayContentView : NSView

@property (weak, nonatomic) NSView *dividerView;
@property (weak, nonatomic) id<_UXSourceSplitViewCursorProvider> cursorProvider;

- (id)description;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)resetCursorRects;

@end
