@class NSScrubberDocumentView;

@interface _NSViewAnimator_NSScrubberDocumentView : _NSViewAnimator

@property (readonly) NSScrubberDocumentView *targetView;

- (void)scrollItemAtIndex:(long long)a0 toAlignment:(long long)a1;
- (void)setHighlightedIndex:(long long)a0;
- (void)setSelectedIndex:(long long)a0;
- (void)updateForTrackingPoint:(struct CGPoint { double x0; double x1; })a0 isTrackingSelection:(BOOL)a1;

@end
