@class NSMutableArray, NSCandidateBarCompositeCandidate, NSCandidateListViewController, NSTouch;

@interface _NSCandidateBarFunctionRowButton : NSButton <_NSCandidateBarFunctionRowSegment_AccessibilityDelegate> {
    NSMutableArray *_segments;
    NSMutableArray *_collapsedSegments;
    NSCandidateBarCompositeCandidate *_left;
    NSCandidateBarCompositeCandidate *_middle;
    NSCandidateBarCompositeCandidate *_right1;
    NSCandidateBarCompositeCandidate *_right2;
    NSCandidateBarCompositeCandidate *_right3;
    BOOL _leftPressed;
    BOOL _middlePressed;
    BOOL _right1Pressed;
    BOOL _right2Pressed;
    BOOL _right3Pressed;
    BOOL _hasCorrection;
    BOOL _isComplex;
}

@property NSCandidateListViewController *controller;
@property (retain) NSTouch *trackingTouch;
@property double expandedWidth;
@property (getter=isCollapsed) BOOL collapsed;
@property BOOL allowsCollapsing;
@property BOOL layoutDone;
@property BOOL allowsCandidateVariation;
@property (readonly) BOOL hasContent;
@property (readonly) BOOL hasSplitRight;

- (void)dealloc;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityRoleAttribute;
- (id)collapsedAttributes;
- (id)collapsedCandidate;
- (id)collapsedSegmentWithWidth:(double)a0;
- (id)collapsingCandidate;
- (void)convertLocation:(struct CGPoint { double x0; double x1; })a0 toSegmentType:(long long *)a1 index:(unsigned long long *)a2;
- (id)defaultAttributesWithImage:(BOOL)a0 multipleLines:(BOOL)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSegments;
- (BOOL)scaleRightCandidate;
- (id)scaledAttributes;
- (void)segmentAccessibilityPressed:(id)a0;
- (id)segments;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setLeft:(id)a0 isPressed:(BOOL)a1;
- (void)setMiddle:(id)a0 isPressed:(BOOL)a1 isCorrection:(BOOL)a2;
- (void)setRight1:(id)a0 isPressed:(BOOL)a1 right2:(id)a2 isPressed:(BOOL)a3 right3:(id)a4 isPressed:(BOOL)a5;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;

@end
