@class NSMutableArray, NSLayoutConstraint;

@interface CalUIFastStackView : NSView

@property (retain) NSMutableArray *views;
@property (retain) NSLayoutConstraint *firstConstraint;
@property (retain) NSLayoutConstraint *lastConstraint;
@property long long orientation;
@property struct NSEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property long long distribution;
@property double spacing;

- (id)init;
- (void).cxx_destruct;
- (void)removeAllSubviews;
- (void)removeView:(id)a0;
- (void)_activateLowPriorityConstraint:(id)a0;
- (void)removeFirstView;
- (void)_activateHighPriorityConstraint:(id)a0;
- (void)_constrainFirstView;
- (void)_constrainLastView;
- (void)_constrainNonOrientationEdges:(id)a0;
- (void)_constrainViewLeft:(id)a0 right:(id)a1;
- (void)appendView:(id)a0;
- (void)prependView:(id)a0;
- (void)removeLastView;

@end
