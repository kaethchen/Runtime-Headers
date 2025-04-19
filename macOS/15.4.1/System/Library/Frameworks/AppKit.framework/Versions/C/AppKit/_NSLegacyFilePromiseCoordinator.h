@class NSArray, NSURL, _NSFSStreamWrapper, NSObject, NSMutableSet;
@protocol OS_dispatch_semaphore;

@interface _NSLegacyFilePromiseCoordinator : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSObject<OS_dispatch_semaphore> *_waiter;
    _NSFSStreamWrapper *_fsStream;
    NSMutableSet *_targetUrls;
    NSMutableSet *_foundUrls;
    NSMutableSet *_observedUrls;
    unsigned char fQuit : 1;
    unsigned char fRunUntilDone : 1;
}

@property (copy) NSURL *destinationUrl;
@property (readonly) NSArray *remainingTargetUrls;
@property (copy) id /* block */ pathReadyForReadingHandler;
@property (copy) id /* block */ completionHandler;

- (void)dealloc;
- (id)init;
- (void)run;
- (void)_main;
- (void)_resolvePendingMatches;
- (BOOL)enqueueTargetUrls:(id)a0;
- (void)quit;
- (void)runUntilDone;
- (BOOL)waitForPromisedURLsToBeWrittenToDisk:(id)a0 error:(id *)a1;

@end
