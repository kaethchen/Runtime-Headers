@class AVCaptionPosition, NSString, AVCaptionLength, AVCaptionRegionInternal;

@interface AVCaptionRegion : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    AVCaptionRegionInternal *_internal;
}

@property (class, readonly) AVCaptionRegion *appleITTTopRegion;
@property (class, readonly) AVCaptionRegion *appleITTBottomRegion;
@property (class, readonly) AVCaptionRegion *appleITTLeftRegion;
@property (class, readonly) AVCaptionRegion *appleITTRightRegion;
@property (class, readonly) AVCaptionRegion *subRipTextBottomRegion;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct OpaqueFigCaptionRegion { } *_figCaptionRegion;
@property (nonatomic, setter=_setPredefinedRegionPositionShouldBeNil:) BOOL _predefinedRegionPositionShouldBeNil;
@property (readonly, nonatomic) AVCaptionPosition *position;
@property (readonly, nonatomic) AVCaptionPosition *endPosition;
@property (readonly, nonatomic) AVCaptionLength *height;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) struct AVCaptionPoint { struct AVCaptionDimension { double x0; long long x1; } x0; struct AVCaptionDimension { double x0; long long x1; } x1; } origin;
@property (readonly, nonatomic) struct AVCaptionSize { struct AVCaptionDimension { double x0; long long x1; } x0; struct AVCaptionDimension { double x0; long long x1; } x1; } size;
@property (readonly, nonatomic) long long scroll;
@property (readonly, nonatomic) long long displayAlignment;
@property (readonly, nonatomic) long long writingMode;

+ (id)appleiTTBottom;
+ (id)appleiTTLeft;
+ (id)appleiTTRight;
+ (id)appleiTTTop;
+ (id)subRipTextBottom;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)_position;
- (id)_endPosition;
- (void)_setDisplayAlignment:(long long)a0;
- (void)_setEndPosition:(id)a0;
- (void)_setHeight:(id)a0;
- (void)_setOrigin:(struct AVCaptionPoint { struct AVCaptionDimension { double x0; long long x1; } x0; struct AVCaptionDimension { double x0; long long x1; } x1; })a0;
- (void)_setPosition:(id)a0;
- (void)_setScroll:(long long)a0;
- (void)_setSize:(struct AVCaptionSize { struct AVCaptionDimension { double x0; long long x1; } x0; struct AVCaptionDimension { double x0; long long x1; } x1; })a0;
- (void)_setWritingMode:(long long)a0;
- (int)_updateExtentPropertiesOfFigCaptionRegionWithPosition:(id)a0 endPosition:(id)a1;
- (int)_updateFigCaptionRegion;
- (int)_updatePositionPropertyOfFigCaptionRegionWithPosition:(id)a0;
- (id)initWithFigCaptionRegion:(struct OpaqueFigCaptionRegion { } *)a0;

@end
