@class ACSHPanelButton, NSArray;

@interface ACSHPanelTextPredictionList : ACSHPanelGroup

@property (retain) ACSHPanelButton *_defaultButton;
@property (retain) NSArray *_previousActions;
@property unsigned long long _previousSuggestionCount;
@property (nonatomic) BOOL isShowingNoSuggestions;

+ (id)_actionForSuggestion:(id)a0 defaultAction:(id)a1;

- (void).cxx_destruct;
- (id)initWithUndoManager:(id)a0;
- (id)_insertSuggestionReturningButton:(id)a0 actionsByWordSuggestion:(id)a1;
- (unsigned long long)_insertWordSuggestions:(id)a0 fromIndex:(unsigned long long)a1 currentWidth:(double)a2 maxWidth:(double)a3 actionsByWordSuggestion:(id)a4;
- (double)_totalWidthForPanelElements:(id)a0 buttonSpacing:(unsigned long long)a1 toIndex:(unsigned long long)a2;
- (BOOL)canBeBrokenApart;
- (BOOL)containsNonNavigablePanelElementsOnly;
- (id)dictionaryForSaving;
- (void)sizeToFitPanelElements;
- (void)updateWithSuggestion:(id)a0;

@end
