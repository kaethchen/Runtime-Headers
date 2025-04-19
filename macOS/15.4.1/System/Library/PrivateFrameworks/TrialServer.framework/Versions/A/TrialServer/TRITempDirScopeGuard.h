@class NSString;

@interface TRITempDirScopeGuard : NSObject {
    BOOL _isDisposed;
}

@property (readonly, nonatomic) NSString *canonicalPath;
@property (readonly, nonatomic) NSString *path;

+ (BOOL)ifUnreferencedCleanupPath:(id)a0;
+ (id)refCountsLock;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (BOOL)dispose;

@end
