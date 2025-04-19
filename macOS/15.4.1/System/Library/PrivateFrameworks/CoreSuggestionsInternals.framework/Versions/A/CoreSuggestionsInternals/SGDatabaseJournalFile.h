@class NSString;

@interface SGDatabaseJournalFile : NSObject {
    NSString *_path;
    unsigned long long _len;
    int _fd;
    BOOL _written;
    BOOL _dead;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (id)initWithPath:(id)a0;
- (void)write:(id)a0;
- (void)destroy;
- (void)unlink;
- (id)read;
- (void)destroyAndUnlinkIfEmpty;

@end
