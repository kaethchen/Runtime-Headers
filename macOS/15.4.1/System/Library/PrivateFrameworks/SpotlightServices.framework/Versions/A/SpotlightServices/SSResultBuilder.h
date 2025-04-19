@class SPSearchQueryContext, NSString, NSArray, SFColor, UTType, SFSearchResult_SpotlightExtras;

@interface SSResultBuilder : NSObject

@property (retain, nonatomic) SFSearchResult_SpotlightExtras *result;
@property (retain, nonatomic) NSString *coreSpotlightId;
@property (retain, nonatomic) NSArray *matchedStrings;
@property (retain, nonatomic) NSString *filePath;
@property (nonatomic) BOOL hasTextContentMatch;
@property (retain, nonatomic) SFColor *backgroundColor;
@property (retain, nonatomic) NSString *relatedAppBundleIdentifier;
@property (retain, nonatomic) UTType *uniformType;
@property (nonatomic) BOOL isTopHit;
@property (retain, nonatomic) SPSearchQueryContext *queryContext;
@property (readonly) BOOL supportsClearingBackendData;

+ (id)bundleId;
+ (id)fetchAttributes;
+ (BOOL)isSpotlight;
+ (BOOL)isCoreSpotlightResult;
+ (BOOL)isSearchToolClient;
+ (id)resultBuilderWithResult:(id)a0;
+ (BOOL)supportsResult:(id)a0;
+ (void)condenseWhiteSpaceForDescriptions:(id)a0;
+ (void)condenseWhiteSpaceForRichText:(id)a0;
+ (struct CGSize { double x0; double x1; })defaultThumbnailSizeIsCompact:(BOOL)a0;
+ (id)getCharacterIfWhitespaceAtIndex:(unsigned long long)a0 ofString:(id)a1;
+ (Class)resultBuilderClassForResult:(id)a0 preferAppVendedView:(BOOL)a1;
+ (id)resultBuilderForItem:(id)a0;
+ (id)resultBuilderWithResult:(id)a0 preferAppVendedView:(BOOL)a1;
+ (id)richTextsFromStrings:(id)a0;
+ (void)setDefaultSizeForThumbnail:(id)a0 isCompact:(BOOL)a1;
+ (id)stringForSFRichText:(id)a0;
+ (id)whiteSpaceCondensedStringForString:(id)a0;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildCommand;
- (id)buildCompactCard;
- (id)buildAppTopHitEntityCardSection;
- (id)buildInlineCard;
- (id)buildBadgingImageWithThumbnail:(id)a0;
- (id)buildAction;
- (id)buildAppEntityAnnotation;
- (id)buildBackgroundColor;
- (id)buildButtonItems;
- (BOOL)buildButtonItemsAreTrailing;
- (id)buildCompactCardSection;
- (id)buildCompactCardSections;
- (void)buildDefaultPropertiesForCardSection:(id)a0;
- (id)buildDescriptions;
- (id)buildDetailedRowCardSection;
- (id)buildFootnote;
- (id)buildHighlightedMatchedTextWithTitle:(id)a0 headTruncation:(BOOL)a1;
- (id)buildHighlightedTextWithString:(id)a0 includeQuotes:(BOOL)a1;
- (id)buildHorizontallyScrollingCardSection;
- (id)buildInlineCardSection;
- (id)buildInlineCardSections;
- (BOOL)buildPreventThumbnailImageScaling;
- (id)buildPreviewButtonItems;
- (id)buildPreviewCommand;
- (id)buildPunchouts;
- (id)buildResult;
- (id)buildSecondaryTitle;
- (id)buildSecondaryTitleImage;
- (BOOL)buildSecondaryTitleIsDetached;
- (id)buildThumbnail;
- (id)buildTitle;
- (id)buildTrailingBottomText;
- (id)buildTrailingMiddleText;
- (id)buildTrailingThumbnail;
- (id)buildTrailingTopText;
- (id)bundleIdentifierForAppIconBadgeImage;
- (unsigned long long)numberOfLinesForDescriptions;
- (id)resultAppBundleId;
- (void)setMaxLinesForDescriptions:(id)a0;
- (id)subclassBuildHorizontallyScrollingCardSection;

@end
