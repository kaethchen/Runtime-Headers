@class NSImage, NSImageSymbolConfiguration;

@interface PXBadgeHelper : NSObject

@property (class, readonly, nonatomic) NSImage *gradientImage;
@property (class, readonly, nonatomic) NSImage *spatialBadgeImage;
@property (class, readonly, nonatomic) NSImage *livePhotoBadgeShadowedImage;
@property (class, readonly, nonatomic) NSImage *loopingBadgeImage;
@property (class, readonly, nonatomic) NSImage *loopingBadgeTemplateImage;
@property (class, readonly, nonatomic) NSImage *cloudBadgeImage;
@property (class, readonly, nonatomic) NSImage *sharedLibraryBadgeImage;
@property (class, readonly, nonatomic) NSImage *contentSyndicationBadgeImage;
@property (class, readonly, nonatomic) NSImage *ocrAssetBadgeImage;
@property (class, readonly, nonatomic) NSImage *autoReframingImage;
@property (class, readonly, nonatomic) NSImageSymbolConfiguration *miniSymbolConfiguration;
@property (class, readonly, nonatomic) NSImageSymbolConfiguration *smallSymbolConfiguration;
@property (class, readonly, nonatomic) NSImageSymbolConfiguration *mediumSymbolConfiguration;
@property (class, readonly, nonatomic) NSImageSymbolConfiguration *largeSymbolConfiguration;
@property (class, readonly, nonatomic) NSImageSymbolConfiguration *mediumBodySymbolConfiguration;
@property (class, readonly, nonatomic) NSImageSymbolConfiguration *smallBodySymbolConfiguration;

@end
