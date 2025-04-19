@interface PhotosUICore.PXUtilityAlbumVisibilityPreferenceObserver : NSObject <PXPhotoLibraryDefaultsChangeObserver> {
    void /* unknown type, empty encoding */ _hiddenAlbumVisible;
    void /* unknown type, empty encoding */ _recentlyViewedAndSharedAlbumVisible;
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ localDefaults;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)photoLibraryLocalDefaults:(id)a0 didChangeValueForKey:(id)a1;

@end
