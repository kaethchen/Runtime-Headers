@class __end_, __end_cap_, TSCEFunctionSpec;

@interface TSCEFunctionArgSpec : NSObject <NSCopying>

@property (nonatomic) TSCEFunctionSpec *functionSpec;
@property (nonatomic) unsigned short index;
@property (readonly, nonatomic) char argumentType;
@property (nonatomic) int accessorMode;
@property (nonatomic) unsigned char rangeContext;
@property (nonatomic) int argumentContext;
@property (nonatomic) struct TSCEArgumentAccessor { void /* function */ **x0; int x1; } *argumentAccessor;
@property (readonly, nonatomic) double minValue;
@property (readonly, nonatomic) BOOL minInclusive;
@property (readonly, nonatomic) double maxValue;
@property (readonly, nonatomic) BOOL maxInclusive;
@property (nonatomic) unsigned int typeOptions;
@property (readonly, nonatomic) BOOL disallowDuration;
@property (readonly, nonatomic) BOOL disallowCurrency;
@property (readonly, nonatomic) BOOL integerOnly;
@property (readonly, nonatomic) BOOL allowError;
@property (readonly, nonatomic) BOOL referenceForGeometryOnly;
@property (readonly, nonatomic) unsigned short numLambdaIdentifiers;
@property (nonatomic) struct vector<TSCEValue *, std::allocator<TSCEValue *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<TSCEValue *__strong *, std::allocator<TSCEValue *>> { id *__value_; } x1; } modeValues;
@property (nonatomic) unsigned short defaultModeIndex;
@property (readonly, nonatomic) unsigned short numModes;
@property (readonly, nonatomic) BOOL isMode;
@property (readonly, nonatomic) BOOL isOptional;
@property (readonly, nonatomic) BOOL disallowArrayModeFanout;
@property (nonatomic) BOOL unwrapThunk;

+ (id)argSpecForFunctorWithNumLambdaIdentifiers:(unsigned short)a0;
+ (id)argSpecWithType:(char)a0;
+ (id)argSpecWithType:(char)a0 accessorMode:(int)a1;
+ (id)argSpecWithType:(char)a0 accessorMode:(int)a1 argumentContext:(int)a2;
+ (id)argSpecWithType:(char)a0 accessorMode:(int)a1 argumentContext:(int)a2 typeOptions:(unsigned int)a3;
+ (id)argSpecWithType:(char)a0 accessorMode:(int)a1 rangeContext:(unsigned char)a2;
+ (id)argSpecWithType:(char)a0 accessorMode:(int)a1 rangeContext:(unsigned char)a2 argumentContext:(int)a3;
+ (id)argSpecWithType:(char)a0 accessorMode:(int)a1 rangeContext:(unsigned char)a2 argumentContext:(int)a3 minValue:(double)a4 minInclusive:(BOOL)a5 maxValue:(double)a6 maxInclusive:(BOOL)a7 typeOptions:(unsigned int)a8;
+ (id)argSpecWithType:(char)a0 accessorMode:(int)a1 rangeContext:(unsigned char)a2 argumentContext:(int)a3 minValue:(double)a4 minInclusive:(BOOL)a5 maxValue:(double)a6 maxInclusive:(BOOL)a7 typeOptions:(unsigned int)a8 modeValues:(const void *)a9 defaultModeIndex:(unsigned short)a10;
+ (id)argSpecWithType:(char)a0 accessorMode:(int)a1 rangeContext:(unsigned char)a2 argumentContext:(int)a3 minValue:(double)a4 minInclusive:(BOOL)a5 typeOptions:(unsigned int)a6;
+ (id)argSpecWithType:(char)a0 accessorMode:(int)a1 rangeContext:(unsigned char)a2 argumentContext:(int)a3 modeValues:(const void *)a4 defaultModeIndex:(unsigned short)a5;
+ (id)argSpecWithType:(char)a0 accessorMode:(int)a1 rangeContext:(unsigned char)a2 argumentContext:(int)a3 typeOptions:(unsigned int)a4;
+ (id)argSpecWithType:(char)a0 accessorMode:(int)a1 rangeContext:(unsigned char)a2 argumentContext:(int)a3 typeOptions:(unsigned int)a4 modeValues:(const void *)a5 defaultModeIndex:(unsigned short)a6;
+ (id)argSpecWithType:(char)a0 accessorMode:(int)a1 rangeContext:(unsigned char)a2 argumentContext:(int)a3 unwrapThunk:(BOOL)a4;
+ (id)argSpecWithType:(char)a0 accessorMode:(int)a1 rangeContext:(unsigned char)a2 minValue:(double)a3 minInclusive:(BOOL)a4 maxValue:(double)a5 maxInclusive:(BOOL)a6 typeOptions:(unsigned int)a7;
+ (id)argSpecWithType:(char)a0 accessorMode:(int)a1 rangeContext:(unsigned char)a2 minValue:(double)a3 minInclusive:(BOOL)a4 typeOptions:(unsigned int)a5;
+ (id)argSpecWithType:(char)a0 accessorMode:(int)a1 rangeContext:(unsigned char)a2 modeValues:(const void *)a3 defaultModeIndex:(unsigned short)a4;
+ (id)argSpecWithType:(char)a0 accessorMode:(int)a1 rangeContext:(unsigned char)a2 typeOptions:(unsigned int)a3;
+ (id)argSpecWithType:(char)a0 accessorMode:(int)a1 rangeContext:(unsigned char)a2 unwrapThunk:(BOOL)a3;
+ (id)argSpecWithType:(char)a0 accessorMode:(int)a1 typeOptions:(unsigned int)a2;
+ (id)argSpecWithType:(char)a0 minValue:(double)a1 minInclusive:(BOOL)a2;
+ (id)argSpecWithType:(char)a0 minValue:(double)a1 minInclusive:(BOOL)a2 maxValue:(double)a3 maxInclusive:(BOOL)a4;
+ (id)argSpecWithType:(char)a0 typeOptions:(unsigned int)a1;
+ (id)coerceValueToNumberOrDate:(id)a0 valueDeepType:(char)a1 context:(id)a2 functionSpec:(id)a3 argIndex:(unsigned long long)a4 outError:(id *)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)localizedArgumentNameForLocale:(id)a0;
- (void)setModeValues:(const void *)a0 defaultModeIndex:(unsigned short)a1;
- (id)localizedFunctionNameForLocale:(id)a0;
- (id)boundsCheckAndCoerce:(id)a0 valueDeepType:(char)a1 context:(id)a2 functionSpec:(id)a3 argIndex:(unsigned long long)a4 outError:(id *)a5;
- (id)checkBoundsAndUnits:(id)a0 valueDeepType:(char)a1 context:(id)a2 functionSpec:(id)a3 argIndex:(unsigned long long)a4;
- (long long)indexForModeBool:(BOOL)a0 locale:(id)a1;
- (long long)indexForModeNumber:(double)a0 locale:(id)a1;
- (long long)indexForModeString:(id)a0 locale:(id)a1;
- (long long)indexForModeValue:(id)a0 locale:(id)a1;
- (id)initWithArgumentType:(char)a0 accessorMode:(int)a1;
- (id)initWithArgumentType:(char)a0 accessorMode:(int)a1 argumentContext:(int)a2;
- (BOOL)isModeEnabled:(unsigned short)a0;
- (id)localizedLambdaIdentifierForLambdaIndex:(unsigned short)a0 locale:(id)a1;
- (id)localizedModeMenuItemStringForModeIndex:(unsigned short)a0 locale:(id)a1;
- (id)localizedModeNameForModeIndex:(unsigned short)a0 locale:(id)a1;
- (id)localizedModeToolTipStringForModeIndex:(unsigned short)a0 locale:(id)a1;
- (id)localizedToolTipStringForLocale:(id)a0;
- (id)nativeSyntaxString;
- (void)setDisallowArrayModeFanout:(BOOL)a0;
- (void)setMaxValue:(double)a0 maxInclusive:(BOOL)a1;
- (void)setMinValue:(double)a0 minInclusive:(BOOL)a1;
- (void)setupArgAccessor;
- (id)typeCheckAndCoerce:(id)a0 context:(id)a1 functionSpec:(id)a2 argIndex:(unsigned long long)a3 fromInsideArray:(BOOL)a4 outError:(id *)a5;
- (id)typeCheckAndCoerce:(id)a0 context:(id)a1 functionSpec:(id)a2 argIndex:(unsigned long long)a3 fromInsideArray:(BOOL)a4 outError:(id *)a5 fullRangeBeingAccessed:(const struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a6;
- (BOOL)typeIsDisallowed:(char)a0 value:(id)a1;
- (id)valueForModeIndex:(unsigned short)a0;

@end
