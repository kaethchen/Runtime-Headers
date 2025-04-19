@interface SCRiBooksStandardText : SCRStandardText

@property (nonatomic) BOOL didPerformTurnPage;
@property (nonatomic) struct { long long type; struct { long long direction; long long granularity; } selection; } lastTextCommand;
@property (nonatomic) BOOL turnedPageFromReadAll;

- (BOOL)scrollToNextPage;
- (void)_conditionallyTurnPage:(struct { long long x0; struct { long long x0; long long x1; } x1; })a0 request:(id)a1;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (id)_adjacentChapterContainter:(struct { long long x0; struct { long long x0; long long x1; } x1; })a0;
- (void)_handlePageScrolled:(id)a0;
- (void)_iBooksPerformTurnPage:(struct { long long x0; struct { long long x0; long long x1; } x1; })a0;
- (BOOL)_iBooksShouldTurnPage:(struct { long long x0; struct { long long x0; long long x1; } x1; })a0;
- (BOOL)addContentSummaryToRequest:(id)a0;
- (void)addTextBoundryToRequest:(id)a0 edge:(long long)a1;
- (id)captionDescription;
- (BOOL)handleReadContentsCallbackForEvent:(id)a0 request:(id)a1 visibleOnly:(BOOL)a2;
- (void)iBooksAdvanceToNextTextElementWithEvent:(id)a0 request:(id)a1;
- (id)iBooksFirstMarker;
- (id)iBooksFocusIntoTextUIElement:(id)a0 withEvent:(id)a1 request:(id)a2 direction:(long long)a3;
- (BOOL)iBooksHasReachedBeginningOfTextElementWithGranularity:(long long)a0;
- (BOOL)iBooksHasReachedEndOfTextElementWithGranularity:(long long)a0;
- (id)iBooksInteractWithoutBoundaryCheckWithEvent:(id)a0 request:(id)a1 direction:(long long)a2;
- (id)iBooksLastMarker;
- (BOOL)iBooksMarkerIsInNextSibling:(id)a0;
- (BOOL)iBooksMarkerIsInPreviousSibling:(id)a0;
- (id)iBooksMoveToTextElementWithEvent:(id)a0 request:(id)a1 direction:(long long)a2;
- (BOOL)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageDownCommandWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageDownShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageUpCommandWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageUpShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (id)lineAfterRange:(id)a0 affinity:(long long)a1;
- (id)nextLineRangeForPosition:(id)a0;
- (BOOL)readContentAtBoundaryWithTextCommand:(struct { long long x0; struct { long long x0; long long x1; } x1; })a0 request:(id)a1;
- (BOOL)scrollToPreviousPage;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;

@end
