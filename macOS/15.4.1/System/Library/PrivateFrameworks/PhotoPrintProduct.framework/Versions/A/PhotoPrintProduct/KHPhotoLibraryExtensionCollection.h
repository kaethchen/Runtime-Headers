@class NSMutableArray, NSMutableDictionary, NSExtensionContext;

@interface KHPhotoLibraryExtensionCollection : KHPhotoLibraryGenericCollection {
    NSMutableDictionary *_allImagesByURL;
    NSMutableArray *_allImages;
    BOOL _needsHydration;
}

@property (readonly, nonatomic) NSMutableDictionary *properties;
@property (retain, nonatomic) NSExtensionContext *extensionContext;

- (void).cxx_destruct;
- (id)initWithExtensionContext:(id)a0;
- (unsigned long long)numberOfPhotos;
- (id)photoAtIndex:(unsigned long long)a0;
- (id)allPhotos;
- (void)executeHydration;
- (BOOL)needsHydration;
- (unsigned long long)numberOfSubcollections;
- (id)photoWithURL:(id)a0;
- (id)subcollectionAtIndex:(unsigned long long)a0;

@end
