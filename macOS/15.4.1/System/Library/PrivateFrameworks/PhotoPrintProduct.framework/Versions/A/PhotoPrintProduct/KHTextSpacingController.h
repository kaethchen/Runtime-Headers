@class KHFrame, NSTextField, NSImageView, NSSlider, KHTextView, NSMutableDictionary, NSString;

@interface KHTextSpacingController : UXViewController <NSTextFieldDelegate>

@property (retain) KHFrame *frame;
@property (retain) NSTextField *trackingValue;
@property (retain) NSTextField *lineHeightValue;
@property (retain) NSSlider *trackingSlider;
@property (retain) NSSlider *lineHeightSlider;
@property (retain) NSImageView *trackingImage;
@property (retain) NSImageView *lineHeightImage;
@property (nonatomic) double tracking;
@property (nonatomic) double leading;
@property (retain) KHTextView *textView;
@property (retain) NSMutableDictionary *attributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)control:(id)a0 textShouldEndEditing:(id)a1;
- (id)initWithTextView:(id)a0;
- (void)loadView;
- (void)leadingSliderAction:(id)a0;
- (double)lineSpacingValueFromSliderValue:(double)a0;
- (void)populateControls;
- (void)setupDefaultLabelAttributes:(id)a0 title:(id)a1;
- (double)sliderValueFromLineSpacingValue:(double)a0;
- (double)sliderValueFromTrackingValue:(double)a0;
- (double)snappedValueForSlider:(id)a0;
- (void)trackingSliderAction:(id)a0;
- (double)trackingValueFromSliderValue:(double)a0;

@end
