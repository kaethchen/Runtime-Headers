@interface CVNLPLexiconCursors : NSObject <NSCopying> {
    struct vector<const _LXCursor *, std::allocator<const _LXCursor *>> { struct _LXCursor **__begin_; struct _LXCursor **__end_; struct __compressed_pair<const _LXCursor **, std::allocator<const _LXCursor *>> { struct _LXCursor **__value_; } __end_cap_; } _sortedCursors;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (long long)count;
- (id).cxx_construct;
- (void)enumerateLexiconCursorsSortedByPriorityWithBlock:(id /* block */)a0;
- (id)initWithSortedCursors:(void *)a0;

@end
