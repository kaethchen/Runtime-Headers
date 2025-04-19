@interface AVCaptureDeskViewApplication : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _completionHandlerLock;
    id /* block */ _completionHandler;
    int _appForegroundedToken;
    int _appSetUpCompletedToken;
}

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)presentWithCompletionHandler:(id /* block */)a0;
- (void)releaseCompletionHandlerStorage;
- (void)presentWithLaunchConfiguration:(id)a0 completionHandler:(id /* block */)a1;

@end
