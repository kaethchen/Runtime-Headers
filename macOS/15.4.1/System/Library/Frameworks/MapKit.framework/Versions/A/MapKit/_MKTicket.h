@class GEODirectionIntent, GEOMapServiceTraits, GEOMapRegion, GEOSearchSessionData, GEOGuideSummaryLayoutMetadata, MKMapItemIdentifier, NSString, GEOResultRefinementGroup, GEOPDPlaceSummaryLayoutMetadata, GEOSearchRedoButtonThreshold, GEORelatedSearchSuggestion, GEOSearchAutoRedoThreshold, NSArray, GEOResolvedItem, GEOCategorySearchResultSection, NSError, GEOSearchSectionList;
@protocol GEOMapServiceTicket;

@interface _MKTicket : NSObject <MKMapServiceTicket> {
    id<GEOMapServiceTicket> _ticket;
    NSArray *_exactMapItems;
    NSArray *_refinedMapItems;
    NSError *_error;
}

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly, nonatomic) NSArray *exactMapItems;
@property (readonly, nonatomic) NSArray *refinedMapItems;
@property (readonly, nonatomic) GEOMapRegion *boundingRegion;
@property (readonly, nonatomic, getter=isChainResultSet) BOOL chainResultSet;
@property (readonly, nonatomic) NSArray *relatedSearchSuggestions;
@property (readonly, nonatomic) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property (readonly, nonatomic) NSArray *browseCategories;
@property (readonly, nonatomic) int searchResultType;
@property (readonly, nonatomic) NSString *resultDisplayHeader;
@property (readonly, nonatomic) NSArray *displayHeaderSubstitutes;
@property (readonly, nonatomic) BOOL shouldEnableRedoSearch;
@property (readonly, nonatomic) BOOL shouldAllowManualRedoButton;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) GEOResolvedItem *clientResolvedResult;
@property (readonly, nonatomic) NSArray *retainedSearchMetadata;
@property (readonly, nonatomic) GEODirectionIntent *directionIntent;
@property (readonly, nonatomic) unsigned int dymSuggestionVisibleTime;
@property (readonly, nonatomic) BOOL showDymSuggestionCloseButton;
@property (readonly, nonatomic) NSString *sectionHeader;
@property (readonly, nonatomic) NSArray *searchResultSections;
@property (readonly, nonatomic) GEOCategorySearchResultSection *categorySearchResultSection;
@property (readonly, nonatomic) NSArray *relatedEntitySections;
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
@property (readonly, nonatomic) MKMapItemIdentifier *mapItemIdentifierForSpotlight;
@property (readonly, nonatomic) GEOSearchSessionData *searchSessionData;
@property (readonly, nonatomic) int mapDisplayType;
@property (readonly, nonatomic) GEOGuideSummaryLayoutMetadata *guideSummaryLayoutMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (void)submitWithHandler:(id /* block */)a0 networkActivity:(id /* block */)a1;
- (void)submitWithRefinedHandler:(id /* block */)a0 networkActivity:(id /* block */)a1;
- (void)applyToCorrectedSearch:(id)a0;
- (void)applyToPlaceInfo:(id)a0;
- (void)submitWithHandler:(id /* block */)a0 timeout:(long long)a1 networkActivity:(id /* block */)a2;
- (void)submitWithRefinedHandler:(id /* block */)a0 timeout:(long long)a1 networkActivity:(id /* block */)a2;
- (id)initWithTicket:(id)a0;
- (void)submitWithHandler:(id /* block */)a0 queue:(id)a1 networkActivity:(id /* block */)a2;
- (void)submitWithHandler:(id /* block */)a0 timeout:(long long)a1 queue:(id)a2 networkActivity:(id /* block */)a3;

@end
