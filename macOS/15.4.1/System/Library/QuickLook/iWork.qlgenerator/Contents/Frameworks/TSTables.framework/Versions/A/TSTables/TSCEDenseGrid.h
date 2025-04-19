@class TSCEValueGrid;

@interface TSCEDenseGrid : TSCEAbstractGrid <NSCopying> {
    TSCEValueGrid *_valueGrid;
    char _gridKind;
    BOOL _isFlattened;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)error;
- (id)value;
- (struct TSCEGridDimensions { unsigned int x0; unsigned int x1; })dimensions;
- (id)valueAtIndex:(unsigned long long)a0;
- (id)initWithValues:(const void *)a0;
- (id)flattenedGrid:(struct TSCEGridAccessContext { id x0; id x1; id x2; int x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned char x9; unsigned char x10; struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x11; } *)a0 format:(const struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 6; unsigned char x2 : 6; unsigned char x3 : 3; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; BOOL x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; } *)a1;
- (id)initWithValueGrid:(id)a0;
- (id)initWithValues:(const void *)a0 gridKind:(char)a1 isFlattened:(BOOL)a2 dimensions:(const struct TSCEGridDimensions { unsigned int x0; unsigned int x1; } *)a3;
- (char)nativeType;
- (id)valueAtGridCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a0 accessContext:(struct TSCEGridAccessContext { id x0; id x1; id x2; int x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned char x9; unsigned char x10; struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x11; } *)a1;
- (BOOL)asBoolean:(id)a0 functionSpec:(id)a1 argIndex:(int)a2 outError:(id *)a3;
- (id)asDate:(id)a0 functionSpec:(id)a1 argIndex:(int)a2 outError:(id *)a3;
- (id)asNumber:(id)a0 functionSpec:(id)a1 argIndex:(int)a2 outError:(id *)a3;
- (id)asRawString:(id)a0 functionSpec:(id)a1 argIndex:(int)a2 outError:(id *)a3;
- (id)asReference:(id)a0 functionSpec:(id)a1 argIndex:(int)a2 outError:(id *)a3;
- (id)asString:(id)a0 functionSpec:(id)a1 argIndex:(int)a2 outError:(id *)a3;
- (id)asValueGrid:(id)a0;
- (id)deepResolveInPlace:(id)a0;
- (char)deepType:(id)a0 outError:(id *)a1;
- (id)errorWithContext:(id)a0;
- (char)gridKind;
- (id)initWithValues:(const void *)a0 gridKind:(char)a1;
- (id)initWithValues:(const void *)a0 gridKind:(char)a1 isFlattened:(BOOL)a2;
- (id)subGridValueAtGridCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a0 width:(int)a1 height:(int)a2 accessContext:(struct TSCEGridAccessContext { id x0; id x1; id x2; int x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned char x9; unsigned char x10; struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x11; } *)a3;
- (id)valueAtGridCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a0;
- (id)valueAtIndex:(unsigned long long)a0 accessContext:(struct TSCEGridAccessContext { id x0; id x1; id x2; int x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned char x9; unsigned char x10; struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x11; } *)a1;

@end
