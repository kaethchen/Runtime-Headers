@interface FI_TSegmentedControl : NSSegmentedControl {
    struct map<long, FI_TSegmentedControlHelper *, std::less<long>, std::allocator<std::pair<const long, FI_TSegmentedControlHelper *>>> { struct __tree<std::__value_type<long, FI_TSegmentedControlHelper *>, std::__map_value_compare<long, std::__value_type<long, FI_TSegmentedControlHelper *>, std::less<long>>, std::allocator<std::__value_type<long, FI_TSegmentedControlHelper *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long, FI_TSegmentedControlHelper *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, FI_TSegmentedControlHelper *>, std::less<long>>> { unsigned long long __value_; } __pair3_; } __tree_; } _segmentToHelperMap;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)performKeyEquivalent:(id)a0;
- (BOOL)sendAction:(SEL)a0 to:(id)a1;
- (void)setSegmentCount:(long long)a0;
- (void)aboutToTearDown;
- (BOOL)segmentHasClickHandler:(long long)a0;
- (void)setClickHandler:(const void *)a0 forSegment:(long long)a1;
- (void)setKeyEquivalent:(const void *)a0 modifierFlags:(unsigned long long)a1 forSegment:(long long)a2;

@end
