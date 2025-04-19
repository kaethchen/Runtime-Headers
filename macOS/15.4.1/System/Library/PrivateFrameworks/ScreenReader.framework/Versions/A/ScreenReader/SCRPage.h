@class SCRElement;

@interface SCRPage : SCRMapElement

@property (retain, nonatomic) SCRElement *_readFromBeginningStopElement;
@property (nonatomic) BOOL isAutoInteractingWithText;

+ (BOOL)_shouldTreatAsTextNavigationForElement:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)pageIndex;
- (id)previousElement;
- (id)nextElement;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (BOOL)_focusOntoElement:(id)a0 previouslyFocusedUIElement:(id)a1 inPage:(id)a2 withRequest:(id)a3;
- (BOOL)_handleMoveToNextLineInContentWithRequest:(id)a0;
- (BOOL)_handleMoveToPreviousLineInContentWithRequest:(id)a0;
- (BOOL)_moveToChildElementVerticallyAlignedAbove:(BOOL)a0 withFocusedChild:(id)a1 request:(id)a2;
- (id)_pageIndex;
- (id)_pageIndexDescription;
- (void)_resetFocusedTextNavigationElement;
- (void)_setKeyboardSyncForUIElement:(id)a0;
- (id)_totalPages;
- (id)_totalPagesDescription;
- (BOOL)addContentSummaryToRequest:(id)a0;
- (void)addContentToRequest:(id)a0 visibleOnly:(BOOL)a1;
- (void)addItemNameToRequest:(id)a0;
- (void)addItemTypeToRequest:(id)a0;
- (BOOL)addLocalizedPageNumberToRequest:(id)a0 includeTotalPages:(BOOL)a1 withBrailleAlert:(BOOL)a2;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)isContainerElement;
- (BOOL)isSectionView;
- (BOOL)moveFirstWithEvent:(id)a0 request:(id)a1 visibleOnly:(BOOL)a2;
- (BOOL)moveLastWithEvent:(id)a0 request:(id)a1 visibleOnly:(BOOL)a2;
- (BOOL)moveToContentInDirection:(long long)a0 granularity:(long long)a1 request:(id)a2;
- (BOOL)readFromBeginningWithRequest:(id)a0;
- (BOOL)shouldStopReadFromBeginning;

@end
