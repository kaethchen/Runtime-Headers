@class NSString, PHFetchResult, PHPhotoLibrary;

@interface PXSharedLibraryPhotoKitDataSourceManager : PXSharedLibraryDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    long long _type;
    PHFetchResult *_fetchResult;
    PHPhotoLibrary *_photoLibrary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exitingDataSourceManagerForPhotoLibrary:(id)a0;
+ (id)invitationsDataSourceManagerForPhotoLibrary:(id)a0;
+ (id)previewDataSourceManagerForPhotoLibrary:(id)a0;
+ (id)sharedLibraryDataSourceManagerForPhotoLibrary:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)createInitialDataSource;
- (id)fetchExiting;
- (id)fetchPreview;
- (id)fetchSharedLibrary;
- (void)fetchSharedLibraryForURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithType:(long long)a0 fetchResult:(id)a1;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (id)prepareForPhotoLibraryChange:(id)a0;

@end
