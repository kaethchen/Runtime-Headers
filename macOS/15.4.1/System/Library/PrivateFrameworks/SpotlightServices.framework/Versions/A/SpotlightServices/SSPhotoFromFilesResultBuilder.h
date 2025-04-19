@interface SSPhotoFromFilesResultBuilder : SSPhotosResultBuilder

+ (id)bundleId;
+ (BOOL)isCoreSpotlightResult;
+ (BOOL)supportsResult:(id)a0;

- (id)appBundleId;
- (id)initWithResult:(id)a0;
- (id)buildCommand;
- (id)buildPreviewCommand;
- (id)buildThumbnail;

@end
