@class NSURL, KHPhotoLibraryGenericSection;

@interface KHPhotoLibraryFileSystemSource : KHPhotoLibraryGenericSource

@property (readonly, nonatomic) KHPhotoLibraryGenericSection *section;
@property (readonly, nonatomic) NSURL *fileURL;

- (void).cxx_destruct;
- (id)identifier;
- (id)title;
- (id)initWithFileURL:(id)a0;
- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)a0;
- (id)iconImage;
- (BOOL)canHandleURL:(id)a0;
- (id)acceptedImageExtensions;
- (id)collectionForPath:(id)a0;
- (void)executeHydration;
- (id)photoWithURL:(id)a0;

@end
