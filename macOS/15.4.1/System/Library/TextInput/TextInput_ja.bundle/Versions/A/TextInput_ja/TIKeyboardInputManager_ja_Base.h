@interface TIKeyboardInputManager_ja_Base : TIKeyboardInputManagerMecabra

- (BOOL)supportsSetPhraseBoundary;
- (BOOL)usesCandidateSelection;
- (BOOL)delayedCandidateList;
- (id)keyboardBehaviors;
- (void)loadDictionaries;
- (void)loadFavoniusTypingModel;

@end
