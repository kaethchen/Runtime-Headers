@class PLAssetsdClient, PLAssetsdResourceInternalClient;

@interface PLCameraDeferredProcessingCoordinator : NSObject {
    PLAssetsdClient *_assetsdClient;
}

@property (readonly) PLAssetsdResourceInternalClient *resourceInternalClient;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAssetdClient:(id)a0;

@end
