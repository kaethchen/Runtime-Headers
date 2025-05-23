@class NSCache, NSArray, NSString, NSMutableArray, NSMutableDictionary, SLHighlightCenter, NSObject;
@protocol OS_dispatch_queue, WBSStartPageSuggestionsProviderDelegate;

@interface WBSHighlightManager : NSObject <SLHighlightCenterDelegate, WBSStartPageSuggestionsProvider> {
    SLHighlightCenter *_highlightCenter;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSCache *_linkDataCache;
    NSMutableArray *_deferredAttributionPresenters;
    NSMutableDictionary *_highlightToAttributionViewMap;
}

@property (copy, nonatomic, setter=_setHighlights:) NSArray *highlights;
@property (readonly, nonatomic) BOOL isFetchingHighlights;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *providerSectionIdentifier;
@property (weak, nonatomic) id<WBSStartPageSuggestionsProviderDelegate> suggestionsProviderDelegate;
@property (readonly, copy, nonatomic) NSArray *suggestions;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (void)_handleRemovalOfHighlights:(id)a0;
- (void)_updateAttributionViews;
- (void)_updateHighlights;
- (id)attributionViewForHighlight:(id)a0;
- (id)attributionViewForSuggestion:(id)a0;
- (void)fetchMetadataForHighlight:(id)a0 completionHandler:(id /* block */)a1;
- (id)fetchMetadataForSuggestion:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadLinkMetadataForMessageWithGUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendFeedbackForHighlight:(id)a0 withType:(unsigned long long)a1 inPrivateBrowsing:(BOOL)a2;
- (void)updateHighlightForAttributionPresenter:(id)a0;
- (void)_didFetchHighlights;
- (void)_enableNewSLAttributionViewAppereance;
- (void)_showBannerIfNeededForPresenter:(id)a0;
- (void)highlightCenter:(id)a0 didRemoveHighlights:(id)a1;
- (void)highlightCenterDidAddHighlights:(id)a0;

@end
