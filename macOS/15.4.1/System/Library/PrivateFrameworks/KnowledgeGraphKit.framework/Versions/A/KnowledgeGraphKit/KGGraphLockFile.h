@class NSURL;

@interface KGGraphLockFile : NSObject {
    int _fd;
    BOOL _locked;
    NSURL *_fileURL;
}

- (void).cxx_destruct;
- (BOOL)lock;
- (void)unlock;
- (BOOL)isLocked;
- (id)initWithDatabaseURL:(id)a0;

@end
