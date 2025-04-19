@class CIContext;

@interface IKImageRenderInfo : NSObject {
    struct CGColorSpace { } *_contextColorSpace;
    struct CGColorSpace { } *_imageColorSpace;
}

@property unsigned long long bitsPerComponent;
@property (retain) CIContext *ciContext;
@property BOOL usingSoftwareRenderer;
@property BOOL wantsExtendedDynamicRange;
@property struct CGColorSpace { } *contextColorSpace;
@property struct CGColorSpace { } *imageColorSpace;
@property double imageMaxHeadRoom;

- (void)dealloc;

@end
