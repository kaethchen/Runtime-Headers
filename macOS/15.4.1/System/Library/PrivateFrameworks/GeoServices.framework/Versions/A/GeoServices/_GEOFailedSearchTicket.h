@class GEODirectionIntent, GEOMapServiceTraits, GEOMapRegion, GEOGuideSummaryLayoutMetadata, GEOMapItemIdentifier, GEOPDMerchantLookupResult, NSString, GEOResultRefinementGroup, GEOSearchRedoButtonThreshold, GEOPDPlaceSummaryLayoutMetadata, GEORelatedSearchSuggestion, GEOResolvedItem, NSArray, GEOSearchAutoRedoThreshold, GEOCategorySearchResultSection, GEOSearchSectionList, GEOSearchSessionData;

@interface _GEOFailedSearchTicket : _GEOFailedTicket <GEOMapServiceSearchTicket> {
    NSString *searchQuery;
}

@property (readonly, nonatomic) NSString *searchQuery;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly, nonatomic) GEOMapRegion *resultBoundingRegion;
@property (readonly, nonatomic, getter=isChainResultSet) BOOL chainResultSet;
@property (readonly, nonatomic) NSArray *relatedSearchSuggestions;
@property (readonly, nonatomic) NSArray *browseCategories;
@property (readonly, nonatomic) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property (readonly, nonatomic) NSString *resultSectionHeader;
@property (readonly, nonatomic) int searchResultType;
@property (readonly, nonatomic) NSString *resultDisplayHeader;
@property (readonly, nonatomic) NSArray *displayHeaderSubstitutes;
@property (readonly, nonatomic) BOOL shouldEnableRedoSearch;
@property (readonly, nonatomic) BOOL shouldAllowManualRedoSearch;
@property (readonly, nonatomic) GEOResolvedItem *clientResolvedResult;
@property (readonly, nonatomic) GEODirectionIntent *directionIntent;
@property (readonly, nonatomic) NSArray *retainedSearchMetadata;
@property (readonly, nonatomic) NSArray *searchResultSections;
@property (readonly, nonatomic) GEOCategorySearchResultSection *categorySearchResultSection;
@property (readonly, nonatomic) NSArray *relatedEntitySections;
@property (readonly, nonatomic) unsigned int dymSuggestionVisibleTime;
@property (readonly, nonatomic) BOOL showDymSuggestionCloseButton;
@property (nonatomic) unsigned long long cachePolicy;
@property (readonly, nonatomic) GEOPDMerchantLookupResult *merchantLookupResult;
@property (readonly, nonatomic) NSArray *collectionResults;
@property (readonly, nonatomic) NSArray *publisherResults;
@property (readonly, nonatomic) NSArray *dotPlaces;
@property (readonly, nonatomic) GEOSearchAutoRedoThreshold *searchAutoRedoThreshold;
@property (readonly, nonatomic) GEOSearchRedoButtonThreshold *searchRedoButtonThreshold;
@property (readonly, nonatomic) GEOPDPlaceSummaryLayoutMetadata *placeSummaryLayoutMetadata;
@property (readonly, nonatomic) GEOResultRefinementGroup *resultRefinementGroup;
@property (readonly, nonatomic) GEOSearchSectionList *searchSectionList;
@property (readonly, nonatomic) BOOL disableAdditionalViewportPadding;
@property (readonly, nonatomic) int searchResultViewType;
@property (readonly, nonatomic) BOOL enableStructuredRAPAffordance;
@property (readonly, nonatomic) GEOMapItemIdentifier *geoMapItemIdentifierForSpotlight;
@property (readonly, nonatomic) GEOSearchSessionData *searchSessionData;
@property (readonly, nonatomic) int mapDisplayType;
@property (readonly, nonatomic) GEOGuideSummaryLayoutMetadata *guideSummaryLayoutMetadata;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct { int x0; union { int x0; int x1; int x2; } x1; } dataRequestKind;

- (void).cxx_destruct;
- (id)initWithError:(id)a0 searchQuery:(id)a1 traits:(id)a2;

@end
