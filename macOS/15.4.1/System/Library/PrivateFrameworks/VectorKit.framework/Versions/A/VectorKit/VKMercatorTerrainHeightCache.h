@protocol VKMercatorTerrainHeightProvider;

@interface VKMercatorTerrainHeightCache : NSObject {
    struct map<md::Anchor *, float, std::less<md::Anchor *>, std::allocator<std::pair<md::Anchor *const, float>>> { struct __tree<std::__value_type<md::Anchor *, float>, std::__map_value_compare<md::Anchor *, std::__value_type<md::Anchor *, float>, std::less<md::Anchor *>>, std::allocator<std::__value_type<md::Anchor *, float>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<md::Anchor *, float>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<md::Anchor *, std::__value_type<md::Anchor *, float>, std::less<md::Anchor *>>> { unsigned long long __value_; } __pair3_; } __tree_; } _anchorToHeight;
}

@property (weak, nonatomic) id<VKMercatorTerrainHeightProvider> heightProvider;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)invalidateRect:(const void *)a0;
- (double)heightForAnchor:(void *)a0;
- (void)removeCachedValueForAnchor:(void *)a0;

@end
