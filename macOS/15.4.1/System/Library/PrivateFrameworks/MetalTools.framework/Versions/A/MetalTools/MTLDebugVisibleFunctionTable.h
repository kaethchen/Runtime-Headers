@class MTLToolsObject;

@interface MTLDebugVisibleFunctionTable : MTLToolsVisibleFunctionTable <MTLDebugResourcePurgeable> {
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _purgeableStateToken;
    BOOL _purgeableStateHasBeenSet;
    MTLToolsObject *_pipelineState;
}

@property (readonly) unsigned long long functionCount;
@property (readonly) unsigned long long stage;

- (void)dealloc;
- (id)description;
- (BOOL)purgeableStateValidForRendering;
- (id)formattedDescription:(unsigned long long)a0;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (id)initWithVisibleFunctionTable:(id)a0 parent:(id)a1 descriptor:(id)a2 pipelineState:(id)a3 stage:(unsigned long long)a4;
- (id)initWithVisibleFunctionTable:(id)a0 parent:(id)a1 descriptor:(id)a2 stage:(unsigned long long)a3;
- (void)lockPurgeableState;
- (void)setFunction:(id)a0 atIndex:(unsigned long long)a1;
- (void)setFunctions:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (void)unlockPurgeableState;

@end
