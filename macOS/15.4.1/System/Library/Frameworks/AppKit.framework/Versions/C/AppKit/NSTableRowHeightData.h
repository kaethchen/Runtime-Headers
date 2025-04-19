@class NSTableView, NSMutableIndexSet;

@interface NSTableRowHeightData : NSObject <NSCopying> {
    NSTableView *_tableView;
    long long _numberOfRows;
    struct { double x0; double x1; } *_rowSpans;
    long long _rowSpansCapacity;
    long long _gapRow;
    double _gapRowHeight;
    double _estimatedRowHeight;
    NSMutableIndexSet *_cachedRows;
    unsigned char _hasValidNumberOfRows : 1;
    unsigned char _supportsVariableRowHeights : 1;
    unsigned char _hasValidRowSpansStorage : 1;
    unsigned char _updatingRowSpans : 1;
    unsigned char _automaticallyEstimatesRowHeights : 1;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
