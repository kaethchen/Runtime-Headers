@class NSString, NSMutableArray, SCRElementHistory;

@interface SCRSheet : SCRMapElement <SCRElementHistoryVendor> {
    BOOL _hasToolbarPalette;
    SCRElementHistory *_elementHistory;
}

@property (retain, nonatomic) NSMutableArray *_trackedItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)typeDescription;
- (id)_elementHistory;
- (id)prepareUIChildrenForNavigation:(id)a0;
- (BOOL)_handleNavigateToFirstLastElement:(id)a0 commandKey:(id)a1 event:(id)a2 request:(id)a3;
- (BOOL)_moveFirstInSheetWithEvent:(id)a0 request:(id)a1;
- (BOOL)_moveLastInSheetWithEvent:(id)a0 request:(id)a1;
- (BOOL)_moveToToolbarWithEvent:(id)a0 request:(id)a1;
- (void)_regenerateSystemSections;
- (void)_removeAllTrackedElements;
- (void)_removeTrackedElementsForKey:(id)a0;
- (void)addElementToHistory:(id)a0;
- (void)addElementToHistory:(id)a0 event:(id)a1;
- (void)addToHistory;
- (id)allTrackedItemsInfoWithUpdate:(BOOL)a0;
- (id)buildDefaultChildrenWithUIElements:(id)a0;
- (void)buildResizeOptionsMenu:(id)a0;
- (BOOL)enableResizeModeWithRequest:(id)a0 handleIndex:(unsigned long long)a1;
- (void)flushCurrentScreen;
- (void)flushElementHistory;
- (long long)groupBehavior;
- (BOOL)handleUntaggedOperationWithEvent:(id)a0 request:(id)a1;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (id)lastNavigatedValidUIElement;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (id)parentVendor;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (id)removeLastUIElementFromHistory;
- (id)screenHistory;
- (void)setFocusedChild:(id)a0;
- (void)setKeyboardChild:(id)a0;
- (void)setKeyboardChild:(id)a0 force:(BOOL)a1;
- (void)setTrackedElement:(id)a0 key:(id)a1;
- (BOOL)shouldFocusOntoChild:(id)a0;
- (BOOL)shouldSpeakItemCountWhenFocusingIn;
- (BOOL)shouldTrackKeyboardOnFocusInto;
- (void)startNewScreen;
- (BOOL)startWindowContentFeedback:(id)a0;
- (id)trackedElementForKey:(id)a0;

@end
