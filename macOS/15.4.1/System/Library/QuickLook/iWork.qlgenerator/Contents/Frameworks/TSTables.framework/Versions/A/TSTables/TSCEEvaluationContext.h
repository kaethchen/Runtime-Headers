@class __end_, TSCECalculationEngine, __end_cap_, TSCEValueBindingEnvironment, TSCERemoteDataSpecifierSet, TSULocale, NSMutableSet, NSMutableDictionary, TSCEDependencyTracker;

@interface TSCEEvaluationContext : NSObject <NSCopying> {
    struct TSCEEvaluationStack { struct vector<TSCEValue *, std::allocator<TSCEValue *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<TSCEValue *__strong *, std::allocator<TSCEValue *>> { id *__value_; } x1; } _evaluationStack; unsigned int _argumentCount; } _evaluationStack;
    NSMutableSet *_warnings;
    NSMutableSet *_localWarnings;
    struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _containingTable;
    struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } _containingCell;
    TSCEValueBindingEnvironment *_valueBindingEnvironment;
    struct TSCESymbolTable { TSULocale *_locale; unsigned int _nextSymbol; struct unordered_map<NSString *, unsigned int, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, unsigned int>>> { struct __hash_table<std::__hash_value_type<NSString *, unsigned int>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, unsigned int>, std::hash<NSString *>, std::equal_to<NSString *>>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, unsigned int>, std::equal_to<NSString *>, std::hash<NSString *>>, std::allocator<std::__hash_value_type<NSString *, unsigned int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned int>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned int>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned int>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned int>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, unsigned int>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned int>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, unsigned int>, std::hash<NSString *>, std::equal_to<NSString *>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, unsigned int>, std::equal_to<NSString *>, std::hash<NSString *>>> { float __value_; } __p3_; } __table_; } _symbolTableMap; struct unordered_map<unsigned int, NSString *, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, NSString *>>> { struct __hash_table<std::__hash_value_type<unsigned int, NSString *>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, NSString *>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, NSString *>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, NSString *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, NSString *>, std::hash<unsigned int>, std::equal_to<unsigned int>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, NSString *>, std::equal_to<unsigned int>, std::hash<unsigned int>>> { float __value_; } __p3_; } __table_; } _identifierMap; struct vector<std::unordered_map<NSString *, unsigned int>, std::allocator<std::unordered_map<NSString *, unsigned int>>> { void *__begin_; void *__end_; struct __compressed_pair<std::unordered_map<NSString *, unsigned int> *, std::allocator<std::unordered_map<NSString *, unsigned int>>> { void *__value_; } __end_cap_; } _undoSymbolTableMaps; } _symbolTable;
    struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _containingRowUid;
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } _insideFunctorStack;
    struct TSCEReferenceSet { void /* function */ **_vptr$TSCEReferenceSet; TSCEDependencyTracker *_dependencyTracker; struct unordered_map<TSKUIDStruct, std::unordered_set<TSUCellCoord>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, std::unordered_set<TSUCellCoord>>>> { struct __hash_table<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>>, std::allocator<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>>> { float __value_; } __p3_; } __table_; } _cellRefs; struct map<TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>, std::less<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>>>> { struct __tree<std::__value_type<TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>>, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>>, std::less<TSKUIDStruct>>, std::allocator<std::__value_type<TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>>, std::less<TSKUIDStruct>>> { unsigned long long __value_; } __pair3_; } __tree_; } _rangeRefs; void *_datalessRefs; void *_columnRowUidRefs; void *_tableUuidRefs; void *_geometryVolatileRefs; void *_spanningRefs; NSMutableSet *_categoryRefs; void *_wholeOwnerRefs; } _calculatedPrecedents;
    struct TSCERandGenerator { struct TSCECellRandSeed { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { struct CC_SHA1state_st { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7[16]; int x8; } x0; unsigned char x1[20]; unsigned char x2[20]; unsigned int x3; } x1; } *_randGenerator;
    NSMutableDictionary *_recentConversions;
}

@property (readonly, nonatomic) TSCECalculationEngine *calcEngine;
@property (readonly, nonatomic) TSULocale *locale;
@property (nonatomic) BOOL inArrayMode;
@property (nonatomic) BOOL suppressCycleCheck;
@property (nonatomic) BOOL allowAbort;
@property (nonatomic) BOOL pivotRefsReturnsValueGrid;
@property (nonatomic) BOOL isForChartFormulas;
@property (nonatomic) BOOL wantsCalculatedPrecedents;
@property (nonatomic) BOOL shouldReportWarnings;
@property (nonatomic) BOOL hasWarnings;
@property (nonatomic) BOOL allowLambdaAsResult;
@property (nonatomic) unsigned char hidingActionMask;
@property (nonatomic) unsigned char intersectionRangeContext;
@property (readonly, nonatomic) BOOL evaluationAborted;
@property (readonly, nonatomic) TSCERemoteDataSpecifierSet *remoteDataKeysInterestedIn;
@property (nonatomic) BOOL shouldPickupRemoteDataInterests;
@property (readonly, nonatomic) BOOL calculatedPrecedentsExist;

+ (id)contextForCalcEngine:(id)a0 containingTable:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 containingCell:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a2;
+ (id)contextForCalcEngine:(id)a0 containingTable:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 containingCell:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a2 inArrayMode:(BOOL)a3;
+ (id)newDateConversionOfString:(id)a0 context:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)reportWarning:(id)a0;
- (const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)containingTable;
- (void)exitingFunctor:(unsigned long long)a0;
- (void *)evaluationStack;
- (void)addCalculatedPrecedent:(const struct TSCEAnyRef { unsigned short x0; struct TSCESpanningRangeRef { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; unsigned char x1; } x1; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x2; BOOL x3; BOOL x4; id x5; } *)a0;
- (void)addCalculatedPrecedentForCategoryRef:(id)a0;
- (void)addCalculatedPrecedents:(const void *)a0;
- (void)addDateConversionOfString:(id)a0 toDateValue:(id)a1;
- (void)addRemoteDataSpecifierInterestedIn:(id)a0;
- (const void *)calculatedPrecedents;
- (void)clearAllWarnings;
- (void)clearLocalWarnings;
- (const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)containingCell;
- (struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })containingCellRef;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })containingRowUid;
- (id)containingTableResolver;
- (struct TSCETableResolverWrapper { } *)containingTableResolverWrapper;
- (void)copyWarningsFrom:(id)a0;
- (void)enteringFunctor:(unsigned long long)a0;
- (id)initWithCalcEngine:(id)a0 containingTable:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 containingCell:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a2 inArrayMode:(BOOL)a3;
- (BOOL)insideFunctor:(unsigned long long)a0;
- (id)loadArgumentsForFunction:(id)a0 arguments:(void *)a1 numArgs:(unsigned long long)a2;
- (id)localWarnings;
- (id)newDateConversionOfString:(id)a0;
- (id)raiseErrorOrConvert:(id)a0;
- (struct TSCERandGenerator { struct TSCECellRandSeed { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { struct CC_SHA1state_st { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7[16]; int x8; } x0; unsigned char x1[20]; unsigned char x2[20]; unsigned int x3; } x1; } *)randGenerator;
- (void)runBlockUnlessAborted:(id /* block */)a0;
- (void *)symbolTable;
- (void)takeSideEffectsFrom:(id)a0;
- (id)unwrapThunk:(id)a0;
- (id)unwrapThunk:(id)a0 takeSideEffects:(BOOL)a1;
- (id)valueBindingEnvironment;
- (id)warningsSet;

@end
