@class NSString, NSArray;

@interface PLUserActivityDaemonJob : PLDaemonJob

@property long long actionType;
@property (copy, nonatomic) NSString *albumUUID;
@property (retain, nonatomic) NSArray *assetUUIDs;
@property (nonatomic) unsigned long long cloudFeedContent;
@property (copy, nonatomic) NSString *momentShareUUID;

+ (void)checkedSharedAlbumServerModelRelationships;
+ (void)userDidNavigateIntoSharedAlbum:(id)a0;
+ (id)newUserActivityDaemonJob;
+ (void)userDidChangeStatusForMomentShare:(id)a0;
+ (void)userDidDeleteSharedAlbum:(id)a0;
+ (void)userDidDeleteSharedAssets:(id)a0;
+ (void)userDidLeavePhotosApplication;
+ (void)userDidNavigateAwayFromAllSharedAlbums;
+ (void)userDidNavigateAwayFromSharedAlbum:(id)a0;
+ (void)userDidNavigateIntoImagePickerSharedAlbum:(id)a0;
+ (void)userDidReadCommentOnSharedAsset:(id)a0;
+ (void)userDidViewCloudFeedContent:(unsigned long long)a0;
+ (void)userDidViewSharedLibraryParticipantAssetTrashNotification;

- (void)run;
- (void).cxx_destruct;
- (id)initWithAssetsdClient:(id)a0;
- (long long)daemonOperation;
- (void)encodeToXPCObject:(id)a0;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (void)runDaemonSide;

@end
