@protocol PEEditActionAnalyticsEventBuilderDelegate;

@interface PEEditAction : NSObject

@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) BOOL forceRunAsUnadjustedAsset;
@property (weak, nonatomic) id<PEEditActionAnalyticsEventBuilderDelegate> analyticsEventBuilderDelegate;

- (void).cxx_destruct;
- (id)analyticsPayload;
- (void)applyToLoadResult:(id)a0 completion:(id /* block */)a1;

@end
