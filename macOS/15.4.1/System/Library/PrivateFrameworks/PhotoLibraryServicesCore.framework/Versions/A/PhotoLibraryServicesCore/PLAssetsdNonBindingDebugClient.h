@interface PLAssetsdNonBindingDebugClient : PLAssetsdBaseClient

- (BOOL)getPhotosXPCEndpoint:(id *)a0 error:(id *)a1;
- (id)activePhotoLibraries:(id *)a0;
- (id)boundServicesForLibrary:(id)a0 error:(id *)a1;
- (id)existingPhotoLibraryIdentifierForPhotoLibraryURL:(id)a0 error:(id *)a1;

@end
