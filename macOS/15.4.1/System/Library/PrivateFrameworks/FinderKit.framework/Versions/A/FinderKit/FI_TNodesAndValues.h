@class NSDate, NSObject;

@interface FI_TNodesAndValues : NSObject <NSCopying> {
    struct unordered_map<TFENode, NSObject *, std::hash<TFENode>, std::equal_to<TFENode>, std::allocator<std::pair<const TFENode, NSObject *>>> { struct __hash_table<std::__hash_value_type<TFENode, NSObject *>, std::__unordered_map_hasher<TFENode, std::__hash_value_type<TFENode, NSObject *>, std::hash<TFENode>, std::equal_to<TFENode>>, std::__unordered_map_equal<TFENode, std::__hash_value_type<TFENode, NSObject *>, std::equal_to<TFENode>, std::hash<TFENode>>, std::allocator<std::__hash_value_type<TFENode, NSObject *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, NSObject *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, NSObject *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, NSObject *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, NSObject *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, NSObject *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, NSObject *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, NSObject *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TFENode, NSObject *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, NSObject *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TFENode, std::__hash_value_type<TFENode, NSObject *>, std::hash<TFENode>, std::equal_to<TFENode>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<TFENode, std::__hash_value_type<TFENode, NSObject *>, std::equal_to<TFENode>, std::hash<TFENode>>> { float __value_; } __p3_; } __table_; } _values;
    struct shared_ptr<const std::unordered_set<TFENode>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _allNodes;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _attribute;
    BOOL _forPreview;
    FI_TNodesAndValues *_masterValues;
    BOOL _isMasterAttribute;
    BOOL _hasNumericValues;
    BOOL _hasDateValues;
    BOOL _canBeRanged;
    BOOL _canBeTotaled;
    BOOL _canBeAveraged;
    BOOL _dirty;
    NSObject *_lowest;
    NSObject *_highest;
    double _total;
    struct unordered_map<NSObject *, unsigned long, std::hash<NSObject *>, std::equal_to<NSObject *>, std::allocator<std::pair<NSObject *const, unsigned long>>> { struct __hash_table<std::__hash_value_type<NSObject *, unsigned long>, std::__unordered_map_hasher<NSObject *, std::__hash_value_type<NSObject *, unsigned long>, std::hash<NSObject *>, std::equal_to<NSObject *>>, std::__unordered_map_equal<NSObject *, std::__hash_value_type<NSObject *, unsigned long>, std::equal_to<NSObject *>, std::hash<NSObject *>>, std::allocator<std::__hash_value_type<NSObject *, unsigned long>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject *, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject *, unsigned long>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject *, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject *, unsigned long>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject *, unsigned long>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject *, unsigned long>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject *, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSObject *, unsigned long>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSObject *, unsigned long>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSObject *, std::__hash_value_type<NSObject *, unsigned long>, std::hash<NSObject *>, std::equal_to<NSObject *>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<NSObject *, std::__hash_value_type<NSObject *, unsigned long>, std::equal_to<NSObject *>, std::hash<NSObject *>>> { float __value_; } __p3_; } __table_; } _uniqueValueCounts;
    struct vector<std::pair<NSObject *, unsigned long>, std::allocator<std::pair<NSObject *, unsigned long>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<NSObject *, unsigned long> *, std::allocator<std::pair<NSObject *, unsigned long>>> { void *__value_; } __end_cap_; } _valuesSortedByCount;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _displayString;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _toolTipString;
    NSDate *_singleDate;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id).cxx_construct;
- (void)analyze;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })displayString;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })toolTipString;
- (id)dateInterval;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })rangeString;
- (double)dateSpanSeconds;
- (struct TFENodeVector { struct TFENode *x0; struct TFENode *x1; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *x0; } x2; })nodesWithValues;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })averageString;
- (void)computeDisplayStringAndToolTip;
- (void)computeToolTipStringAsAllUniqueValues;
- (unsigned long long)countNonNil;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })dateRangeSummaryString;
- (int)digitsAfterDecimalForAverage;
- (int)digitsAfterDecimalForTotal;
- (id)initWithAttribute:(const void *)a0 allNodes:(const void *)a1 forPreview:(BOOL)a2;
- (id)initWithAttribute:(const void *)a0 forPreview:(BOOL)a1;
- (id)objectForDisplay;
- (void)setIsMasterAttribute;
- (void)setMasterValues:(id)a0;
- (void)setValue:(id)a0 forNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })totalString;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })uniqueValuesAndCountsStringUpTo:(long long)a0 onSeparateLines:(BOOL)a1 lineLimit:(unsigned long long)a2;

@end
