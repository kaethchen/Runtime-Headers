@interface SCRXcodeTextElement : SCRStandardText

- (void)_selectionDidChange:(id)a0;
- (id)textualContext;
- (BOOL)_readCharacter:(id)a0 forward:(BOOL)a1;
- (BOOL)_shouldReadBetweenPreviousAndCurrentSelectionWithRange:(id)a0;
- (void)addLineInfoSummaryToRequest:(id)a0;
- (id)attributedStringWithoutPlaceholderSymbolsForString:(id)a0;
- (void)handleTextChangeWithUserInfo:(id)a0;
- (void)handleTextSelectionChange;
- (BOOL)ignoreTextMarkerRange:(id)a0;
- (BOOL)isXcodeTextElement;
- (BOOL)readNextCharacter:(id)a0;
- (BOOL)readPreviousCharacter:(id)a0;
- (id)wordRangeAfterPosition:(id)a0;
- (id)wordRangeBeforePosition:(id)a0;

@end
