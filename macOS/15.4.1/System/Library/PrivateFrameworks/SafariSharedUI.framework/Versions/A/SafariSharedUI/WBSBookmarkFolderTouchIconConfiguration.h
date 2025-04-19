@class NSColor;

@interface WBSBookmarkFolderTouchIconConfiguration : NSObject

@property (readonly, nonatomic) unsigned long long maximumNumberOfThumbnailsPerRow;
@property (readonly, nonatomic) unsigned long long maximumNumberOfThumbnailRows;
@property (readonly, nonatomic) unsigned long long maximumNumberOfThumbnailIcons;
@property (readonly, nonatomic) double thumbnailIconScaleFactor;
@property (readonly, nonatomic) double thumbnailIconOuterMarginScaleFactor;
@property (readonly, nonatomic) double thumbnailIconInnerMarginScaleFactor;
@property (readonly, nonatomic) struct CGSize { double width; double height; } shadowOffset;
@property (readonly, nonatomic) double shadowBlurRadius;
@property (readonly, nonatomic) BOOL fillIconWithBackgroundColor;
@property (readonly, nonatomic) NSColor *backgroundColorForEmptySlots;
@property (readonly, nonatomic) NSColor *colorForDarkeningThumbnailBackground;

- (void).cxx_destruct;
- (id)initForTabGroup;
- (void)_commonWBSBookmarkFolderIconConfigurationInit;
- (id)initFor2x2Layout;
- (id)initFor3x3Layout;

@end
