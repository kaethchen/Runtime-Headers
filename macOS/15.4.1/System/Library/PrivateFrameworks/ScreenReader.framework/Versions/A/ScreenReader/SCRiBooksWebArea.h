@class SCRElement;

@interface SCRiBooksWebArea : SCRWebArea

@property (retain, nonatomic) SCRElement *cachedFirstChildForFocusing;

- (void).cxx_destruct;
- (id)roleDescription;
- (id)_bookContentAtIndex:(unsigned long long)a0 container:(id)a1;
- (id)_bookContentContainer;
- (void)_checkPageDidTurn;
- (id)_elementForEmptyPageScrollFocusElement;
- (BOOL)_handleParagraphRotorWithDirection:(BOOL)a0 event:(id)a1 request:(id)a2;
- (BOOL)_handleRotorWithDirection:(BOOL)a0 event:(id)a1 request:(id)a2;
- (void)addElementToHistory:(id)a0;
- (void)addElementToHistory:(id)a0 event:(id)a1;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (id)elementHistoryVendor;
- (void)flushCurrentScreen;
- (void)flushElementHistory;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (BOOL)handleInvertedTDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)handleInvertedTUpWithEvent:(id)a0 request:(id)a1;
- (id)lastNavigatedValidUIElement;
- (BOOL)moveOutWithEvent:(id)a0 request:(id)a1;
- (BOOL)navigatingWithWebGroups;
- (id)parentVendor;
- (id)removeLastUIElementFromHistory;
- (id)rotorIdentifiers;
- (id)screenHistory;
- (BOOL)shouldMapElement:(id)a0;
- (BOOL)shouldNavigate;
- (void)startNewScreen;
- (BOOL)turnPage:(BOOL)a0 fromSource:(long long)a1;

@end
