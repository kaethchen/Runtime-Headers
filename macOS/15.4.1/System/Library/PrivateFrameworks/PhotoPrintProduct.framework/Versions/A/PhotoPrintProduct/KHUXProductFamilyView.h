@class NSView, NSString, UXView, UXLabel, NSImage, NSMutableArray, UXImageView, NSLayoutConstraint;

@interface KHUXProductFamilyView : UXView {
    UXView *_masterContainer;
    UXView *_detailContainer;
}

@property (readonly, nonatomic) UXImageView *imageView;
@property (readonly, nonatomic) NSMutableArray *addedConstraints;
@property (readonly, nonatomic) NSMutableArray *masterConstraints;
@property (readonly, nonatomic) NSLayoutConstraint *detailHeightConstraint;
@property (nonatomic) struct CGSize { double width; double height; } lastSize;
@property (retain, nonatomic) NSString *prompt;
@property (retain, nonatomic) NSImage *image;
@property (retain, nonatomic) NSString *detailText;
@property (retain, nonatomic) NSView *buttonContainer;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL compactMode;
@property (readonly, nonatomic) BOOL rightToLeft;
@property (readonly, nonatomic) UXLabel *textLabel;
@property (readonly, nonatomic) UXLabel *detailTextLabel;
@property (readonly, nonatomic) UXLabel *promptTextLabel;

+ (BOOL)requiresConstraintBasedLayout;
+ (id)defaultGradientColors;
+ (id)whiteGradientColors;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)updateConstraints;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)_adjustTitleFontSize;

@end
