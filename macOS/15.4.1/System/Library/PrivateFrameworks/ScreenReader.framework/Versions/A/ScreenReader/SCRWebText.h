@class SCRWebArea;

@interface SCRWebText : SCRTextElement

@property (retain, nonatomic, setter=_setWebAreaRepresentation:) SCRWebArea *_webAreaRepresentation;

- (void)dealloc;
- (id)stringForRange:(id)a0;
- (id)selectedTextRange;
- (id)visibleCharacterRange;
- (id)valueDescription;
- (void)setSelectedTextRange:(id)a0;
- (id)lastPosition;
- (BOOL)openContextualMenu;
- (id)attributedStringForRange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForRange:(id)a0;
- (id)sentenceEndMarkerAfterPosition:(id)a0;
- (id)_characterMarkerFromPosition:(id)a0 next:(BOOL)a1;
- (BOOL)_isLineEndPosition:(id)a0 forLineRange:(id)a1;
- (BOOL)_isLineStartPosition:(id)a0 forLineRange:(id)a1;
- (void)_registerForSelectionChangedNotification;
- (void)addLineInfoSummaryToRequest:(id)a0;
- (BOOL)allowsDragForUIElement:(id)a0;
- (id)attributedValueDescription;
- (id)axVisibleCharacterRange;
- (id)characterMarkerAfterPosition:(id)a0;
- (id)characterMarkerBeforePosition:(id)a0;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (void)echoDataInRange:(id)a0 request:(id)a1 showOnScreen:(BOOL)a2 feedbackType:(long long)a3 withScrolling:(BOOL)a4;
- (void)echoDataInRange:(id)a0 request:(id)a1 showOnScreen:(BOOL)a2 feedbackType:(long long)a3 withScrolling:(BOOL)a4 braille:(BOOL)a5;
- (id)firstPosition;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (void)handleTextSelectionChange;
- (BOOL)isContainerElement;
- (BOOL)isSelectionSettable;
- (BOOL)isWebElement;
- (BOOL)isWebText;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })localRangeOfTextMarkerRange:(id)a0 insideTextMarkerRange:(id)a1;
- (id)markerForScreenPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)paragraphEndMarkerAfterPosition:(id)a0;
- (id)paragraphRangeForPosition:(id)a0;
- (id)paragraphStartMarkerBeforePosition:(id)a0;
- (id)previousSelectionRange;
- (id)rangeForStartMarker:(id)a0 withOffset:(unsigned long long)a1 length:(unsigned long long)a2;
- (void)readCurrentParagraph:(id)a0;
- (void)readCurrentSentence:(id)a0;
- (BOOL)readNextParagraph:(id)a0;
- (BOOL)readNextSentence:(id)a0;
- (BOOL)readPreviousParagraph:(id)a0;
- (BOOL)readPreviousSentence:(id)a0;
- (id)sentenceRangeForPosition:(id)a0;
- (id)styleRangeForPosition:(id)a0;
- (BOOL)synchKeyboardToVOCursor:(id)a0;
- (BOOL)tabOrDrillInShouldTempDisableQuickNav;
- (id)textMarkerForString:(id)a0 startingAtUIElement:(id)a1 searchOptions:(unsigned long long)a2;
- (id)wordRangeAfterPosition:(id)a0;
- (id)wordRangeBeforePosition:(id)a0;
- (id)wordRangeForPosition:(id)a0;

@end
