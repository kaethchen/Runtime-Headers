@class NSLayoutConstraint, RolloverImageButton, NSTextField;

@interface PrivateBrowsingExplanationBanner : Banner

@property (weak, nonatomic) NSTextField *titleText;
@property (weak, nonatomic) NSTextField *descriptionText;
@property (weak, nonatomic) NSLayoutConstraint *bannerHeight;
@property (weak, nonatomic) RolloverImageButton *closeButton;

+ (int)bannerSortOrder;

- (id)init;
- (void).cxx_destruct;
- (void)_updateTextForEnhancedPrivateBrowsing;
- (id)bannerNibName;

@end
