@class NSString, PLPhotoLibraryBundleController, PLAssetsdConnectionAuthorization;

@interface PLAssetsdNonBindingDebugService : NSObject <PLAssetsdNonBindingDebugServiceProtocol> {
    PLPhotoLibraryBundleController *_bundleController;
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setPhotosXPCEndpoint:(id)a0;

- (void).cxx_destruct;
- (void)getActivePhotoLibrariesWithReply:(id /* block */)a0;
- (void)getBoundServicesForLibrary:(id)a0 reply:(id /* block */)a1;
- (void)getExistingPhotoLibraryIdentifierWithLibraryURL:(id)a0 reply:(id /* block */)a1;
- (void)getPhotosXPCEndpointWithReply:(id /* block */)a0;
- (id)initWithConnectionAuthorization:(id)a0 bundleController:(id)a1;

@end
