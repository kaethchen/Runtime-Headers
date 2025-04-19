@class NSString;

@interface TMSubdirectorySourceDisk : TMTestDisk

@property (copy) NSString *subdirectoryPath;
@property (copy) NSString *baseDevice;

- (id)description;
- (void).cxx_destruct;
- (BOOL)detach;
- (BOOL)isAttached;
- (BOOL)unmount;
- (BOOL)isMounted;
- (BOOL)_mountFileSystem;
- (BOOL)attach;
- (BOOL)constructFileSystem;
- (id)initWithPath:(id)a0 capacity:(unsigned long long)a1 arbiter:(id)a2 error:(id *)a3;

@end
