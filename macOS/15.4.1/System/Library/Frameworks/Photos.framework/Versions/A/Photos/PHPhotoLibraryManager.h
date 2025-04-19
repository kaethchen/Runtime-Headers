@class NSDictionary, PLLazyObject;

@interface PHPhotoLibraryManager : NSObject {
    PLLazyObject *_lazyAssetsdClient;
}

@property (copy) NSDictionary *internalTestOptions;

+ (BOOL)_createClientPhotoLibraryBundleURL:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)_findPhotoLibraryIdentifiersMatchingSearchCriteria:(id)a0 error:(id *)a1;
- (id)_optionsDictionaryFromCreateOptions:(id)a0 name:(id)a1;
- (id)_optionsDictionaryFromOpenOptions:(id)a0;
- (id)assetsdClient;
- (id)attributesForLibraryWithIdentifier:(id)a0 error:(id *)a1;
- (id)createPhotoLibraryWithName:(id)a0 options:(id)a1 error:(id *)a2;
- (id)createPhotoLibraryWithURL:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)deletePhotoLibraryWithIdentifier:(id)a0 options:(id)a1 error:(id *)a2;
- (id)findPhotoLibrariesInDomain:(long long)a0 error:(id *)a1;
- (id)newAssetsdClient;
- (id)openPhotoLibraryWithIdentifier:(id)a0 options:(id)a1 error:(id *)a2;
- (void)openPhotoLibraryWithIdentifier:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (id)openPhotoLibraryWithURL:(id)a0 options:(id)a1 error:(id *)a2;

@end
