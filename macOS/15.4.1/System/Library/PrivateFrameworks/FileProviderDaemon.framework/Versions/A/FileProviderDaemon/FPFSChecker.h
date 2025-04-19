@interface FPFSChecker : NSObject

@property BOOL itemIsInsideAPackage;
@property BOOL itemIsInsideAPinnedFolder;
@property BOOL itemIsInsideAnIgnoredFolder;

- (void)enumerateItemsOnDiskAtURL:(id)a0 detachedRoots:(id)a1 usingFPFS:(BOOL)a2 ioContext:(const struct { id /* block */ x0; unsigned int x1; BOOL x2; BOOL x3; BOOL x4; } *)a3 delegate:(id)a4;
- (BOOL)isDataProtectedFileAtPath:(id)a0 handle:(struct fpfs_item_handle { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned int x3; char *x4; int x5; unsigned int x6; } *)a1;

@end
