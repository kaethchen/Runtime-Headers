@class AVCaptionPosition, AVCaptionLength, AVMutableCaptionRegionInternal;

@interface AVMutableCaptionRegion : AVCaptionRegion {
    AVMutableCaptionRegionInternal *_mutableInternal;
}

@property (copy, nonatomic) AVCaptionPosition *position;
@property (copy, nonatomic) AVCaptionPosition *endPosition;
@property (copy, nonatomic) AVCaptionLength *height;
@property (nonatomic) struct AVCaptionPoint { struct AVCaptionDimension { double x0; long long x1; } x0; struct AVCaptionDimension { double x0; long long x1; } x1; } origin;
@property (nonatomic) struct AVCaptionSize { struct AVCaptionDimension { double x0; long long x1; } x0; struct AVCaptionDimension { double x0; long long x1; } x1; } size;
@property (nonatomic) long long scroll;
@property (nonatomic) long long displayAlignment;
@property (nonatomic) long long writingMode;

- (id)init;
- (id)initWithIdentifier:(id)a0;
- (id)initWithFigMutableCaptionRegion:(struct OpaqueFigCaptionRegion { } *)a0;

@end
