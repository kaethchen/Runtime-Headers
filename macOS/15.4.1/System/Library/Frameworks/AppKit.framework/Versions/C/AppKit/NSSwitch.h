@class NSTouch, NSString;
@protocol NSSwitchVisualProvider;

@interface NSSwitch : NSControl <NSAccessibilitySwitch> {
    struct { long long startModelState; struct CGPoint { double x; double y; } startPointInTrackCoordinates; BOOL everDraggedToDifferentState; BOOL mustToggleByDistance; } _currentTrackingState;
    id<NSSwitchVisualProvider> _visualProvider;
}

@property (readonly) id<NSSwitchVisualProvider> _visualProvider;
@property (setter=_setPresentationStateOverride:) long long _presentationStateOverride;
@property (readonly) long long _presentationState;
@property (retain) NSTouch *_trackingTouch;
@property (readonly) struct { double x0; unsigned long long x1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; } _currentDrawingState;
@property long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingState;
+ (Class)_controlClassSupportingNoCell;
+ (BOOL)_controlClassSupportsNoCell;
+ (Class)_defaultCellClass;
+ (BOOL)accessibilityIsSingleCelled;
+ (Class)cellClass;
+ (id)keyPathsForValuesInvalidatingLayout;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)layout;
- (id)accessibilityActionDescription:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)_toggle;
- (void)setControlSize:(unsigned long long)a0;
- (Class)_animatorClass;
- (void)_axDifferentiateWithoutColorDidChange:(id)a0;
- (struct { double x0; double x1; })_baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })a0;
- (void)_commonAwake;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (BOOL)_continueTrackingFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)_drawAsOn;
- (BOOL)_hitTestForTouch:(id)a0;
- (BOOL)_hitTestForTrackMouseEvent:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;
- (void)_initializeTrackingStateForInitialPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_isRTL;
- (void)_performHapticFeedbackIfEligible;
- (void)_setVisualProvider:(id)a0;
- (BOOL)_shouldToggleForEndTrackingAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_startTrackingAt:(struct CGPoint { double x0; double x1; })a0;
- (long long)_stateForDragAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_stopTrackingFromPoint:(struct CGPoint { double x0; double x1; })a0 endingAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_updateStateForDragAtPoint:(struct CGPoint { double x0; double x1; })a0 isFinished:(BOOL)a1 isDirectTouch:(BOOL)a2;
- (void)_windowChangedKeyState;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityLabel;
- (void)accessibilityPerformAction:(id)a0;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRoleAttribute;
- (id)accessibilitySubrole;
- (id)accessibilityValue;
- (id)accessibilityValueAttribute;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (double)baselineOffsetFromBottom;
- (id)designatedFocusRingView;
- (double)firstBaselineOffsetFromTop;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (void)performClick:(id)a0;
- (unsigned long long)sendActionOnMask;
- (void)setCell:(id)a0;
- (void)sizeToFit;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;
- (void)viewDidChangeBackingProperties;
- (BOOL)wantsUpdateLayer;

@end
