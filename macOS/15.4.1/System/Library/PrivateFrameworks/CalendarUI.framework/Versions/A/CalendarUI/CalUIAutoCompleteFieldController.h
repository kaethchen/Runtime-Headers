@interface CalUIAutoCompleteFieldController : CalUISuggestionsFieldController

- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (BOOL)readPasteboard:(id)a0;
- (id)autocompleteField;

@end
