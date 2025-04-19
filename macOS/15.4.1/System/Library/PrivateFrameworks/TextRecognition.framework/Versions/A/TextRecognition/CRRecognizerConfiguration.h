@class NSObject;
@protocol MTLDevice, CRTextFeatureOrdering;

@interface CRRecognizerConfiguration : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedTextFeatureOrderLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedTextFeatureFilterLock;
    BOOL _optimizeGroupsForStability;
    NSObject<CRTextFeatureOrdering> *_cachedTextFeatureOrder;
    id _cachedTextFeatureFilter;
}

@property (readonly) unsigned long long revision;
@property (readonly) long long numTopStringCandidates;
@property (readonly) double angleThresholdForRotatedCrops;
@property (readonly) NSObject<CRTextFeatureOrdering> *textFeatureOrder;
@property (readonly) id textFeatureFilter;
@property (readonly) BOOL falsePositiveFilteringDisabled;
@property (readonly) BOOL scriptDetectionDisabled;
@property (readonly) BOOL skipRecognition;
@property (readonly) int colorSpace;
@property (readonly) BOOL rectifyPolygons;
@property (readonly) NSObject<MTLDevice> *metalDevice;
@property (readonly) unsigned long long computeDeviceType;

+ (id)languageSetFromInputLanguages:(id)a0 supportedLanguages:(id)a1;
+ (id)supportedLanguagesForVersion:(long long)a0;

- (void).cxx_destruct;
- (id)initV3DefaultConfigWithOptions:(id)a0;
- (id)createTextFeatureFilter;
- (id)initWithImageReaderOptions:(id)a0 error:(id *)a1;

@end
