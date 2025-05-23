@class NSData, NSString, NSDate, NSMutableDictionary, NSDictionary, NSMutableArray, NSProgress, NSNumber;

@interface ICCameraFile : ICCameraItem <ICMediaItemProtocol> {
    NSMutableDictionary *_metadata;
    NSString *_debugType;
    NSString *_debugBadge;
    NSNumber *_fileIsJPEG;
    NSNumber *_fileIsHEIC;
}

@property (nonatomic) BOOL privHasThumbnail;
@property (nonatomic) BOOL privHasMetadata;
@property (nonatomic) unsigned long long privOrientation;
@property (copy, nonatomic) NSString *privSpatialOverCaptureGroupID;
@property (copy, nonatomic) NSString *privFingerprint;
@property (copy, nonatomic) NSString *privMediaBase;
@property (retain, nonatomic) NSMutableArray *sidecarFiles;
@property (nonatomic) unsigned long long mediaMetadata;
@property (retain, nonatomic) NSDictionary *mediaData;
@property (retain, nonatomic) NSMutableDictionary *subImages;
@property (nonatomic) BOOL useExtensionIcon;
@property (readonly, nonatomic) NSString *spatialOverCaptureGroupID;
@property (readonly, nonatomic) BOOL retrievedMetadata;
@property (readonly, nonatomic) BOOL retrievedThumbnail;
@property (readonly, nonatomic) unsigned int objectHandle;
@property (copy, nonatomic) NSData *thumbnailData;
@property (retain, nonatomic) NSProgress *progress;
@property (readonly) NSString *mediaBase;
@property double lastImportSpeed;
@property (readonly, nonatomic, getter=isConverted) BOOL converted;
@property (readonly, nonatomic, getter=isOriginal) BOOL original;
@property (readonly, nonatomic, getter=isUniversal) BOOL universal;
@property (readonly, nonatomic, getter=isEditedOriginal) BOOL editedOriginal;
@property (readonly, nonatomic, getter=isEditedConverted) BOOL editedConverted;
@property (readonly, nonatomic, getter=isEditedUniversal) BOOL editedUniversal;
@property (readonly, nonatomic, getter=isDataUniversal) BOOL dataUniversal;
@property (readonly, nonatomic, getter=isMovie) BOOL movie;
@property (readonly, nonatomic, getter=isImage) BOOL image;
@property (readonly, nonatomic, getter=isData) BOOL data;
@property (readonly, nonatomic, getter=isJPEG) BOOL JPEG;
@property (readonly, nonatomic, getter=isHEIC) BOOL HEIC;
@property (readonly, nonatomic, getter=isAudio) BOOL audio;
@property (readonly, nonatomic, getter=isNonRawImage) BOOL nonRawImage;
@property (readonly, nonatomic) BOOL convertedFamily;
@property (readonly, nonatomic) BOOL originalFamily;
@property (readonly, nonatomic) BOOL universalFamily;
@property (readonly, nonatomic, getter=isSidecar) BOOL sidecar;
@property (copy, nonatomic) NSString *originalFilename;
@property (copy, nonatomic) NSString *createdFilename;
@property (retain, nonatomic) ICCameraFile *pairedRawImage;
@property (copy, nonatomic) NSDate *fileCreationDate;
@property (copy, nonatomic) NSDate *fileModificationDate;
@property (copy, nonatomic) NSDate *exifCreationDate;
@property (copy, nonatomic) NSDate *exifModificationDate;
@property (nonatomic) long long fileSize;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) double duration;
@property (nonatomic) BOOL orientationOverridden;
@property (nonatomic) BOOL burstFavorite;
@property (nonatomic) BOOL burstPicked;
@property (nonatomic) BOOL firstPicked;
@property (nonatomic) BOOL highFramerate;
@property (nonatomic) BOOL timeLapse;
@property (copy, nonatomic) NSString *gpsString;
@property (copy, nonatomic) NSString *burstUUID;
@property (copy, nonatomic) NSString *groupUUID;
@property (copy, nonatomic) NSString *relatedUUID;
@property (copy, nonatomic) NSString *originatingAssetID;
@property unsigned long long oUUID;
@property unsigned long long uTime;
@property (nonatomic) unsigned long long orientation;
@property (readonly, nonatomic) NSString *fingerprint;
@property (readonly, nonatomic) unsigned long long unsignedIntegerValue;
@property (readonly, copy, nonatomic) NSString *mediaItemType;

+ (id)fingerprintForFileAtURL:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isLegacy;
- (id)valueForUndefinedKey:(id)a0;
- (id)debugType;
- (BOOL)hasThumbnail;
- (struct CGImage { } *)thumbnail;
- (id)metadata;
- (BOOL)setMetadata:(id)a0;
- (void)setHasThumbnail:(BOOL)a0;
- (void)setHasMetadata:(BOOL)a0;
- (BOOL)hasMetadata;
- (void)setFingerprint:(id)a0;
- (id)base;
- (void)requestMetadataDictionaryWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)requestThumbnailDataWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)flushMetadataCache;
- (id)requestDownloadWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)requestSecurityScopedURLWithCompletion:(id /* block */)a0;
- (void)addSidecarFile:(id)a0;
- (void)requestRefreshObjectHandleInfo:(id /* block */)a0;
- (void)requestMetadata;
- (void)setUTI:(id)a0;
- (void)cacheThumbnailData:(id)a0;
- (long long)compareDate:(id)a0;
- (long long)compareUUID:(id)a0;
- (id)debugBadge;
- (id)debugIdentity;
- (void)flagAsSidecar;
- (void)flagMediaMetadata:(unsigned long long)a0;
- (void)flushThumbnailCache;
- (void)handleObjectInfoUpdate:(id)a0;
- (id)initWithName:(id)a0 parentFolder:(id)a1 device:(id)a2;
- (BOOL)isEdited:(unsigned long long)a0;
- (BOOL)isUntouched:(unsigned long long)a0;
- (struct CGImage { } *)largeThumbnailIfAvailable;
- (id)metadataIfAvailable;
- (BOOL)partOfFamily:(unsigned long long)a0;
- (void)requestCloseStreamData;
- (void)requestFingerprintWithCompletion:(id /* block */)a0;
- (void)requestMetadataWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)requestOpenStreamData;
- (void)requestReadDataAtOffset:(long long)a0 length:(long long)a1 completion:(id /* block */)a2;
- (void)requestStreamDataAtOffset:(long long)a0 length:(long long)a1 completion:(id /* block */)a2;
- (void)requestThumbnail;
- (void)requestThumbnailWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)setKeywordPropertiesFromDict:(id)a0;
- (void)setSpatialOverCaptureGroupID:(id)a0;
- (id)thumbnailDataUsingOrientation:(id)a0 andSourceThumbnailData:(id)a1;
- (struct CGImage { } *)thumbnailIfAvailable;

@end
