@class NSURL, NSObject;
@protocol OS_dispatch_semaphore;

@interface NSExtensionURLResult : NSObject {
    NSObject<OS_dispatch_semaphore> *_sema;
    NSURL *_url;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, setter=setURL:) NSURL *url;

- (void)dealloc;
- (id)init;
- (id)copiedURL;
- (void)signal;
- (BOOL)wait:(double)a0;

@end
