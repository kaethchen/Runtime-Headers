@class NSMutableDictionary, NSArray, IMKCandidate, NSColor;

@interface IMKUICandidateBarListView : IMKUICandidateListView

@property (nonatomic) unsigned long long indexOfSelectedCandidate;
@property (retain, nonatomic) NSMutableDictionary *selectionKeyToCandidateMapping;
@property (nonatomic) BOOL animateChanges;
@property (nonatomic) double candidateItemMargin;
@property (nonatomic) BOOL highlightsLineWithSelectedIndex;
@property (retain, nonatomic) NSColor *lineHighlightedColor;
@property (retain, nonatomic) IMKCandidate *selectedCandidate;
@property (retain, nonatomic) NSArray *selectionKeys;
@property (readonly, nonatomic) BOOL selectedCandidateIsVisible;
@property (nonatomic) BOOL showsDelimiterLines;

- (void).cxx_destruct;
- (void)updateHighlightBasedOnSelection;
- (id)candidateForSelectionKey:(id)a0;
- (void)checkSelectionKeysForBarView:(id)a0 layoutEntry:(id)a1 animate:(BOOL)a2;
- (id)groupTitleForLineWithIndex:(long long)a0;
- (void)setCandidateLayout:(id)a0;
- (void)showSelectionKeys:(BOOL)a0 barView:(id)a1;
- (void)updateIndexOfSelectedCandidate;
- (void)updateLines:(id)a0 animate:(BOOL)a1;
- (id)viewForLineWithIndex:(long long)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
