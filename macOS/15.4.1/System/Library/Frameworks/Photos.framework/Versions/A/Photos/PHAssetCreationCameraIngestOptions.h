@class NSString, NSData, NSDate;

@interface PHAssetCreationCameraIngestOptions : NSObject <NSCopying>

@property (copy, nonatomic) NSString *cameraMetadataPath;
@property (copy, nonatomic) NSString *dbgFilePath;
@property (copy, nonatomic) NSString *jobType;
@property (copy, nonatomic) NSString *portraitEffectFilterName;
@property (copy, nonatomic) NSString *captureID;
@property (copy, nonatomic) NSString *backupAdjustmentsFile;
@property (copy, nonatomic) NSString *deferredPhotoIdentifier;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSData *previewImageData;
@property (nonatomic) void *previewImgSurfaceRef;
@property (nonatomic) BOOL isRearFacingCamera;
@property (nonatomic) BOOL isExpectingPairedVideo;
@property (nonatomic) double finalAssetHeight;
@property (nonatomic) double finalAssetWidth;
@property (nonatomic) double placeholderHeight;
@property (nonatomic) double placeholderWidth;
@property (nonatomic) unsigned short candidateOptions;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCDict:(id)a0;
- (void)encodeToXPCDict:(id)a0;
- (id)initFromJobDictionary:(id)a0 withPreviewImgSurfaceRef:(struct __IOSurface { } *)a1;
- (id)initWithCameraMetadataPath:(id)a0 isCameraRearFacing:(BOOL)a1 isExpectingPairedVideo:(BOOL)a2 finalAssetHeight:(double)a3 finalAssetWidth:(double)a4 dbgFilePath:(id)a5 previewImgSurfaceRef:(void *)a6 creationDate:(id)a7 jobType:(id)a8 placeholderHeight:(double)a9 placeholderWidth:(double)a10 previewImageData:(id)a11 deferredIdentifier:(id)a12 captureID:(id)a13;
- (BOOL)isEligibleForQuickFaceAnalysis;

@end
