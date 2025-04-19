@class MADRemoveBackgroundCachedMaskState;

@interface MADImageRemoveBackgroundResource : VCPMADVisionResource

@property (nonatomic) BOOL maskOnly;
@property (retain, nonatomic) MADRemoveBackgroundCachedMaskState *cachedMaskState;

+ (id)sharedResource;

- (void).cxx_destruct;
- (void)purge;
- (long long)activeCost;
- (long long)inactiveCost;

@end
