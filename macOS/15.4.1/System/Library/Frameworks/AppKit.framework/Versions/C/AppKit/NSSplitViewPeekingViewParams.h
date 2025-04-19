@class NSView, NSSplitViewDividerDragParams;

@interface NSSplitViewPeekingViewParams : NSObject

@property double originalWidth;
@property double minimumWidth;
@property unsigned long long dividerIndex;
@property BOOL leadingEdge;
@property BOOL snappedToPreferredThickness;
@property (weak) NSView *view;
@property (retain) NSSplitViewDividerDragParams *dividerDragParams;

- (void)dealloc;
- (void).cxx_destruct;

@end
