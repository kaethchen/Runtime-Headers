@class VCPImageCaptionAnalyzer, NSObject;
@protocol OS_dispatch_queue;

@interface VCPMADImageCaptionResource : VCPMADResource {
    NSObject<OS_dispatch_queue> *_queue;
    VCPImageCaptionAnalyzer *_imageCaptionAnalyzer;
    long long _modelType;
    long long _safetyType;
}

@property (readonly, nonatomic) VCPImageCaptionAnalyzer *imageCaptionAnalyzer;

+ (id)sharedResourceForModelType:(long long)a0 safetyType:(long long)a1;

- (void).cxx_destruct;
- (void)purge;
- (id)initWithModelType:(long long)a0 safetyType:(long long)a1;
- (long long)activeCost;
- (long long)inactiveCost;

@end
