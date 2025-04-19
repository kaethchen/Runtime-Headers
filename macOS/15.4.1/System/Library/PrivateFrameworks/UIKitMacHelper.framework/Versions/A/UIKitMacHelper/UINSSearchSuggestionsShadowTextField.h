@interface UINSSearchSuggestionsShadowTextField : NSSearchField

@property (nonatomic) BOOL isFirstResponderOverrideValue;

- (BOOL)_searchSuggestionsFirstResponderOverrideEnabled;
- (BOOL)_searchSuggestionsFirstResponderOverrideValue;

@end
