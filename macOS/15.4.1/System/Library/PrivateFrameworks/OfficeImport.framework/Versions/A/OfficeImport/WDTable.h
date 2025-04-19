@class WDTableProperties, NSMutableArray;

@interface WDTable : WDBlock {
    WDTableProperties *mProperties;
    NSMutableArray *mRows;
}

- (id)description;
- (void).cxx_destruct;
- (void)clearProperties;
- (int)nestingLevel;
- (id)addRow;
- (id)insertRowAtIndex:(unsigned long long)a0;
- (id)properties;
- (unsigned long long)rowCount;
- (id)initWithText:(id)a0;
- (id)rowAt:(unsigned long long)a0;
- (int)blockType;
- (id)newCellIterator;
- (id)cellIterator;
- (void)clearRows;
- (id)newRowIterator;
- (id)newRunIterator;
- (id)rowIterator;
- (id)runIterator;

@end
