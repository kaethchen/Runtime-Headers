@class NSString;

@interface ICExclusiveLock : NSObject <NSLocking> {
    int _fd;
    NSString *_name;
    NSString *_cachePath;
    NSString *_fullPath;
}

- (void)dealloc;
- (id)init;
- (id)name;
- (void).cxx_destruct;
- (void)lock;
- (void)setName:(id)a0;
- (void)unlock;
- (BOOL)tryLock;
- (id)initWithName:(id)a0 cachePath:(id)a1;

@end
