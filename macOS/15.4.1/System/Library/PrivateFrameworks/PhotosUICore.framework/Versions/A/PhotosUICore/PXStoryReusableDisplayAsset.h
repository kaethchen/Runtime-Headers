@class PXStoryResourcesDataSource;
@protocol PXDisplayAsset;

@interface PXStoryReusableDisplayAsset : NSObject {
    id<PXDisplayAsset> _displayAsset;
}

@property (readonly, nonatomic) PXStoryResourcesDataSource *resourcesDataSource;
@property (readonly, nonatomic) long long resourceIndex;

- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)configureWithDisplayResourceIndex:(long long)a0 resourcesDataSource:(id)a1;
- (id)displayAsset;

@end
