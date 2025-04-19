@class PXAssetsDataSourceManager;

@interface PXStoryPassthroughAssetsProducer : NSObject <PXStoryAssetsProducer>

@property (readonly, nonatomic) PXAssetsDataSourceManager *assetsDataSourceManager;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAssetsDataSourceManager:(id)a0;
- (id)requestAssetsWithOptions:(unsigned long long)a0 storyQueue:(id)a1 resultHandler:(id /* block */)a2;

@end
