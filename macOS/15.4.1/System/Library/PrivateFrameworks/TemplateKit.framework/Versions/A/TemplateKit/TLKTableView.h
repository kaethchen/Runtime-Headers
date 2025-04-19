@class NSTrackingArea;

@interface TLKTableView : NSTableView {
    NSTrackingArea *_trackingArea;
}

- (void).cxx_destruct;
- (void)drawGridInClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)updateTrackingAreas;
- (id)extendedDelegate;
- (long long)selectRowForEvent:(id)a0;

@end
