@class NSString, NSDictionary, NSData, NSDate, NSNumber;

@interface PXMockDisplayAsset : NSObject <PXDisplayAsset>

@property (readonly, nonatomic) NSDictionary *backingDictionary;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) unsigned long long mediaSubtypes;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *localCreationDate;
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property (readonly, nonatomic) BOOL representsBurst;
@property (readonly, nonatomic) BOOL isInCloud;
@property (readonly, nonatomic) BOOL isInSharedLibrary;
@property (readonly, nonatomic) BOOL isEligibleForAutoPlayback;
@property (readonly, nonatomic) unsigned long long pixelWidth;
@property (readonly, nonatomic) unsigned long long pixelHeight;
@property (readonly, nonatomic) Class defaultImageProviderClass;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } preferredCropRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } acceptableCropRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } faceAreaRect;
@property (readonly, nonatomic) float audioScore;
@property (readonly, nonatomic) BOOL hasPeopleSceneMidOrGreaterConfidence;
@property (readonly, nonatomic) long long originalFileSize;
@property (readonly, nonatomic) BOOL isSpatialMedia;
@property (readonly, nonatomic) BOOL isSpatialPresentation;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } livePhotoVideoDuration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } livePhotoStillDisplayTime;
@property (readonly, nonatomic) long long playbackStyle;
@property (readonly, nonatomic) unsigned short playbackVariation;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) unsigned long long thumbnailVersion;
@property (readonly, nonatomic) NSNumber *hdrGain;
@property (readonly, nonatomic) unsigned long long burstSelectionTypes;
@property (readonly, nonatomic) NSNumber *focalLength;
@property (readonly, nonatomic) NSNumber *focalLengthIn35mm;
@property (readonly, nonatomic) NSString *localizedGeoDescription;
@property (readonly, nonatomic) NSDate *importDate;
@property (readonly, nonatomic) BOOL isAutoPlaybackEligibilityEstimated;
@property (readonly, nonatomic) NSData *fetchColorNormalizationData;
@property (readonly, nonatomic) unsigned long long thumbnailIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertiesForLivePhotoWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)propertiesForImageWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)propertiesForVideoWithSize:(struct CGSize { double x0; double x1; })a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithProperties:(id)a0;
- (BOOL)_boolValueForKey:(id)a0;
- (float)_floatValueForKey:(id)a0;
- (long long)_integerValueForKey:(id)a0;
- (id)_stringValueForKey:(id)a0;
- (long long)isContentEqualTo:(id)a0;
- (id)_dateValueForKey:(id)a0;
- (double)_doubleValueForKey:(id)a0;
- (unsigned long long)_unsignedIntegerValueForKey:(id)a0;
- (BOOL)isPartOfStack;

@end
