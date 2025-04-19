@class NSString;

@interface PHAUserAnalyticsBiomeTask : NSObject <PHAPhotoLibraryTask> {
    short _taskType;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) unsigned long long featureCode;
@property (readonly, nonatomic) BOOL featureAvailable;
@property (readonly, nonatomic) BOOL featureComplete;
@property (readonly, nonatomic) double incrementalWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)priority;
- (id)biomeUUIDsFrom:(id)a0 progressReporter:(id)a1;
- (BOOL)currentPlatformIsSupported;
- (id)deletedAssetUUIDsFromBiomeFrom:(id)a0 biomeUUIDs:(id)a1;
- (id)deletedMemoryUUIDsFromBiomeFrom:(id)a0 biomeUUIDs:(id)a1;
- (id)incrementalKey;
- (id)initWithTaskType:(short)a0;
- (void)pruneBiomeEventsWithUUIDs:(id)a0;
- (void)pruneDeletedRecordsFromBiomeFrom:(id)a0 progressReporter:(id)a1;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (BOOL)runWithPhotoLibrary:(id)a0 analytics:(id)a1 progressReporter:(id)a2 error:(id *)a3;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (BOOL)shouldRunWithPhotoLibrary:(id)a0;
- (id)taskClassDependencies;
- (void)timeoutFatal:(BOOL)a0;

@end
