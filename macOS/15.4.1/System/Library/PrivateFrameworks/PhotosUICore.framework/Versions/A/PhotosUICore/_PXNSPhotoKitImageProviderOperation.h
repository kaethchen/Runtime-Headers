@class PXNSPhotoKitImageProvider;

@interface _PXNSPhotoKitImageProviderOperation : NSOperation

@property (weak, nonatomic) PXNSPhotoKitImageProvider *imageProvider;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) int resourceRequestID;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fillRectForAspectRatio:(double)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGSize { double x0; double x1; })imageSizeForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2;

- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (void)_handleImageRequestFinishedWithResult:(id)a0 info:(id)a1;

@end
