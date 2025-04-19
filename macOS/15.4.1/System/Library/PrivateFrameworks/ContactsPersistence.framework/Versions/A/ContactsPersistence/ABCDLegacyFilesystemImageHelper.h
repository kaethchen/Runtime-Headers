@class NSString, NSArray;

@interface ABCDLegacyFilesystemImageHelper : NSObject

@property (readonly) NSString *imagesDirectory;
@property (readonly) NSString *contactIdentifier;
@property (readonly) NSArray *emailAddresses;

+ (BOOL)shouldLogCropRectReadError:(id)a0;
+ (id)temporaryImagesDirectory;

- (void).cxx_destruct;
- (id)imageURLOfType:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRect;
- (id)cropRectHash;
- (id)cropRectID;
- (BOOL)hasImageDataOfType:(long long)a0;
- (id)imageDataInLibrary:(id)a0;
- (id)imageDataOfType:(long long)a0;
- (id)imagePathOfType:(long long)a0;
- (id)initWithImagesDirectory:(id)a0 contactIdentifier:(id)a1 emailAddresses:(id)a2;
- (id)largeImagePath;
- (id)libraryImageData;
- (void)removeLargeImage;
- (void)removeThumbnailImage;
- (id)thumbnailImagePath;

@end
