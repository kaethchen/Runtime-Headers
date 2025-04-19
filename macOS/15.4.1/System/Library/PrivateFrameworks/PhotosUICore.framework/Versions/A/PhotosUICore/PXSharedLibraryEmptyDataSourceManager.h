@interface PXSharedLibraryEmptyDataSourceManager : PXSharedLibraryDataSourceManager

- (id)createInitialDataSource;
- (id)fetchExiting;
- (id)fetchPreview;
- (id)fetchSharedLibrary;
- (void)fetchSharedLibraryForURL:(id)a0 completionHandler:(id /* block */)a1;

@end
