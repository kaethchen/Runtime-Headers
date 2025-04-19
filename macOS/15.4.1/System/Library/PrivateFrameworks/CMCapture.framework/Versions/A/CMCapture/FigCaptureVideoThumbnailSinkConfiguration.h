@class NSArray;

@interface FigCaptureVideoThumbnailSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) struct CGSize { double width; double height; } thumbnailSize;
@property (copy, nonatomic) NSArray *filters;
@property (copy, nonatomic) NSArray *smartStyles;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)sinkType;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;

@end
