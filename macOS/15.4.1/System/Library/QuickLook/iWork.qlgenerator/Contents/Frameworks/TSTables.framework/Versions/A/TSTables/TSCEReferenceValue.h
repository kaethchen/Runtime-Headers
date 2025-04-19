@class TSCEEvalRef;

@interface TSCEReferenceValue : TSCEValue {
    struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } _hostCell;
}

@property (retain, nonatomic) TSCEEvalRef *evalRef;
@property (nonatomic) unsigned char rangeContextOverride;
@property (readonly, nonatomic) struct TSUPreserveFlags { unsigned char _flags; } preserveFlags;
@property (nonatomic) BOOL isOutputOfAFunction;
@property (nonatomic) BOOL permitsAccessInsideMergeRegions;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } tableUID;
@property (readonly, nonatomic) struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } range;
@property (readonly, nonatomic) struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } rangeRef;
@property (readonly, nonatomic) struct TSCEAnyRef { unsigned short x0; struct TSCESpanningRangeRef { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; unsigned char x1; } x1; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x2; BOOL x3; BOOL x4; id x5; } anyRef;
@property (readonly, nonatomic) const struct TSCECellTractRefCore { struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } x0; struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } x1; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x2; unsigned char x3; struct TSUPreserveFlags { unsigned char x0; } x4; BOOL x5; BOOL x6; BOOL x7; } *tractRef;
@property (readonly, nonatomic) BOOL isRange;

+ (id)emptyReferenceValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)value;
- (id).cxx_construct;
- (struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 6; unsigned char x2 : 6; unsigned char x3 : 3; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; BOOL x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; })format;
- (id)referenceValue;
- (id)asGrid:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 applyPreferredFormat:(BOOL)a3 outError:(id *)a4;
- (id)asReferenceValue;
- (id)initWithEvalRef:(id)a0 hostCell:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a1 preserveFlags:(const struct TSUPreserveFlags { unsigned char x0; } *)a2 permitsAccessInsideMergeRegions:(BOOL)a3 isOutputOfAFunction:(BOOL)a4;
- (char)nativeType;
- (BOOL)asBoolean:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asDate:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asNumber:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asRawString:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asReference:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (struct TSCERichTextStorage { id x0; id x1; BOOL x2; BOOL x3; BOOL x4; })asRichTextStorage:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asString:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)canonicalKeyStringForLocale:(id)a0;
- (char)deepType:(id)a0 outError:(id *)a1;
- (id)errorWithContext:(id)a0;
- (struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 6; unsigned char x2 : 6; unsigned char x3 : 3; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; BOOL x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; })formatWithContext:(id)a0;
- (id)initWithContext:(id)a0 rangeRef:(const struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a1 preserveFlags:(const struct TSUPreserveFlags { unsigned char x0; } *)a2;
- (id)initWithContext:(id)a0 rangeRef:(const struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a1 preserveFlags:(const struct TSUPreserveFlags { unsigned char x0; } *)a2 cacheValue:(id)a3 wasFetchedWithRichTextAttributes:(BOOL)a4;
- (id)initWithContext:(id)a0 tableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 rangeCoord:(const struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } *)a2 preserveFlags:(const struct TSUPreserveFlags { unsigned char x0; } *)a3;
- (id)initWithContext:(id)a0 tableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 rangeCoord:(const struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } *)a2 preserveFlags:(const struct TSUPreserveFlags { unsigned char x0; } *)a3 isOutputOfAFunction:(BOOL)a4;
- (id)initWithContext:(id)a0 tableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 relativeCellCoord:(const struct TSCERelativeCellCoordinate { int x0; short x1; BOOL x2; BOOL x3; } *)a2 preserveFlags:(const struct TSUPreserveFlags { unsigned char x0; } *)a3;
- (id)initWithContext:(id)a0 tableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 relativeRangeCoord:(const struct TSCERelativeRangeCoordinate { struct TSCERelativeCellCoordinate { int x0; short x1; BOOL x2; BOOL x3; } x0; struct TSCERelativeCellCoordinate { int x0; short x1; BOOL x2; BOOL x3; } x1; } *)a2 preserveFlags:(const struct TSUPreserveFlags { unsigned char x0; } *)a3;
- (id)intersectionWithHostCell:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 rangeContext:(unsigned char)a1;
- (BOOL)isReferenceValue;
- (id)referredToValue:(id)a0 fetchRichTextAttributesIfPlainText:(BOOL)a1;
- (void)resetResolver:(id)a0;

@end
