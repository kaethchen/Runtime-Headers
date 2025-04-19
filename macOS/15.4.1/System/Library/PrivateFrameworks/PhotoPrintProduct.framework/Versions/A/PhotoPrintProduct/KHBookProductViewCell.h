@class NSTextField, NSArray, NSDictionary, NSImageView, KHBookProductDetailsView, NSButton, NSString;
@protocol KHProductViewDelegate;

@interface KHBookProductViewCell : UXCollectionViewCell <NSAccessibilityGroup>

@property (retain, nonatomic) NSArray *products;
@property (retain, nonatomic) NSDictionary *bookDetailsViews;
@property (weak) NSTextField *productTitleLabel;
@property (weak) NSTextField *productDescriptionLabel;
@property (weak) NSImageView *productImageView;
@property (weak) KHBookProductDetailsView *bookDetailsLeft;
@property (weak) KHBookProductDetailsView *bookDetailsRight;
@property (weak) NSButton *learnMoreButton;
@property (weak, nonatomic) id<KHProductViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_showPricesLabel:(BOOL)a0 inDetailsView:(id)a1 animated:(BOOL)a2;
- (void)hidePrices;
- (void)loadWithProducts:(id)a0;
- (void)productButtonHit:(id)a0;
- (void)showPricesWithProducts:(id)a0;

@end
