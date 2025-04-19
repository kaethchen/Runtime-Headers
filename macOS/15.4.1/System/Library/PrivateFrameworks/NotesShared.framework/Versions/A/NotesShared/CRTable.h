@class NSString, ICCRTombstoneOrderedSet, ICCRDictionary, NSObject;
@protocol ICCRUndoDelegate;

@interface CRTable : ICCRObject <ICCRUndoDelegate>

@property (retain, nonatomic) NSString *columnDirection;
@property (readonly, nonatomic) ICCRTombstoneOrderedSet *crColumns;
@property (readonly, nonatomic) ICCRTombstoneOrderedSet *crRows;
@property (readonly, nonatomic) ICCRDictionary *cellColumns;
@property (weak, nonatomic) NSObject<ICCRUndoDelegate> *delegate;
@property (readonly, nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic) unsigned long long rowCount;
@property (readonly, nonatomic) BOOL isRightToLeft;
@property (readonly, nonatomic) BOOL isLeftToRight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)CRProperties;
+ (void)registerWithICCRCoder;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)identity;
- (id)insertColumnAtIndex:(unsigned long long)a0;
- (id)insertRowAtIndex:(unsigned long long)a0;
- (void)moveColumnAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)moveRowAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)removeColumnAtIndex:(unsigned long long)a0;
- (void)removeRowAtIndex:(unsigned long long)a0;
- (id)initWithDocument:(id)a0;
- (void)addUndoCommandsForObject:(id)a0 block:(id /* block */)a1;
- (id)initWithIdentity:(id)a0 fields:(id)a1;
- (BOOL)wantsUndoCommands;
- (void)enumerateRowsWithBlock:(id /* block */)a0;
- (id)columnsIntersectingWithColumns:(id)a0;
- (BOOL)containsColumn:(id)a0;
- (id)initWithDocument:(id)a0 isRightToLeft:(BOOL)a1;
- (void)setObject:(id)a0 columnIndex:(unsigned long long)a1 rowIndex:(unsigned long long)a2;
- (void)undoablyRemoveContentsOfColumn:(id)a0;
- (unsigned long long)columnIndexForIdentifier:(id)a0;
- (id)columnIndexesForIdentifiers:(id)a0;
- (BOOL)containsRow:(id)a0;
- (unsigned long long)countOfPopulatedCells;
- (id)crTableColumnDirection;
- (id)defaultContentAtColumn:(id)a0 row:(id)a1;
- (void)enumerateCellObjectsInCellSelectionContainingColumnIndices:(id)a0 rowIndices:(id)a1 copyItems:(BOOL)a2 usingBlock:(id /* block */)a3;
- (void)enumerateColumnsWithBlock:(id /* block */)a0;
- (id)identifierForColumnAtIndex:(unsigned long long)a0;
- (id)identifierForRowAtIndex:(unsigned long long)a0;
- (id)identifiersForColumnIndexes:(id)a0;
- (id)identifiersForRowIndexes:(id)a0;
- (id)initWithDocument:(id)a0 columnDirection:(id)a1;
- (id)initWithDocument:(id)a0 columnDirection:(id)a1 crColumns:(id)a2 crRows:(id)a3 cellColumns:(id)a4;
- (id)insertColumns:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (id)insertRows:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (id)objectForColumnID:(id)a0 rowID:(id)a1;
- (id)objectForColumnIndex:(unsigned long long)a0 rowIndex:(unsigned long long)a1;
- (void)reverseColumnDirection;
- (unsigned long long)rowIndexForIdentifier:(id)a0;
- (id)rowIndexesForIdentifiers:(id)a0;
- (id)rowsIntersectingWithRows:(id)a0;
- (void)setObject:(id)a0 columnID:(id)a1 rowID:(id)a2;
- (id)subtableWithDocument:(id)a0 forSelectionContainingColumnIndices:(id)a1 rowIndices:(id)a2;
- (void)undoablyInsertContents:(id)a0 atColumn:(id)a1;
- (void)undoablyInsertContents:(id)a0 atRow:(id)a1;
- (void)undoablyRemoveContentsOfRow:(id)a0;

@end
