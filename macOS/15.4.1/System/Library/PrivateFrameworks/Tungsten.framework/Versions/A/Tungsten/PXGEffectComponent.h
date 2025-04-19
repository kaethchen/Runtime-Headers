@class NSMapTable, NSMutableSet;
@protocol PXGEffectComponentDelegate;

@interface PXGEffectComponent : PXGComponent <PXGMutableEffectComponent> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMapTable *_lock_effectById;
    NSMutableSet *_allEffects;
}

@property (weak, nonatomic) id<PXGEffectComponentDelegate> delegate;
@property (readonly, nonatomic) const unsigned int *effectIds;
@property (readonly, nonatomic) unsigned int *mutableEffectIds;

+ (unsigned long long)elementSize;

- (void).cxx_destruct;
- (id)initWithDataStore:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)cleanupUnusedObjects;
- (id)effectForId:(unsigned int)a0;
- (void)setContentsFrom:(id)a0;
- (void)didUseEffect:(id)a0;
- (void)registerEffect:(id)a0 withEffectId:(unsigned int)a1;
- (void)unregisterEffectId:(unsigned int)a0;
- (void)willDestroyEntities:(const struct { unsigned int x0; } *)a0 count:(long long)a1;

@end
