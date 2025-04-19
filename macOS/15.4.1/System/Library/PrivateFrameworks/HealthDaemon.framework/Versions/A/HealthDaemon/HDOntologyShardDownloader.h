@class HKObserverSet, HDOntologyUpdateCoordinator, NSObject;
@protocol OS_dispatch_queue, HDOntologyShardDownloaderObserver;

@interface HDOntologyShardDownloader : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet<HDOntologyShardDownloaderObserver> *_ontologyShardDownloaderObservers;
}

@property (readonly, weak, nonatomic) HDOntologyUpdateCoordinator *updateCoordinator;

- (id)init;
- (void).cxx_destruct;
- (void)addOntologyShardDownloaderObserver:(id)a0 queue:(id)a1;
- (void)downloadRequiredShardFilesWithSession:(id)a0 completion:(id /* block */)a1;
- (void)downloadRequiredShardFilesWithSession:(id)a0 requiredEntries:(id)a1 completion:(id /* block */)a2;
- (id)initWithOntologyUpdateCoordinator:(id)a0;
- (void)removeOntologyShardDownloaderObserver:(id)a0;

@end
