@interface PHImageRequestBehaviorSpec : NSObject

@property (nonatomic) long long choosingPolicy;
@property (nonatomic) unsigned long long loadingOptions;
@property (nonatomic) long long version;
@property (nonatomic) long long resizeMode;
@property (nonatomic, getter=isSynchronous) BOOL synchronous;
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed;
@property (nonatomic) BOOL allowPlaceholder;
@property (nonatomic) BOOL onlyUseFetchedAssetPropertiesDuringChoosing;
@property (nonatomic) BOOL includeHDRGainMap;
@property (nonatomic) BOOL includeHDRGainMapInIntermediateImage;
@property (nonatomic) BOOL decodeAsHDR;
@property (nonatomic) double targetHDRHeadroom;
@property (nonatomic) double minimumTableThumbnailLongSide;
@property (nonatomic) BOOL useLowMemoryMode;
@property (nonatomic) BOOL useLimitedLibraryMode;
@property (nonatomic) long long downloadIntent;
@property (nonatomic) long long downloadPriority;
@property (nonatomic) BOOL cannotReturnSmallerImage;

+ (BOOL)_shouldDecodeAsHDRBasedOnChoosingPolicy:(long long)a0 optionsPreferHDR:(BOOL)a1 asset:(id)a2;
+ (BOOL)_shouldLoadHDRGainMapBasedOnChoosingPolicy:(long long)a0 options:(id)a1 asset:(id)a2;
+ (id)contentEditingInputImageBehaviorSpecForBaseVersion:(long long)a0 isNetworkAccessAllowed:(BOOL)a1 downloadIntent:(long long)a2 shouldUseRAWAsUnadjustedBase:(BOOL)a3 asset:(id)a4;
+ (id)imageRequestBestBehaviorSpecWithPreviousBehaviorSpec:(id)a0 options:(id)a1 asset:(id)a2;
+ (id)imageRequestInitialBehaviorSpecWithImageRequestOptions:(id)a0 asset:(id)a1;
+ (id)imageRequestIntermediateBehaviorSpecWithPreviousBehaviorSpec:(id)a0 options:(id)a1 asset:(id)a2;
+ (id)livePhotoRequestBestBehaviorSpecWithPreviousBehaviorSpec:(id)a0 options:(id)a1 asset:(id)a2;
+ (id)livePhotoRequestInitialBehaviorSpecWithLivePhotoRequestOptions:(id)a0 asset:(id)a1;
+ (unsigned long long)loadingOptionsFromLoadingMode:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)shortDescription;
- (BOOL)shouldLoadImage;
- (BOOL)isExplicitUserAction;
- (BOOL)shouldLoadData;
- (BOOL)shouldLoadDataOrURL;
- (BOOL)shouldLoadURL;

@end
