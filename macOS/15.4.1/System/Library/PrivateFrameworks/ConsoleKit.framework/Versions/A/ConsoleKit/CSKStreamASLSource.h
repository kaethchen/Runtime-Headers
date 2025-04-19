@class NSObject, NSURL, CSKFileObserver;
@protocol OS_dispatch_queue;

@interface CSKStreamASLSource : CSKStreamSource

@property (nonatomic) struct __asl_object_s { } *store;
@property (retain, nonatomic) CSKFileObserver *fileObserver;
@property (nonatomic) long long sourceType;
@property (nonatomic) BOOL isFileObserverEnabled;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateUpdatesSerialQueue;
@property (nonatomic) BOOL isFetchingEntitiesBackward;
@property (readonly, nonatomic) NSURL *fileURL;
@property (nonatomic) struct __asl_object_s { } *queryList;

+ (id)diagnosticAndUsageDataASLSource;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)stop;
- (id)initWithFileURL:(id)a0;
- (void)fail;
- (void)_cleanupASLStoreAndFileObserver;
- (id /* block */)_fileObserverEventHandler;
- (id)_handleMessagesFromList:(struct __asl_object_s { } *)a0 direction:(int)a1;
- (id)_readStoreChunkNextToEntity:(id)a0;
- (id)_readStoreChunkPreviousToEntity:(id)a0;
- (id)_storeDataURLFromFileURL:(id)a0;
- (void)fetchBackward;
- (void)fetchForward;

@end
