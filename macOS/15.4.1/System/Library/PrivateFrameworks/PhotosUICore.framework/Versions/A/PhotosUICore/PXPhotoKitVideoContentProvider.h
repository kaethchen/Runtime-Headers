@class NSString, PHFetchResult, PHAsset, PXMediaProvider;

@interface PXPhotoKitVideoContentProvider : PXDisplayAssetVideoContentProvider <PXPhotoLibraryUIChangeObserver> {
    PHFetchResult *_fetchResult;
}

@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
