@class SCRVisualsManager, AXFUIElement, SCRElement, NSString, SCRSearchHistory;

@interface SCRSearchManager : NSObject <AXVASearchWindowDelegateInterface>

@property (readonly, nonatomic) SCRVisualsManager *_visualsManager;
@property (retain, nonatomic) AXFUIElement *_previouslyFoundUIElementFromMarker;
@property (nonatomic) long long _previouslyFocusedElementHash;
@property (retain, nonatomic) SCRElement *_modalSearchStartElement;
@property (retain, nonatomic) AXFUIElement *_sharedTextDescendant;
@property (retain, nonatomic) SCRSearchHistory *_searchHistory;
@property (nonatomic) unsigned long long _searchHistoryPosition;
@property (retain, nonatomic) NSString *_inProgressSearchText;
@property (nonatomic) unsigned long long _previousHeadingLevel;
@property (nonatomic) unsigned long long _previousTableItemLevel;
@property (nonatomic) BOOL inProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)downArrowKeyDown;
- (void)returnKeyDown;
- (void)upArrowKeyDown;
- (long long)searchWithData:(id)a0;
- (id)_searchForMarkerInWebText:(id)a0 data:(id)a1;
- (id)_customRemoteSearchWebTextWithData:(id)a0;
- (id)_defaultRemoteSearchOnElement:(id)a0 data:(id)a1;
- (id)_defaultSearchWithData:(id)a0;
- (id)_enumerateRemoteSearchOnElement:(id)a0 data:(id)a1 block:(id /* block */)a2;
- (id)_enumerationAttributeForSearchKey:(long long)a0;
- (void)_exitFindTextModeWithStartElement:(id)a0;
- (void)_fallbackOnFailedSearchWithData:(id)a0;
- (long long)_handleResultSharedTextMarker:(id)a0 data:(id)a1;
- (long long)_handleSearchResultMarker:(id)a0 data:(id)a1 brailleFocusedElement:(id *)a2;
- (long long)_handleSearchResultMarker:(id)a0 inWebText:(id)a1 textData:(id)a2;
- (long long)_handleTextSearchResult:(id)a0 fromElement:(id)a1 request:(id)a2;
- (id)_iOSElementForSearchWithData:(id)a0 provider:(id)a1;
- (long long)_iOSSearchWithData:(id)a0;
- (void)_moveInSearchHistoryInDirection:(long long)a0 request:(id)a1;
- (id)_moveToUIElement:(id)a0 fromNonWebTextElement:(id)a1;
- (id)_moveToUIElement:(id)a0 fromNonWebTextElement:(id)a1 options:(unsigned long long)a2;
- (void)_playBorderSoundWithRequest:(id)a0;
- (void)_populateData:(id)a0 withTextElement:(id)a1;
- (long long)_preflightSearchWithData:(id)a0;
- (void)_processSearchResultWithData:(id)a0;
- (id)_recursiveDefaultSearchFromElement:(id)a0 data:(id)a1 depth:(unsigned long long)a2;
- (id)_replaceImageContainedByLinkWithLinkIfNeeded:(id)a0;
- (id)_searchForMarkerWithData:(id)a0;
- (id)_searchResultMarkerForWebTextField:(id)a0 data:(id)a1 handled:(BOOL *)a2;
- (void)_sendBrailleLineForSearch:(id)a0 withSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_updateElementRotor:(long long)a0;
- (void)_updateSearchStartInfoInData:(id)a0 withWebStitchedText:(id)a1;
- (id)_validProviderNearElement:(id)a0 attribute:(long long)a1;
- (id)_wrapWithData:(id)a0;
- (BOOL)enableFindTextModeWithRequest:(id)a0 element:(id)a1;
- (BOOL)handleSearchOperationWithEvent:(id)a0 request:(id)a1 element:(id)a2;
- (void)handleSearchResultMarker:(id)a0 data:(id)a1;
- (BOOL)handleTaggedOperationWithEvent:(id)a0 request:(id)a1 element:(id)a2;
- (id)initWithUserDefaults:(id)a0 visualsManager:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForAttribute:(long long)a0 direction:(long long)a1 fromLocation:(double)a2 element:(id)a3;
- (id)searchAndReturnElementWithAttribute:(long long)a0 fromElement:(id)a1 inContainerElement:(id)a2 direction:(long long)a3;
- (long long)searchFromElement:(id)a0 inContainerElement:(id)a1 direction:(long long)a2 request:(id)a3 handleResult:(BOOL)a4 withPredicate:(id /* block */)a5;
- (long long)searchWithAttribute:(long long)a0 fromElement:(id)a1 inContainerElement:(id)a2 direction:(long long)a3 request:(id)a4;
- (long long)searchWithText:(id)a0 fromElement:(id)a1 inContainerElement:(id)a2 direction:(long long)a3 request:(id)a4;

@end
