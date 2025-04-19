@class NSMutableDictionary, NSMutableOrderedSet;

@interface PLLocalVideoKeyFrameJobQueue : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableOrderedSet *_queuedJobs;
    NSMutableDictionary *_jobsByAssetObjectID;
    unsigned long long _inflightCount;
}

- (id)init;
- (void).cxx_destruct;
- (id)popNextJobToRun;
- (BOOL)addJobWithAssetObjectID:(id)a0 networkAccessAllowed:(BOOL)a1 clientBundleID:(id)a2 libraryID:(id)a3 error:(id *)a4 completionHandler:(id /* block */)a5;
- (BOOL)removeJob:(id)a0;

@end
