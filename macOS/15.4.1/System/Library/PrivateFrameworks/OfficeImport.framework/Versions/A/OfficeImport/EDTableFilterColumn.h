@class NSMutableArray;

@interface EDTableFilterColumn : NSObject {
    unsigned long long mColumnIndex;
    NSMutableArray *mFilters;
    int mFiltersRelation;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setColumnIndex:(unsigned long long)a0;
- (unsigned long long)columnIndex;
- (void)addFilter:(id)a0;
- (id)filterAtIndex:(unsigned long long)a0;
- (int)filtersRelation;
- (unsigned long long)filterCount;
- (void)setFiltersRelation:(int)a0;

@end
