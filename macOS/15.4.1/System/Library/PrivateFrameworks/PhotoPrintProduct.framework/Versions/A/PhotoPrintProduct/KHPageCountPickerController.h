@class NSSlider, NSString, NSTextField;
@protocol KHPageCountPickerDelegate;

@interface KHPageCountPickerController : UXViewController

@property (retain) NSTextField *pageCountLabel;
@property (retain) NSTextField *pageCountTitle;
@property (weak) id<KHPageCountPickerDelegate> delegate;
@property (retain) NSSlider *pageCountSlider;
@property (nonatomic) unsigned long long pageCount;
@property (copy) NSString *accessibilityValueDescriptionFormatString;

- (void).cxx_destruct;
- (void)loadView;
- (void)sliderUpdated:(id)a0;

@end
