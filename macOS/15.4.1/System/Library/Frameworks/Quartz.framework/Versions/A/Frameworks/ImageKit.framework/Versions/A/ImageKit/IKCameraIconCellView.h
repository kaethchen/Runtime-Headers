@class ICCameraFile, NSImageView;

@interface IKCameraIconCellView : NSTableCellView

@property ICCameraFile *cameraItem;
@property NSImageView *lockIcon;
@property NSImageView *successIcon;
@property NSImageView *burstIcon;
@property NSImageView *livePhotoIcon;

- (void)setObjectValue:(id)a0;

@end
