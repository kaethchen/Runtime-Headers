@interface PLAssetsdLibraryManagementClient : PLAssetsdBaseClient

- (BOOL)setSystemPhotoLibraryURL:(id)a0 error:(id *)a1;
- (BOOL)closeAndDeletePhotoLibraryAtURL:(id)a0 error:(id *)a1;
- (id)createManagedPhotoLibraryWithOptions:(id)a0 error:(id *)a1;
- (id)findPhotoLibraryIdentifiersMatchingSearchCriteria:(id)a0 error:(id *)a1;
- (id)photoLibraryIdentifierForPhotoLibraryURL:(id)a0 error:(id *)a1;
- (void)filesystemSizeForLibraryURL:(id)a0 result:(id /* block */)a1;
- (void)getPhotoLibraryURLsWithLibraryURL:(id)a0 reply:(id /* block */)a1;
- (BOOL)closePhotoLibraryAtURL:(id)a0 error:(id *)a1;
- (BOOL)overrideSystemPhotoLibraryURL:(id)a0 error:(id *)a1;
- (BOOL)removePhotoLibraryURL:(id)a0 error:(id *)a1;
- (BOOL)resetSyndicationLibrary:(id *)a0;

@end
