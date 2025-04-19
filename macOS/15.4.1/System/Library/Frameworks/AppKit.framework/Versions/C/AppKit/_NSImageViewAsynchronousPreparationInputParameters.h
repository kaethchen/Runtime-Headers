@class NSSet, NSImage, NSAppearance, NSColorSpace, NSString;

@interface _NSImageViewAsynchronousPreparationInputParameters : NSObject <_NSAsynchronousPreparationInputParameters>

@property (class, readonly, copy) NSSet *keyPathsInvalidatingPreparedResult;
@property (class, readonly, copy) NSSet *keyPathsInvalidatingPreparedResultImmediately;

@property (retain, nonatomic) NSImage *asynchronousImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (retain, nonatomic) NSColorSpace *colorSpace;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (retain, nonatomic) NSAppearance *appearance;
@property (nonatomic) unsigned long long frameStyle;
@property (nonatomic) unsigned long long imageScaling;
@property (nonatomic) unsigned long long imageAlignment;
@property (nonatomic, getter=isFlipped) BOOL flipped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
