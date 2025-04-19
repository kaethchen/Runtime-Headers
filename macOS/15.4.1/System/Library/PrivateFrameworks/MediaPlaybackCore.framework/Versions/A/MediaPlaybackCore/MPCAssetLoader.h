@class MPCPlayerItemConfigurator;
@protocol MPCAssetLoaderDelegate;

@interface MPCAssetLoader : NSObject <MFAssetLoading>

@property (weak, nonatomic) id<MPCAssetLoaderDelegate> delegate;
@property (retain, nonatomic) MPCPlayerItemConfigurator *configurator;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (double)unloadingPlaybackAssetsOnIdleDuration;
- (BOOL)_configureItem:(id)a0 playerItem:(id)a1 error:(id *)a2;
- (void)loadAssetFor:(id)a0 task:(id)a1 completion:(id /* block */)a2;
- (void)loadAssetValuesFor:(id)a0 keys:(id)a1 completion:(id /* block */)a2;

@end
