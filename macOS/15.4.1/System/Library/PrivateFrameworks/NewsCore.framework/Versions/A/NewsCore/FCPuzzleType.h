@class FCColorGradient, NSDate, NSDictionary, FCContentArchive, FCContentColorMap, FCColor, FCHeadlineTemplate, FCInterestToken, NSString, FCTextInfo, FCTagBanner, NTPBPuzzleTypeRecord, FCContentManifest, NSArray, FCAssetHandle;
@protocol FCPuzzleTypeThumbnailDirectoryType;

@interface FCPuzzleType : NSObject <FCPuzzleTypeProviding, FCContentArchivable> {
    BOOL _disableBlock;
    BOOL _disableFollow;
    BOOL _isPublic;
    NSString *_name;
    NSString *_superfeedConfigResourceID;
    FCAssetHandle *_feedNavImageHQAssetHandle;
    NSString *_language;
    NSArray *_allowedStorefrontIDs;
    NSArray *_blockedStorefrontIDs;
    long long _minimumNewsVersion;
    NSDate *_loadDate;
    NSDate *_fetchDate;
    NSDate *_lastModifiedDate;
    FCColor *_groupTitleColor;
    FCColor *_groupDarkStyleTitleColor;
    NSString *_versionKey;
    NSString *_titleDisplayPrefix;
    NSString *_titleDisplaySuffix;
    unsigned long long foodGroupingAvailability;
}

@property (readonly, nonatomic) NTPBPuzzleTypeRecord *puzzleTypeRecord;
@property (readonly, nonatomic) FCInterestToken *interestToken;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, nonatomic) unsigned long long behaviorFlags;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *engineResourceID;
@property (readonly, copy, nonatomic) NSString *nameForSharing;
@property (readonly, copy, nonatomic) NSString *nameCompact;
@property (readonly, copy, nonatomic) NSArray *latestPuzzleIDs;
@property (readonly, copy, nonatomic) NSArray *promotedPuzzleIDs;
@property (readonly, nonatomic) FCAssetHandle *nameImageAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *nameImageCompactAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *nameImageForDarkBackgroundAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *nameImageMaskAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *exploreTileImageAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *feedNavImageAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *coverImageAssetHandle;
@property (readonly, nonatomic) FCColor *themeColor;
@property (readonly, nonatomic) FCColor *darkStyleThemeColor;
@property (readonly, nonatomic) FCColor *puzzlePrimaryColor;
@property (readonly, nonatomic) FCColor *darkStylePuzzlePrimaryColor;
@property (readonly, nonatomic) NSString *imageResourceID;
@property (readonly, nonatomic) id<FCPuzzleTypeThumbnailDirectoryType> thumbnailDirectory;
@property (readonly, nonatomic) NSDictionary *navigationBarThemeByRankID;
@property (readonly, nonatomic) NSArray *orderedNavigationBarThemes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long feedType;
@property (readonly, nonatomic) BOOL isWhite;
@property (readonly, nonatomic) BOOL isDark;
@property (readonly, nonatomic) FCTagBanner *defaultBannerImage;
@property (readonly, nonatomic) FCTagBanner *bannerImageForWhiteBackground;
@property (readonly, nonatomic) FCTagBanner *bannerImageForThemeBackground;
@property (readonly, nonatomic) FCTagBanner *bannerImageForMask;
@property (readonly, nonatomic) FCTagBanner *compactBannerImage;
@property (readonly, nonatomic) double bannerImageScale;
@property (readonly, nonatomic) double bannerImageBaselineOffsetPercentage;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) FCTextInfo *headlineTitleTextInfo;
@property (readonly, copy, nonatomic) FCTextInfo *headlineExcerptTextInfo;
@property (readonly, copy, nonatomic) FCTextInfo *headlineBylineTextInfo;
@property (readonly, nonatomic) FCColor *backgroundColor;
@property (readonly, nonatomic) FCColor *darkStyleBackgroundColor;
@property (readonly, nonatomic) FCColor *foregroundColor;
@property (readonly, nonatomic) FCColor *darkStyleForegroundColor;
@property (readonly, nonatomic) FCColor *navigationChromeBackgroundColor;
@property (readonly, nonatomic) FCColor *darkStyleNavigationChromeBackgroundColor;
@property (readonly, nonatomic) FCColor *navigationChromeSeparatorColor;
@property (readonly, nonatomic) FCColor *darkStyleNavigationChromeSeparatorColor;
@property (readonly, nonatomic) FCContentColorMap *contentColorMap;
@property (readonly, nonatomic) FCAssetHandle *navigationChromeBackgroundImage;
@property (readonly, nonatomic) FCAssetHandle *darkStyleNavigationChromeBackgroundImage;
@property (readonly, nonatomic) FCAssetHandle *navigationChromeBackgroundImageCompact;
@property (readonly, nonatomic) FCAssetHandle *darkStyleNavigationChromeBackgroundImageCompact;
@property (readonly, nonatomic) FCAssetHandle *navigationChromeBackgroundImageLarge;
@property (readonly, nonatomic) FCAssetHandle *darkStyleNavigationChromeBackgroundImageLarge;
@property (readonly, nonatomic) FCColorGradient *navigationChromeBackgroundGradient;
@property (readonly, nonatomic) FCColorGradient *darkStyleNavigationChromeBackgroundGradient;
@property (readonly, nonatomic) FCColor *feedBackgroundColor;
@property (readonly, nonatomic) FCColor *darkStyleFeedBackgroundColor;
@property (readonly, nonatomic) FCColorGradient *feedBackgroundGradient;
@property (readonly, nonatomic) FCColorGradient *darkStyleFeedBackgroundGradient;
@property (readonly, nonatomic) FCColor *feedControlColor;
@property (readonly, nonatomic) FCColor *darkStyleFeedControlColor;
@property (readonly, nonatomic) FCColor *adBackgroundColor;
@property (readonly, nonatomic) FCColor *darkStyleAdBackgroundColor;
@property (readonly, nonatomic) FCColorGradient *adBackgroundGradient;
@property (readonly, nonatomic) FCColorGradient *darkStyleAdBackgroundGradient;
@property (readonly, nonatomic) NSString *feedMastheadType;
@property (readonly, nonatomic) FCAssetHandle *logoImageAssetHandle;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } nameImageSize;
@property (readonly, nonatomic) struct FCEdgeInsets { double x0; double x1; double x2; double x3; } nameImageInsets;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } nameImageForDarkBackgroundSize;
@property (readonly, nonatomic) struct FCEdgeInsets { double x0; double x1; double x2; double x3; } nameImageForDarkBackgroundInsets;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } nameImageMaskSize;
@property (readonly, nonatomic) struct FCEdgeInsets { double x0; double x1; double x2; double x3; } nameImageMaskInsets;
@property (readonly, nonatomic) NSArray *loadableFonts;
@property (readonly, nonatomic) FCHeadlineTemplate *defaultHeadlineTemplate;
@property (readonly, nonatomic) BOOL allowCustomBottomStyle;
@property (readonly, nonatomic) unsigned long long navigationChromeBackgroundImageContentMode;
@property (readonly, nonatomic) unsigned long long navigationChromeBackgroundImageContentModeCompact;
@property (readonly, nonatomic) unsigned long long navigationChromeBackgroundImageContentModeLarge;
@property (readonly, nonatomic) FCContentArchive *contentArchive;
@property (readonly, nonatomic) FCContentManifest *contentManifest;

+ (BOOL)isPuzzleTypeIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isHidden;
- (id)displayName;
- (id)language;
- (long long)score;
- (id)subtitle;
- (id)authorizationURL;
- (id)groupName;
- (BOOL)isLocal;
- (unsigned long long)tagType;
- (BOOL)isInternal;
- (id)theme;
- (long long)contentProvider;
- (id)loadDate;
- (id)lastModifiedDate;
- (BOOL)isPublic;
- (BOOL)isEqualToTag:(id)a0;
- (BOOL)isDeprecated;
- (id)versionKey;
- (BOOL)isExplicitContent;
- (BOOL)isNotificationEnabled;
- (BOOL)publisherPaidLeakyPaywallOptOut;
- (id)primaryAudience;
- (id)publisherPaidDescriptionStrings;
- (id)adTargetingKeywords;
- (id)allowedStorefrontIDs;
- (id)blockedStorefrontIDs;
- (id)fetchDate;
- (unsigned long long)foodGroupingAvailability;
- (BOOL)hideAccessoryText;
- (id)highlightsArticleListID;
- (id)iAdCategories;
- (id)iAdKeywords;
- (id)magazineGenre;
- (long long)minimumNewsVersion;
- (id)publisherPaidAuthorizationURL;
- (id)publisherPaidBundlePurchaseIDs;
- (id)publisherPaidFeldsparablePurchaseIDs;
- (id)publisherPaidVerificationURL;
- (id)publisherSpecifiedArticleIDs;
- (id)publisherSpecifiedArticleIDsModifiedDate;
- (id)replacementID;
- (double)subscriptionRate;
- (id)superfeedConfigResourceID;
- (id)supergroupConfigJson;
- (id)supergroupKnobsJson;
- (id)asTopic;
- (id)groupTitleColor;
- (BOOL)isPurchaseSetup;
- (id)supergroupKnobs;
- (BOOL)isRecipeCatalog;
- (BOOL)allowsRecipes;
- (id)articleRecirculationConfigJSON;
- (id)asChannel;
- (id)asPuzzleType;
- (id)asSection;
- (id)asSports;
- (id)asSportsEvent;
- (id)compactDisplayName;
- (BOOL)disableBlock;
- (BOOL)disableFollow;
- (id)feedIDForBin:(long long)a0;
- (id)feedNavImageHQAssetHandle;
- (id)freeFeedIDForBin:(long long)a0;
- (id)groupDarkStyleTitleColor;
- (unsigned long long)groupingEligibility;
- (BOOL)hasEvergreenArticleList;
- (BOOL)hasRecipes;
- (id)initWithIdentifier:(id)a0 name:(id)a1 nameCompact:(id)a2 kind:(id)a3 behaviorFlags:(unsigned long long)a4 engineResourceID:(id)a5 superfeedConfigResourceID:(id)a6 latestPuzzleIDs:(id)a7 promotedPuzzleIDs:(id)a8 nameImageAssetHandle:(id)a9 nameImageCompactAssetHandle:(id)a10 nameImageMaskAssetHandle:(id)a11 nameImageForDarkBackgroundAssetHandle:(id)a12 feedNavImageAssetHandle:(id)a13 coverImageAssetHandle:(id)a14 navigationChromeBackgroundImageHandle:(id)a15 navigationChromeBackgroundImageCompactHandle:(id)a16 navigationChromeBackgroundImageLargeHandle:(id)a17 navigationChromeBackgroundDarkModeImageHandle:(id)a18 navigationChromeBackgroundDarkModeImageCompactHandle:(id)a19 navigationChromeBackgroundDarkModeImageLargeHandle:(id)a20 language:(id)a21 allowedStorefrontIDs:(id)a22 blockedStorefrontIDs:(id)a23 minimumNewsVersion:(long long)a24 loadDate:(id)a25 fetchDate:(id)a26 lastModifiedDate:(id)a27 exploreTileImageAssetHandle:(id)a28 versionKey:(id)a29 titleDisplayPrefix:(id)a30 titleDisplaySuffix:(id)a31 themeColor:(id)a32 puzzlePrimaryColor:(id)a33 darkStyleThemeColor:(id)a34 darkStylePuzzlePrimaryColor:(id)a35 groupTitleColor:(id)a36 groupDarkStyleTitleColor:(id)a37 thumbnailDirectory:(id)a38 isPublic:(BOOL)a39;
- (id)initWithPuzzleType:(id)a0 overrides:(id)a1;
- (id)initWithPuzzleTypeRecord:(id)a0 assetManager:(id)a1 context:(id)a2 interestToken:(id)a3;
- (BOOL)isArticleReadCountReportingEnabled;
- (BOOL)isAuthenticationSetup;
- (BOOL)isAutoDarkModeEnabled;
- (BOOL)isBlockedExplicitContent;
- (BOOL)isFoodHub;
- (BOOL)isFoodSection;
- (BOOL)isFoodTopic;
- (BOOL)isMagazine;
- (BOOL)isMySports;
- (BOOL)isNewspaper;
- (BOOL)isNoLongerAvailable;
- (BOOL)isPuzzleHub;
- (BOOL)isPuzzleType;
- (BOOL)isRealTimeTrackingEnabled;
- (BOOL)isSandbox;
- (BOOL)isSensitiveTopic;
- (BOOL)isSports;
- (BOOL)isSportsEvent;
- (BOOL)isSubscribable;
- (id)nameImageLargeAssetHandle;
- (id)nameImageLargeMaskAssetHandle;
- (id)nameImageMaskWidgetHQAssetHandle;
- (id)nameImageMaskWidgetLQAssetHandle;
- (id)paidBundlePaywallConfiguration;
- (id)paidFeedIDForBin:(long long)a0;
- (id)personalizedPaywallName;
- (void)ppt_overrideFeedID:(id)a0;
- (id)prefetchPurchaseOffer;
- (id)publisherPaidOfferableConfigurations;
- (BOOL)publisherPaidWebAccessOptIn;
- (id)publisherPaidWebAccessURL;
- (id)publisherSpecifiedArticles;
- (void)setTitleDisplayPrefix:(id)a0;
- (id)setTitleDisplayPrefixOverride:(id)a0;
- (void)setTitleDisplaySuffix:(id)a0;
- (id)setTitleDisplaySuffixOverride:(id)a0;
- (BOOL)sponsoredFeedEligible;
- (id)sportsRecommendationMappings;
- (id)sportsRecommendationMappingsJSON;
- (id)stocksFields;
- (id)titleDisplayPrefix;
- (id)titleDisplaySuffix;
- (BOOL)useCompactNameForPersonalizedPaywall;
- (unsigned long long)userFacingTagType;

@end
