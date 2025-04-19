@class NSArray, NSDictionary, NSSet, NSURL, NSData;

@interface AMPPhotoSyncPrefs : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *photoSharingSettings;
@property (nonatomic) BOOL syncPhotos;
@property (nonatomic) int photoSyncSource;
@property (nonatomic) int photoSyncMode;
@property (nonatomic) BOOL copyOriginalPhotos;
@property (nonatomic) int photoEventCount;
@property (nonatomic) BOOL autoIncludePhotosEnabled;
@property (nonatomic) BOOL onlyFavoritePhotos;
@property (nonatomic) BOOL photoSyncAllAlbums;
@property (nonatomic) BOOL photoSyncAllFaces;
@property (nonatomic) BOOL photoSyncPhotoVideos;
@property (nonatomic) int photosAppSyncMode;
@property (nonatomic) int photosAppEventCount;
@property (nonatomic) BOOL photosAppCopyOriginalPhotos;
@property (nonatomic) BOOL photosAppSyncPhotoVideos;
@property (nonatomic) BOOL photosAppSyncAllAlbums;
@property (nonatomic) BOOL photosAppSyncAllFaces;
@property (nonatomic) BOOL photosAppAutoIncludeEnabled;
@property (nonatomic) BOOL photosAppOnlyFavorites;
@property (nonatomic) int photosAppCustomAlbumOrder;
@property (retain, nonatomic) NSArray *photosAppAlbums;
@property (retain, nonatomic) NSSet *photosAppSelectedAlbums;
@property (nonatomic) int photosFolderSyncMode;
@property (nonatomic) BOOL photosFolderCopyOriginalPhotos;
@property (nonatomic) BOOL photosFolderSyncPhotoVideos;
@property (nonatomic) int photosFolderCustomAlbumOrder;
@property (retain, nonatomic) NSURL *photosFolderURL;
@property (retain, nonatomic) NSData *photosFolderBookmark;
@property (retain, nonatomic) NSArray *photosFolderNames;
@property (retain, nonatomic) NSSet *photosFolderSelectedNames;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPhotoSharingSettings:(id)a0;

@end
