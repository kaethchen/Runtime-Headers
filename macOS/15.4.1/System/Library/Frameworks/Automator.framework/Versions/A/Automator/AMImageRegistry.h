@class NSImage, NSCache;

@interface AMImageRegistry : NSObject

@property (class, readonly, nonatomic) AMImageRegistry *sharedImageRegistry;
@property (class, readonly, nonatomic) NSImage *progressImage;
@property (class, readonly, nonatomic) NSImage *successImage;
@property (class, readonly, nonatomic) NSImage *errorImage;
@property (class, readonly, nonatomic) NSImage *warningImage;
@property (class, readonly, nonatomic) NSImage *resizeImage;

@property (retain) NSCache *imageCache;
@property (retain) NSCache *applicationURLCache;

- (id)init;
- (void).cxx_destruct;
- (id)_cachedLaunchServicesURLForApplicationName:(id)a0;
- (id)_imageForKey:(id)a0 size:(long long)a1 generatorBlock:(id /* block */)a2;
- (id)_imageForKeyWithoutAdjustingSize:(id)a0 size:(long long)a1 generatorBlock:(id /* block */)a2;
- (id)_launchServicesURLForApplicationName:(id)a0;
- (id)_staticBundleIdentifierForApplicationNamed:(id)a0;
- (id)iconForApplicationName:(id)a0 size:(long long)a1;
- (id)iconForApplicationWithIdentifier:(id)a0 size:(long long)a1;
- (id)iconForFileType:(id)a0 size:(long long)a1;
- (id)imageForURL:(id)a0 size:(long long)a1;
- (id)imageFromAutomatorApplicationNamed:(id)a0 size:(long long)a1;
- (id)imageFromCocoaNamed:(id)a0 size:(long long)a1 proportionalSizing:(BOOL)a2;
- (id)imageFromFrameworkNamed:(id)a0 type:(id)a1 size:(long long)a2;
- (id)imageFromSystemNamed:(id)a0 size:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForImageSizeEnum:(long long)a0;

@end
