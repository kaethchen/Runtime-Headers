@class NSString, TSTHeaderNameMgr;

@interface TSTHeaderNameMgrTile : TSPObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _tileLock;
    struct map<NSString *, TSTHeaderNameMgrEntry *, std::less<NSString *>, std::allocator<std::pair<NSString *const, TSTHeaderNameMgrEntry *>>> { struct __tree<std::__value_type<NSString *, TSTHeaderNameMgrEntry *>, std::__map_value_compare<NSString *, std::__value_type<NSString *, TSTHeaderNameMgrEntry *>, std::less<NSString *>>, std::allocator<std::__value_type<NSString *, TSTHeaderNameMgrEntry *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<NSString *, TSTHeaderNameMgrEntry *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<NSString *, std::__value_type<NSString *, TSTHeaderNameMgrEntry *>, std::less<NSString *>>> { unsigned long long __value_; } __pair3_; } __tree_; } _nameFragmentToEntry;
    TSTHeaderNameMgr *_headerNameMgr;
}

@property (retain, nonatomic) NSString *firstFragment;
@property (retain, nonatomic) NSString *lastFragment;
@property (readonly, nonatomic) unsigned long long count;

+ (id)medianStringFromArray:(id)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void *)createFragmentEntryForString:(id)a0 createIfMissingUsingPrecedentCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a1;
- (void *)fragmentEntryForString:(id)a0;
- (id)initWithHeaderNameMgr:(id)a0 context:(id)a1;
- (id)splitTile;
- (void)unpackAfterUnarchive:(id)a0;

@end
