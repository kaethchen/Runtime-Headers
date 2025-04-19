@class NSMutableArray;

@interface OADTableRow : NSObject {
    NSMutableArray *mCells;
    float mHeight;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (float)height;
- (void)setHeight:(float)a0;
- (id)cellAtIndex:(unsigned long long)a0;
- (id)addCell;
- (unsigned long long)cellCount;
- (void)flipCellsRTL;

@end
