@class NSTrackingArea, AVVolumeControlButton;

@interface AVVolumeControlButtonContentView : NSView {
    NSTrackingArea *_trackingArea;
}

@property (readonly, weak, nonatomic) AVVolumeControlButton *volumeButton;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)updateTrackingAreas;
- (id)initWithVolumeControlButton:(id)a0;

@end
