@class NSArray;

@interface IMKUISingleCandidateListView : IMKUICandidateListView

@property (retain, nonatomic) NSArray *selectionKeys;

- (void).cxx_destruct;
- (void)setFirstLine:(unsigned long long)a0;
- (void)didUpdateViewBounds;
- (id)groupTitleForLineWithIndex:(long long)a0;
- (void)updateSelectionKeysWithIndices:(id)a0 selectionKeyCount:(unsigned long long)a1;
- (id)viewForLineWithIndex:(long long)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
