@class NSURL, NSString, NSDate;

@interface BundleData : NSObject {
    id /* block */ _reloadHandler;
    struct __FSEventStream { } *_stream;
}

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL isSigned;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSString *versionNumber;
@property (readonly, nonatomic) NSDate *timestamp;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)doReload;
- (void)forceReload;
- (id)initWithURL:(id)a0 withReloadBlock:(id /* block */)a1 watchForUpdates:(BOOL)a2;
- (void)loadInternalData:(id)a0;
- (BOOL)reloadIfNecessary;
- (void)setupFSStream;

@end
