@class NSString, NSData, NSDate, NSNumber;

@interface PXOneUpSharePlayAsset : NSObject <PXDisplayAsset>

@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) long long mediaType;
@property (nonatomic) unsigned long long mediaSubtypes;
@property (nonatomic) short spatialMediaType;
@property (nonatomic) BOOL isSpatialPresentation;
@property (nonatomic) long long playbackStyle;
@property (nonatomic) unsigned long long pixelWidth;
@property (nonatomic) unsigned long long pixelHeight;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSNumber *hdrGain;
@property (retain, nonatomic) NSNumber *focalLength;
@property (retain, nonatomic) NSNumber *focalLengthIn35mm;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } photoIrisStillDisplayTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } photoIrisVideoDuration;
@property (retain, nonatomic) NSString *localizedGeoDescription;
@property (retain, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *localCreationDate;
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property (readonly, nonatomic) BOOL representsBurst;
@property (readonly, nonatomic) BOOL isInCloud;
@property (readonly, nonatomic) BOOL isInSharedLibrary;
@property (readonly, nonatomic) BOOL isEligibleForAutoPlayback;
@property (readonly, nonatomic) Class defaultImageProviderClass;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } preferredCropRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } acceptableCropRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } faceAreaRect;
@property (readonly, nonatomic) float audioScore;
@property (readonly, nonatomic) BOOL hasPeopleSceneMidOrGreaterConfidence;
@property (readonly, nonatomic) long long originalFileSize;
@property (readonly, nonatomic) BOOL isSpatialMedia;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } livePhotoVideoDuration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } livePhotoStillDisplayTime;
@property (readonly, nonatomic) unsigned short playbackVariation;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) unsigned long long thumbnailVersion;
@property (readonly, nonatomic) unsigned long long burstSelectionTypes;
@property (readonly, nonatomic) NSDate *importDate;
@property (readonly, nonatomic) BOOL isAutoPlaybackEligibilityEstimated;
@property (readonly, nonatomic) NSData *fetchColorNormalizationData;
@property (readonly, nonatomic) unsigned long long thumbnailIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isHidden;
- (id)modificationDate;
- (BOOL)isAnimatedImage;
- (id)uniformTypeIdentifier;
- (BOOL)isLivePhoto;
- (BOOL)canPlayLoopingVideo;
- (BOOL)canPlayPhotoIris;
- (BOOL)hasPhotoColorAdjustments;
- (BOOL)isGuestAsset;
- (BOOL)isPhotoIrisPlaceholder;
- (long long)originalFilesize;
- (long long)isContentEqualTo:(id)a0;
- (id)initWithUUID:(id)a0 mediaType:(long long)a1 mediaSubtypes:(unsigned long long)a2 spatialMediaType:(short)a3 isSpatialPresentation:(BOOL)a4 playbackStyle:(long long)a5 pixelWidth:(unsigned long long)a6 pixelHeight:(unsigned long long)a7 duration:(double)a8 hdrGain:(id)a9 focalLength:(id)a10 focalLengthIn35mm:(id)a11 photoIrisStillDisplayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a12 photoIrisVideoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a13 localizedGeoDescription:(id)a14 creationDate:(id)a15;
- (BOOL)isPartOfStack;
- (BOOL)isTemporaryPlaceholder;

@end
