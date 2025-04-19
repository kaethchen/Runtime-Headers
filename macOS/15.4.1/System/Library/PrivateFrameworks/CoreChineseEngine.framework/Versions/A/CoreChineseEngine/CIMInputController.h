@class IMKKeyboardInputController, NSString, CIMBaseEngine;

@interface CIMInputController : IMKCandidateBasedInputController <CIMMenuControllerDataSource>

@property (retain, nonatomic) Class engineClass;
@property (retain, nonatomic) CIMBaseEngine *inputModeEngine;
@property (retain, nonatomic) IMKKeyboardInputController *keyboardInputController;
@property (readonly, nonatomic) BOOL windowIsHorizontal;
@property (readonly) unsigned long long scriptType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)menu;
- (void)activateServer:(id)a0;
- (void)commitComposition:(id)a0;
- (void)deactivateServer:(id)a0;
- (BOOL)didCommandBySelector:(SEL)a0 client:(id)a1;
- (unsigned long long)recognizedEvents:(id)a0;
- (void)setValue:(id)a0 forTag:(long long)a1 client:(id)a2;
- (id)inlineText;
- (void)menuItemAction:(id)a0;
- (id)informationView;
- (void)candidateSelected:(id)a0 candidateController:(id)a1;
- (void)candidateSelectionChanged:(id)a0 candidateController:(id)a1;
- (id)candidates:(id)a0;
- (void)didHideCandidates:(id)a0;
- (void)didSelectSortingMode:(id)a0 candidateController:(id)a1;
- (BOOL)handleEvent:(id)a0 client:(id)a1;
- (void)inputControllerWillClose;
- (BOOL)inputText:(id)a0 client:(id)a1;
- (id)makeCandidateController;
- (id)makeScrubbingCandidateController;
- (BOOL)mouseDownOnCharacterIndex:(unsigned long long)a0 coordinate:(struct CGPoint { double x0; double x1; })a1 withModifier:(unsigned long long)a2 continueTracking:(BOOL *)a3 client:(id)a4;
- (BOOL)mouseMovedOnCharacterIndex:(unsigned long long)a0 coordinate:(struct CGPoint { double x0; double x1; })a1 withModifier:(unsigned long long)a2 client:(id)a3;
- (BOOL)mouseUpOnCharacterIndex:(unsigned long long)a0 coordinate:(struct CGPoint { double x0; double x1; })a1 withModifier:(unsigned long long)a2 client:(id)a3;
- (BOOL)selectionShouldBeReflectedInTouchBar;
- (void)updateCandidateController:(id)a0;
- (BOOL)automaticallyRestrictLayoutToPrimaryCandidateControllerLayout;
- (BOOL)isUsingSortingBar;
- (unsigned long long)optionsForMenuController:(id)a0;
- (id)selectedStringForMenuController:(id)a0;
- (void)setInputMode:(id)a0 client:(id)a1;

@end
