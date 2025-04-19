@class NSString, NSArray, NSTextField;

@interface AFUIMenuView : NSView <NSTextSuggestionsDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSTextField *textField;
@property (copy) id /* block */ responseHandler;
@property (copy) NSArray *suggestionItemSections;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textField:(id)a0 didSelectSuggestionItem:(id)a1;
- (void)textField:(id)a0 provideUpdatedSuggestions:(id /* block */)a1;
- (id)textField:(id)a0 textCompletionForSuggestionItem:(id)a1;
- (void)viewDidMoveToWindow;
- (void)__respondWithSuggestionItems;
- (void)_respondWithSuggestionItems;

@end
