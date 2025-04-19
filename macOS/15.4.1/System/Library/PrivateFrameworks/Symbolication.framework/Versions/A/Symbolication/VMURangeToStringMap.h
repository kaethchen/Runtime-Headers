@class NSMutableArray;

@interface VMURangeToStringMap : NSObject <NSSecureCoding> {
    NSMutableArray *_strings;
    struct unordered_map<NSString *, unsigned int, NSStringHashFunctor, NSStringEqualsFunctor, std::allocator<std::pair<NSString *const, unsigned int>>> { struct __hash_table<std::__hash_value_type<NSString *, unsigned int>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, unsigned int>, NSStringHashFunctor, NSStringEqualsFunctor>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, unsigned int>, NSStringEqualsFunctor, NSStringHashFunctor>, std::allocator<std::__hash_value_type<NSString *, unsigned int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned int>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned int>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned int>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned int>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, unsigned int>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned int>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, unsigned int>, NSStringHashFunctor, NSStringEqualsFunctor>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, unsigned int>, NSStringEqualsFunctor, NSStringHashFunctor>> { float __value_; } __p3_; } __table_; } _stringToIndexMap;
    struct vector<RangeAndString, std::allocator<RangeAndString>> { struct *__begin_; struct *__end_; struct __compressed_pair<RangeAndString *, std::allocator<RangeAndString>> { struct *__value_; } __end_cap_; } _rangeAndStringVector;
    BOOL _sorted;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned int)count;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)sort;
- (id)stringForIndex:(unsigned int)a0;
- (unsigned int)indexForString:(id)a0 insertIfMissing:(BOOL)a1;
- (void)enumerateHexAddressesInStrings:(id /* block */)a0;
- (void)enumerateRanges:(id /* block */)a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })rangeContainingAddress:(unsigned long long)a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })rangeForString:(id)a0 startingAtAddress:(unsigned long long)a1;
- (void)resymbolicateStringsWithSymbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a0;
- (void)setString:(id)a0 forRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a1;
- (id)stringForAddress:(unsigned long long)a0;
- (unsigned int)uniquedStringCount;

@end
