@class NSURL, NSFileManager, NSJSONSerialization;

@interface MetalPackage : NSObject {
    NSURL *_packageURL;
    NSURL *_temporaryPackageURL;
    NSFileManager *_fileManager;
    NSJSONSerialization *_jsonSerializer;
    BOOL _ml;
    struct unique_ptr<llvm::LockFileManager, std::default_delete<llvm::LockFileManager>> { struct __compressed_pair<llvm::LockFileManager *, std::default_delete<llvm::LockFileManager>> { struct LockFileManager *__value_; } __ptr_; } _temporaryPackageFileLock;
    struct unique_ptr<InProcessPackageWritingGuard::LockGuard, std::default_delete<InProcessPackageWritingGuard::LockGuard>> { struct __compressed_pair<InProcessPackageWritingGuard::LockGuard *, std::default_delete<InProcessPackageWritingGuard::LockGuard>> { struct LockGuard *__value_; } __ptr_; } _writingLockGuard;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)getJsonData;
- (id)initWithPackageURL:(id)a0 temporaryPackageURL:(id)a1;

@end
