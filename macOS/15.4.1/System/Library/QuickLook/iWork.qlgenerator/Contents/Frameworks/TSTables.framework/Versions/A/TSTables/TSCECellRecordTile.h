@interface TSCECellRecordTile : TSPObject {
    unsigned short _tileColumnBegin;
    unsigned int _tileRowBegin;
    struct vector<TSCECellRecord *, std::allocator<TSCECellRecord *>> { struct TSCECellRecord **__begin_; struct TSCECellRecord **__end_; struct __compressed_pair<TSCECellRecord **, std::allocator<TSCECellRecord *>> { struct TSCECellRecord **__value_; } __end_cap_; } _cellRecords;
    unsigned int _unsortedCellsSize;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cellsLock;
    void *_unarchivedCellRecords;
}

@property (readonly, nonatomic) unsigned long long numCellRecords;
@property (nonatomic) unsigned short internalOwnerID;
@property (readonly, nonatomic) unsigned short tileColumnBegin;
@property (readonly, nonatomic) unsigned short tileColumnEnd;
@property (readonly, nonatomic) unsigned int tileRowBegin;
@property (readonly, nonatomic) unsigned int tileRowEnd;
@property (readonly, nonatomic) unsigned long long memoryUseEstimate;
@property (readonly, nonatomic) unsigned int pruningNeededRecords;

+ (int)compareTilesBefore:(id)a0 after:(id)a1;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)intersectsRange:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)applyBlockToRecordsInRange:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })a0 cellRestrictions:(unsigned long long)a1 doWillModify:(BOOL)a2 block:(id /* block */)a3;
- (struct TSCECellRecord { struct TSCECellRecordEdgeLists *x0; struct os_unfair_lock_s { unsigned int x0; } x1; unsigned long long x2; struct TSCEPackedEdge { char x0[8]; } x3; unsigned int x4; unsigned short x5; unsigned short x6; } *)findCellRecord:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (void)sortCellRecords;
- (void)appendExpandedEdgeToArchive:(void *)a0 edge:(const struct TSCEInternalCellReference { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; unsigned short x1; unsigned short x2; } *)a1;
- (BOOL)applyBlockToRecords:(unsigned long long)a0 doWillModify:(BOOL)a1 block:(id /* block */)a2;
- (BOOL)applyBlockToSortedRecords:(unsigned long long)a0 doWillModify:(BOOL)a1 block:(id /* block */)a2;
- (unsigned long long)cellRecordIndexInSortedSection:(unsigned short)a0 startingRow:(unsigned int)a1 beginIndex:(unsigned long long)a2 endIndex:(unsigned long long)a3 guessIndex:(unsigned long long)a4;
- (void)collectDependencies:(id)a0 cellDependencies:(id)a1;
- (BOOL)coordInRange:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (void)deleteCellRecord:(struct TSCECellRecord { struct TSCECellRecordEdgeLists *x0; struct os_unfair_lock_s { unsigned int x0; } x1; unsigned long long x2; struct TSCEPackedEdge { char x0[8]; } x3; unsigned int x4; unsigned short x5; unsigned short x6; } *)a0 cellDependencies:(id)a1;
- (void)encodeCellRecordsToArchive:(void *)a0;
- (void)incrementPruningNeededRecords;
- (id)initWithOwnerId:(unsigned short)a0 tileColumnBegin:(unsigned short)a1 tileRowBegin:(unsigned int)a2 context:(id)a3;
- (BOOL)insertCellRecord:(struct TSCECellRecord { struct TSCECellRecordEdgeLists *x0; struct os_unfair_lock_s { unsigned int x0; } x1; unsigned long long x2; struct TSCEPackedEdge { char x0[8]; } x3; unsigned int x4; unsigned short x5; unsigned short x6; } *)a0 cellDependencies:(id)a1;
- (void)pruneEmptyRecords:(id)a0;
- (void)removeCellRecord:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 cellDependencies:(id)a1;
- (BOOL)replaceCellRecord:(struct TSCECellRecord { struct TSCECellRecordEdgeLists *x0; struct os_unfair_lock_s { unsigned int x0; } x1; unsigned long long x2; struct TSCEPackedEdge { char x0[8]; } x3; unsigned int x4; unsigned short x5; unsigned short x6; } *)a0 cellDependencies:(id)a1;
- (struct vector<TSCECellRecord *, std::allocator<TSCECellRecord *>> { struct TSCECellRecord **x0; struct TSCECellRecord **x1; struct __compressed_pair<TSCECellRecord **, std::allocator<TSCECellRecord *>> { struct TSCECellRecord **x0; } x2; })sortedCellRecordVector;
- (void)unpackAfterUnarchiveForCellDependencies:(id)a0;

@end
