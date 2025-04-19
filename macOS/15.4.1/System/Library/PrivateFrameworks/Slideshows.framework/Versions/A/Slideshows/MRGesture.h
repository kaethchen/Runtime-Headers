@class MRHitBlob;

@interface MRGesture : NSObject

@property (retain) MRHitBlob *hitBlob;
@property struct CGPoint { double x; double y; } locationInViewAtStart;
@property struct CGPoint { double x; double y; } locationInSlideAtStart;
@property double linearScaleAtStart;
@property struct CGPoint { double x; double y; } slideCenterAtStart;
@property double slideRotationAtStart;
@property double slideScaleAtStart;
@property struct CGPoint { double x; double y; } currentTranslation;
@property double currentRotation;
@property double currentScale;

- (void)dealloc;
- (id)initWithHitBlob:(id)a0;

@end
