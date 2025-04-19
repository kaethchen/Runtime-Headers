@interface AKAuthorizationPaneMetrics : NSObject

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } iconSize;
@property (class, readonly, nonatomic) double titleTopSpacing;
@property (class, readonly, nonatomic) double titleBottomSpacing;
@property (class, readonly, nonatomic) double titleToSmallTitleVerticalSpacing;
@property (class, readonly, nonatomic) double interBulletSpacing;
@property (class, readonly, nonatomic) double privacyLinkTopSpacing;
@property (class, readonly, nonatomic) double privacyInfoTopSpacing;
@property (class, readonly, nonatomic) double privacyInfoToLinkBottomSpacing;
@property (class, readonly, nonatomic) double privacyLinkBottomSpacing;
@property (class, readonly, nonatomic) double continueButtonTopSpacing;
@property (class, readonly, nonatomic) double continueButtonBottomSpacing;
@property (class, readonly, nonatomic) double continueButtonHeight;
@property (class, readonly, nonatomic) double continueButtonWidth;
@property (class, readonly, nonatomic) double continueButtonTextHorizontalPadding;
@property (class, readonly, nonatomic) double continueButtonCornerRadius;
@property (class, readonly, nonatomic) double infoLabelBottomSpacing;
@property (class, readonly, nonatomic) double useOtherAppleIDTopSpacing;
@property (class, readonly, nonatomic) double useOtherAppleIDBottomSpacing;
@property (class, readonly, nonatomic) double userOtherAppleIDLeadingSpacing;
@property (class, readonly, nonatomic) double confirmButtonWidth;
@property (class, readonly, nonatomic) double confirmButtonTrailingSpacing;
@property (class, readonly, nonatomic) double loginChoiceBottomSpacing;
@property (class, readonly, nonatomic) double headerStackViewSpacing;
@property (class, readonly, nonatomic) double headerToFooterSpacing;
@property (class, readonly, nonatomic) double separatorSpacing;
@property (class, readonly, nonatomic) double nameViewHeight;
@property (class, readonly, nonatomic) double nameViewHeightWithDetailLabel;

+ (struct CGSize { double x0; double x1; })cellIconSize;

@end
