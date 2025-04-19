@class PHFetchResult, NSString, PHPhotoLibrary, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface PXMacSyncedAssetsStatusProvider : PXObservable <PXPhotoLibraryUIChangeObserver, PXPhotoLibraryDefaultsChangeObserver>

@property (nonatomic) BOOL shouldShowBanner;
@property (copy, nonatomic) NSDate *bannerDismissalDate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) PHFetchResult *assetsFetchResult;
@property (readonly, nonatomic) BOOL hasAnyAssets;
@property (readonly, nonatomic) NSString *bannerTitle;
@property (readonly, nonatomic) NSString *bannerSubtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (void)markAsRead;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_startFetchingMacSyncedAssets;
- (void)_updateShouldShowBanner;
- (void)markAsReadIfNeeded;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (void)photoLibraryLocalDefaults:(id)a0 didChangeValueForKey:(id)a1;

@end
