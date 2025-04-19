@class NSMutableArray;

@interface OADTableGrid : NSObject {
    NSMutableArray *mColumns;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)columnCount;
- (id)addColumn;
- (id)columnAtIndex:(unsigned long long)a0;
- (void)flipColumnsRTL;

@end
