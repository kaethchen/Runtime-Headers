@interface PHImageDisplaySpec : NSObject

@property (nonatomic) struct CGSize { double width; double height; } fallbackTargetSizeIfRequestedSizeNotLocallyAvailable;
@property (nonatomic) long long contentMode;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedCropRect;

- (id)description;
- (id)init;
- (id)shortDescription;
- (BOOL)hasExplicitCrop;
- (id)initWithTargetSize:(struct CGSize { double x0; double x1; })a0 contentMode:(long long)a1;
- (id)initWithTargetSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithTargetSize:(struct CGSize { double x0; double x1; })a0 contentMode:(long long)a1 normalizedCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGSize { double x0; double x1; })requestSizeFromFullSizedWidth:(long long)a0 height:(long long)a1;
- (struct CGSize { double x0; double x1; })requestSizeFromFullSizedWidth:(long long)a0 height:(long long)a1 resizeMode:(long long)a2;

@end
