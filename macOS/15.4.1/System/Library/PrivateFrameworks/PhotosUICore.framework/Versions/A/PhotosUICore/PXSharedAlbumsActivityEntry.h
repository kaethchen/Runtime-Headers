@class NSDate, NSString, NSArray, NSManagedObjectID, PXSharedAlbumsActivityEntryContributor, PHPhotoLibrary, PXSharedAlbumsActivityEntryAvatarConfiguration, PHFetchResult;

@interface PXSharedAlbumsActivityEntry : NSObject

@property (readonly, nonatomic) id underlyingObject;
@property (readonly, copy, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, copy, nonatomic) NSManagedObjectID *objectID;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) NSArray *contributors;
@property (readonly, copy, nonatomic) NSArray *contributorDisplayNames;
@property (readonly, nonatomic) PXSharedAlbumsActivityEntryContributor *contributor;
@property (readonly, copy, nonatomic) NSString *contributorDisplayName;
@property (readonly, nonatomic) NSArray *avatarConfigurations;
@property (readonly, nonatomic) PXSharedAlbumsActivityEntryAvatarConfiguration *avatarConfiguration;
@property (readonly, copy, nonatomic) NSString *albumName;
@property (readonly, copy, nonatomic) NSString *albumGUID;
@property (readonly, nonatomic) BOOL cloudOwnerIsAllowlisted;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) NSArray *keyAssetUUIDs;
@property (readonly, copy, nonatomic) PHFetchResult *keyAssets;
@property (readonly, copy, nonatomic) NSString *relatedCommentUUID;
@property (readonly, copy, nonatomic) NSArray *relatedUUIDs;

+ (id)_activitiesFromCloudFeedEntries:(id)a0 inMostRecentOrder:(BOOL)a1 photoLibrary:(id)a2 plPhotoLibrary:(id)a3;
+ (id)_assetsAddedActivitiesFromCloudFeedAssetsEntry:(id)a0 inMostRecentOrder:(BOOL)a1 inAlbum:(id)a2 photoLibrary:(id)a3;
+ (id)_assetsAddedActivityFromAssets:(id)a0 batchID:(unsigned long long)a1 inAlbum:(id)a2 forEntry:(id)a3 photoLibrary:(id)a4;
+ (id)_fetchAssetsWithUUIDs:(id)a0 inPhotoLibrary:(id)a1;
+ (id)_fetchRecentActivitiesWithOptions:(id)a0 olderThanDate:(id)a1 filter:(long long)a2;
+ (id)_reactionActivitiesFromCloudFeedLikeEntry:(id)a0 inAlbum:(id)a1 photoLibrary:(id)a2 plPhotoLibrary:(id)a3;
+ (id)fetchActivitiesWithOptions:(id)a0;
+ (id)fetchAssetsMockActivitiesWithOptions:(id)a0;
+ (unsigned long long)fetchCountOfRecentFeedActivitiesWithOptions:(id)a0 newerThanDate:(id)a1;
+ (id)fetchKeyAssetsForActivity:(id)a0;
+ (id)fetchRecentActivitiesWithOptions:(id)a0 olderThanDate:(id)a1 filter:(long long)a2;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0 uuid:(id)a1 date:(id)a2 type:(long long)a3 isFromMe:(BOOL)a4 contributors:(id)a5 avatarConfigurations:(id)a6 albumGUID:(id)a7 albumName:(id)a8 cloudOwnerIsAllowlisted:(BOOL)a9 message:(id)a10 keyAssetUUIDs:(id)a11 keyAssets:(id)a12 relatedCommentUUID:(id)a13 relatedUUIDs:(id)a14 underlyingObject:(id)a15;

@end
