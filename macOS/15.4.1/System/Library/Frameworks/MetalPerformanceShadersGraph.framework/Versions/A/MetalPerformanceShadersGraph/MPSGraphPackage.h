@class NSURL, NSFileManager, NSMutableDictionary;

@interface MPSGraphPackage : MPSGraphObject {
    NSURL *_packageURL;
    NSURL *_temporaryPackageURL;
    NSFileManager *_fileManager;
    NSMutableDictionary *_plistRoot;
    unsigned long long _mlirFileCount;
    struct unique_ptr<llvm::LockFileManager, std::default_delete<llvm::LockFileManager>> { struct __compressed_pair<llvm::LockFileManager *, std::default_delete<llvm::LockFileManager>> { struct LockFileManager *__value_; } __ptr_; } _temporaryPackageFileLock;
    struct unique_ptr<InProcessPackageWritingGuard::LockGuard, std::default_delete<InProcessPackageWritingGuard::LockGuard>> { struct __compressed_pair<InProcessPackageWritingGuard::LockGuard *, std::default_delete<InProcessPackageWritingGuard::LockGuard>> { struct LockGuard *__value_; } __ptr_; } _writingLockGuard;
}

+ (id)getResourceFileName;
+ (void)readResources:(id)a0 fromURL:(id)a1 error:(id *)a2 usingAllocator:(struct function_ref<char *(llvm::StringRef, unsigned long long, unsigned long long)> { void /* function */ *x0; long long x1; })a3;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)writeResources:(struct ArrayRef<mlir::mps::MPSResourceBlobEntry *> { struct MPSResourceBlobEntry **x0; unsigned long long x1; })a0;
- (id)initWithSourcePackageURL:(id)a0 error:(id *)a1;
- (void)copyDataFiles:(struct ArrayRef<std::string> { void *x0; unsigned long long x1; })a0 currentBasePath:(id)a1 location:(struct Location { struct LocationAttr { struct AttributeStorage *x0; } x0; })a2;
- (void)createBytecodeFromMlirModule:(struct ModuleOp { struct Operation *x0; })a0 fileHandle:(id)a1 resourceStorageMode:(unsigned long long)a2;
- (id)createFileHandle;
- (void)createVersionedBytecodeFromMlirModule:(struct ModuleOp { struct Operation *x0; })a0 packageKey:(id)a1 fileHandle:(id)a2 resourceStorageMode:(unsigned long long)a3 downgradedModuleCallback:(struct function_ref<void (mlir::mps::serialization::ModuleOp)> { void /* function */ *x0; long long x1; })a4;
- (id)findLatestPackage;
- (id)findLatestPackageKey;
- (id)getMLIRLibrary;
- (id)getPackageKeyForPlatform:(unsigned long long)a0 andMinimumDeploymentTarget:(struct optional<MPSGraphOperatingSystemVersion> { union { char x0; struct MPSGraphOperatingSystemVersion { long long x0; long long x1; long long x2; } x1; } x0; BOOL x1; })a1;
- (id)getPlistData;
- (id)initWithPackageURL:(id)a0 temporaryPackageURL:(id)a1 append:(BOOL)a2;
- (id)initWithSourcePackageURL:(id)a0;
- (void)setMLIRLibrary:(id)a0 withPackageKey:(id)a1;

@end
