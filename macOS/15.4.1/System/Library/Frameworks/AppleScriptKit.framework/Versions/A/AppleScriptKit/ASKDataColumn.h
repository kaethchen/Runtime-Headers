@class ASKDataSource, NSString;

@interface ASKDataColumn : NSObject <NSCopying> {
    ASKDataSource *_dataSource;
    NSString *_name;
    unsigned long long _sortOrder;
    unsigned long long _sortType;
    unsigned long long _sortCaseSensitivity;
}

+ (id)columnForDataSource:(id)a0 withName:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)name;
- (void)setName:(id)a0;
- (id)objectSpecifier;
- (id)cells;
- (id)dataSource;
- (id)rows;
- (void)setDataSource:(id)a0;
- (void)setSortType:(unsigned long long)a0;
- (unsigned long long)sortOrder;
- (unsigned long long)sortType;
- (void)setSortOrder:(unsigned long long)a0;
- (unsigned long long)objectIndex_ask;
- (id)initForDataSource:(id)a0 withName:(id)a1;
- (void)insertInCells:(id)a0 atIndex:(unsigned long long)a1;
- (void)insertInRows:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeFromCellsAtIndex:(unsigned long long)a0;
- (void)removeFromRowsAtIndex:(unsigned long long)a0;
- (void)replaceInCells:(id)a0 atIndex:(unsigned long long)a1;
- (void)replaceInRows:(id)a0 atIndex:(unsigned long long)a1;
- (void)setSortCaseSensitivity:(unsigned long long)a0;
- (unsigned long long)sortCaseSensitivity;

@end
