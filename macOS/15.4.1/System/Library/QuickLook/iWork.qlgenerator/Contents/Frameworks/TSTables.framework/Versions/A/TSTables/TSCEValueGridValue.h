@class TSCEValueGrid;

@interface TSCEValueGridValue : TSCEValue

@property (readonly, nonatomic) TSCEValueGrid *valueGrid;
@property (nonatomic) struct TSCEGridCoord { unsigned int column; unsigned int row; } implicitIntersectionCoord;
@property (nonatomic) BOOL implicitIntersectionOffTable;

+ (id)valueGridValue:(id)a0;
+ (id)valueGridValue:(id)a0 format:(const struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 6; unsigned char x2 : 6; unsigned char x3 : 3; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; BOOL x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; } *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)asGrid:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 applyPreferredFormat:(BOOL)a3 outError:(id *)a4;
- (BOOL)isValueGridValue;
- (char)nativeType;
- (void)apparentGridForRangeContext:(unsigned char)a0 tableUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1 context:(id)a2 spansAllColumns:(BOOL)a3 spansAllRows:(BOOL)a4;
- (BOOL)asBoolean:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asDate:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asNumber:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asRawString:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asReference:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (struct TSCERichTextStorage { id x0; id x1; BOOL x2; BOOL x3; BOOL x4; })asRichTextStorage:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asString:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asValueGrid:(id)a0;
- (id)asValueGridValue;
- (char)deepType:(id)a0 outError:(id *)a1;
- (id)gridValue;
- (id)initWithValueGrid:(id)a0 format:(const struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 6; unsigned char x2 : 6; unsigned char x3 : 3; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; BOOL x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; } *)a1;

@end
