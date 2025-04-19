@class NSTextField, NSSet, NSButton, NSPopover, NSMutableArray, NSWindow;

@interface _NSVisualizedConstraintsView : NSView {
    NSMutableArray *visualizedConstraintViews;
    NSMutableArray *constraintsNotVisualized;
    NSTextField *instructionsLabel;
    NSTextField *constraintsNotVisualizedLabel;
    NSButton *constraintsNotVisualizedButton;
    NSTextField *ambiguousLayoutLabel;
    NSButton *ambiguousLayoutButton;
    NSTextField *whyAmISeeingThisWindowTextField;
    NSButton *moreInfoButton;
    NSPopover *moreInfoPopover;
}

@property (retain) NSSet *constraintsToBeVisualized;
@property (retain) NSWindow *backgroundWindow;
@property (retain) NSWindow *foregroundWindow;
@property (weak) NSWindow *targetWindow;

+ (id)visualizationViewForConstraint:(id)a0 targetView:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)exerciseAmbiguity:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithTargetWindow:(id)a0;
- (BOOL)isFlipped;
- (void)logConstraintsNotVisualized:(id)a0;
- (void)mouseDown:(id)a0;
- (void)showMoreInfo:(id)a0;

@end
