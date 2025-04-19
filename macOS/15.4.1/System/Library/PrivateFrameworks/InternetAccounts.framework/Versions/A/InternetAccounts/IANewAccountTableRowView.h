@class NSTrackingArea;

@interface IANewAccountTableRowView : NSTableRowView {
    BOOL _mouseInside;
    NSTrackingArea *_trackingArea;
}

@property BOOL mouseInside;
@property BOOL mouseDown;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setMouseInside:(BOOL)a0;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawSeparatorInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (BOOL)mouseInside;
- (void)mouseUp:(id)a0;
- (void)updateTrackingAreas;
- (void)_ensureTrackingArea;
- (void)undoMouseDown;
- (void)windowResignedKey:(id)a0;

@end
