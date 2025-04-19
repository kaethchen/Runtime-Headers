@class NSImageView, NSArray, NSImage, UAOnboardingAccessibilitySettingsManager;

@interface UAOnboardingLocalizedImageViewController : NSViewController

@property (retain, nonatomic) UAOnboardingAccessibilitySettingsManager *_settingsManager;
@property (retain, nonatomic) NSImageView *imageView;
@property (retain, nonatomic) NSImage *image;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (retain, nonatomic) NSArray *textFields;

- (void).cxx_destruct;
- (id)initWithImage:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)_constrainViews;
- (id)initWithImage:(id)a0 nibName:(id)a1 bundle:(id)a2;
- (id)initWithImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1 nibName:(id)a2 bundle:(id)a3;

@end
