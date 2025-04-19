@class ICCameraFile, NSString;

@interface IKCameraItem : NSObject {
    NSString *_copiedName;
}

@property (nonatomic) ICCameraFile *cameraFile;
@property (nonatomic) unsigned long long index;
@property (nonatomic) double aperture;
@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
@property (copy, nonatomic) NSString *colorSpace;
@property (copy, nonatomic) NSString *locationString;
@property (copy, nonatomic) NSString *maker;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *shutterSpeed;
@property (copy) NSString *locationPriv;
@property (copy, nonatomic) NSString *downloadedToPath;
@property (readonly, nonatomic) BOOL alreadyDownloaded;
@property (readonly, nonatomic) BOOL isRaw;
@property (nonatomic) BOOL fetchHiResThumbnail;
@property BOOL downloadedViaDragAndDrop;
@property BOOL downloadedViaDoubleClick;
@property BOOL hasLocation;
@property (readonly, nonatomic) BOOL hasAperture;
@property long long imageVersion;
@property (nonatomic) unsigned char thumbnailOrientation;
@property BOOL forceNextDownload;
@property unsigned char thumbnailState;
@property unsigned char metadataState;
@property (copy) id /* block */ completionHandler;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)name;
- (id)valueForUndefinedKey:(id)a0;
- (void)setItem:(id)a0;
- (void)updateThumbnail;
- (void)callCompletionHandler:(id)a0;
- (void)didDownloadMetadata;
- (void)didDownloadThumbnail;
- (void)doRequestMetadata;
- (void)doRequestThumbnail;
- (void)doSetDownloadedToPath:(id)a0;
- (void)prepareForDelete;
- (void)resetDownloadedPath;
- (BOOL)wasPreparedForDelete;

@end
