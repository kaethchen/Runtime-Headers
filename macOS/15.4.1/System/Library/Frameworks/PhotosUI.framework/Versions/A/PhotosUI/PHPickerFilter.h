@protocol PUPickerFilter;

@interface PHPickerFilter : NSObject <NSCopying>

@property (class, readonly, nonatomic) PHPickerFilter *_stickersFilter;
@property (class, readonly, nonatomic) PHPickerFilter *_styleabilityFilter;
@property (class, readonly, nonatomic) PHPickerFilter *imagesFilter;
@property (class, readonly, nonatomic) PHPickerFilter *videosFilter;
@property (class, readonly, nonatomic) PHPickerFilter *livePhotosFilter;
@property (class, readonly, nonatomic) PHPickerFilter *depthEffectPhotosFilter;
@property (class, readonly, nonatomic) PHPickerFilter *burstsFilter;
@property (class, readonly, nonatomic) PHPickerFilter *panoramasFilter;
@property (class, readonly, nonatomic) PHPickerFilter *screenshotsFilter;
@property (class, readonly, nonatomic) PHPickerFilter *screenRecordingsFilter;
@property (class, readonly, nonatomic) PHPickerFilter *cinematicVideosFilter;
@property (class, readonly, nonatomic) PHPickerFilter *slomoVideosFilter;
@property (class, readonly, nonatomic) PHPickerFilter *timelapseVideosFilter;
@property (class, readonly, nonatomic) PHPickerFilter *spatialMediaFilter;

@property (readonly, nonatomic) id<PUPickerFilter> _puPickerFilter;

+ (id)_itemIdentifiersFilter:(id)a0;
+ (id)allFilterMatchingSubfilters:(id)a0;
+ (id)anyFilterMatchingSubfilters:(id)a0;
+ (id)notFilterOfSubfilter:(id)a0;
+ (id)playbackStyleFilter:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithPUPickerFilter:(id)a0;

@end
