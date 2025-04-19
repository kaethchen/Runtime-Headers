@class NSSlider, NSTextField;

@interface UINSGameModuleTiltViewController : UINSGameModuleConfigViewController

@property (weak) NSTextField *neutralLabel;
@property (weak) NSSlider *neutralSlider;
@property (weak) NSSlider *sensitivitySlider;
@property (weak) NSSlider *yawRangeSlider;

- (id)init;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)neutralSliderChanged:(id)a0;
- (void)sensitivityChanged:(id)a0;
- (void)yawMaxChanged:(id)a0;

@end
