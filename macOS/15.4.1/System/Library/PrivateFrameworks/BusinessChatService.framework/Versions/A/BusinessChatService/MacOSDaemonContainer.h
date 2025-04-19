@class NSURL, NSLock;

@interface MacOSDaemonContainer : NSObject {
    long long _extensionHandle;
    NSLock *_lock;
    NSURL *_containerURL;
}

@property (readonly, nonatomic) NSURL *containerURL;

+ (id)sharedContainer;

- (id)init;
- (void).cxx_destruct;
- (id)_errorForQuery:(struct container_query_s { } *)a0;
- (BOOL)consumeExtensionWithError:(id *)a0;
- (void)releaseExtension;

@end
