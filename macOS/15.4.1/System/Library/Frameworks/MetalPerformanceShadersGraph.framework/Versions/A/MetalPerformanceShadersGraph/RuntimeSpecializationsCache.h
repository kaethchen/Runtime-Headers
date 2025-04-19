@class NSMapTable;

@interface RuntimeSpecializationsCache : MPSGraphObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _mu;
    NSMapTable *_lookupTable;
    void *_runtime;
    struct DenseMap<mlir::func::FuncOp, llvm::DenseMap<mlir::placement::RegionCall, llvm::StringSet<>>, llvm::DenseMapInfo<mlir::func::FuncOp>, llvm::detail::DenseMapPair<mlir::func::FuncOp, llvm::DenseMap<mlir::placement::RegionCall, llvm::StringSet<>>>> { void *Buckets; unsigned int NumEntries; unsigned int NumTombstones; unsigned int NumBuckets; } _perFuncOpANEFileSymbolsUsed;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)getOrCreateSpecializationForMap:(id)a0 perEntryFuncOpSymbolMap:(const void *)a1;
- (id)getSpecializationOrNilForMap:(id)a0;
- (id)initWithRuntime:(void *)a0;
- (void)removeSpecializationForMap:(id)a0;

@end
