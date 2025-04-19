@class NSTrackingArea;

@interface BKUIBlueButton : NSButton {
    NSTrackingArea *trackingArea;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)updateTrackingAreas;

@end
