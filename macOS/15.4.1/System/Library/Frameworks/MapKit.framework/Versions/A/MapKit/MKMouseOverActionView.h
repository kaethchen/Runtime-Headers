@class NSTrackingArea;

@interface MKMouseOverActionView : MKViewWithHairline {
    NSTrackingArea *_trackingArea;
}

@property (copy, nonatomic) id /* block */ onMouseEnter;
@property (copy, nonatomic) id /* block */ onMouseExit;

- (void).cxx_destruct;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)updateTrackingAreas;

@end
