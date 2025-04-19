@class NSString, NSTextView;

@interface ABSuggestedValueViewControllerSnippetHelper : NSObject

@property (readonly, copy) NSString *snippet;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly) NSTextView *textView;

+ (void)enumerateLinesInSnippet:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 usingBlock:(id /* block */)a2;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfTrimmedString:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfTrimmedString:(id)a0 atSubstringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)selectionAttributes;

- (void).cxx_destruct;
- (void)enumerateLinesUsingBlock:(id /* block */)a0;
- (id)selectedRanges;
- (void)updateTextView;
- (void)applyEmptySnippet;
- (void)applyHighlighting;
- (void)applyNonEmptySnippet;
- (void)applySelection;
- (void)applyStringValue;
- (id)initWithSnippet:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 textView:(id)a2;
- (void)scrollSelectionToVisible;

@end
