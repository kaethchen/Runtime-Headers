@class PGManager, PGCurationManager, CLSServiceManager, CLSLocationCache, PHPhotoLibrary, NSObject, CPAnalytics;
@protocol OS_os_log;

@interface PGManagerWorkingContext : NSObject {
    PGManager *_manager;
}

@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) PGCurationManager *curationManager;
@property (readonly) CLSServiceManager *serviceManager;
@property (readonly) NSObject<OS_os_log> *loggingConnection;
@property (readonly) CPAnalytics *analytics;
@property (readonly) CLSLocationCache *locationCache;

- (void).cxx_destruct;
- (id)musicCuratorContextWithCurationOptions:(id)a0 error:(id *)a1;
- (void)performSynchronousConcurrentGraphReadUsingBlock:(id /* block */)a0;
- (id)initWithManager:(id)a0 loggingConnection:(id)a1;
- (BOOL)isGraphReady;
- (id)musicCuratorContextWithRecentlyUsedSongAdamIDs:(id)a0 error:(id *)a1;

@end
