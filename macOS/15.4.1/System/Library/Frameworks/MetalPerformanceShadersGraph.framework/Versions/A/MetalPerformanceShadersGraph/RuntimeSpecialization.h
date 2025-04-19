@interface RuntimeSpecialization : MPSGraphObject {
    struct DenseMap<mlir::func::FuncOp, NSDictionary<NSString *,NSString *> *, llvm::DenseMapInfo<mlir::func::FuncOp>, llvm::detail::DenseMapPair<mlir::func::FuncOp, NSDictionary<NSString *,NSString *> *>> { void *Buckets; unsigned int NumEntries; unsigned int NumTombstones; unsigned int NumBuckets; } _perEntryFuncOpSymbolMap;
    void *_runtime;
    struct unique_ptr<GPU::ANECompilerHelper::CompiledProduct, std::default_delete<GPU::ANECompilerHelper::CompiledProduct>> { struct __compressed_pair<GPU::ANECompilerHelper::CompiledProduct *, std::default_delete<GPU::ANECompilerHelper::CompiledProduct>> { struct CompiledProduct *__value_; } __ptr_; } _specializedCompiledANEProduct;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCompiledANEProduct;
- (id)getSymbolMapForCurrentEntryPoint;
- (id)initWithPerEntryFuncOpSymbolMap:(const void *)a0 perFuncOpANEFileSymbolsUsed:(const void *)a1 runtime:(void *)a2;

@end
