@class NSString;

@interface VKLineMarker : VKMarker {
    struct shared_ptr<md::LabelFeatureMarker> { struct LabelFeatureMarker *__ptr_; struct __shared_weak_count *__cntrl_; } _labelFeatureMarker;
}

@property (readonly, nonatomic) NSString *localizedName;

+ (id)markerWithLabelFeatureMarker:(const void *)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)featureHandles;
- (id)initWithLabelFeatureMarkerPtr:(const void *)a0;
- (const void *)labelFeatureMarkerImpl;

@end
