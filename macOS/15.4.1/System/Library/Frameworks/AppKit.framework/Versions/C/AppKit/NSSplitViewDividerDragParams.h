@class NSView, NSArray, NSLayoutConstraint;

@interface NSSplitViewDividerDragParams : NSObject {
    long long index;
    NSView *originalFocusedSubview;
    struct { double minPossiblePosition; double minAllowablePosition; double maxAllowablePosition; double maxPossiblePosition; BOOL canCollapseBeforeView; BOOL canCollapseAfterView; } staticDragLimits;
    NSLayoutConstraint *draggingConstraint;
    NSArray *neighboringViewConstraints;
    id draggingAnchor;
    BOOL delegateDynamicallyConstrains;
    BOOL userInteractiveDrag;
}

- (void)dealloc;
- (id)description;

@end
