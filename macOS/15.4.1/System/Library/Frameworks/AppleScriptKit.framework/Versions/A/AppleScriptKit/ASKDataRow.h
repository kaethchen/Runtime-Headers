@class ASKDataSource, NSMutableArray, NSObject;

@interface ASKDataRow : NSObject <NSCopying> {
    ASKDataSource *_dataSource;
    NSMutableArray *_cells;
    NSObject *_representedObject;
}

+ (id)rowForDataSource:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)setRepresentedObject:(id)a0;
- (id)contents;
- (id)content;
- (id)objectSpecifier;
- (void)setContent:(id)a0;
- (id)cells;
- (id)dataSource;
- (id)representedObject;
- (void)setContents:(id)a0;
- (void)setDataSource:(id)a0;
- (id)columns;
- (void)removeAllCells;
- (long long)compareDataRow:(id)a0;
- (unsigned long long)objectIndex_ask;
- (void)addInCells:(id)a0;
- (id)cellWithName:(id)a0;
- (id)initForDataSource:(id)a0;
- (void)insertInCells:(id)a0 atIndex:(unsigned long long)a1;
- (void)insertInColumns:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeFromCellsAtIndex:(unsigned long long)a0;
- (void)removeFromColumnsAtIndex:(unsigned long long)a0;
- (void)replaceInCells:(id)a0 atIndex:(unsigned long long)a1;
- (void)replaceInColumns:(id)a0 atIndex:(unsigned long long)a1;
- (id)valueInCellsWithUniqueID:(long long)a0;

@end
