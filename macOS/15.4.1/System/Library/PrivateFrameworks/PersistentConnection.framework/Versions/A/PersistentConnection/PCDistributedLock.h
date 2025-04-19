@class NSString;

@interface PCDistributedLock : NSObject <NSLocking> {
    NSString *_path;
    int _fd;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)lock;
- (void)unlock;
- (BOOL)tryLock;
- (id)initWithPath:(id)a0;
- (BOOL)_lockBlocking:(BOOL)a0;

@end
