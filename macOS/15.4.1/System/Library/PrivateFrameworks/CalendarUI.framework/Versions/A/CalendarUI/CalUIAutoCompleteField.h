@class CNAutocompleteStore;

@interface CalUIAutoCompleteField : CalUISuggestionsField

@property (weak) CNAutocompleteStore *autocompleteStore;

- (void).cxx_destruct;
- (void)createSuggestionController;
- (id)initWithResizeEnabled:(BOOL)a0;
- (id)newSuggestionWindow;
- (id)resultForString:(id)a0;
- (void)setCNAutocompleteStore:(id)a0;
- (void)updateSuggestionWindowWithSuggestions:(id)a0;
- (void)updateWindowFrameOrigin;

@end
