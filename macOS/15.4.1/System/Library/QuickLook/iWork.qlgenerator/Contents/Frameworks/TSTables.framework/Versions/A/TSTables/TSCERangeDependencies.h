@class __end_, TSCEDependencyTracker, __end_cap_;

@interface TSCERangeDependencies : NSObject {
    struct RTree<unsigned int, 2, double, 16, 8> { void /* function */ **_vptr$RTree; struct Node *m_root; double m_unitSphereVolume; } _rTree;
    struct vector<TSCERangePrecedentsTile *, std::allocator<TSCERangePrecedentsTile *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<TSCERangePrecedentsTile *__strong *, std::allocator<TSCERangePrecedentsTile *>> { id *__value_; } x1; } _rangePrecedentsTiles;
    struct vector<TSCEUnarchiveRangePrecedent, std::allocator<TSCEUnarchiveRangePrecedent>> { struct TSCEUnarchiveRangePrecedent *__begin_; struct TSCEUnarchiveRangePrecedent *__end_; struct __compressed_pair<TSCEUnarchiveRangePrecedent *, std::allocator<TSCEUnarchiveRangePrecedent>> { struct TSCEUnarchiveRangePrecedent *__value_; } __end_cap_; } _unarchivedPrecedentList;
}

@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } ownerUID;
@property (readonly, nonatomic) unsigned short internalOwnerID;
@property (nonatomic) TSCEDependencyTracker *dependencyTracker;

- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)encodeToArchive:(void *)a0;
- (void)RTreeRemove:(const struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } *)a0 fromCellRef:(const struct TSCEInternalCellReference { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; unsigned short x1; unsigned short x2; } *)a1;
- (void)RTreeInsert:(const struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } *)a0 fromCellRef:(const struct TSCEInternalCellReference { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; unsigned short x1; unsigned short x2; } *)a1;
- (void)RTreeSearchWithBlock:(const struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } *)a0 block:(id /* block */)a1;
- (void)addPrecedentsAtCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0 toReferenceSet:(void *)a1;
- (BOOL)addRangeReference:(const struct TSCEInternalCellReference { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; unsigned short x1; unsigned short x2; } *)a0 toRange:(const struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } *)a1;
- (void)addUnarchivedPrecedent:(const struct TSCEUnarchiveRangePrecedent { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; unsigned short x1; struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x2; } *)a0;
- (void)allFormulaCells:(void *)a0;
- (BOOL)cellHasDeepPrecedentInRange:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0 cellRange:(const struct TSCEInternalRangeReference { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; unsigned short x1; } *)a1;
- (void)cellRefsForCycleCellsReferringToCell:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0 outCellRefs:(void *)a1;
- (unsigned long long)computedNumberOfDirtyPrecedents:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 cellIsInACycle:(BOOL)a1;
- (void)decrementReferringDirtyCountAndPushNextLeaves:(const struct TSCECellToEvaluate { struct TSCEInternalCellReference { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; unsigned short x1; unsigned short x2; } x0; id x1; struct TSCECellRecord *x2; } *)a0 referencingCellIsInACycle:(BOOL)a1;
- (void)deleteAllReferencesFromThisTable;
- (void)deleteRangeReferencesForFromCell:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;
- (void)dirtyAllFormulasReferencingRange:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })a0;
- (void)dirtyAllReferencingFormulas;
- (void)encodeToTiledArchive:(void *)a0 archiver:(id)a1;
- (void)enumerateAllRanges:(id /* block */)a0;
- (void)enumerateAllRangesForFromCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0 block:(id /* block */)a1;
- (id)explainDirtyPrecedentCount:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 cellIsInACycle:(BOOL)a1;
- (id)findTileForToOwnerId:(unsigned short)a0;
- (id)findTileForToOwnerId:(unsigned short)a0 createIfMissing:(BOOL)a1;
- (void)formulaCellsReferencingIndexes:(id)a0 rowIndexes:(id)a1 outFormulaCells:(void *)a2;
- (void)formulaCellsReferencingRange:(const struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } *)a0 outFormulaCells:(void *)a1;
- (void)formulaCellsReferencingRangesAffectedByRewriteSpec:(id)a0 outFormulaCells:(void *)a1;
- (void)formulaCoordsReferencingRange:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })a0 inOwnerID:(unsigned short)a1 outFormulaCells:(void *)a2;
- (BOOL)hasDependentsAtCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;
- (BOOL)hasPrecedentsAtCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;
- (id)initWithDependTracker:(id)a0 ownerID:(unsigned short)a1;
- (id)precedentsAsString:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 dirtyOnly:(BOOL)a1;
- (void)processDependentsForDFS:(id)a0 coord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a1 outCells:(void *)a2;
- (void)pushDependents:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0 outDependents:(id)a1 referencingCellIsInACycle:(BOOL)a2;
- (void)readFromArchive:(const void *)a0;
- (void)readFromExpandedArchive:(const void *)a0;
- (void)readFromTiledArchive:(const void *)a0 unarchiver:(id)a1 ownerDepends:(id)a2;
- (void)unpackAfterUnarchive;

@end
