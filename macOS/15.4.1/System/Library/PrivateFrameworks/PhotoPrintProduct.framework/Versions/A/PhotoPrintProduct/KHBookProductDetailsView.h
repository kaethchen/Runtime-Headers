@class NSTextField, NSString, NSLayoutConstraint, NSButton;

@interface KHBookProductDetailsView : NSView <NSAccessibilityGroup>

@property (weak) NSTextField *productSizeLabel;
@property (weak) NSTextField *primaryPriceLabel;
@property (weak) NSTextField *primaryPriceLabelInfo;
@property (weak) NSTextField *secondaryPriceLabel;
@property (weak) NSButton *continueButton;
@property (weak) NSLayoutConstraint *topSpaceConstraintContinueButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
