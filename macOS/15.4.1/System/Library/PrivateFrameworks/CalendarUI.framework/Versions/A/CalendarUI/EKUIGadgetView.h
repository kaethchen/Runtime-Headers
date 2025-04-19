@class NSTrackingArea, NSView, EKUIGadget;

@interface EKUIGadgetView : NSView

@property (retain) NSTrackingArea *trackingArea;
@property (weak) NSView *cachedPreviousKeyView;
@property (weak) NSView *cachedNextKeyView;
@property (weak) EKUIGadget *gadget;
@property BOOL shouldAbsorbMouseClickEvents;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_indicatorOverlayMaskRectForView:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseUp:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (void)updateConstraints;
- (void)updateTrackingAreas;

@end
