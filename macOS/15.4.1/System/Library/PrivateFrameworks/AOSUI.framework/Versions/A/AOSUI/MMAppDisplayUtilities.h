@interface MMAppDisplayUtilities : NSObject

+ (id)_imageCache;
+ (id)_cachedDisplayNameForBundleID:(id)a0;
+ (id)_cachedImageForBundleID:(id)a0;
+ (id)_displayNameCache;
+ (void)_setCachedDisplayName:(id)a0 forBundleID:(id)a1;
+ (void)_setCachedImage:(id)a0 forBundleID:(id)a1;
+ (void)lookUpAppNameImagesForApplicationBundleIDs:(id)a0;

@end
