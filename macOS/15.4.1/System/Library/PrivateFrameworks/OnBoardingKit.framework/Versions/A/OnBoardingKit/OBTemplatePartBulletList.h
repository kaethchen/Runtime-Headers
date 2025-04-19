@class NSStackView;

@interface OBTemplatePartBulletList : NSScrollView

@property (retain) NSStackView *stack;
@property double itemWidth;
@property double itemInset;
@property (nonatomic) unsigned long long templateType;
@property (nonatomic) BOOL needsExtraWideContent;
@property (nonatomic) long long bulletListSpacing;
@property (nonatomic) BOOL bulletsHaveBackgrounds;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollWheel:(id)a0;
- (void)viewDidMoveToWindow;
- (void)setViewDefaults;
- (void)addExpandableItemWithTitle:(id)a0 description:(id)a1 image:(id)a2 imageTintColor:(id)a3 status:(id)a4 sublistItems:(id)a5;
- (void)addExpandableItemWithTitle:(id)a0 description:(id)a1 symbol:(id)a2 imageTintColor:(id)a3 status:(id)a4 sublistItems:(id)a5;
- (void)addItemWithDescription:(id)a0 image:(id)a1 imageTintColor:(id)a2;
- (void)addItemWithDescription:(id)a0 image:(id)a1 imageTintColor:(id)a2 status:(id)a3;
- (void)addItemWithDescription:(id)a0 symbol:(id)a1 symbolTintColor:(id)a2;
- (void)addItemWithDescription:(id)a0 symbol:(id)a1 symbolTintColor:(id)a2 status:(id)a3;
- (void)addItemWithTitle:(id)a0 description:(id)a1 image:(id)a2 imageTintColor:(id)a3;
- (void)addItemWithTitle:(id)a0 description:(id)a1 image:(id)a2 imageTintColor:(id)a3 status:(id)a4;
- (void)addItemWithTitle:(id)a0 description:(id)a1 symbol:(id)a2 symbolTintColor:(id)a3;
- (void)addItemWithTitle:(id)a0 description:(id)a1 symbol:(id)a2 symbolTintColor:(id)a3 status:(id)a4;

@end
