@class NSLayoutConstraint, NSImageView, NSTextField;

@interface LUIBatteryView : NSView {
    NSTextField *_batteryTextField;
    NSImageView *_batteryImageView;
    NSLayoutConstraint *_imageToTextConstraint;
}

- (void).cxx_destruct;
- (double)baselineOffsetFromBottom;
- (double)firstBaselineOffsetFromTop;
- (double)lastBaselineOffsetFromBottom;
- (id)batteryImageView;
- (void)setBatteryImageView:(id)a0;
- (void)_updateImageToTextConstraint;
- (id)batteryTextField;
- (void)setBatteryTextField:(id)a0;

@end
