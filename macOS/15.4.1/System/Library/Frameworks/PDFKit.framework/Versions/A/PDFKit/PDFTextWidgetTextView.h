@interface PDFTextWidgetTextView : NSTextView <NSTextContentPrivate>

- (id)accessibilityLabel;
- (id)accessibilityParent;
- (id)accessibilityTitleUIElement;
- (void)insertTextSuggestion:(id)a0 completionHandler:(id /* block */)a1;
- (void)autoFillDidInsertWithExplicitInvocationMode:(BOOL)a0;

@end
