@class NSExtensionContext, KHPhotoLibraryGenericSection;

@interface KHPhotoLibraryExtensionSource : KHPhotoLibraryGenericSource

@property (retain, nonatomic) NSExtensionContext *extensionContext;
@property (readonly, nonatomic) KHPhotoLibraryGenericSection *section;

- (void).cxx_destruct;
- (id)identifier;
- (id)title;
- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)a0;
- (id)initWithExtensionContext:(id)a0;
- (id)iconImage;
- (BOOL)canHandleURL:(id)a0;
- (id)collectionForPath:(id)a0;
- (void)executeHydration;
- (id)photoWithURL:(id)a0;

@end
