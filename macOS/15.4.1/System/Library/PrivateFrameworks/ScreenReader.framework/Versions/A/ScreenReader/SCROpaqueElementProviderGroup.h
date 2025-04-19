@class NSString;

@interface SCROpaqueElementProviderGroup : SCRElement

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _previousFocusedElementFrameInMyCoordinates;
@property (retain, nonatomic) NSString *_previousFocusedElementEquivalenceTag;

- (void).cxx_destruct;
- (id)roleDescription;
- (BOOL)isInteractive;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (BOOL)childrenShouldAddIndexToDescription;
- (unsigned long long)directInteractionArrowCaptureMask;
- (id)firstChildForFocusing;
- (id)focusOntoUIElement:(id)a0 withScrolling:(BOOL)a1 withSelection:(BOOL)a2;
- (long long)groupBehavior;
- (BOOL)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactUpShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)isContainerElement;
- (BOOL)isSectionView;
- (BOOL)moveFocusToContentSibling:(id)a0 inDirection:(long long)a1 onMove:(id /* block */)a2 scrollToElement:(BOOL)a3 speakDescription:(BOOL)a4 request:(id)a5;
- (BOOL)moveToContentSiblingAboveWithRequest:(id)a0;
- (BOOL)moveToContentSiblingBelowWithRequest:(id)a0;
- (BOOL)moveToFirstElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToNextContentSiblingWithRequest:(id)a0;
- (BOOL)moveToPreviousContentSiblingWithRequest:(id)a0;
- (unsigned long long)readContentsElementCount;
- (void)setFocusedChild:(id)a0;
- (BOOL)shouldSpeakItemCountWhenFocusingIn;

@end
