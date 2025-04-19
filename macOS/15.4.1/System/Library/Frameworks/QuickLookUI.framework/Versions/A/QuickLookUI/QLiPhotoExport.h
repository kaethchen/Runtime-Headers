@interface QLiPhotoExport : NSObject

+ (id)sharedSlideshow;
+ (void)addDocumentWithURLToIPhoto:(id)a0;
+ (BOOL)canExportToIPhoto;
+ (id)iPhotoBundleIdentifier;
+ (void)loadImageKitFrameworkIfNeeded;

@end
