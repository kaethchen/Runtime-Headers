@class SFCard, NSString, NSArray, NSURL, SFSearchResult, WFContextualAction, SFCardSection, NSUserActivity, SFColor, SFImage;

@interface SearchUIRowModel : NSObject <QLPreviewItem, NSCopying>

@property (readonly) NSURL *previewItemURL;
@property (readonly) NSString *previewItemTitle;
@property (readonly) id previewItemDisplayState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long queryId;
@property (retain, nonatomic) NSArray *results;
@property (retain, nonatomic) SFSearchResult *identifyingResult;
@property (retain, nonatomic) SFCardSection *cardSection;
@property (retain, nonatomic) NSString *itemIdentifier;
@property (nonatomic) BOOL hasValidCommandHandler;
@property (retain, nonatomic) WFContextualAction *contextualAction;
@property (nonatomic) BOOL contextualActionLoaded;
@property (readonly, nonatomic) NSArray *punchouts;
@property (readonly, nonatomic) NSArray *contactIdentifiers;
@property (readonly, nonatomic) NSString *reuseIdentifier;
@property (readonly, nonatomic) Class cellViewClass;
@property (readonly, nonatomic) Class collectionViewCellClass;
@property (readonly, nonatomic) SFCard *nextCard;
@property (readonly, nonatomic) BOOL isTappable;
@property (readonly, nonatomic) BOOL isFocusable;
@property (readonly, nonatomic) int separatorStyle;
@property (readonly, nonatomic) BOOL isDraggable;
@property (readonly, nonatomic) NSString *dragTitle;
@property (readonly, nonatomic) NSString *dragSubtitle;
@property (readonly, nonatomic) NSString *dragText;
@property (readonly, nonatomic) NSURL *dragURL;
@property (readonly, nonatomic) NSString *dragAppBundleID;
@property (readonly, nonatomic) BOOL isQuerySuggestion;
@property (readonly, nonatomic) NSString *accessibilityIdentifier;
@property (readonly, nonatomic) BOOL supportsCustomUserReportRequestAfforance;
@property (readonly, nonatomic) BOOL hasLeadingImage;
@property (readonly, nonatomic) BOOL prefersNoSeparatorAbove;
@property (readonly, nonatomic) BOOL fillsBackgroundWithContent;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) NSString *coreSpotlightIdentifier;
@property (readonly, nonatomic) NSString *displayTitle;
@property (readonly, nonatomic) NSString *fileProviderIdentifier;
@property (readonly, nonatomic) BOOL allowsAppEntityAnnotation;
@property (copy, nonatomic) NSString *previewItemTitle;
@property (retain, nonatomic) NSUserActivity *launchActivity;
@property (copy, nonatomic) NSString *launchActivityAppBundleId;
@property (retain, nonatomic) SFColor *backgroundColor;
@property (retain, nonatomic) SFImage *backgroundImage;
@property (nonatomic) unsigned long long cornerMask;
@property (nonatomic) BOOL hasCustomCornerRounding;
@property (nonatomic) BOOL isTopHit;
@property (nonatomic) long long sectionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToModel:(id)a0;
- (id)initWithResults:(id)a0 itemIdentifier:(id)a1;
- (BOOL)allowBackgroundColor;
- (id)initWithCardSection:(id)a0 queryId:(unsigned long long)a1 itemIdentifier:(id)a2;
- (id)initWithResult:(id)a0 cardSection:(id)a1 queryId:(unsigned long long)a2 itemIdentifier:(id)a3;
- (id)initWithResult:(id)a0 itemIdentifier:(id)a1;
- (id)initWithResults:(id)a0 cardSection:(id)a1 queryId:(unsigned long long)a2 itemIdentifier:(id)a3;
- (void)updateWithEnvironment:(id)a0;

@end
