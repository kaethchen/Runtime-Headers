@class TSCEValueGridIndexer, __end_cap_, __end_;

@interface TSCEValueGrid : NSObject <NSCopying> {
    struct TSCEBitGrid { struct vector<TSCEBitGridTile *, std::allocator<TSCEBitGridTile *>> { struct TSCEBitGridTile **__begin_; struct TSCEBitGridTile **__end_; struct __compressed_pair<TSCEBitGridTile **, std::allocator<TSCEBitGridTile *>> { struct TSCEBitGridTile **__value_; } __end_cap_; } _tiles; unsigned long long _count; unsigned long long _lastTileFoundAtIndex; } _coords;
    TSCEValueGridIndexer *_indexer;
    struct vector<TSCEValue *, std::allocator<TSCEValue *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<TSCEValue *__strong *, std::allocator<TSCEValue *>> { id *__value_; } x1; } _valueForIndex;
    struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } *_populatedColumns;
    struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } *_populatedRows;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long area;
@property (readonly, nonatomic) unsigned int numberOfColumns;
@property (readonly, nonatomic) unsigned int numberOfRows;
@property (readonly, nonatomic) unsigned int numberOfPopulatedColumns;
@property (readonly, nonatomic) unsigned int numberOfPopulatedRows;
@property (readonly, nonatomic) unsigned long long hash;
@property (readonly, nonatomic) struct TSCEGridDimensions { unsigned int x0; unsigned int x1; } dimensions;
@property (readonly, nonatomic) struct TSCEGridCoord { unsigned int x0; unsigned int x1; } topLeftCoord;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (struct vector<TSCEValue *, std::allocator<TSCEValue *>> { id *x0; id *x1; struct __compressed_pair<TSCEValue *__strong *, std::allocator<TSCEValue *>> { id *x0; } x2; })allValues;
- (id).cxx_construct;
- (void)enumerateValuesUsingBlock:(id /* block */)a0;
- (id)initWithMatrix:(id)a0;
- (id)firstValue;
- (struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; })populatedRows;
- (void)enumerateValuesForColumn:(unsigned int)a0 usingBlock:(id /* block */)a1;
- (void)enumerateValuesForRow:(unsigned int)a0 usingBlock:(id /* block */)a1;
- (id)flattenedGrid:(struct TSCEGridAccessContext { id x0; id x1; id x2; int x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned char x9; unsigned char x10; struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x11; } *)a0 format:(const struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 6; unsigned char x2 : 6; unsigned char x3 : 3; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; BOOL x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; } *)a1;
- (struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; })populatedColumns;
- (id)populatedSliceByIndex:(unsigned long long)a0 byRow:(BOOL)a1;
- (id)initWithValueVector:(const void *)a0 dimensions:(const struct TSCEGridDimensions { unsigned int x0; unsigned int x1; } *)a1;
- (id)valueAt1DIndex:(unsigned long long)a0;
- (id)valueAtGridCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a0 accessContext:(struct TSCEGridAccessContext { id x0; id x1; id x2; int x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned char x9; unsigned char x10; struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x11; } *)a1;
- (id)allWarnings;
- (id)asMatrixWithAccessContext:(struct TSCEGridAccessContext { id x0; id x1; id x2; int x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned char x9; unsigned char x10; struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x11; } *)a0 outError:(id *)a1;
- (void)clearPopulatedCache;
- (void)clearValueAtColumn:(unsigned int)a0 row:(unsigned int)a1;
- (void)clearValueAtCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a0;
- (id)compressToPopulatedRowsAndColumns;
- (void)compressToZeroBased;
- (void)deepResolveInPlace:(id)a0;
- (BOOL)hasValueAtColumn:(unsigned int)a0 row:(unsigned int)a1;
- (BOOL)hasValueAtCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a0;
- (id)initWithColumnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 rowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithValueVector:(const void *)a0;
- (id)intersectionWithCellRect:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (id)intersectionWithEvalContext:(id)a0 rangeContext:(unsigned char)a1;
- (void)padUnsetWithValue:(id)a0 forDimensions:(const struct TSCEGridDimensions { unsigned int x0; unsigned int x1; } *)a1;
- (void)rearrangeColumnsWithMapping:(id)a0;
- (void)rearrangeRowsWithMapping:(id)a0;
- (void)setEmptyValueAtCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a0;
- (void)setValue:(id)a0 atCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a1;
- (id)subGridAtGridCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a0 width:(int)a1 height:(int)a2;
- (void)swapColumnAtIndex:(unsigned int)a0 withColumnAtIndex:(unsigned int)a1;
- (void)swapRowAtIndex:(unsigned int)a0 withRowAtIndex:(unsigned int)a1;
- (void)swapValueAtCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a0 withCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a1;
- (id)valueAtColumn:(unsigned int)a0 row:(unsigned int)a1;
- (id)valueAtCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a0;
- (id)valueAtGridCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a0;
- (id)valueAtIndex:(unsigned long long)a0 accessContext:(struct TSCEGridAccessContext { id x0; id x1; id x2; int x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned char x9; unsigned char x10; struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x11; } *)a1;

@end
