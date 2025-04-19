@interface _TtC12PhotosUICoreP33_2FBF52365A1D24C5F1D36119D5560C9725SearchAssetUUIDsValidator : NSObject <PXPhotoLibraryUIChangeObserver> {
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ updateBlock;
    void /* unknown type, empty encoding */ updatedUUIDsKey;
    void /* unknown type, empty encoding */ allowedUUIDs;
    void /* unknown type, empty encoding */ manualOrderUUIDs;
    void /* unknown type, empty encoding */ assetCollection;
    void /* unknown type, empty encoding */ fetchQueueFetchResult;
    void /* unknown type, empty encoding */ fetchQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (id)prepareForPhotoLibraryChange:(id)a0;

@end
