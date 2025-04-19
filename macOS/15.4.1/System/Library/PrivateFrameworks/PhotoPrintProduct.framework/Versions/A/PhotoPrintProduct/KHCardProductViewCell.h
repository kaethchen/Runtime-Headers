@class NSImageView, NSTextField, NSString, NSLayoutConstraint, KHProduct, NSButton;
@protocol KHProductViewDelegate;

@interface KHCardProductViewCell : UXCollectionViewCell <NSAccessibilityGroup>

@property (retain, nonatomic) KHProduct *product;
@property (weak) NSTextField *productTitleLabel;
@property (weak) NSTextField *productDescriptionLabel;
@property (weak) NSImageView *productImageView;
@property (weak) NSTextField *productSizeLabel;
@property (weak) NSTextField *primaryPriceLabel;
@property (weak) NSTextField *primaryPriceLabelInfo;
@property (weak) NSLayoutConstraint *topSpaceConstraintContinueButton;
@property (weak) NSButton *continueButton;
@property (weak) NSButton *learnMoreButton;
@property (weak, nonatomic) id<KHProductViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_showPricesLabel:(BOOL)a0 animated:(BOOL)a1;
- (void)hidePrices;
- (void)loadWithProduct:(id)a0;
- (void)productButtonHit:(id)a0;
- (void)showPricesWithProduct:(id)a0;

@end
