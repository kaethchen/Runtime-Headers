@class NSString, NSFont;

@interface MKFontManager : NSObject <MKFontManager>

@property (nonatomic) BOOL useSmallFont;
@property (readonly, nonatomic) NSFont *largeTitleFontStatic;
@property (readonly, nonatomic) NSFont *largeTitleFont;
@property (readonly, nonatomic) NSFont *mediumTitleFont;
@property (readonly, nonatomic) NSFont *brandTitleFont;
@property (readonly, nonatomic) NSFont *subtitleFont;
@property (readonly, nonatomic) NSFont *bodyFont;
@property (readonly, nonatomic) NSFont *boldBodyFont;
@property (readonly, nonatomic) NSFont *mediumBodyFont;
@property (readonly, nonatomic) NSFont *sectionHeaderFont;
@property (readonly, nonatomic) NSFont *sectionHeaderButtonFont;
@property (readonly, nonatomic) NSFont *attributionFont;
@property (readonly, nonatomic) NSFont *smallAttributionFont;
@property (readonly, nonatomic) NSFont *rowButtonFont;
@property (readonly, nonatomic) NSFont *rowGlyphButtonFont;
@property (readonly, nonatomic) NSFont *ratingOverallFont;
@property (readonly, nonatomic) NSFont *ratingOverallPercentageFont;
@property (readonly, nonatomic) NSFont *recommendSubtitleFont;
@property (readonly, nonatomic) NSFont *ratingCallToActionGlyphFont;
@property (readonly, nonatomic) NSFont *ratingCallToActionLabelFont;
@property (readonly, nonatomic) NSFont *ratingCallToActionHeaderLabelFont;
@property (readonly, nonatomic) NSFont *boldSectionHeaderFont;
@property (readonly, nonatomic) NSFont *textBlurbFont;
@property (readonly, nonatomic) NSFont *semiboldButtonCellFont;
@property (readonly, nonatomic) NSFont *largeTitleHeaderFont;
@property (readonly, nonatomic) NSFont *lookAroundButtonFont;
@property (readonly, nonatomic) NSFont *lookAroundLabelFont;
@property (readonly, nonatomic) NSFont *lookAroundSecondaryLabelFont;
@property (readonly, nonatomic) NSFont *lookAroundTertiaryLabelFont;
@property (readonly, nonatomic) NSFont *lookAroundAttributionButtonFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (void)setUseSmallFont:(BOOL)a0;

- (id)iconFontToMatch:(id)a0;

@end
