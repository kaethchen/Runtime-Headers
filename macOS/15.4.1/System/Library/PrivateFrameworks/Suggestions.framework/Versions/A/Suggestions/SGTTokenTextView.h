@class SGTSuggestion;

@interface SGTTokenTextView : NSTokenTextView {
    SGTSuggestion *completionSuggestion;
    SGTSuggestion *currentSuggestion;
}

@property (readonly, nonatomic) BOOL programmaticTextChange;

+ (void)initialize;
+ (id)cleanStringValueFromAttributedString:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributedString:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)didChangeText;
- (void)keyDown:(id)a0;
- (void)redo:(id)a0;
- (void)setSelectedRanges:(id)a0 affinity:(unsigned long long)a1 stillSelecting:(BOOL)a2;
- (void)undo:(id)a0;
- (BOOL)usesFindBar;
- (BOOL)usesFindPanel;
- (BOOL)usesFontPanel;
- (BOOL)usesRuler;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (id)_defaultMutableAttributedStringForString:(id)a0;
- (void)_discardUncleanPart;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfUncleanPart;
- (void)_sgt_invalidateLayout;
- (void)_updateCompletion;
- (void)_updateCompletionWithRangeOfCompletion:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 byTyping:(BOOL)a2;
- (void)_updateCurrentSuggestion;
- (BOOL)_usesTokens;
- (id)cleanStringValue;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })fixedSelectedRangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfCleanString;
- (void)setCompletionSuggestion:(id)a0;
- (void)setCurrentSuggestion:(id)a0;

@end
