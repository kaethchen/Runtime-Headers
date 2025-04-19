@class NSView, CAGradientLayer, NSMutableOrderedSet;

@interface KHUXProductFamilyPickerView : UXView

@property (readonly, nonatomic) CAGradientLayer *gradientLayer;
@property (readonly, nonatomic) NSView *leftPanel;
@property (readonly, nonatomic) NSView *rightPanel;
@property (readonly, nonatomic) NSMutableOrderedSet *productFamilyViews;
@property (readonly, nonatomic) unsigned long long columnCount;
@property (nonatomic) unsigned long long rowCount;
@property (nonatomic) double leftInset;
@property (nonatomic) double rightInset;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) double columnWidth;
@property (nonatomic) double autoRowHeight;
@property (nonatomic) double autoLastRowHeight;
@property (readonly, nonatomic) NSView *contentView;
@property (nonatomic) double rowHeight;

+ (Class)layerClass;
+ (id)defaultGradientColors;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)addProductFamilyView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForSubviewAtIndex:(unsigned long long)a0;
- (void)updateGradientColors:(id)a0;

@end
