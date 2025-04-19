@class NSMutableArray;

@interface PLDelayedFiledSystemDeletions : NSObject {
    NSMutableArray *_deletionInfos;
}

+ (id)_filesystemDeletionQueue;
+ (void)appendDescriptionForEvent:(id)a0 toComponents:(id)a1;
+ (id)deletionsFromChangeHubEvent:(id)a0;
+ (void)waitForAllDelayedDeletionsToFinish;

- (void)dealloc;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)addFilesystemDeletionInfo:(id)a0;
- (void)appendToXPCMessage:(id)a0 managedObjectContext:(id)a1;
- (void)deleteAllRemainingFilesAndThumbnailsWithPhotoLibrary:(id)a0;
- (id)initWithFilesystemDeletionInfos:(id)a0;

@end
