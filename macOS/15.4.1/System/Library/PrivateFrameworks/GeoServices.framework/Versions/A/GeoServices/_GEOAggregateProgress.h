@class NSMutableArray;

@interface _GEOAggregateProgress : NSProgress {
    NSMutableArray *_observedChildren;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithParent:(id)a0 userInfo:(id)a1;
- (void)_update;
- (BOOL)isIndeterminate;
- (void)addChild:(id)a0 withPendingUnitCount:(long long)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithTotalUnitCount:(long long)a0;

@end
