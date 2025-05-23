@class NSURL, CLLocation, NSDate, NSDictionary, PFMetadataTypeVerifier, NSTimeZone, NSString, PFHEVCProfileInformation, NSArray, NSData, NSNumber, UTType, PFTimeZoneLookup;

@interface PFMetadata : NSObject <PFMetadata, NSCopying> {
    NSDictionary *_fileSystemProperties;
    NSNumber *_pixelWidth;
    NSNumber *_pixelHeight;
    unsigned short _options;
}

@property (retain, nonatomic) PFMetadataTypeVerifier *typeVerifier;
@property (nonatomic) long long sourceType;
@property (retain, nonatomic) PFTimeZoneLookup *timeZoneLookup;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) UTType *contentType;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) NSDate *utcCreationDate;
@property (nonatomic) long long creationDateSource;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSString *creationDateString;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) CLLocation *gpsLocation;
@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *longitude;
@property (retain, nonatomic) NSNumber *altitude;
@property (retain, nonatomic) NSNumber *speed;
@property (retain, nonatomic) NSDate *gpsDateTime;
@property (readonly) BOOL doImmediateCompute;
@property (readonly) BOOL shouldCreateProxy;
@property (readonly) BOOL noFileAccess;
@property (readonly) BOOL noOutOfProcess;
@property (readonly) BOOL shouldLookForXmpSidecar;
@property (readonly) BOOL useJpegFastPath;
@property (readonly) BOOL allowExportForProxy;
@property (readonly) BOOL shouldLoadTrackMetadata;
@property (readonly) BOOL shouldLoadValues;
@property (readonly, nonatomic) NSString *originalFileName;
@property (readonly, nonatomic) unsigned long long fileSize;
@property (readonly, nonatomic) NSDate *fileCreationDate;
@property (readonly, nonatomic) NSDate *fileModificationDate;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } exifPixelSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } orientedPixelSize;
@property (readonly, nonatomic) NSDictionary *fileSystemProperties;
@property (readonly, nonatomic) NSString *timeZoneName;
@property (readonly, nonatomic) NSNumber *timeZoneOffset;
@property (readonly, nonatomic) BOOL isImage;
@property (readonly, nonatomic) BOOL isMovie;
@property (readonly, nonatomic) NSString *cameraMake;
@property (readonly, nonatomic) NSString *cameraModel;
@property (readonly, nonatomic) NSString *captionAbstract;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *spatialOverCaptureIdentifier;
@property (readonly, nonatomic) BOOL isSpatialOverCapture;
@property (readonly, nonatomic) BOOL isHDR;
@property (readonly, nonatomic) BOOL isHDR_TS22028_5;
@property (readonly, nonatomic) BOOL isHDR_ExtendedRange;
@property (readonly, nonatomic) NSString *livePhotoPairingIdentifier;
@property (readonly, nonatomic) NSString *originatingAssetIdentifier;
@property (readonly, nonatomic) NSString *renderOriginatingAssetIdentifier;
@property (readonly, nonatomic) NSString *artworkContentDescription;
@property (readonly, nonatomic) NSArray *keywords;
@property (readonly, nonatomic) NSDictionary *syndicationProperties;
@property (readonly, nonatomic) BOOL isSyndicationOriginated;
@property (readonly, nonatomic) BOOL isSpatialMedia;
@property (readonly, nonatomic) NSNumber *playbackVariation;
@property (readonly, nonatomic) NSDictionary *cgImageProperties;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) struct CGImageSource { } *imageSource;
@property (readonly, nonatomic) BOOL sourceIsImageSourceProxy;
@property (readonly, nonatomic) struct CGImageMetadata { } *cgImageMetadata;
@property (readonly, nonatomic) NSString *speedRef;
@property (readonly, nonatomic) NSNumber *gpsHPositioningError;
@property (readonly, nonatomic) NSNumber *imageDirection;
@property (readonly, nonatomic) NSString *imageDirectionRef;
@property (readonly, nonatomic) BOOL isDeferredPhotoProxy;
@property (readonly, nonatomic) BOOL isDeferredPhotoProxyExpectingDepth;
@property (readonly, nonatomic) BOOL hasCustomRendered;
@property (readonly, nonatomic) long long customRendered;
@property (readonly, nonatomic) BOOL isPanorama;
@property (readonly, nonatomic) BOOL isPortrait;
@property (readonly, nonatomic) BOOL hasDepthDataAndIsNotRenderedSDOF;
@property (readonly, nonatomic) NSArray *focusPoints;
@property (readonly, nonatomic) NSNumber *focusMode;
@property (readonly, nonatomic) NSNumber *focusDistance;
@property (readonly, nonatomic) NSNumber *exposureBias;
@property (readonly, nonatomic) BOOL flashFired;
@property (readonly, nonatomic) NSNumber *flashValue;
@property (readonly, nonatomic) NSNumber *flashCompensation;
@property (readonly, nonatomic) NSNumber *focalLength;
@property (readonly, nonatomic) NSNumber *focalLengthIn35mm;
@property (readonly, nonatomic) NSNumber *digitalZoomRatio;
@property (readonly, nonatomic) NSNumber *iso;
@property (readonly, nonatomic) NSNumber *meteringMode;
@property (readonly, nonatomic) NSNumber *exposureTime;
@property (readonly, nonatomic) NSNumber *whiteBalance;
@property (readonly, nonatomic) NSNumber *whiteBalanceIndex;
@property (readonly, nonatomic) NSNumber *lightSource;
@property (readonly, nonatomic) NSNumber *fNumber;
@property (readonly, nonatomic) NSNumber *brightness;
@property (readonly, nonatomic) struct CGColorSpace { } *cgColorSpace;
@property (readonly, nonatomic) NSString *lensMake;
@property (readonly, nonatomic) NSString *lensModel;
@property (readonly, nonatomic) NSNumber *lensMinimumMM;
@property (readonly, nonatomic) NSNumber *lensMaximumMM;
@property (readonly, nonatomic) NSString *cameraSerialNumber;
@property (readonly, nonatomic) NSString *ownerName;
@property (readonly, nonatomic) NSString *firmware;
@property (readonly, nonatomic) NSString *burstUuid;
@property (readonly, nonatomic) NSString *groupingUuid;
@property (readonly, nonatomic) NSString *deferredPhotoProcessingIdentifier;
@property (readonly, nonatomic) NSString *imageCaptureRequestIdentifier;
@property (readonly, nonatomic) NSString *photoProcessingIdentifier;
@property (readonly, nonatomic) NSNumber *hdrGain;
@property (readonly, nonatomic) NSDictionary *hdrGainMap;
@property (readonly, nonatomic) BOOL hasHDRGainMap;
@property (readonly, nonatomic) BOOL hasISOGainMap;
@property (readonly, nonatomic) NSNumber *hdrGainMapPercentageValue;
@property (readonly, nonatomic) BOOL isSDOF;
@property (readonly, nonatomic) NSString *profileName;
@property (readonly, nonatomic) NSNumber *GIFDelayTime;
@property (readonly, nonatomic) NSNumber *HEICSDelayTime;
@property (readonly, nonatomic) BOOL isAnimatedImage;
@property (readonly, nonatomic) unsigned long long photoProcessingFlags;
@property (readonly, nonatomic) unsigned long long photoCaptureFlags;
@property (readonly, nonatomic) NSString *portraitInLandscapeCamera;
@property (readonly, nonatomic) BOOL isPhotoBooth;
@property (readonly, nonatomic) BOOL isScreenshot;
@property (readonly, nonatomic) NSString *userComment;
@property (readonly, nonatomic) NSString *defaultProfileName;
@property (readonly, nonatomic) NSNumber *semanticStyleToneBias;
@property (readonly, nonatomic) NSNumber *semanticStyleWarmthBias;
@property (readonly, nonatomic) NSNumber *semanticStyleRenderingVersion;
@property (readonly, nonatomic) NSNumber *semanticStylePreset;
@property (readonly, nonatomic) BOOL isFrontFacingCamera;
@property (readonly, nonatomic) BOOL isProRAW;
@property (readonly, nonatomic) unsigned long long photosAppFeatureFlags;
@property (readonly, nonatomic) NSNumber *nrfSrlStatus;
@property (readonly, nonatomic) NSNumber *srlCompensationValue;
@property (readonly, nonatomic) short smartStyleCast;
@property (readonly, nonatomic) NSNumber *smartStyleToneBias;
@property (readonly, nonatomic) NSNumber *smartStyleColorBias;
@property (readonly, nonatomic) NSNumber *smartStyleIntensity;
@property (readonly, nonatomic) NSNumber *smartStyleRenderingVersion;
@property (readonly, nonatomic) NSNumber *smartStyleIsReversible;
@property (readonly, nonatomic) NSNumber *smartStyleExpectingReversibility;
@property (readonly, nonatomic) BOOL hasSmartStyle;
@property (readonly, nonatomic) NSData *imageSourceProxyData;
@property (readonly, nonatomic) BOOL isThreeImageStereoHEIC;
@property (readonly, nonatomic) BOOL containsSpatialCameraHEIFMetadata;
@property (readonly, nonatomic) BOOL isAlchemist;
@property (readonly, nonatomic) NSNumber *generativeAIImageType;
@property (readonly, nonatomic) NSString *credit;
@property (readonly, nonatomic) long long cameraUsedForCapture;
@property (readonly, nonatomic) BOOL containsCustomStylesMetadataBlob;
@property (readonly, nonatomic) BOOL isAutoloop;
@property (readonly, nonatomic) BOOL isLoopingVideo;
@property (readonly, nonatomic) BOOL isMirror;
@property (readonly, nonatomic) BOOL isLongExposure;
@property (readonly, nonatomic) BOOL isAutoLivePhoto;
@property (readonly, nonatomic) NSNumber *livePhotoVitalityScore;
@property (readonly, nonatomic) BOOL hasVitality;
@property (readonly, nonatomic) BOOL livePhotoVitalityLimitingAllowed;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) NSNumber *durationTimeInterval;
@property (readonly, nonatomic) NSNumber *nominalFrameRate;
@property (readonly, nonatomic) NSNumber *videoDataRate;
@property (readonly, nonatomic) NSNumber *audioDataRate;
@property (readonly, nonatomic) NSNumber *audioSampleRate;
@property (readonly, nonatomic) NSNumber *audioTrackFormat;
@property (readonly, nonatomic) NSNumber *audioTrackFormatFlags;
@property (readonly, nonatomic) unsigned int firstVideoTrackCodec;
@property (readonly, nonatomic) NSString *firstVideoTrackCodecString;
@property (readonly, nonatomic) NSNumber *videoDynamicRange;
@property (readonly, nonatomic) NSString *videoCodecName;
@property (readonly, nonatomic) NSString *author;
@property (readonly, nonatomic) NSString *captureMode;
@property (readonly, nonatomic) BOOL isTimelapse;
@property (readonly, nonatomic) BOOL isActionCam;
@property (readonly, nonatomic) BOOL isSloMo;
@property (readonly, nonatomic) BOOL isProRes;
@property (readonly, nonatomic) NSString *montageString;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } stillImageDisplayTime;
@property (readonly, nonatomic) NSNumber *livePhotoMinimumClientVersion;
@property (readonly, nonatomic) BOOL isCinematicVideo;
@property (readonly, nonatomic) BOOL hasSpatialAudio;
@property (readonly, nonatomic) UTType *contentTypeFromFastModernizeVideoMedia;
@property (readonly, nonatomic) struct opaqueCMFormatDescription { } *videoTrackFormatDescription;
@property (readonly, nonatomic) NSString *firstVideoTrackFormatDebugDescription;
@property (readonly, nonatomic) NSString *colorPrimaries;
@property (readonly, nonatomic) NSString *transferFunction;
@property (readonly, nonatomic) NSNumber *livePhotoVitalityTransitionScore;
@property (readonly, nonatomic) BOOL isPlayable;
@property (readonly, nonatomic) BOOL isDecodable;
@property (readonly, nonatomic) NSNumber *apacAudioTrackChannelCount;
@property (readonly, nonatomic) NSNumber *apacAudioTrackHoaChannelCount;
@property (readonly, nonatomic) NSNumber *apacAudioTrackBedChannelCount;
@property (readonly, nonatomic) NSString *apacAudioTrackCodecProfileLevelDescription;
@property (readonly, nonatomic) NSDictionary *outOfBandHints;
@property (readonly, nonatomic) NSString *outOfBandHintsBase64String;
@property (readonly, nonatomic) PFHEVCProfileInformation *hevcProfileInfo;
@property (readonly, nonatomic) long long spatialVideoRecommendationForImmersiveMode;
@property (readonly, nonatomic) short smartStyleVideoCastValue;

+ (void)metadataForAsset:(id)a0 completionHandler:(id /* block */)a1;
+ (BOOL)parseISO6709String:(id)a0 outLatitude:(double *)a1 outLongitude:(double *)a2;
+ (void)setDefaultTimeZoneLookup:(id)a0;
+ (id)livePhotoPairingIdentifierMetadataKey;
+ (id)originatingAssetIdentifierMetadataKey;
+ (id)renderOriginatingAssetIdentifierMetadataKey;
+ (id)photoProcessingFlagsMetadataKey;
+ (BOOL)_canEncodeInPropertyList:(id)a0;
+ (id)_filterArray:(id)a0;
+ (id)_filterDictionary:(id)a0;
+ (id)_filterPropertyListObject:(id)a0;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })audioStreamBasicDescriptionForAsset:(id)a0;
+ (id)burstUuidMetadataKey;
+ (id)defaultOptionsForCGImageSource;
+ (id)differencesBetweenDictionary:(id)a0 andDictionary:(id)a1;
+ (id)encodedDataWithPropertyListObject:(id)a0;
+ (id)exifTimezoneOffsetFromDateString:(id)a0 offsetInSeconds:(long long *)a1;
+ (void)firstAudioTrackForAsset:(id)a0 resultBlock:(id /* block */)a1;
+ (void)firstVideoTrackForAsset:(id)a0 resultBlock:(id /* block */)a1;
+ (id)hdrGainMetadataKey;
+ (id)livePhotoPairingIdentifierMetadataIdentifier;
+ (id)originatingAssetIdentifierMetadataIdentifier;
+ (id)photosFeatureFlagsMetadataKey;
+ (id)playbackVariationMetadataIdentifier;
+ (id)playbackVariationMetadataKey;
+ (id)propertyListObjectFromEncodedData:(id)a0 expectedClass:(Class)a1 options:(unsigned long long)a2 error:(id *)a3;
+ (id)renderOriginatingAssetIdentifierMetadataIdentifier;
+ (id)spatialOverCaptureIdentifierMetadataIdentifier;
+ (id)spatialOverCaptureIdentifierMetadataKey;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned short)options;
- (void)setOptions:(unsigned short)a0;
- (id)pixelHeight;
- (id)pixelWidth;
- (id)software;
- (void)loadMetadataWithCompletionHandler:(id /* block */)a0;
- (id)initWithImageProperties:(id)a0 contentType:(id)a1 timeZoneLookup:(id)a2;
- (id)initWithMediaURL:(id)a0 detail:(unsigned short)a1 timeZoneLookup:(id)a2 shouldCache:(BOOL)a3;
- (id)initWithAVAsset:(id)a0 timeZoneLookup:(id)a1;
- (id)initWithImageCaptureMovieProperties:(id)a0 contentType:(id)a1 timeZoneLookup:(id)a2;
- (id)initWithAVAsset:(id)a0 options:(unsigned short)a1 timeZoneLookup:(id)a2;
- (id)initWithAVURL:(id)a0 options:(unsigned short)a1 timeZoneLookup:(id)a2;
- (id)initWithImageData:(id)a0 contentType:(id)a1 options:(unsigned short)a2 timeZoneLookup:(id)a3 cacheImageSource:(BOOL)a4 cacheImageData:(BOOL)a5;
- (id)initWithImageSource:(struct CGImageSource { } *)a0 contentType:(id)a1 options:(unsigned short)a2 timeZoneLookup:(id)a3 cacheImageSource:(BOOL)a4;
- (id)initWithImageURL:(id)a0 contentType:(id)a1 options:(unsigned short)a2 timeZoneLookup:(id)a3 cacheImageSource:(BOOL)a4 cacheImageData:(BOOL)a5;
- (id)initWithImageURL:(id)a0 contentType:(id)a1 timeZoneLookup:(id)a2;
- (id)initWithMediaURL:(id)a0 options:(unsigned short)a1 timeZoneLookup:(id)a2 shouldCache:(BOOL)a3;
- (id)initWithMediaURL:(id)a0 timeZoneLookup:(id)a1;
- (BOOL)isSameForURL:(id)a0 andOptions:(unsigned short)a1;
- (id)initWithAVProxyData:(id)a0 timeZoneLookup:(id)a1;
- (id)initWithAVURL:(id)a0 timeZoneLookup:(id)a1;
- (id)initWithImageSourceProxyData:(id)a0 contentType:(id)a1 timeZoneLookup:(id)a2;
- (id)initWithImageSourceProxyOrEncodedImagePropertyData:(id)a0 contentType:(id)a1 timeZoneLookup:(id)a2;
- (id)initWithSyndicationProperties:(id)a0;
- (id)exifDictionary;
- (id)iptcDictionary;
- (id)livePhotoPairingIdentifierMetadataKey;
- (id)originatingAssetIdentifierMetadataKey;
- (id)renderOriginatingAssetIdentifierMetadataKey;
- (id)tiffDictionary;
- (id)photoProcessingFlagsMetadataKey;
- (void)_addCommonPropertiesToSyndicationProperties:(id)a0;
- (void)_addImageGPSPropertiesToSyndicationProperties:(id)a0;
- (void)_addImageLivePhotoPropertiesToSyndicationProperties:(id)a0;
- (void)_addImageMiscPropertiesToSyndicationProperties:(id)a0;
- (void)_addImagePropertiesToSyndicationProperties:(id)a0;
- (void)_addImageSemanticStylePropertiesToSyndicationProperties:(id)a0;
- (void)_addImageSmartStylePropertiesToSyndicationProperties:(id)a0;
- (void)_addMoviePropertiesToSyndicationProperties:(id)a0;
- (void)_computeAlttitude:(id)a0;
- (void)_computeGPSLocation;
- (void)_computeGPSTimeStamp:(id)a0;
- (void)_computeLattitudeLongitude:(id)a0;
- (void)_computeOrientationValue;
- (void)_computePixelWidthAndHeightValue;
- (void)_computeSpeed:(id)a0;
- (void)_computeSubSecondString:(id *)a0 timeZoneOffsetString:(id *)a1 unqualifiedDateString:(id *)a2 fromProperties:(id)a3;
- (void)_computeTimeZoneFromString:(id)a0;
- (void)_computeUnqualifiedDateFromDateString:(id)a0 subSecondString:(id)a1;
- (BOOL)_convertTimeZoneOffsetString:(id)a0 toSeconds:(double *)a1;
- (id)_dateTimeOffsetOriginalForSyndicationProperties;
- (id)_dateTimeOriginalForSyndicationProperties;
- (id)_dateTimeSubsecOriginalForSyndicationProperties;
- (id)_makeDateTimeProperties;
- (id)_makeGPSProperties;
- (id)_makeGeometryProperties;
- (unsigned long long)_stillImageProcessingFlags;
- (id)altitudeRef;
- (id)audioBitsPerChannel;
- (id)audioBytesPerFrame;
- (id)audioBytesPerPacket;
- (id)audioChannelsPerFrame;
- (id)audioFramesPerPacket;
- (id)burstUuidMetadataKey;
- (id)ciffDictionary;
- (void)computeDateTimeValues;
- (void)computeGPSValues;
- (BOOL)configureWithMetadataPlist:(id)a0;
- (void)enumerateRawThumbnailInfoWithBlock:(id /* block */)a0;
- (id)exifAuxDictionary;
- (id)firstVideoTrackFullDebugDescription;
- (void)fixupGPSWithDate:(id)a0 time:(id)a1;
- (id)formatDebugDescription;
- (id)gifDictionary;
- (id)gpsDictionary;
- (id)hdrGainFromValue:(id)a0;
- (id)hdrGainMetadataKey;
- (id)initForLimitedPropertiesWithPath:(id)a0;
- (id)initWithContentType:(id)a0 options:(unsigned short)a1 timeZoneLookup:(id)a2;
- (id)initWithEncodedImagePropertyData:(id)a0 contentType:(id)a1 timeZoneLookup:(id)a2;
- (id)initWithImageProperties:(id)a0 contentType:(id)a1 options:(unsigned short)a2 timeZoneLookup:(id)a3;
- (id)initWithMetadataPlist:(id)a0 timeZoneLookup:(id)a1;
- (id)initWithPropertyListRepresentationData:(id)a0 timeZoneLookup:(id)a1;
- (id)jsonFormattedDescriptionWithError:(id *)a0;
- (id)makerAppleDictionary;
- (id)makerCanonDictionary;
- (id)makerNikonDictionary;
- (id)metadataForImagePropertiesAtIndex:(unsigned long long)a0;
- (id)photosFeatureFlagsMetadataKey;
- (id)playbackVariationMetadataKey;
- (id)plistForEncoding;
- (id)propertyListRepresentationData;
- (id)ptpMediaMetadata;
- (void)setFileSystemProperties:(id)a0;
- (void)setImageSourceProperties:(id)a0;
- (void)setKeysAndValues:(id)a0 inDictionary:(id)a1;
- (id)sourceTypeName;
- (id)spatialOverCaptureIdentifierMetadataKey;

@end
