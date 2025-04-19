@class NSViewController, NSImage, NSString, NSView, NSButton;

@interface UAOnboardingOption : NSObject

@property (retain, nonatomic) NSImage *image;
@property (retain, nonatomic) NSViewController *optionViewController;
@property (retain, nonatomic) NSButton *clickableOverlay;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSView *optionView;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) BOOL isSelected;

- (void).cxx_destruct;
- (id)initWithImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1 label:(id)a2 index:(long long)a3;
- (id)_setupOptionView;
- (void)disableBorder;
- (void)enableBorder;
- (id)initWithCustomViewController:(id)a0 label:(id)a1 index:(long long)a2 size:(struct CGSize { double x0; double x1; })a3;
- (id)initWithLocalizedImageViewController:(id)a0 label:(id)a1 index:(long long)a2;

@end
