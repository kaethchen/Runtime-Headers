@class TSCEUIDSet;

@interface TSTExpandCollapseState : TSCKSosBase <NSCopying> {
    struct vector<TSU::UUIDData<TSP::UUIDData>, std::allocator<TSU::UUIDData<TSP::UUIDData>>> { void *__begin_; void *__end_; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::allocator<TSU::UUIDData<TSP::UUIDData>>> { void *__value_; } __end_cap_; } _collapsedGroupUIDs;
    struct vector<TSU::UUIDData<TSP::UUIDData>, std::allocator<TSU::UUIDData<TSP::UUIDData>>> { void *__begin_; void *__end_; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::allocator<TSU::UUIDData<TSP::UUIDData>>> { void *__value_; } __end_cap_; } _expandedGroupUIDs;
}

@property (readonly, nonatomic) TSCEUIDSet *uidsCollapsed;
@property (readonly, nonatomic) TSCEUIDSet *uidsExpanded;
@property (readonly, nonatomic) long long dimension;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithArchive:(const void *)a0;
- (void)saveToArchive:(void *)a0;
- (id)initWithCollapsed:(id)a0 expanded:(id)a1 dimension:(long long)a2;
- (id)makeInverse;

@end
