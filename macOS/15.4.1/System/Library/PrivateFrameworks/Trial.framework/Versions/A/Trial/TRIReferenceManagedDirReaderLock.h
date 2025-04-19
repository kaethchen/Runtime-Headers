@class NSString, _PASLock;

@interface TRIReferenceManagedDirReaderLock : NSObject {
    NSString *_dir;
    _PASLock *_lock;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)unlock;
- (id)initWithDir:(id)a0;

@end
