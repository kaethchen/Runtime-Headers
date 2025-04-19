@class _PASLock, NSString, NSOrderedSet, BMFrameStore, BMFileManager, BMStreamMetadata, BMStoreConfig;
@protocol BMSegmentManagerDelegate;

@interface BMSegmentManager : NSObject <BMFileManagerDelegate> {
    BMFileManager *_fileManager;
    unsigned long long _permission;
    BMStreamMetadata *_metadata;
    Class _eventDataClass;
    BMStoreConfig *_config;
    id _deviceLockStateRegistration;
    _PASLock *_protectedState;
}

@property (readonly, nonatomic) BOOL isDataAccessible;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) BMFrameStore *currentFrameStore;
@property (readonly, nonatomic) NSOrderedSet *segmentNames;
@property (readonly, nonatomic) NSString *lastSegmentName;
@property (weak, nonatomic) id<BMSegmentManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)indexOfSegmentContainingEventTime:(double)a0 fromSegments:(id)a1;
+ (id)segmentNameFromTimestamp:(double)a0;
+ (unsigned long long)sizeOfNewFrameStoreInBytesFromNonPagedSize:(unsigned long long)a0 storeLocationOptions:(long long)a1;
+ (double)timestampFromSegmentName:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)cachingOptionsForFileHandleWithAttributes:(id)a0;
- (id)_segmentAfterFrameStore:(id)a0 orCreateSegmentWithTimestamp:(id)a1 direction:(unsigned long long)a2;
- (void)_updateSegments;
- (void)enumerateSegmentsFrom:(double)a0 to:(double)a1 withBlock:(id /* block */)a2;
- (void)enumerateSegmentsNamesFrom:(double)a0 to:(double)a1 withBlock:(id /* block */)a2;
- (id)fileHandleForFile:(id)a0 error:(id *)a1;
- (void)handleDeviceLocking;
- (void)handleDeviceLockingCX;
- (void)handleDeviceUnlock;
- (id)initWithDirectory:(id)a0 fileManager:(id)a1 permission:(unsigned long long)a2 config:(id)a3;
- (id)lastFrameStoreOrCreateWithTimestamp:(double)a0;
- (id)newFramestoreWithTimestamp:(double)a0 segmentNames:(id)a1 segmentFileHandles:(id)a2;
- (id)nextSegmentAfterFrameStore:(id)a0 segmentNames:(id)a1 segmentFileHandles:(id)a2 direction:(unsigned long long)a3;
- (void)openFiles:(id)a0 saveToOpenFiles:(id)a1;
- (id)orderedSegmentsInDirectory:(id)a0 error:(id *)a1;
- (void)pruneSegmentsToMaxAge:(double)a0;
- (void)pruneSegmentsToMaxSizeInBytes:(unsigned long long)a0;
- (void)refreshSegmentsList;
- (BOOL)removeSegmentNamed:(id)a0;
- (void)reverseEnumerateSegmentsFrom:(double)a0 to:(double)a1 withBlock:(id /* block */)a2;
- (void)reverseEnumerateSegmentsNamesFrom:(double)a0 to:(double)a1 withBlock:(id /* block */)a2;
- (id)segmentAfterFrameStore:(id)a0 direction:(unsigned long long)a1;
- (id)segmentAfterFrameStore:(id)a0 orCreateSegmentWithTimestamp:(double)a1;
- (id)segmentContainingTimestamp:(double)a0;
- (id)segmentWithFilename:(id)a0 error:(id *)a1;
- (id)segmentWithFilename:(id)a0 segmentNames:(id)a1 segmentFileHandles:(id)a2 error:(id *)a3;
- (BOOL)shouldCacheFileDescriptors;
- (void)updateSegmentsWithGuardedDeviceLockStateData:(id)a0;

@end
