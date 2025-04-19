@class NSSlider, NSArray, NSTextField;

@interface KHPhotoCountFilterController : NSViewController

@property (retain, nonatomic) NSSlider *photoCountSlider;
@property (retain, nonatomic) NSTextField *photoCountTitle;
@property (retain, nonatomic) NSArray *photoCounts;
@property (nonatomic) unsigned long long currentPhotoCount;
@property (nonatomic) BOOL enabled;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)sliderUpdated:(id)a0;

@end
