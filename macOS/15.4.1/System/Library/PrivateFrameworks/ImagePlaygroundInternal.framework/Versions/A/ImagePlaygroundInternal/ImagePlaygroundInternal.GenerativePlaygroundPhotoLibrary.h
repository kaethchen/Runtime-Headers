@interface ImagePlaygroundInternal.GenerativePlaygroundPhotoLibrary : NSObject <PHPhotoLibraryChangeObserver> {
    void /* unknown type, empty encoding */ formatIdentifier;
    void /* unknown type, empty encoding */ formatVersion;
    void /* unknown type, empty encoding */ photoLibraryStatus;
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ assets;
    void /* unknown type, empty encoding */ placeholderAssets;
    void /* unknown type, empty encoding */ assetMap;
    void /* unknown type, empty encoding */ updatingDelegates;
    void /* unknown type, empty encoding */ writeQueue;
    void /* unknown type, empty encoding */ photoAssetCache;
}

- (id)init;
- (void).cxx_destruct;
- (void)photoLibraryDidChange:(id)a0;

@end
