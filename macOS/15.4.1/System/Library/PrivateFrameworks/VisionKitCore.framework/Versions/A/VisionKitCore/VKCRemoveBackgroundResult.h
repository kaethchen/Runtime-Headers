@class NSArray, NSNumber, VKCRemoveBackgroundRequest;

@interface VKCRemoveBackgroundResult : NSObject {
    struct __CVBuffer { } *_pixelBuffer;
}

@property (retain, nonatomic) NSArray *instanceMasks;
@property (nonatomic) BOOL isMaskResult;
@property (retain, nonatomic) NSNumber *animatedStickerScore;
@property (readonly, nonatomic) VKCRemoveBackgroundRequest *request;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) struct CGImage { } *maskImage;
@property (nonatomic) struct CGImage { } *orientedMaskImage;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedCropRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (readonly, nonatomic) long long imageOrientation;

- (void)dealloc;
- (void).cxx_destruct;
- (struct CGImage { } *)createCGImage;
- (id)initWithMADMatteResult:(id)a0 request:(id)a1;
- (struct CGImage { } *)_createCGImageFromBGRAPixelBuffer:(struct __CVBuffer { } *)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGImage { } *)_memoryFriendlyCreateCGImageFromBGRAPixelBuffer:(struct __CVBuffer { } *)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)generateImageMaskIfNecessaryWithContext:(id)a0;
- (struct CGImage { } *)imageRefForMask:(struct __CVBuffer { } *)a0;
- (id)initWithMADMaskResult:(id)a0 request:(id)a1;
- (id)initWithMADResult:(id)a0 request:(id)a1;

@end
