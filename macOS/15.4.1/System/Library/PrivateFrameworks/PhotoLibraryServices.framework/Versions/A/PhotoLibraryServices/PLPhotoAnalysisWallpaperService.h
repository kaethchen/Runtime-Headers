@protocol PLPhotoAnalysisServiceProvider;

@interface PLPhotoAnalysisWallpaperService : NSObject {
    id<PLPhotoAnalysisServiceProvider> _serviceProvider;
}

- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)upgradePosterConfigurationWithAssetDirectory:(id)a0 options:(id)a1 reply:(id /* block */)a2;

@end
