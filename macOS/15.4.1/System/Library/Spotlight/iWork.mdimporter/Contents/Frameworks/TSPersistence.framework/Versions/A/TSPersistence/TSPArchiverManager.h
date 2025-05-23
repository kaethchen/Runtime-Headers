@class NSObject, TSPDescriptionGenerator, NSMapTable;
@protocol OS_dispatch_queue, TSPArchiverManagerDelegate;

@interface TSPArchiverManager : NSObject {
    id<TSPArchiverManagerDelegate> _delegate;
    Class _archiverClass;
    char _archiverFlags;
    NSMapTable *_archivers;
    NSMapTable *_metadataArchivers;
    NSObject<OS_dispatch_queue> *_archiversHighQueue;
    NSObject<OS_dispatch_queue> *_archiversLowQueue;
    NSObject<OS_dispatch_queue> *_archiveHighQueue;
    NSObject<OS_dispatch_queue> *_archiveDefaultQueue;
    NSObject<OS_dispatch_queue> *_archiveLowQueue;
    NSObject<OS_dispatch_queue> *_serializationQueue;
    _Atomic char _flags;
}

@property (retain, nonatomic) TSPDescriptionGenerator *descriptionGenerator;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (void)archiveObjectWithHighPriority:(id)a0;
- (void)archiveObjectWithLowPriority:(id)a0;
- (void)archiveWithArchiver:(id)a0 queue:(id)a1 waitForArchiving:(BOOL)a2;
- (id)archiverForObject:(id)a0 archiveQueue:(id)a1 waitForArchiving:(BOOL)a2;
- (id)archiverForObject:(id)a0 hasArchiverAccessLock:(BOOL)a1;
- (id)explicitComponentRootObjectForObject:(id)a0 hasArchiverAccessLock:(BOOL)a1;
- (id)impl_archiverForObject:(id)a0;
- (id)impl_explicitComponentRootObjectForObject:(id)a0;
- (id)initWithDelegate:(id)a0 archiverClass:(Class)a1 archiverFlags:(char)a2;
- (void)performAsynchronousArchiverAccessUsingBlock:(id /* block */)a0;

@end
