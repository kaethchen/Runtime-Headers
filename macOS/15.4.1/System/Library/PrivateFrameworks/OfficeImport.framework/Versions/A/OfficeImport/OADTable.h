@class OADTableGrid, NSMutableArray;

@interface OADTable : OADDrawable {
    OADTableGrid *mGrid;
    NSMutableArray *mRows;
}

+ (void)applyTextStyle:(id)a0 toParagraphProperties:(id)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)addRow;
- (id)rowAtIndex:(unsigned long long)a0;
- (unsigned long long)rowCount;
- (struct OADTMatrixPos { int x0; int x1; })masterPosOfPos:(struct OADTMatrixPos { int x0; int x1; })a0;
- (id)tableProperties;
- (id)cellAtPos:(struct OADTMatrixPos { int x0; int x1; })a0;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0;
- (void)flattenStyle;
- (void)flipTableRTL;
- (id)grid;
- (id)masterCellOfPos:(struct OADTMatrixPos { int x0; int x1; })a0;
- (void)setParentTextListStyle:(id)a0;

@end
