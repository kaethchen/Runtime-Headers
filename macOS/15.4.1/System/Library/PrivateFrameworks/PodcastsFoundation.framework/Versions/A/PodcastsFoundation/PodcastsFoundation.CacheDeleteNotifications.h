@interface PodcastsFoundation.CacheDeleteNotifications : NSObject <CacheDeleteNotificationObserverDelegate> {
    void /* unknown type, empty encoding */ paths;
    void /* unknown type, empty encoding */ stream;
    void /* unknown type, empty encoding */ continuation;
    void /* unknown type, empty encoding */ observer;
    void /* unknown type, empty encoding */ completedCheck;
}

- (id)init;
- (void).cxx_destruct;
- (void)cacheDeleteObserver:(id)a0 didIdentifyCacheDeletedPath:(id)a1 deletedAtDate:(id)a2;
- (void)cacheDeleteObserverBecameSynchronizedWithFileSystem:(id)a0;

@end
