@interface SCRSafariAutoSuggestionTableCell : SCRCell

- (id)statusDescription;
- (void)_addCoordinatesInfoToRequest:(id)a0;
- (BOOL)_shouldIncludeElementForDescription:(id)a0;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (id)reorderedChildrenForSummaryDescription:(id)a0;

@end
