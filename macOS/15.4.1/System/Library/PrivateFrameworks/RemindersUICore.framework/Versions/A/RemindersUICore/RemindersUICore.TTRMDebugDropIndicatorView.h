@interface RemindersUICore.TTRMDebugDropIndicatorView : NSView {
    void /* unknown type, empty encoding */ currentDropContext;
    void /* unknown type, empty encoding */ line;
    void /* unknown type, empty encoding */ infoContainer;
    void /* unknown type, empty encoding */ info;
    void /* unknown type, empty encoding */ lineYPositionInTargetViewConstraint;
    void /* unknown type, empty encoding */ constraintsForInfoContainerAboveLine;
    void /* unknown type, empty encoding */ constraintsForInfoContainerBelowLine;
    void /* unknown type, empty encoding */ constraintsForActiveDropTargetView;
    void /* unknown type, empty encoding */ activeDropTargetView;
    void /* unknown type, empty encoding */ shouldPositionInfoContainerAboveLine;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;

@end
